/********************************************************************************
** Form generated from reading UI file 'userscript.ui'
**
** Created: Thu May 1 12:18:52 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERSCRIPT_H
#define UI_USERSCRIPT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserScript
{
public:
    QGridLayout *gridLayout;
    QTextEdit *programEdit;
    QFrame *frame;
    QHBoxLayout *hboxLayout;
    QLabel *statusLabel;
    QPushButton *compileButton;

    void setupUi(QWidget *UserScript)
    {
        if (UserScript->objectName().isEmpty())
            UserScript->setObjectName(QString::fromUtf8("UserScript"));
        UserScript->resize(517, 335);
        gridLayout = new QGridLayout(UserScript);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        programEdit = new QTextEdit(UserScript);
        programEdit->setObjectName(QString::fromUtf8("programEdit"));

        gridLayout->addWidget(programEdit, 0, 0, 1, 3);

        frame = new QFrame(UserScript);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(10);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setFrameShape(QFrame::Panel);
        frame->setFrameShadow(QFrame::Sunken);
        hboxLayout = new QHBoxLayout(frame);
        hboxLayout->setSpacing(4);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(4, 4, 4, 4);
        statusLabel = new QLabel(frame);
        statusLabel->setObjectName(QString::fromUtf8("statusLabel"));

        hboxLayout->addWidget(statusLabel);


        gridLayout->addWidget(frame, 1, 0, 1, 1);

        compileButton = new QPushButton(UserScript);
        compileButton->setObjectName(QString::fromUtf8("compileButton"));

        gridLayout->addWidget(compileButton, 1, 2, 1, 1);


        retranslateUi(UserScript);

        QMetaObject::connectSlotsByName(UserScript);
    } // setupUi

    void retranslateUi(QWidget *UserScript)
    {
        UserScript->setWindowTitle(QApplication::translate("UserScript", "Form", 0, QApplication::UnicodeUTF8));
        statusLabel->setText(QApplication::translate("UserScript", "Unknown", 0, QApplication::UnicodeUTF8));
        compileButton->setText(QApplication::translate("UserScript", "Compile", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class UserScript: public Ui_UserScript {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERSCRIPT_H
