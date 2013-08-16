#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>

#define NUMBER_INDEX    0
#define ANSWER_INDEX    1
#define MAIN_SETTINGS "mainwindow"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui_(new Ui::MainWindow),
    complexity_level_(0),
    extra_options_is_active_(false),
    main_settings_("dimv36", "bulls_and_cows", this) {
    ui_ -> setupUi(this);
    qsrand(QTime::currentTime().second());
    SetStepWidgetsHidden(true);
    ReadSettings();
}


MainWindow::~MainWindow() {
    delete ui_;
}


bool MainWindow::SetComplexityLevel() {
    LevelComplexityDialog dialog(this);
    if (QDialog::Accepted == dialog.exec()) {
        complexity_level_ = dialog.get_complexity_level();
        extra_options_is_active_ = dialog.is_extra_options_is_clicked();
        if (true == extra_options_is_active_) {
            SetStepWidgetsHidden(false);
            ui_ -> label_step_left_ -> setText(QString::number(dialog.get_step_limit()));
            connect(this, SIGNAL(SignalAnswerWasDone()), this, SLOT(SlotAnswerWasDone()));
        } else {
            SetStepWidgetsHidden(true);
            disconnect(this, SIGNAL(SignalAnswerWasDone()), this, SLOT(SlotAnswerWasDone()));
        }
        WriteSettings();
        return true;
    } else
        return false;
}


void MainWindow::GenerateUnknownValue() {
    if (0 == complexity_level_) {
        if (true == SetComplexityLevel())
            UpdateLineAnswer();
        else
            return;
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
    if (true == extra_options_is_active_)
        ui_ -> label_step_left_ -> setText(get_setting("step_left").toString());
    UpdateLineAnswer();
}


void MainWindow::SetStepWidgetsHidden(const bool hidden) {
    ui_ -> label_step_ -> setHidden(hidden);
    ui_ -> label_step_left_ -> setHidden(hidden);
}


int MainWindow::CreateUserWinDialog() {
    QMessageBox user_win;
    user_win.setWindowTitle(tr("Ура!"));
    user_win.setText(tr("<b>Ты выйграла!</b><p>Запустить новую игру?</p>"));
    user_win.setIconPixmap(QPixmap(":/Positive_32x32.png"));
    user_win.setStandardButtons(QMessageBox::No | QMessageBox::Yes);
    return user_win.exec();
}


int MainWindow::CreateUserLoseDialog() {
    QMessageBox user_lose;
    user_lose.setWindowTitle(tr("Увы!"));
    user_lose.setText("<b>К сожалению ты проиграла!</b><p>Запустить новую игру?</p>");
    user_lose.setIconPixmap(QPixmap(":/Negative_32x32.png"));
    user_lose.setStandardButtons(QMessageBox::No | QMessageBox::Yes);
    return user_lose.exec();
}


void MainWindow::WriteSettings() {
    main_settings_.beginGroup(MAIN_SETTINGS);
    main_settings_.setValue("position", pos());
    main_settings_.setValue("size", size());
    main_settings_.setValue("is_step_left_enabled", ui_ -> label_step_left_ -> isHidden());
    main_settings_.setValue("step_left", ui_ -> label_step_left_ -> text());
    main_settings_.endGroup();
}


void MainWindow::ReadSettings() {
    main_settings_.beginGroup(MAIN_SETTINGS);
    resize(main_settings_.value("size").toSize());
    move(main_settings_.value("position").toPoint());
    extra_options_is_active_ = main_settings_.value("is_step_left_enabled").toBool();
    ui_ -> label_step_left_ -> setText(main_settings_.value("step_left").toString());
    main_settings_.endGroup();
}


void MainWindow::closeEvent(QCloseEvent *event) {
    WriteSettings();
    event -> accept();
}


QVariant MainWindow::get_setting(const QString key)  {
    main_settings_.beginGroup(MAIN_SETTINGS);
    QVariant setting = main_settings_.value(key);
    main_settings_.endGroup();
    return setting;
}


void MainWindow::on_action_level_complexity_triggered() {
    SetComplexityLevel();
    GenerateUnknownValue();
    UpdateLineAnswer();
    SetStepWidgetsHidden(!extra_options_is_active_);
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
    if (true == extra_options_is_active_)
        emit SignalAnswerWasDone();
    ui_ -> table_ -> scrollToBottom();
    if (true == CheckIsUserWin(validate_answer)) {
        int button_clicked = CreateUserWinDialog();
        if (QMessageBox::Yes == button_clicked)
            StartNewGame();
        else
            return;
    }
}


void MainWindow::on_action_new_game_triggered() {
    StartNewGame();
}



void MainWindow::SlotAnswerWasDone() {
    int step_left = ui_ -> label_step_left_ -> text().toInt() - 1;
    ui_ -> label_step_left_ -> setText(QString::number(step_left));
    if (0 == step_left) {
        int button_clicked = CreateUserLoseDialog();
        if (QMessageBox::Yes == button_clicked)
            StartNewGame();
        else
            return;
    }
}


void MainWindow::on_action_version_triggered() {
    QMessageBox::about(this,
                       tr("Быки и коровы"),
                       tr("Версия игры - 1.0. <br> Разработана в августе 2013 г."));
}


void MainWindow::on_action_press_me_triggered() {
    AboutThisDialog dialog(this);
    dialog.exec();
}
