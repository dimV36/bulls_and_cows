/********************************************************************************
** Form generated from reading UI file 'levelcomplexitydialog.ui'
**
** Created by: Qt User Interface Compiler version 5.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEVELCOMPLEXITYDIALOG_H
#define UI_LEVELCOMPLEXITYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_LevelComplexityDialog
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *number_layout_;
    QLabel *label_number_;
    QSpinBox *spin_box_number_;
    QGroupBox *extra_box_;
    QGridLayout *extra_layout_;
    QLabel *label_step_;
    QSpinBox *spin_box_limit_steps_;
    QDialogButtonBox *button_box_;

    void setupUi(QDialog *LevelComplexityDialog)
    {
        if (LevelComplexityDialog->objectName().isEmpty())
            LevelComplexityDialog->setObjectName(QStringLiteral("LevelComplexityDialog"));
        LevelComplexityDialog->resize(365, 145);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Bulls_128x128.png"), QSize(), QIcon::Normal, QIcon::Off);
        LevelComplexityDialog->setWindowIcon(icon);
        gridLayout = new QGridLayout(LevelComplexityDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        number_layout_ = new QHBoxLayout();
        number_layout_->setObjectName(QStringLiteral("number_layout_"));
        label_number_ = new QLabel(LevelComplexityDialog);
        label_number_->setObjectName(QStringLiteral("label_number_"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_number_->sizePolicy().hasHeightForWidth());
        label_number_->setSizePolicy(sizePolicy);
        label_number_->setMinimumSize(QSize(300, 0));
        label_number_->setMaximumSize(QSize(300, 16777215));

        number_layout_->addWidget(label_number_);

        spin_box_number_ = new QSpinBox(LevelComplexityDialog);
        spin_box_number_->setObjectName(QStringLiteral("spin_box_number_"));
        spin_box_number_->setMaximumSize(QSize(50, 16777215));
        spin_box_number_->setLayoutDirection(Qt::LeftToRight);
        spin_box_number_->setMinimum(2);
        spin_box_number_->setMaximum(9);

        number_layout_->addWidget(spin_box_number_);


        gridLayout->addLayout(number_layout_, 0, 0, 1, 1);

        extra_box_ = new QGroupBox(LevelComplexityDialog);
        extra_box_->setObjectName(QStringLiteral("extra_box_"));
        extra_box_->setCheckable(true);
        extra_box_->setChecked(false);
        extra_layout_ = new QGridLayout(extra_box_);
        extra_layout_->setObjectName(QStringLiteral("extra_layout_"));
        label_step_ = new QLabel(extra_box_);
        label_step_->setObjectName(QStringLiteral("label_step_"));

        extra_layout_->addWidget(label_step_, 2, 0, 1, 1);

        spin_box_limit_steps_ = new QSpinBox(extra_box_);
        spin_box_limit_steps_->setObjectName(QStringLiteral("spin_box_limit_steps_"));
        spin_box_limit_steps_->setMaximumSize(QSize(50, 16777215));
        spin_box_limit_steps_->setMinimum(2);
        spin_box_limit_steps_->setMaximum(20);

        extra_layout_->addWidget(spin_box_limit_steps_, 2, 1, 1, 1);


        gridLayout->addWidget(extra_box_, 1, 0, 1, 1);

        button_box_ = new QDialogButtonBox(LevelComplexityDialog);
        button_box_->setObjectName(QStringLiteral("button_box_"));
        button_box_->setOrientation(Qt::Horizontal);
        button_box_->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(button_box_, 2, 0, 1, 1);


        retranslateUi(LevelComplexityDialog);
        QObject::connect(button_box_, SIGNAL(accepted()), LevelComplexityDialog, SLOT(accept()));
        QObject::connect(button_box_, SIGNAL(rejected()), LevelComplexityDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(LevelComplexityDialog);
    } // setupUi

    void retranslateUi(QDialog *LevelComplexityDialog)
    {
        LevelComplexityDialog->setWindowTitle(QApplication::translate("LevelComplexityDialog", "\320\243\321\200\320\276\320\262\320\265\320\275\321\214 \321\201\320\273\320\276\320\266\320\275\320\276\321\201\321\202\320\270", 0));
        label_number_->setText(QApplication::translate("LevelComplexityDialog", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\267\320\260\320\263\320\260\320\264\320\260\320\275\320\275\321\213\321\205 \321\206\320\270\321\204\321\200", 0));
        extra_box_->setTitle(QApplication::translate("LevelComplexityDialog", "\320\222\320\272\320\273\321\216\321\207\320\270\321\202\321\214 \320\276\320\263\321\200\320\260\320\275\320\270\321\207\320\265\320\275\320\270\320\265 \320\275\320\260 \321\207\320\270\321\201\320\273\320\276 \321\210\320\260\320\263\320\276\320\262", 0));
        label_step_->setText(QApplication::translate("LevelComplexityDialog", "\320\236\320\263\321\200\320\260\320\275\320\270\321\207\320\265\320\275\320\270\320\265 \320\275\320\260 \320\272\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\210\320\260\320\263\320\276\320\262", 0));
    } // retranslateUi

};

namespace Ui {
    class LevelComplexityDialog: public Ui_LevelComplexityDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEVELCOMPLEXITYDIALOG_H
