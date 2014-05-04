/********************************************************************************
** Form generated from reading UI file 'qinq.ui'
**
** Created: Thu May 1 12:18:52 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QINQ_H
#define UI_QINQ_H

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
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Qinq
{
public:
    QHBoxLayout *hboxLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLineEdit *leTpid;
    QCheckBox *cbTpidOverride;
    QLineEdit *leVlanId;
    QComboBox *cmbPrio;
    QComboBox *cmbCfiDei;
    QLabel *label;
    QLineEdit *ui_qinq_tpid;
    QComboBox *ui_qinq_priority;
    QLineEdit *ui_qinq_vlan;
    QComboBox *ui_qinq_cfu_dei;
    QLabel *label_9;
    QLabel *label_8;
    QLabel *label_10;
    QLabel *label_2;
    QCheckBox *cbVlanTpidOverride;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *Qinq)
    {
        if (Qinq->objectName().isEmpty())
            Qinq->setObjectName(QString::fromUtf8("Qinq"));
        Qinq->resize(810, 566);
        hboxLayout = new QHBoxLayout(Qinq);
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        groupBox = new QGroupBox(Qinq);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(-1, 0, -1, -1);
        leTpid = new QLineEdit(groupBox);
        leTpid->setObjectName(QString::fromUtf8("leTpid"));
        leTpid->setEnabled(false);

        gridLayout->addWidget(leTpid, 7, 0, 1, 1);

        cbTpidOverride = new QCheckBox(groupBox);
        cbTpidOverride->setObjectName(QString::fromUtf8("cbTpidOverride"));
        cbTpidOverride->setEnabled(true);

        gridLayout->addWidget(cbTpidOverride, 6, 0, 1, 1);

        leVlanId = new QLineEdit(groupBox);
        leVlanId->setObjectName(QString::fromUtf8("leVlanId"));
        leVlanId->setEnabled(true);

        gridLayout->addWidget(leVlanId, 7, 4, 1, 1);

        cmbPrio = new QComboBox(groupBox);
        cmbPrio->setObjectName(QString::fromUtf8("cmbPrio"));
        cmbPrio->setEnabled(true);

        gridLayout->addWidget(cmbPrio, 7, 1, 1, 1);

        cmbCfiDei = new QComboBox(groupBox);
        cmbCfiDei->setObjectName(QString::fromUtf8("cmbCfiDei"));
        cmbCfiDei->setEnabled(true);

        gridLayout->addWidget(cmbCfiDei, 7, 2, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 5, 0, 1, 1);

        ui_qinq_tpid = new QLineEdit(groupBox);
        ui_qinq_tpid->setObjectName(QString::fromUtf8("ui_qinq_tpid"));
        ui_qinq_tpid->setEnabled(false);
        ui_qinq_tpid->setCursorPosition(5);

        gridLayout->addWidget(ui_qinq_tpid, 4, 0, 1, 1);

        ui_qinq_priority = new QComboBox(groupBox);
        ui_qinq_priority->setObjectName(QString::fromUtf8("ui_qinq_priority"));

        gridLayout->addWidget(ui_qinq_priority, 4, 1, 1, 1);

        ui_qinq_vlan = new QLineEdit(groupBox);
        ui_qinq_vlan->setObjectName(QString::fromUtf8("ui_qinq_vlan"));

        gridLayout->addWidget(ui_qinq_vlan, 4, 4, 1, 1);

        ui_qinq_cfu_dei = new QComboBox(groupBox);
        ui_qinq_cfu_dei->setObjectName(QString::fromUtf8("ui_qinq_cfu_dei"));

        gridLayout->addWidget(ui_qinq_cfu_dei, 4, 2, 1, 1);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 2, 1, 1, 1);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 2, 2, 1, 1);

        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 2, 4, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        cbVlanTpidOverride = new QCheckBox(groupBox);
        cbVlanTpidOverride->setObjectName(QString::fromUtf8("cbVlanTpidOverride"));

        gridLayout->addWidget(cbVlanTpidOverride, 3, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 8, 0, 1, 1);


        hboxLayout->addWidget(groupBox);


        retranslateUi(Qinq);
        QObject::connect(cbTpidOverride, SIGNAL(toggled(bool)), leTpid, SLOT(setEnabled(bool)));
        QObject::connect(cbVlanTpidOverride, SIGNAL(toggled(bool)), ui_qinq_tpid, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(Qinq);
    } // setupUi

    void retranslateUi(QWidget *Qinq)
    {
        Qinq->setWindowTitle(QApplication::translate("Qinq", "Form", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QString());
        leTpid->setInputMask(QApplication::translate("Qinq", ">HH HH; ", 0, QApplication::UnicodeUTF8));
        leTpid->setText(QString());
        cbTpidOverride->setText(QApplication::translate("Qinq", "Override TPID", 0, QApplication::UnicodeUTF8));
        leVlanId->setInputMask(QApplication::translate("Qinq", ">9999; ", 0, QApplication::UnicodeUTF8));
        leVlanId->setText(QString());
        cmbPrio->clear();
        cmbPrio->insertItems(0, QStringList()
         << QApplication::translate("Qinq", "0", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Qinq", "1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Qinq", "2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Qinq", "3", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Qinq", "4", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Qinq", "5", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Qinq", "6", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Qinq", "7", 0, QApplication::UnicodeUTF8)
        );
        cmbCfiDei->clear();
        cmbCfiDei->insertItems(0, QStringList()
         << QApplication::translate("Qinq", "0", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Qinq", "1", 0, QApplication::UnicodeUTF8)
        );
        label->setText(QApplication::translate("Qinq", "VLAN tagged", 0, QApplication::UnicodeUTF8));
        ui_qinq_tpid->setInputMask(QApplication::translate("Qinq", ">HH HH; ", 0, QApplication::UnicodeUTF8));
        ui_qinq_priority->clear();
        ui_qinq_priority->insertItems(0, QStringList()
         << QApplication::translate("Qinq", "0", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Qinq", "1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Qinq", "2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Qinq", "3", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Qinq", "4", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Qinq", "5", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Qinq", "6", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Qinq", "7", 0, QApplication::UnicodeUTF8)
        );
        ui_qinq_vlan->setInputMask(QApplication::translate("Qinq", ">9999; ", 0, QApplication::UnicodeUTF8));
        ui_qinq_vlan->setText(QString());
        ui_qinq_cfu_dei->clear();
        ui_qinq_cfu_dei->insertItems(0, QStringList()
         << QApplication::translate("Qinq", "0", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Qinq", "1", 0, QApplication::UnicodeUTF8)
        );
        label_9->setText(QApplication::translate("Qinq", "Priority", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("Qinq", "CFI/DEI", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("Qinq", "VLAN", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Qinq", "Q-in-Q tagged", 0, QApplication::UnicodeUTF8));
        cbVlanTpidOverride->setText(QApplication::translate("Qinq", "Override TPID", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Qinq: public Ui_Qinq {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QINQ_H
