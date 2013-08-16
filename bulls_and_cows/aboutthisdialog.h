#ifndef ABOUTTHISDIALOG_H
#define ABOUTTHISDIALOG_H

#include <QDialog>

namespace Ui {
class AboutThisDialog;
}

class AboutThisDialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit AboutThisDialog(QWidget *parent = 0);
    ~AboutThisDialog();

private:
    void CreateWindow();

private:
    Ui::AboutThisDialog *ui_;
};

#endif // ABOUTTHISDIALOG_H
