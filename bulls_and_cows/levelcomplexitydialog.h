#ifndef LEVELCOMPLEXITYDIALOG_H
#define LEVELCOMPLEXITYDIALOG_H

#include <QDialog>
#include <QSettings>

namespace Ui {
class LevelComplexityDialog;
}

class LevelComplexityDialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit LevelComplexityDialog(QWidget *parent = 0);
    ~LevelComplexityDialog();
    int get_complexity_level() const;
    bool is_extra_options_is_clicked() const;
    int get_step_limit() const;

private:
    void WriteSettings();
    void ReadSettings();
    void set_complexity_level(const int level);
    void set_extra_options(const bool is_checked);
    void set_step_limit(const int step_limit);

    
private:
    Ui::LevelComplexityDialog *ui_;
};

#endif // LEVELCOMPLEXITYDIALOG_H
