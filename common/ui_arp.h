/********************************************************************************
** Form generated from reading UI file 'arp.ui'
**
** Created: Thu May 1 12:18:52 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ARP_H
#define UI_ARP_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "intcombobox.h"

QT_BEGIN_NAMESPACE

class Ui_Arp
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *hwType;
    QLabel *label_3;
    QLineEdit *hwAddrLen;
    QLabel *label_2;
    QLineEdit *protoType;
    QLabel *label_4;
    QLineEdit *protoAddrLen;
    QGroupBox *groupBox_2;
    QHBoxLayout *hboxLayout;
    QLabel *label_6;
    IntComboBox *opCodeCombo;
    QSpacerItem *spacerItem;
    QGroupBox *groupBox_7;
    QGridLayout *gridLayout1;
    QSpacerItem *spacerItem1;
    QLabel *label_32;
    QLabel *label_31;
    QLabel *label_23;
    QLabel *label_30;
    QLabel *label_7;
    QLineEdit *senderHwAddr;
    QComboBox *senderHwAddrMode;
    QLineEdit *senderHwAddrCount;
    QLabel *label_20;
    QLineEdit *senderProtoAddr;
    QComboBox *senderProtoAddrMode;
    QLineEdit *senderProtoAddrCount;
    QLineEdit *senderProtoAddrMask;
    QLabel *label_5;
    QLineEdit *targetHwAddr;
    QComboBox *targetHwAddrMode;
    QLineEdit *targetHwAddrCount;
    QLabel *label_21;
    QLineEdit *targetProtoAddr;
    QComboBox *targetProtoAddrMode;
    QLineEdit *targetProtoAddrCount;
    QLineEdit *targetProtoAddrMask;
    QSpacerItem *spacerItem2;

    void setupUi(QWidget *Arp)
    {
        if (Arp->objectName().isEmpty())
            Arp->setObjectName(QString::fromUtf8("Arp"));
        Arp->resize(528, 286);
        vboxLayout = new QVBoxLayout(Arp);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        groupBox = new QGroupBox(Arp);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        hwType = new QLineEdit(groupBox);
        hwType->setObjectName(QString::fromUtf8("hwType"));
        hwType->setEnabled(false);

        gridLayout->addWidget(hwType, 0, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 2, 1, 1);

        hwAddrLen = new QLineEdit(groupBox);
        hwAddrLen->setObjectName(QString::fromUtf8("hwAddrLen"));
        hwAddrLen->setEnabled(false);

        gridLayout->addWidget(hwAddrLen, 0, 3, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        protoType = new QLineEdit(groupBox);
        protoType->setObjectName(QString::fromUtf8("protoType"));
        protoType->setEnabled(false);

        gridLayout->addWidget(protoType, 1, 1, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 1, 2, 1, 1);

        protoAddrLen = new QLineEdit(groupBox);
        protoAddrLen->setObjectName(QString::fromUtf8("protoAddrLen"));
        protoAddrLen->setEnabled(false);

        gridLayout->addWidget(protoAddrLen, 1, 3, 1, 1);


        vboxLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(Arp);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        hboxLayout = new QHBoxLayout(groupBox_2);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        hboxLayout->addWidget(label_6);

        opCodeCombo = new IntComboBox(groupBox_2);
        opCodeCombo->setObjectName(QString::fromUtf8("opCodeCombo"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(opCodeCombo->sizePolicy().hasHeightForWidth());
        opCodeCombo->setSizePolicy(sizePolicy);
        opCodeCombo->setEditable(true);
        opCodeCombo->setInsertPolicy(QComboBox::NoInsert);

        hboxLayout->addWidget(opCodeCombo);

        spacerItem = new QSpacerItem(161, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);


        vboxLayout->addWidget(groupBox_2);

        groupBox_7 = new QGroupBox(Arp);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setFlat(false);
        gridLayout1 = new QGridLayout(groupBox_7);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        spacerItem1 = new QSpacerItem(101, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(spacerItem1, 0, 0, 1, 1);

        label_32 = new QLabel(groupBox_7);
        label_32->setObjectName(QString::fromUtf8("label_32"));

        gridLayout1->addWidget(label_32, 0, 1, 1, 1);

        label_31 = new QLabel(groupBox_7);
        label_31->setObjectName(QString::fromUtf8("label_31"));

        gridLayout1->addWidget(label_31, 0, 2, 1, 1);

        label_23 = new QLabel(groupBox_7);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        gridLayout1->addWidget(label_23, 0, 3, 1, 1);

        label_30 = new QLabel(groupBox_7);
        label_30->setObjectName(QString::fromUtf8("label_30"));

        gridLayout1->addWidget(label_30, 0, 4, 1, 1);

        label_7 = new QLabel(groupBox_7);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout1->addWidget(label_7, 1, 0, 1, 1);

        senderHwAddr = new QLineEdit(groupBox_7);
        senderHwAddr->setObjectName(QString::fromUtf8("senderHwAddr"));
        senderHwAddr->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(senderHwAddr, 1, 1, 1, 1);

        senderHwAddrMode = new QComboBox(groupBox_7);
        senderHwAddrMode->setObjectName(QString::fromUtf8("senderHwAddrMode"));

        gridLayout1->addWidget(senderHwAddrMode, 1, 2, 1, 1);

        senderHwAddrCount = new QLineEdit(groupBox_7);
        senderHwAddrCount->setObjectName(QString::fromUtf8("senderHwAddrCount"));
        senderHwAddrCount->setEnabled(false);
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(255);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(senderHwAddrCount->sizePolicy().hasHeightForWidth());
        senderHwAddrCount->setSizePolicy(sizePolicy1);

        gridLayout1->addWidget(senderHwAddrCount, 1, 3, 1, 1);

        label_20 = new QLabel(groupBox_7);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        gridLayout1->addWidget(label_20, 2, 0, 1, 1);

        senderProtoAddr = new QLineEdit(groupBox_7);
        senderProtoAddr->setObjectName(QString::fromUtf8("senderProtoAddr"));
        senderProtoAddr->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(senderProtoAddr, 2, 1, 1, 1);

        senderProtoAddrMode = new QComboBox(groupBox_7);
        senderProtoAddrMode->setObjectName(QString::fromUtf8("senderProtoAddrMode"));

        gridLayout1->addWidget(senderProtoAddrMode, 2, 2, 1, 1);

        senderProtoAddrCount = new QLineEdit(groupBox_7);
        senderProtoAddrCount->setObjectName(QString::fromUtf8("senderProtoAddrCount"));
        senderProtoAddrCount->setEnabled(false);
        sizePolicy1.setHeightForWidth(senderProtoAddrCount->sizePolicy().hasHeightForWidth());
        senderProtoAddrCount->setSizePolicy(sizePolicy1);

        gridLayout1->addWidget(senderProtoAddrCount, 2, 3, 1, 1);

        senderProtoAddrMask = new QLineEdit(groupBox_7);
        senderProtoAddrMask->setObjectName(QString::fromUtf8("senderProtoAddrMask"));
        senderProtoAddrMask->setEnabled(false);
        senderProtoAddrMask->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(senderProtoAddrMask, 2, 4, 1, 1);

        label_5 = new QLabel(groupBox_7);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout1->addWidget(label_5, 3, 0, 1, 1);

        targetHwAddr = new QLineEdit(groupBox_7);
        targetHwAddr->setObjectName(QString::fromUtf8("targetHwAddr"));
        targetHwAddr->setMinimumSize(QSize(120, 0));
        targetHwAddr->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(targetHwAddr, 3, 1, 1, 1);

        targetHwAddrMode = new QComboBox(groupBox_7);
        targetHwAddrMode->setObjectName(QString::fromUtf8("targetHwAddrMode"));

        gridLayout1->addWidget(targetHwAddrMode, 3, 2, 1, 1);

        targetHwAddrCount = new QLineEdit(groupBox_7);
        targetHwAddrCount->setObjectName(QString::fromUtf8("targetHwAddrCount"));
        targetHwAddrCount->setEnabled(false);
        sizePolicy1.setHeightForWidth(targetHwAddrCount->sizePolicy().hasHeightForWidth());
        targetHwAddrCount->setSizePolicy(sizePolicy1);
        targetHwAddrCount->setCursorPosition(0);

        gridLayout1->addWidget(targetHwAddrCount, 3, 3, 1, 1);

        label_21 = new QLabel(groupBox_7);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        gridLayout1->addWidget(label_21, 4, 0, 1, 1);

        targetProtoAddr = new QLineEdit(groupBox_7);
        targetProtoAddr->setObjectName(QString::fromUtf8("targetProtoAddr"));
        targetProtoAddr->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(targetProtoAddr, 4, 1, 1, 1);

        targetProtoAddrMode = new QComboBox(groupBox_7);
        targetProtoAddrMode->setObjectName(QString::fromUtf8("targetProtoAddrMode"));

        gridLayout1->addWidget(targetProtoAddrMode, 4, 2, 1, 1);

        targetProtoAddrCount = new QLineEdit(groupBox_7);
        targetProtoAddrCount->setObjectName(QString::fromUtf8("targetProtoAddrCount"));
        targetProtoAddrCount->setEnabled(false);
        sizePolicy1.setHeightForWidth(targetProtoAddrCount->sizePolicy().hasHeightForWidth());
        targetProtoAddrCount->setSizePolicy(sizePolicy1);

        gridLayout1->addWidget(targetProtoAddrCount, 4, 3, 1, 1);

        targetProtoAddrMask = new QLineEdit(groupBox_7);
        targetProtoAddrMask->setObjectName(QString::fromUtf8("targetProtoAddrMask"));
        targetProtoAddrMask->setEnabled(false);
        targetProtoAddrMask->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(targetProtoAddrMask, 4, 4, 1, 1);


        vboxLayout->addWidget(groupBox_7);

        spacerItem2 = new QSpacerItem(20, 61, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem2);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(hwType);
        label_3->setBuddy(hwAddrLen);
        label_2->setBuddy(protoType);
        label_4->setBuddy(protoAddrLen);
        label_7->setBuddy(senderHwAddr);
        label_20->setBuddy(senderProtoAddr);
        label_5->setBuddy(targetHwAddr);
        label_21->setBuddy(targetProtoAddr);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(hwType, protoType);
        QWidget::setTabOrder(protoType, hwAddrLen);
        QWidget::setTabOrder(hwAddrLen, protoAddrLen);
        QWidget::setTabOrder(protoAddrLen, senderHwAddr);
        QWidget::setTabOrder(senderHwAddr, senderHwAddrMode);
        QWidget::setTabOrder(senderHwAddrMode, senderHwAddrCount);
        QWidget::setTabOrder(senderHwAddrCount, senderProtoAddr);
        QWidget::setTabOrder(senderProtoAddr, senderProtoAddrMode);
        QWidget::setTabOrder(senderProtoAddrMode, senderProtoAddrCount);
        QWidget::setTabOrder(senderProtoAddrCount, senderProtoAddrMask);
        QWidget::setTabOrder(senderProtoAddrMask, targetHwAddr);
        QWidget::setTabOrder(targetHwAddr, targetHwAddrMode);
        QWidget::setTabOrder(targetHwAddrMode, targetHwAddrCount);
        QWidget::setTabOrder(targetHwAddrCount, targetProtoAddr);
        QWidget::setTabOrder(targetProtoAddr, targetProtoAddrMode);
        QWidget::setTabOrder(targetProtoAddrMode, targetProtoAddrCount);
        QWidget::setTabOrder(targetProtoAddrCount, targetProtoAddrMask);

        retranslateUi(Arp);

        QMetaObject::connectSlotsByName(Arp);
    } // setupUi

    void retranslateUi(QWidget *Arp)
    {
        Arp->setWindowTitle(QApplication::translate("Arp", "Form", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QString());
        label->setText(QApplication::translate("Arp", "Hardware Type", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Arp", "Hardware Address Length", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Arp", "Protocol Type", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Arp", "Protocol Address Length", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QString());
        label_6->setText(QApplication::translate("Arp", "Operation Code", 0, QApplication::UnicodeUTF8));
        groupBox_7->setTitle(QString());
        label_32->setText(QApplication::translate("Arp", "Address", 0, QApplication::UnicodeUTF8));
        label_31->setText(QApplication::translate("Arp", "Mode", 0, QApplication::UnicodeUTF8));
        label_23->setText(QApplication::translate("Arp", "Count", 0, QApplication::UnicodeUTF8));
        label_30->setText(QApplication::translate("Arp", "Mask", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("Arp", "Sender Hardware", 0, QApplication::UnicodeUTF8));
        senderHwAddr->setInputMask(QApplication::translate("Arp", ">HH HH HH HH HH HH; ", 0, QApplication::UnicodeUTF8));
        senderHwAddr->setText(QString());
        senderHwAddrMode->clear();
        senderHwAddrMode->insertItems(0, QStringList()
         << QApplication::translate("Arp", "Fixed", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Arp", "Increment", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Arp", "Decrement", 0, QApplication::UnicodeUTF8)
        );
        senderHwAddrCount->setText(QString());
        label_20->setText(QApplication::translate("Arp", "Sender Protocol", 0, QApplication::UnicodeUTF8));
        senderProtoAddr->setInputMask(QApplication::translate("Arp", "009.009.009.009; ", 0, QApplication::UnicodeUTF8));
        senderProtoAddr->setText(QApplication::translate("Arp", "...", 0, QApplication::UnicodeUTF8));
        senderProtoAddrMode->clear();
        senderProtoAddrMode->insertItems(0, QStringList()
         << QApplication::translate("Arp", "Fixed", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Arp", "Increment Host", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Arp", "Decrement Host", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Arp", "Random Host", 0, QApplication::UnicodeUTF8)
        );
        senderProtoAddrCount->setText(QString());
        senderProtoAddrMask->setInputMask(QApplication::translate("Arp", "009.009.009.009; ", 0, QApplication::UnicodeUTF8));
        senderProtoAddrMask->setText(QApplication::translate("Arp", "...", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("Arp", "Target Hardware", 0, QApplication::UnicodeUTF8));
        targetHwAddr->setInputMask(QApplication::translate("Arp", ">HH HH HH HH HH HH; ", 0, QApplication::UnicodeUTF8));
        targetHwAddr->setText(QString());
        targetHwAddrMode->clear();
        targetHwAddrMode->insertItems(0, QStringList()
         << QApplication::translate("Arp", "Fixed", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Arp", "Increment", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Arp", "Decrement", 0, QApplication::UnicodeUTF8)
        );
        targetHwAddrCount->setText(QString());
        label_21->setText(QApplication::translate("Arp", "Target Protocol", 0, QApplication::UnicodeUTF8));
        targetProtoAddr->setInputMask(QApplication::translate("Arp", "000.000.000.000; ", 0, QApplication::UnicodeUTF8));
        targetProtoAddr->setText(QApplication::translate("Arp", "...", 0, QApplication::UnicodeUTF8));
        targetProtoAddrMode->clear();
        targetProtoAddrMode->insertItems(0, QStringList()
         << QApplication::translate("Arp", "Fixed", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Arp", "Increment Host", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Arp", "Decrement Host", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Arp", "Random Host", 0, QApplication::UnicodeUTF8)
        );
        targetProtoAddrCount->setText(QString());
        targetProtoAddrMask->setInputMask(QApplication::translate("Arp", "009.009.009.009; ", 0, QApplication::UnicodeUTF8));
        targetProtoAddrMask->setText(QApplication::translate("Arp", "...", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Arp: public Ui_Arp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ARP_H
