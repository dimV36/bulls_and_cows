/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_level_complexity;
    QAction *action_exit;
    QWidget *central_widget_;
    QGridLayout *gridLayout;
    QTableWidget *table_;
    QLabel *label_answer_;
    QLineEdit *line_answer_;
    QMenuBar *menu_bar_;
    QMenu *menu;
    QToolBar *tool_bar_;
    QStatusBar *status_bar_;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(419, 298);
        action_level_complexity = new QAction(MainWindow);
        action_level_complexity->setObjectName(QStringLiteral("action_level_complexity"));
        action_exit = new QAction(MainWindow);
        action_exit->setObjectName(QStringLiteral("action_exit"));
        central_widget_ = new QWidget(MainWindow);
        central_widget_->setObjectName(QStringLiteral("central_widget_"));
        gridLayout = new QGridLayout(central_widget_);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        table_ = new QTableWidget(central_widget_);
        if (table_->columnCount() < 2)
            table_->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        table_->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        table_->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        table_->setObjectName(QStringLiteral("table_"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(table_->sizePolicy().hasHeightForWidth());
        table_->setSizePolicy(sizePolicy);
        table_->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        table_->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        table_->setEditTriggers(QAbstractItemView::NoEditTriggers);
        table_->setSelectionMode(QAbstractItemView::NoSelection);
        table_->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        table_->horizontalHeader()->setVisible(true);
        table_->horizontalHeader()->setCascadingSectionResizes(true);
        table_->horizontalHeader()->setDefaultSectionSize(100);
        table_->horizontalHeader()->setHighlightSections(false);
        table_->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        table_->horizontalHeader()->setStretchLastSection(true);
        table_->verticalHeader()->setVisible(true);
        table_->verticalHeader()->setCascadingSectionResizes(false);
        table_->verticalHeader()->setHighlightSections(true);
        table_->verticalHeader()->setMinimumSectionSize(30);
        table_->verticalHeader()->setProperty("showSortIndicator", QVariant(true));
        table_->verticalHeader()->setStretchLastSection(true);

        gridLayout->addWidget(table_, 0, 0, 1, 2);

        label_answer_ = new QLabel(central_widget_);
        label_answer_->setObjectName(QStringLiteral("label_answer_"));

        gridLayout->addWidget(label_answer_, 1, 0, 1, 1);

        line_answer_ = new QLineEdit(central_widget_);
        line_answer_->setObjectName(QStringLiteral("line_answer_"));

        gridLayout->addWidget(line_answer_, 1, 1, 1, 1);

        MainWindow->setCentralWidget(central_widget_);
        menu_bar_ = new QMenuBar(MainWindow);
        menu_bar_->setObjectName(QStringLiteral("menu_bar_"));
        menu_bar_->setGeometry(QRect(0, 0, 419, 19));
        menu = new QMenu(menu_bar_);
        menu->setObjectName(QStringLiteral("menu"));
        MainWindow->setMenuBar(menu_bar_);
        tool_bar_ = new QToolBar(MainWindow);
        tool_bar_->setObjectName(QStringLiteral("tool_bar_"));
        MainWindow->addToolBar(Qt::TopToolBarArea, tool_bar_);
        status_bar_ = new QStatusBar(MainWindow);
        status_bar_->setObjectName(QStringLiteral("status_bar_"));
        MainWindow->setStatusBar(status_bar_);

        menu_bar_->addAction(menu->menuAction());
        menu->addAction(action_level_complexity);
        menu->addAction(action_exit);

        retranslateUi(MainWindow);
        QObject::connect(action_exit, SIGNAL(triggered()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\320\230\320\263\321\200\320\260 \"\320\221\321\213\320\272\320\270 \320\270 \320\272\320\276\321\200\320\276\320\262\321\213\"", 0));
        action_level_complexity->setText(QApplication::translate("MainWindow", "\320\243\321\200\320\276\320\262\320\265\320\275\321\214 \321\201\320\273\320\276\320\266\320\275\320\276\321\201\321\202\320\270", 0));
        action_exit->setText(QApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264", 0));
        QTableWidgetItem *___qtablewidgetitem = table_->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "\320\247\320\270\321\201\320\273\320\276", 0));
        QTableWidgetItem *___qtablewidgetitem1 = table_->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "\320\221\321\213\320\272\320\270/\320\232\320\276\321\200\320\276\320\262\321\213", 0));
        label_answer_->setText(QApplication::translate("MainWindow", "\320\234\320\276\321\221 \321\207\320\270\321\201\320\273\320\276:", 0));
        menu->setTitle(QApplication::translate("MainWindow", "\320\230\320\263\321\200\320\260", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
