#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>

#define NUMBER_INDEX    0
#define ANSWER_INDEX    1

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui_(new Ui::MainWindow),
    complexity_level_(0),
    extra_options_is_active_(false) {
    ui_ -> setupUi(this);
    qsrand(QTime::currentTime().second());
}


MainWindow::~MainWindow() {
    delete ui_;
}


void MainWindow::SetComplexityLevel() {
    LevelComplexityDialog dialog(this);
    dialog.exec();
    complexity_level_ = dialog.get_complexity_level();
    extra_options_is_active_ = dialog.is_extra_options_is_clicked();
}


void MainWindow::GenerateUnknownValue() {
    if (0 == complexity_level_) {
        SetComplexityLevel();
        UpdateLineAnswer();
    }
    generated_value_ = QString::number(get_random_value());
    while (generated_value_.length() != complexity_level_) {
        QString generate = QString::number(get_random_value());
        if (false == generated_value_.contains(generate))
            generated_value_ += generate;
    }
    qDebug() << generated_value_;
}


int MainWindow::get_random_value() {
    return rand() % 10;
}


void MainWindow::UpdateLineAnswer() {
    QIntValidator *validator = new QIntValidator(ui_ -> line_answer_);
    ui_ -> line_answer_ -> setValidator(validator);
    ui_ -> line_answer_ -> setMaxLength(complexity_level_);
}


QString MainWindow::ValidateEnteredAnswer(QString &answer) const {
    int bulls = 0;
    int cows = 0;
    for (int i = 0; i < generated_value_.length(); i++) {
        QString digit = generated_value_[i];
        if (true == answer.contains(digit))
            cows += 1;
        if (answer.indexOf(digit) == generated_value_.indexOf(digit)) {
            cows -= 1;
            bulls += 1;
        }
    }  
    return QString("%1Б %2К").arg(bulls).arg(cows);
}


bool MainWindow::CheckIsUserWin(QString &answer) {
    QRegExp expression("(\\d)\\S\\s?(\\d?)\\S?");
    int bulls_count = 0;
    int cows_count = 0;
    if (-1 != expression.indexIn(answer)) {
        bulls_count = expression.cap(1).toInt();
        cows_count = expression.cap(2).toInt();
    }
    return ((bulls_count == complexity_level_) && (0 == cows_count));
}


void MainWindow::StartNewGame() {
    ui_ -> table_ -> clear();
    ui_ -> table_ -> setRowCount(0);
    QStringList headers;
    headers << tr("Число") << tr("Быки/Коровы");
    ui_ -> table_ -> setHorizontalHeaderLabels(headers);
    GenerateUnknownValue();
    UpdateLineAnswer();
}


void MainWindow::UpdateButtons() {
    ui_ -> label_step_ -> setVisible(extra_options_is_active_);
    ui_ -> label_step_left_ -> setVisible(extra_options_is_active_);
    ui_ -> label_time_ -> setVisible(extra_options_is_active_);
    ui_ -> time_left_ -> setVisible(extra_options_is_active_);
}


void MainWindow::on_action_level_complexity_triggered() {
    SetComplexityLevel();
    GenerateUnknownValue();
    UpdateLineAnswer();
    UpdateButtons();
}


void MainWindow::on_line_answer__returnPressed() {
    QString answer = ui_ -> line_answer_ -> text();
    if (answer.length() < complexity_level_) {
        QMessageBox::warning(this,
                             tr("Предупреждение"),
                             tr("Число введенных символов меньше числа символов загаданного числа"),
                             QMessageBox::Ok);
        return;
    }
    ui_ -> line_answer_ -> clear();
    QString validate_answer = ValidateEnteredAnswer(answer);
    ui_ -> table_ -> setRowCount(ui_ -> table_ -> rowCount() + 1);
    QTableWidgetItem *item_answer = new QTableWidgetItem(answer);
    QTableWidgetItem *item_validate_answer = new QTableWidgetItem(validate_answer);
    ui_ -> table_ -> setItem(ui_ -> table_ -> rowCount() - 1, NUMBER_INDEX, item_answer);
    ui_ -> table_ -> setItem(ui_ -> table_ -> rowCount() - 1, ANSWER_INDEX, item_validate_answer);
    ui_ -> table_ -> scrollToBottom();
    if (true == CheckIsUserWin(validate_answer)) {
        QMessageBox user_win;
        user_win.setWindowTitle(tr("Ура!"));
        user_win.setText(tr("<b>Ты выйграла!</b><p>Запустить новую игру?</p>"));
        user_win.setIconPixmap(QPixmap(":/Positive_32x32.png"));
        user_win.setStandardButtons(QMessageBox::No | QMessageBox::Yes);
        int button_clicked = user_win.exec();
        if (QMessageBox::Yes == button_clicked)
            StartNewGame();
        else
            return;
    }
}


void MainWindow::on_action_new_game_triggered() {
    StartNewGame();
}
