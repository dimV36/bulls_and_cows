#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTime>
#include "levelcomplexitydialog.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT
private:
    Ui::MainWindow *ui_;
    int complexity_level_;
    QString generated_value_;

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_action_level_complexity_triggered();

    void on_line_answer__returnPressed();

private:
    void SetComplexityLevel();
    void GenerateUnknownValue();
    int get_random_value();
    void UpdateLineAnswer();

};

#endif // MAINWINDOW_H
