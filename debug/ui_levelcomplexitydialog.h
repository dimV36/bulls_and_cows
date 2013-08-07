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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_LevelComplexityDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label_number_;
    QSpinBox *spin_box_number_;
    QDialogButtonBox *button_box_;

    void setupUi(QDialog *LevelComplexityDialog)
    {
        if (LevelComplexityDialog->objectName().isEmpty())
            LevelComplexityDialog->setObjectName(QStringLiteral("LevelComplexityDialog"));
        LevelComplexityDialog->resize(257, 71);
        gridLayout = new QGridLayout(LevelComplexityDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_number_ = new QLabel(LevelComplexityDialog);
        label_number_->setObjectName(QStringLiteral("label_number_"));

        gridLayout->addWidget(label_number_, 0, 0, 1, 1);

        spin_box_number_ = new QSpinBox(LevelComplexityDialog);
        spin_box_number_->setObjectName(QStringLiteral("spin_box_number_"));
        spin_box_number_->setMinimum(2);
        spin_box_number_->setMaximum(10);

        gridLayout->addWidget(spin_box_number_, 0, 1, 1, 1);

        button_box_ = new QDialogButtonBox(LevelComplexityDialog);
        button_box_->setObjectName(QStringLiteral("button_box_"));
        button_box_->setOrientation(Qt::Horizontal);
        button_box_->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(button_box_, 1, 0, 1, 2);


        retranslateUi(LevelComplexityDialog);
        QObject::connect(button_box_, SIGNAL(accepted()), LevelComplexityDialog, SLOT(accept()));
        QObject::connect(button_box_, SIGNAL(rejected()), LevelComplexityDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(LevelComplexityDialog);
    } // setupUi

    void retranslateUi(QDialog *LevelComplexityDialog)
    {
        LevelComplexityDialog->setWindowTitle(QApplication::translate("LevelComplexityDialog", "\320\241\320\273\320\276\320\266\320\275\320\276\321\201\321\202\321\214 \320\270\320\263\321\200\321\213", 0));
        label_number_->setText(QApplication::translate("LevelComplexityDialog", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\267\320\260\320\263\320\260\320\264\320\260\320\275\320\275\321\213\321\205 \321\206\320\270\321\204\321\200", 0));
    } // retranslateUi

};

namespace Ui {
    class LevelComplexityDialog: public Ui_LevelComplexityDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEVELCOMPLEXITYDIALOG_H
