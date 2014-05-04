/********************************************************************************
** Form generated from reading UI file 'vlan.ui'
**
** Created: Thu May 1 12:18:52 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VLAN_H
#define UI_VLAN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Vlan
{
public:
    QHBoxLayout *hboxLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QCheckBox *cbTpidOverride;
    QLabel *label_9;
    QLabel *label_8;
    QLabel *label_10;
    QLineEdit *leTpid;
    QComboBox *cmbPrio;
    QComboBox *cmbCfiDei;
    QLineEdit *leVlanId;

    void setupUi(QWidget *Vlan)
    {
        if (Vlan->objectName().isEmpty())
            Vlan->setObjectName(QString::fromUtf8("Vlan"));
        Vlan->resize(268, 96);
        hboxLayout = new QHBoxLayout(Vlan);
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(9, 9, 9, 9);
        groupBox = new QGroupBox(Vlan);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        cbTpidOverride = new QCheckBox(groupBox);
        cbTpidOverride->setObjectName(QString::fromUtf8("cbTpidOverride"));
        cbTpidOverride->setEnabled(true);

        gridLayout->addWidget(cbTpidOverride, 0, 0, 1, 1);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 0, 1, 1, 1);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 0, 2, 1, 1);

        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 0, 3, 1, 1);

        leTpid = new QLineEdit(groupBox);
        leTpid->setObjectName(QString::fromUtf8("leTpid"));
        leTpid->setEnabled(false);

        gridLayout->addWidget(leTpid, 1, 0, 1, 1);

        cmbPrio = new QComboBox(groupBox);
        cmbPrio->setObjectName(QString::fromUtf8("cmbPrio"));
        cmbPrio->setEnabled(true);

        gridLayout->addWidget(cmbPrio, 1, 1, 1, 1);

        cmbCfiDei = new QComboBox(groupBox);
        cmbCfiDei->setObjectName(QString::fromUtf8("cmbCfiDei"));
        cmbCfiDei->setEnabled(true);

        gridLayout->addWidget(cmbCfiDei, 1, 2, 1, 1);

        leVlanId = new QLineEdit(groupBox);
        leVlanId->setObjectName(QString::fromUtf8("leVlanId"));
        leVlanId->setEnabled(true);

        gridLayout->addWidget(leVlanId, 1, 3, 1, 1);


        hboxLayout->addWidget(groupBox);


        retranslateUi(Vlan);
        QObject::connect(cbTpidOverride, SIGNAL(toggled(bool)), leTpid, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(Vlan);
    } // setupUi

    void retranslateUi(QWidget *Vlan)
    {
        Vlan->setWindowTitle(QApplication::translate("Vlan", "Form", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("Vlan", "VLAN", 0, QApplication::UnicodeUTF8));
        cbTpidOverride->setText(QApplication::translate("Vlan", "Override TPID", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("Vlan", "Priority", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("Vlan", "CFI/DEI", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("Vlan", "VLAN", 0, QApplication::UnicodeUTF8));
        leTpid->setInputMask(QApplication::translate("Vlan", ">HH HH; ", 0, QApplication::UnicodeUTF8));
        leTpid->setText(QString());
        cmbPrio->clear();
        cmbPrio->insertItems(0, QStringList()
         << QApplication::translate("Vlan", "0", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Vlan", "1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Vlan", "2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Vlan", "3", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Vlan", "4", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Vlan", "5", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Vlan", "6", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Vlan", "7", 0, QApplication::UnicodeUTF8)
        );
        cmbCfiDei->clear();
        cmbCfiDei->insertItems(0, QStringList()
         << QApplication::translate("Vlan", "0", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Vlan", "1", 0, QApplication::UnicodeUTF8)
        );
        leVlanId->setText(QApplication::translate("Vlan", "0", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Vlan: public Ui_Vlan {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VLAN_H
