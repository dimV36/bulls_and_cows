#include "levelcomplexitydialog.h"
#include "ui_levelcomplexitydialog.h"

LevelComplexityDialog::LevelComplexityDialog(QWidget *parent) :
    QDialog(parent),
    ui_(new Ui::LevelComplexityDialog) {
    ui_ -> setupUi(this);
}


LevelComplexityDialog::~LevelComplexityDialog() {
    delete ui_;
}


int LevelComplexityDialog::get_complexity_level() const {
    return ui_ -> spin_box_number_ -> value();
}


void LevelComplexityDialog::set_complexity_level(const int value) {
    ui_ -> spin_box_number_ -> setValue(value);
}
