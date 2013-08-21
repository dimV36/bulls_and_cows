#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTime>
#include <QMessageBox>
#include <QSettings>
#include <QCloseEvent>
#include "levelcomplexitydialog.h"
#include "aboutthisdialog.h"
#include "intvalidator.h"

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
    QSettings main_settings_;

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_action_level_complexity_triggered();
    void on_line_answer__returnPressed();
    void on_action_new_game_triggered();

private:
    bool SetComplexityLevel();
    void GenerateUnknownValue();
    int get_random_value();
    void UpdateLineAnswer();
    QString ValidateEnteredAnswer(QString &answer) const;
    QStringList CreateDigitList(QString &number) const;
    bool IsBull(QString &answer, QString &digit) const;
    bool CheckIsUserWin(QString &answer);
    void StartNewGame();
    void SetStepWidgetsHidden(const bool hidden);
    int CreateUserWinDialog();
    int CreateUserLoseDialog();
    void WriteSettings();
    void ReadSettings();
    void closeEvent(QCloseEvent *event);
    QVariant get_setting(const QString key);


signals:
    void SignalAnswerWasDone();
    void SignalComplexityLevelIsSet();

private slots:
    void SlotAnswerWasDone();
    void SlotComplexityLevelIsSet();
    void on_action_version_triggered();
    void on_action_press_me_triggered();
    void on_action_exit_triggered();
};

#endif // MAINWINDOW_H
