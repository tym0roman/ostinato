/********************************************************************************
** Form generated from reading UI file 'textproto.ui'
**
** Created: Mon Apr 28 09:08:34 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEXTPROTO_H
#define UI_TEXTPROTO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>
#include "intcombobox.h"

QT_BEGIN_NAMESPACE

class Ui_TextProtocol
{
public:
    QGridLayout *gridLayout;
    QLabel *label_2;
    IntComboBox *portNumCombo;
    QLabel *label_3;
    QComboBox *eolCombo;
    QLabel *label;
    QComboBox *encodingCombo;
    QTextEdit *protoText;

    void setupUi(QWidget *TextProtocol)
    {
        if (TextProtocol->objectName().isEmpty())
            TextProtocol->setObjectName(QString::fromUtf8("TextProtocol"));
        TextProtocol->resize(535, 300);
        gridLayout = new QGridLayout(TextProtocol);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(TextProtocol);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        portNumCombo = new IntComboBox(TextProtocol);
        portNumCombo->setObjectName(QString::fromUtf8("portNumCombo"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(2);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(portNumCombo->sizePolicy().hasHeightForWidth());
        portNumCombo->setSizePolicy(sizePolicy);

        gridLayout->addWidget(portNumCombo, 0, 1, 1, 1);

        label_3 = new QLabel(TextProtocol);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 2, 1, 1);

        eolCombo = new QComboBox(TextProtocol);
        eolCombo->setObjectName(QString::fromUtf8("eolCombo"));

        gridLayout->addWidget(eolCombo, 0, 3, 1, 1);

        label = new QLabel(TextProtocol);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 4, 1, 1);

        encodingCombo = new QComboBox(TextProtocol);
        encodingCombo->setObjectName(QString::fromUtf8("encodingCombo"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(encodingCombo->sizePolicy().hasHeightForWidth());
        encodingCombo->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(encodingCombo, 0, 5, 1, 1);

        protoText = new QTextEdit(TextProtocol);
        protoText->setObjectName(QString::fromUtf8("protoText"));
        protoText->setAcceptRichText(false);

        gridLayout->addWidget(protoText, 1, 0, 1, 6);

#ifndef QT_NO_SHORTCUT
        label_2->setBuddy(portNumCombo);
        label->setBuddy(encodingCombo);
#endif // QT_NO_SHORTCUT

        retranslateUi(TextProtocol);

        eolCombo->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(TextProtocol);
    } // setupUi

    void retranslateUi(QWidget *TextProtocol)
    {
        TextProtocol->setWindowTitle(QApplication::translate("TextProtocol", "Form", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("TextProtocol", "TCP/UDP Port Number (Protocol)", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("TextProtocol", "Line Ending", 0, QApplication::UnicodeUTF8));
        eolCombo->clear();
        eolCombo->insertItems(0, QStringList()
         << QApplication::translate("TextProtocol", "CR", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TextProtocol", "LF", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TextProtocol", "CRLF", 0, QApplication::UnicodeUTF8)
        );
        label->setText(QApplication::translate("TextProtocol", "Encode as", 0, QApplication::UnicodeUTF8));
        encodingCombo->clear();
        encodingCombo->insertItems(0, QStringList()
         << QApplication::translate("TextProtocol", "UTF-8", 0, QApplication::UnicodeUTF8)
        );
    } // retranslateUi

};

namespace Ui {
    class TextProtocol: public Ui_TextProtocol {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEXTPROTO_H
