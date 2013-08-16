#include "aboutthisdialog.h"
#include "ui_aboutthisdialog.h"

AboutThisDialog::AboutThisDialog(QWidget *parent) :
    QDialog(parent),
    ui_ (new Ui::AboutThisDialog) {
    ui_ -> setupUi(this);
    CreateWindow();
}


AboutThisDialog::~AboutThisDialog() {
    delete ui_;
}


void AboutThisDialog::CreateWindow() {
    QPixmap picture(":/photo.png");
    ui_ -> label_picture_ -> setPixmap(picture.scaled(picture.size() / 4));
}
