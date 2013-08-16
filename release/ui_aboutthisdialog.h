/********************************************************************************
** Form generated from reading UI file 'aboutthisdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTTHISDIALOG_H
#define UI_ABOUTTHISDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_AboutThisDialog
{
public:
    QGridLayout *main_layout_;
    QDialogButtonBox *button_box_;
    QLabel *label_picture_;
    QTextEdit *text_;

    void setupUi(QDialog *AboutThisDialog)
    {
        if (AboutThisDialog->objectName().isEmpty())
            AboutThisDialog->setObjectName(QStringLiteral("AboutThisDialog"));
        AboutThisDialog->resize(477, 287);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Amor_32x32.png"), QSize(), QIcon::Normal, QIcon::Off);
        AboutThisDialog->setWindowIcon(icon);
        main_layout_ = new QGridLayout(AboutThisDialog);
        main_layout_->setObjectName(QStringLiteral("main_layout_"));
        button_box_ = new QDialogButtonBox(AboutThisDialog);
        button_box_->setObjectName(QStringLiteral("button_box_"));
        button_box_->setOrientation(Qt::Horizontal);
        button_box_->setStandardButtons(QDialogButtonBox::Ok);
        button_box_->setCenterButtons(true);

        main_layout_->addWidget(button_box_, 1, 1, 1, 1);

        label_picture_ = new QLabel(AboutThisDialog);
        label_picture_->setObjectName(QStringLiteral("label_picture_"));

        main_layout_->addWidget(label_picture_, 0, 0, 1, 1);

        text_ = new QTextEdit(AboutThisDialog);
        text_->setObjectName(QStringLiteral("text_"));
        text_->setReadOnly(true);

        main_layout_->addWidget(text_, 0, 1, 1, 1);


        retranslateUi(AboutThisDialog);
        QObject::connect(button_box_, SIGNAL(accepted()), AboutThisDialog, SLOT(accept()));
        QObject::connect(button_box_, SIGNAL(rejected()), AboutThisDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(AboutThisDialog);
    } // setupUi

    void retranslateUi(QDialog *AboutThisDialog)
    {
        AboutThisDialog->setWindowTitle(QApplication::translate("AboutThisDialog", "\320\233\321\216\320\261\320\270\320\274\320\276\320\271 \320\234\320\260\321\210\321\203\320\273\321\214\320\272\320\265", 0));
        label_picture_->setText(QString());
        text_->setHtml(QApplication::translate("AboutThisDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\234\320\260\321\210\321\203\320\273\321\214\320\272\320\260, \320\274\320\276\321\217 \320\277\321\200\320\265\320\272\321\200\320\260\321\201\320\275\320\260\321\217 \320\264\320\265\320\262\320\276\321\207\320\272\320\260!</p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\222\320\276\321\202 \321\203\320\266\320\265 \320\277\321\200\320\276\321\210\320\265\320\273 \320\277\320\276\321\207\321\202\320\270 \320\263\320\276\320\264 \321\201 \320\274\320\276\320\274\320\265"
                        "\320\275\321\202\320\260 \320\275\320\260\321\210\320\265\320\271 \320\262\321\201\321\202\321\200\320\265\321\207\320\270. \320\236\320\275 \320\277\321\200\320\276\320\273\320\265\321\202\320\265\320\273 \320\275\320\265\320\267\320\260\320\274\320\265\321\202\320\275\320\276, \320\274\320\276\320\273\320\275\320\270\320\265\320\275\320\276\321\201\320\275\320\276, \320\275\320\276 \321\204\320\260\320\275\321\202\320\260\321\201\321\202\320\270\321\207\320\275\320\276 \320\270 \320\272\321\200\320\260\321\201\320\270\320\262\320\276. \320\241\320\273\321\203\321\207\320\260\321\216\321\202\321\201\321\217 \321\207\321\203\320\264\320\265\321\201\320\260 \320\262 \320\266\320\270\320\267\320\275\320\270, \321\201 \321\202\320\276\320\261\320\276\320\271 \321\215\321\202\320\276 \321\217 \320\277\320\276\320\275\321\217\320\273 \320\262\320\277\320\265\321\200\320\262\321\213\320\265. \320\242\321\213 \321\201\321\202\320\260\320\273\320\260 \320\277\321\203\321\202\320\265\320\262\320\276\320\264\320\275\320"
                        "\276\320\271 \320\267\320\262\320\265\320\267\320\264\320\276\320\271 \320\262 \320\274\320\276\320\270\321\205 \320\275\320\260\321\207\320\270\320\275\320\260\320\275\320\270\321\217\321\205 \320\270 \321\201\321\202\320\260\320\273\320\260 \320\260\320\261\321\201\320\276\320\273\321\216\321\202\320\275\320\276 \320\262\321\201\320\265\320\274 \320\262 \320\274\320\276\320\265\320\271 \320\266\320\270\320\267\320\275\320\270. \320\242\321\213 - \320\274\320\276\321\217 \320\264\321\203\321\210\320\260 \320\270 \320\274\320\276\321\221 \321\201\320\265\321\200\320\264\321\206\320\265! \320\232\320\260\320\272 \320\277\321\200\320\265\320\272\321\200\320\260\321\201\320\275\320\276 \320\273\321\216\320\261\320\270\321\202\321\214 \320\270 \320\261\321\213\321\202\321\214 \320\273\321\216\320\261\320\270\320\274\321\213\320\274!</p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\233\321\216\320\261\320\273\321\216 \321\202\320"
                        "\265\320\261\321\217, \320\270 \321\215\321\202\320\276 \320\275\320\265 \321\201\320\265\320\272\321\200\320\265\321\202,<br />\320\230 \320\275\320\260\320\277\320\265\321\200\320\265\320\264 \321\217 \320\267\320\275\320\260\321\216 \321\202\320\262\320\276\320\271 \320\276\321\202\320\262\320\265\321\202,<br />\320\257 \320\267\320\275\320\260\321\216 \320\276 \320\262\320\267\320\260\320\270\320\274\320\275\320\276\321\201\321\202\320\270 \320\273\321\216\320\261\320\262\320\270,<br />\320\235\320\276 \320\262\321\201\320\265 \321\200\320\260\320\262\320\275\320\276 \320\274\320\265\320\275\321\217 \321\202\321\213 \320\277\320\276\320\267\320\276\320\262\320\270.<br />\320\245\320\276\321\207\321\203 \321\203\321\201\320\273\321\213\321\210\320\260\321\202\321\214 \320\275\320\265\320\266\320\275\321\213\320\271 \320\263\320\276\320\273\320\276\321\201 \321\202\320\262\320\276\320\271,<br />\320\245\320\276\321\207\321\203 \321\202\320\265\320\261\321\217 \320\272\320\276\321\201\320\275\321\203\321\202\321"
                        "\214\321\201\321\217 \321\217 \321\200\321\203\320\272\320\276\320\271.<br />\320\242\321\213 \342\200\224 \320\275\320\265\320\266\320\275\320\260\321\217, \320\273\321\216\320\261\320\270\320\274\320\260\321\217 \320\274\320\276\321\217,<br />\320\230 \320\273\320\270\321\210\321\214 \321\201 \321\202\320\276\320\261\320\276\321\216 \320\261\321\203\320\264\321\203 \321\201\321\207\320\260\321\201\321\202\320\273\320\270\320\262 \321\217! \302\240<a name=\"ctrlcopy\"></a><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a name=\"ctrlcopy\"></a>\320\233\320\256\320\221\320\233\320\256 \320\242\320\225\320\221\320\257, \320\234\320\220\320\250\320\243\320\233\320\254\320\232\320\220!</p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class AboutThisDialog: public Ui_AboutThisDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTTHISDIALOG_H
