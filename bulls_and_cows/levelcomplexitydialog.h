#ifndef LEVELCOMPLEXITYDIALOG_H
#define LEVELCOMPLEXITYDIALOG_H

#include <QDialog>

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
    void set_extra_options_clicked(const bool clicked);
    void set_complexity_level(const int value);
    
private slots:
    void on_button_extra_options__clicked();

private:
    Ui::LevelComplexityDialog *ui_;
};

#endif // LEVELCOMPLEXITYDIALOG_H
