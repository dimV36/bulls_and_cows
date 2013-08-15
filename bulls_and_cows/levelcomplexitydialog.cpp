#include "levelcomplexitydialog.h"
#include "ui_levelcomplexitydialog.h"


LevelComplexityDialog::LevelComplexityDialog(QWidget *parent) :
    QDialog(parent),
    ui_(new Ui::LevelComplexityDialog) {
    ui_ -> setupUi(this);
    ReadSettings();
}


LevelComplexityDialog::~LevelComplexityDialog() {
    WriteSettings();
    delete ui_;
}


int LevelComplexityDialog::get_complexity_level() const {
    return ui_ -> spin_box_number_ -> value();
}


bool LevelComplexityDialog::is_extra_options_is_clicked() const {
    return ui_ -> extra_box_ -> isChecked();
}


int LevelComplexityDialog::get_step_limit() const {
    return ui_ -> spin_box_limit_steps_ -> value();
}


void LevelComplexityDialog::WriteSettings() {
    QSettings option_settings("dimv36", "bulls_and_cows", this);
    option_settings.beginGroup("dialog");
    option_settings.setValue("complexity_level", get_complexity_level());
    option_settings.setValue("extra_options", is_extra_options_is_clicked());
    option_settings.setValue("limit_step", get_step_limit());
    option_settings.endGroup();
}


void LevelComplexityDialog::ReadSettings() {
    QSettings option_settings("dimv36", "bulls_and_cows", this);
    option_settings.beginGroup("dialog");
    set_complexity_level(option_settings.value("complexity_level").toInt());
    set_extra_options(option_settings.value("extra_options").toBool());
    set_step_limit(option_settings.value("limit_step").toInt());
    option_settings.endGroup();
}


void LevelComplexityDialog::set_complexity_level(const int level) {
    ui_ -> spin_box_number_ -> setValue(level);
}


void LevelComplexityDialog::set_extra_options(const bool is_checked) {
    ui_ -> extra_box_ -> setChecked(is_checked);
}


void LevelComplexityDialog::set_step_limit(const int step_limit) {
    ui_ -> spin_box_limit_steps_ -> setValue(step_limit);
}
