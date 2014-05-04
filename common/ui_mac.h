/********************************************************************************
** Form generated from reading UI file 'mac.ui'
**
** Created: Thu May 1 12:18:52 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAC_H
#define UI_MAC_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mac
{
public:
    QGridLayout *gridLayout;
    QLabel *label_6;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label;
    QLineEdit *leDstMac;
    QComboBox *cmbDstMacMode;
    QLineEdit *leDstMacCount;
    QLineEdit *leDstMacStep;
    QLabel *label_3;
    QLineEdit *leSrcMac;
    QComboBox *cmbSrcMacMode;
    QLineEdit *leSrcMacCount;
    QLineEdit *leSrcMacStep;
    QSpacerItem *spacerItem;

    void setupUi(QWidget *mac)
    {
        if (mac->objectName().isEmpty())
            mac->setObjectName(QString::fromUtf8("mac"));
        mac->resize(391, 116);
        gridLayout = new QGridLayout(mac);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_6 = new QLabel(mac);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 0, 1, 1, 1);

        label_2 = new QLabel(mac);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 2, 1, 1);

        label_4 = new QLabel(mac);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 0, 3, 1, 1);

        label_5 = new QLabel(mac);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 0, 4, 1, 1);

        label = new QLabel(mac);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        leDstMac = new QLineEdit(mac);
        leDstMac->setObjectName(QString::fromUtf8("leDstMac"));
        leDstMac->setMinimumSize(QSize(120, 0));

        gridLayout->addWidget(leDstMac, 1, 1, 1, 1);

        cmbDstMacMode = new QComboBox(mac);
        cmbDstMacMode->setObjectName(QString::fromUtf8("cmbDstMacMode"));

        gridLayout->addWidget(cmbDstMacMode, 1, 2, 1, 1);

        leDstMacCount = new QLineEdit(mac);
        leDstMacCount->setObjectName(QString::fromUtf8("leDstMacCount"));
        leDstMacCount->setEnabled(false);
        leDstMacCount->setCursorPosition(0);

        gridLayout->addWidget(leDstMacCount, 1, 3, 1, 1);

        leDstMacStep = new QLineEdit(mac);
        leDstMacStep->setObjectName(QString::fromUtf8("leDstMacStep"));
        leDstMacStep->setEnabled(false);
        leDstMacStep->setCursorPosition(0);

        gridLayout->addWidget(leDstMacStep, 1, 4, 1, 1);

        label_3 = new QLabel(mac);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        leSrcMac = new QLineEdit(mac);
        leSrcMac->setObjectName(QString::fromUtf8("leSrcMac"));

        gridLayout->addWidget(leSrcMac, 2, 1, 1, 1);

        cmbSrcMacMode = new QComboBox(mac);
        cmbSrcMacMode->setObjectName(QString::fromUtf8("cmbSrcMacMode"));

        gridLayout->addWidget(cmbSrcMacMode, 2, 2, 1, 1);

        leSrcMacCount = new QLineEdit(mac);
        leSrcMacCount->setObjectName(QString::fromUtf8("leSrcMacCount"));
        leSrcMacCount->setEnabled(false);

        gridLayout->addWidget(leSrcMacCount, 2, 3, 1, 1);

        leSrcMacStep = new QLineEdit(mac);
        leSrcMacStep->setObjectName(QString::fromUtf8("leSrcMacStep"));
        leSrcMacStep->setEnabled(false);
        leSrcMacStep->setCursorPosition(0);

        gridLayout->addWidget(leSrcMacStep, 2, 4, 1, 1);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem, 3, 0, 1, 1);


        retranslateUi(mac);

        QMetaObject::connectSlotsByName(mac);
    } // setupUi

    void retranslateUi(QWidget *mac)
    {
        mac->setWindowTitle(QApplication::translate("mac", "Form", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("mac", "Address", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("mac", "Mode", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("mac", "Count", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("mac", "Step", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("mac", "Destination", 0, QApplication::UnicodeUTF8));
        leDstMac->setInputMask(QApplication::translate("mac", ">HH HH HH HH HH HH; ", 0, QApplication::UnicodeUTF8));
        leDstMac->setText(QString());
        cmbDstMacMode->clear();
        cmbDstMacMode->insertItems(0, QStringList()
         << QApplication::translate("mac", "Fixed", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("mac", "Increment", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("mac", "Decrement", 0, QApplication::UnicodeUTF8)
        );
        leDstMacCount->setText(QString());
        leDstMacStep->setText(QString());
        label_3->setText(QApplication::translate("mac", "Source", 0, QApplication::UnicodeUTF8));
        leSrcMac->setInputMask(QApplication::translate("mac", ">HH HH HH HH HH HH; ", 0, QApplication::UnicodeUTF8));
        leSrcMac->setText(QString());
        cmbSrcMacMode->clear();
        cmbSrcMacMode->insertItems(0, QStringList()
         << QApplication::translate("mac", "Fixed", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("mac", "Increment", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("mac", "Decrement", 0, QApplication::UnicodeUTF8)
        );
        leSrcMacCount->setText(QString());
        leSrcMacStep->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class mac: public Ui_mac {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAC_H
