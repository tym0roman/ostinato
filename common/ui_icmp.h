/********************************************************************************
** Form generated from reading UI file 'icmp.ui'
**
** Created: Thu May 1 12:18:52 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ICMP_H
#define UI_ICMP_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "intcombobox.h"

QT_BEGIN_NAMESPACE

class Ui_Icmp
{
public:
    QGridLayout *gridLayout;
    QGroupBox *versionBox;
    QVBoxLayout *vboxLayout;
    QRadioButton *icmp4Button;
    QRadioButton *icmp6Button;
    QLabel *label;
    IntComboBox *typeCombo;
    QLabel *label_2;
    QLineEdit *codeEdit;
    QSpacerItem *spacerItem;
    QCheckBox *overrideCksum;
    QLineEdit *cksumEdit;
    QGroupBox *idSeqFrame;
    QHBoxLayout *hboxLayout;
    QLabel *label_4;
    QLineEdit *idEdit;
    QLabel *label_5;
    QLineEdit *seqEdit;
    QSpacerItem *spacerItem1;

    void setupUi(QWidget *Icmp)
    {
        if (Icmp->objectName().isEmpty())
            Icmp->setObjectName(QString::fromUtf8("Icmp"));
        Icmp->resize(373, 166);
        gridLayout = new QGridLayout(Icmp);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        versionBox = new QGroupBox(Icmp);
        versionBox->setObjectName(QString::fromUtf8("versionBox"));
        vboxLayout = new QVBoxLayout(versionBox);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        icmp4Button = new QRadioButton(versionBox);
        icmp4Button->setObjectName(QString::fromUtf8("icmp4Button"));

        vboxLayout->addWidget(icmp4Button);

        icmp6Button = new QRadioButton(versionBox);
        icmp6Button->setObjectName(QString::fromUtf8("icmp6Button"));

        vboxLayout->addWidget(icmp6Button);


        gridLayout->addWidget(versionBox, 0, 0, 3, 1);

        label = new QLabel(Icmp);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 1, 1, 1);

        typeCombo = new IntComboBox(Icmp);
        typeCombo->setObjectName(QString::fromUtf8("typeCombo"));

        gridLayout->addWidget(typeCombo, 0, 2, 1, 1);

        label_2 = new QLabel(Icmp);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 1, 1, 1);

        codeEdit = new QLineEdit(Icmp);
        codeEdit->setObjectName(QString::fromUtf8("codeEdit"));

        gridLayout->addWidget(codeEdit, 1, 2, 1, 1);

        spacerItem = new QSpacerItem(31, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 1, 3, 1, 1);

        overrideCksum = new QCheckBox(Icmp);
        overrideCksum->setObjectName(QString::fromUtf8("overrideCksum"));

        gridLayout->addWidget(overrideCksum, 2, 1, 1, 1);

        cksumEdit = new QLineEdit(Icmp);
        cksumEdit->setObjectName(QString::fromUtf8("cksumEdit"));
        cksumEdit->setEnabled(false);

        gridLayout->addWidget(cksumEdit, 2, 2, 1, 1);

        idSeqFrame = new QGroupBox(Icmp);
        idSeqFrame->setObjectName(QString::fromUtf8("idSeqFrame"));
        hboxLayout = new QHBoxLayout(idSeqFrame);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        label_4 = new QLabel(idSeqFrame);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        hboxLayout->addWidget(label_4);

        idEdit = new QLineEdit(idSeqFrame);
        idEdit->setObjectName(QString::fromUtf8("idEdit"));

        hboxLayout->addWidget(idEdit);

        label_5 = new QLabel(idSeqFrame);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        hboxLayout->addWidget(label_5);

        seqEdit = new QLineEdit(idSeqFrame);
        seqEdit->setObjectName(QString::fromUtf8("seqEdit"));

        hboxLayout->addWidget(seqEdit);


        gridLayout->addWidget(idSeqFrame, 3, 0, 1, 3);

        spacerItem1 = new QSpacerItem(211, 71, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem1, 4, 0, 1, 3);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(typeCombo);
        label_2->setBuddy(codeEdit);
        label_4->setBuddy(idEdit);
        label_5->setBuddy(seqEdit);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(icmp4Button, icmp6Button);
        QWidget::setTabOrder(icmp6Button, typeCombo);
        QWidget::setTabOrder(typeCombo, codeEdit);
        QWidget::setTabOrder(codeEdit, overrideCksum);
        QWidget::setTabOrder(overrideCksum, cksumEdit);
        QWidget::setTabOrder(cksumEdit, idEdit);
        QWidget::setTabOrder(idEdit, seqEdit);

        retranslateUi(Icmp);
        QObject::connect(overrideCksum, SIGNAL(toggled(bool)), cksumEdit, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(Icmp);
    } // setupUi

    void retranslateUi(QWidget *Icmp)
    {
        Icmp->setWindowTitle(QApplication::translate("Icmp", "Form", 0, QApplication::UnicodeUTF8));
        versionBox->setTitle(QApplication::translate("Icmp", "Version", 0, QApplication::UnicodeUTF8));
        icmp4Button->setText(QApplication::translate("Icmp", "ICMPv4", 0, QApplication::UnicodeUTF8));
        icmp6Button->setText(QApplication::translate("Icmp", "ICMPv6", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Icmp", "Type", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Icmp", "Code", 0, QApplication::UnicodeUTF8));
        overrideCksum->setText(QApplication::translate("Icmp", "Checksum", 0, QApplication::UnicodeUTF8));
        idSeqFrame->setTitle(QString());
        label_4->setText(QApplication::translate("Icmp", "Identifier", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("Icmp", "Sequence", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Icmp: public Ui_Icmp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ICMP_H
