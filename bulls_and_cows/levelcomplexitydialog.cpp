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


bool LevelComplexityDialog::is_extra_options_is_clicked() const {
    return ui_ -> extra_box_ -> isChecked();
}


void LevelComplexityDialog::set_extra_options_clicked(const bool clicked) {
    ui_ -> extra_box_ -> setChecked(clicked);
}


int LevelComplexityDialog::get_step_limit() const {
    return ui_ -> spin_box_limit_steps_ -> value();
}


void LevelComplexityDialog::set_step_limit(const int value) {
    ui_ -> spin_box_limit_steps_ -> setValue(value);
}

