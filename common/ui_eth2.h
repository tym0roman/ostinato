/********************************************************************************
** Form generated from reading UI file 'eth2.ui'
**
** Created: Thu May 1 12:18:52 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ETH2_H
#define UI_ETH2_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_eth2
{
public:
    QGridLayout *gridLayout;
    QCheckBox *cbOverrideType;
    QLineEdit *leType;
    QSpacerItem *spacerItem;
    QSpacerItem *spacerItem1;

    void setupUi(QWidget *eth2)
    {
        if (eth2->objectName().isEmpty())
            eth2->setObjectName(QString::fromUtf8("eth2"));
        eth2->resize(190, 64);
        gridLayout = new QGridLayout(eth2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        cbOverrideType = new QCheckBox(eth2);
        cbOverrideType->setObjectName(QString::fromUtf8("cbOverrideType"));

        gridLayout->addWidget(cbOverrideType, 0, 0, 1, 1);

        leType = new QLineEdit(eth2);
        leType->setObjectName(QString::fromUtf8("leType"));
        leType->setEnabled(false);

        gridLayout->addWidget(leType, 0, 1, 1, 1);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 0, 2, 1, 1);

        spacerItem1 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem1, 1, 0, 1, 2);


        retranslateUi(eth2);
        QObject::connect(cbOverrideType, SIGNAL(toggled(bool)), leType, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(eth2);
    } // setupUi

    void retranslateUi(QWidget *eth2)
    {
        eth2->setWindowTitle(QApplication::translate("eth2", "Form", 0, QApplication::UnicodeUTF8));
        cbOverrideType->setText(QApplication::translate("eth2", "Ethernet Type", 0, QApplication::UnicodeUTF8));
        leType->setInputMask(QApplication::translate("eth2", ">HH HH; ", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class eth2: public Ui_eth2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ETH2_H
