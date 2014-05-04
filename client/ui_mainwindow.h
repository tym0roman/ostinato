/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Mon Apr 28 09:18:56 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionFileExit;
    QAction *actionHelpAbout;
    QAction *actionPreferences;
    QAction *actionAboutQt;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(700, 550);
        const QIcon icon = QIcon(QString::fromUtf8(":/icons/about.png"));
        MainWindow->setWindowIcon(icon);
        actionFileExit = new QAction(MainWindow);
        actionFileExit->setObjectName(QString::fromUtf8("actionFileExit"));
        const QIcon icon1 = QIcon(QString::fromUtf8(":/icons/exit.png"));
        actionFileExit->setIcon(icon1);
        actionHelpAbout = new QAction(MainWindow);
        actionHelpAbout->setObjectName(QString::fromUtf8("actionHelpAbout"));
        actionHelpAbout->setIcon(icon);
        actionPreferences = new QAction(MainWindow);
        actionPreferences->setObjectName(QString::fromUtf8("actionPreferences"));
        const QIcon icon2 = QIcon(QString::fromUtf8(":/icons/preferences.png"));
        actionPreferences->setIcon(icon2);
        actionAboutQt = new QAction(MainWindow);
        actionAboutQt->setObjectName(QString::fromUtf8("actionAboutQt"));
        const QIcon icon3 = QIcon(QString::fromUtf8(":/icons/qt.png"));
        actionAboutQt->setIcon(icon3);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 700, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addSeparator();
        menuFile->addAction(actionPreferences);
        menuFile->addAction(actionFileExit);
        menuHelp->addAction(actionHelpAbout);
        menuHelp->addAction(actionAboutQt);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Ostinato", 0, QApplication::UnicodeUTF8));
        actionFileExit->setText(QApplication::translate("MainWindow", "E&xit", 0, QApplication::UnicodeUTF8));
        actionHelpAbout->setText(QApplication::translate("MainWindow", "&About", 0, QApplication::UnicodeUTF8));
        actionPreferences->setText(QApplication::translate("MainWindow", "Preferences", 0, QApplication::UnicodeUTF8));
        actionAboutQt->setText(QApplication::translate("MainWindow", "About Qt", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0, QApplication::UnicodeUTF8));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
