#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui_(new Ui::MainWindow),
    complexity_level_(0){
    ui_ -> setupUi(this);
    qsrand(QTime::currentTime().second());
    GenerateUnknownValue();
}


MainWindow::~MainWindow() {
    delete ui_;
}


void MainWindow::SetComplexityLevel() {
    LevelComplexityDialog dialog(this);
    dialog.exec();
    complexity_level_ = dialog.get_complexity_level();
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


void MainWindow::on_action_level_complexity_triggered() {
    SetComplexityLevel();
    UpdateLineAnswer();
}


void MainWindow::on_line_answer__returnPressed() {
    QString answer = ui_ -> line_answer_ -> text();
    ui_ -> line_answer_ -> clear();
//  ValidateAnswer
    ui_ -> table_ -> setRowCount(ui_ -> table_ -> rowCount() + 1);
    QTableWidgetItem number_item(1);
    QTableWidgetItem answer_item(answer);
    ui_ -> table_ -> setItem(1, 0, &number_item);
    ui_ -> table_ -> setItem(1, 0, &answer_item);
}