#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui_(new Ui::MainWindow),
    complexity_level_(0){
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
    GenerateUnknownValue();
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


void MainWindow::on_action_level_complexity_triggered() {
    SetComplexityLevel();
    UpdateLineAnswer();
}


void MainWindow::on_line_answer__returnPressed() {
    QString answer = ui_ -> line_answer_ -> text();
    qDebug() << "Ответ: " << answer;
    ui_ -> line_answer_ -> clear();
    QString validate_answer = ValidateEnteredAnswer(answer);
    qDebug() << validate_answer;
    ui_ -> table_ -> setRowCount(ui_ -> table_ -> rowCount() + 1);
    qDebug() << "Строки: " << ui_ -> table_ -> rowCount();
    //ui_ -> table_ -> setColumnWidth(ui_ -> table_ -> rowCount(), 10);
    QTableWidgetItem *item_answer = new QTableWidgetItem(answer);
    QTableWidgetItem *item_validate_answer = new QTableWidgetItem(validate_answer);
    ui_ -> table_ -> setItem(ui_ -> table_ -> rowCount() - 1, 0, item_answer);
    ui_ -> table_ -> setItem(ui_ -> table_ -> rowCount() - 1, 1, item_validate_answer);
//    ui_ -> table_ -> setRowCount(ui_ -> table_ -> rowCount() + 1);
//    QTableWidgetItem number_item(1);
//    QTableWidgetItem answer_item(answer);
//    ui_ -> table_ -> setItem(1, 0, &number_item);
//    ui_ -> table_ -> setItem(1, 0, &answer_item);
}
