#include "levelcomplexitydialog.h"
#include "ui_levelcomplexitydialog.h"

LevelComplexityDialog::LevelComplexityDialog(QWidget *parent) :
    QDialog(parent),
    ui_(new Ui::LevelComplexityDialog) {
    ui_ -> setupUi(this);
    ui_ -> extra_box_ -> setEnabled(false);
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


bool LevelComplexityDialog::is_extra_options_is_clicked() const {
    return ui_ -> button_extra_options_ -> isChecked();
}


void LevelComplexityDialog::set_extra_options_clicked(const bool clicked) {
    ui_ -> button_extra_options_ -> setChecked(clicked);
}


void LevelComplexityDialog::on_button_extra_options__clicked() {
    ui_ -> extra_box_ -> setEnabled(ui_ -> button_extra_options_ -> isChecked());
}
