/********************************************************************************
** Form generated from reading UI file 'userwindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERWINDIALOG_H
#define UI_USERWINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_UserWinDialog
{
public:
    QGridLayout *grid_layout_;
    QVBoxLayout *vertical_layout_;
    QHBoxLayout *horizont_layout_;
    QLabel *win_label_;

    void setupUi(QDialog *UserWinDialog)
    {
        if (UserWinDialog->objectName().isEmpty())
            UserWinDialog->setObjectName(QStringLiteral("UserWinDialog"));
        UserWinDialog->resize(231, 93);
        grid_layout_ = new QGridLayout(UserWinDialog);
        grid_layout_->setObjectName(QStringLiteral("grid_layout_"));
        vertical_layout_ = new QVBoxLayout();
        vertical_layout_->setObjectName(QStringLiteral("vertical_layout_"));
        horizont_layout_ = new QHBoxLayout();
        horizont_layout_->setObjectName(QStringLiteral("horizont_layout_"));
        win_label_ = new QLabel(UserWinDialog);
        win_label_->setObjectName(QStringLiteral("win_label_"));

        horizont_layout_->addWidget(win_label_);


        vertical_layout_->addLayout(horizont_layout_);


        grid_layout_->addLayout(vertical_layout_, 0, 0, 1, 1);


        retranslateUi(UserWinDialog);

        QMetaObject::connectSlotsByName(UserWinDialog);
    } // setupUi

    void retranslateUi(QDialog *UserWinDialog)
    {
        UserWinDialog->setWindowTitle(QApplication::translate("UserWinDialog", "\320\237\320\276\320\261\320\265\320\264\320\260!", 0));
        win_label_->setText(QApplication::translate("UserWinDialog", "<html><head/><body><p align=\"center\"><img src=\":/Positive_32x32.png\"/>\320\242\321\213 \320\262\321\213\320\270\320\263\321\200\320\260\320\273\320\260!</p><p align=\"center\"><span style=\" font-weight:600;\">\320\245\320\276\321\207\320\265\321\210\321\214 \321\201\321\213\320\263\321\200\320\260\321\202\321\214 \320\265\321\211\321\221?</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class UserWinDialog: public Ui_UserWinDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERWINDIALOG_H
