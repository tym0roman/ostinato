/********************************************************************************
** Form generated from reading UI file 'hexdump.ui'
**
** Created: Thu May 1 12:18:52 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HEXDUMP_H
#define UI_HEXDUMP_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>
#include "qhexedit.h"

QT_BEGIN_NAMESPACE

class Ui_HexDump
{
public:
    QGridLayout *gridLayout;
    QHexEdit *hexEdit;
    QCheckBox *padUntilEnd;
    QSpacerItem *spacerItem;
    QLabel *mode;

    void setupUi(QWidget *HexDump)
    {
        if (HexDump->objectName().isEmpty())
            HexDump->setObjectName(QString::fromUtf8("HexDump"));
        HexDump->resize(511, 190);
        gridLayout = new QGridLayout(HexDump);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        hexEdit = new QHexEdit(HexDump);
        hexEdit->setObjectName(QString::fromUtf8("hexEdit"));

        gridLayout->addWidget(hexEdit, 0, 0, 1, 3);

        padUntilEnd = new QCheckBox(HexDump);
        padUntilEnd->setObjectName(QString::fromUtf8("padUntilEnd"));

        gridLayout->addWidget(padUntilEnd, 1, 0, 1, 1);

        spacerItem = new QSpacerItem(281, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 1, 1, 1, 1);

        mode = new QLabel(HexDump);
        mode->setObjectName(QString::fromUtf8("mode"));
        mode->setMinimumSize(QSize(50, 0));
        mode->setFrameShape(QFrame::Panel);
        mode->setFrameShadow(QFrame::Sunken);
        mode->setLineWidth(1);
        mode->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(mode, 1, 2, 1, 1);


        retranslateUi(HexDump);

        QMetaObject::connectSlotsByName(HexDump);
    } // setupUi

    void retranslateUi(QWidget *HexDump)
    {
        HexDump->setWindowTitle(QApplication::translate("HexDump", "Form", 0, QApplication::UnicodeUTF8));
        padUntilEnd->setText(QApplication::translate("HexDump", "Pad until end of packet", 0, QApplication::UnicodeUTF8));
        mode->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class HexDump: public Ui_HexDump {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HEXDUMP_H
