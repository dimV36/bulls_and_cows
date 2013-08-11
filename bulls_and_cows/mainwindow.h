#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTime>
#include <QMessageBox>
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
    bool extra_options_is_active_;

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_action_level_complexity_triggered();
    void on_line_answer__returnPressed();
    void on_action_new_game_triggered();

private:
    void SetComplexityLevel();
    void GenerateUnknownValue();
    int get_random_value();
    void UpdateLineAnswer();
    QString ValidateEnteredAnswer(QString &answer) const;
    bool CheckIsUserWin(QString &answer);
    void StartNewGame();
    void SetStepWidgetsHidden(const bool hidden);

};

#endif // MAINWINDOW_H
