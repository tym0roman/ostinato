/********************************************************************************
** Form generated from reading UI file 'lldp_tlv.ui'
**
** Created: Mon Apr 28 09:08:34 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LLDP_TLV_H
#define UI_LLDP_TLV_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFormLayout>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QWidget>
#include "qhexedit.h"

QT_BEGIN_NAMESPACE

class Ui_Lldp_tlv
{
public:
    QGridLayout *gridLayout;
    QFormLayout *formLayout;
    QLineEdit *TLV_ID_field;
    QHexEdit *hexEdit;
    QLabel *label;
    QLabel *label_2;
    QLabel *mode;
    QLineEdit *TLV_Len_field;
    QLabel *label_3;

    void setupUi(QWidget *Lldp_tlv)
    {
        if (Lldp_tlv->objectName().isEmpty())
            Lldp_tlv->setObjectName(QString::fromUtf8("Lldp_tlv"));
        Lldp_tlv->resize(511, 190);
        gridLayout = new QGridLayout(Lldp_tlv);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        TLV_ID_field = new QLineEdit(Lldp_tlv);
        TLV_ID_field->setObjectName(QString::fromUtf8("TLV_ID_field"));

        formLayout->setWidget(0, QFormLayout::FieldRole, TLV_ID_field);

        hexEdit = new QHexEdit(Lldp_tlv);
        hexEdit->setObjectName(QString::fromUtf8("hexEdit"));
        hexEdit->setMinimumSize(QSize(100, 70));

        formLayout->setWidget(2, QFormLayout::FieldRole, hexEdit);

        label = new QLabel(Lldp_tlv);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(Lldp_tlv);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        mode = new QLabel(Lldp_tlv);
        mode->setObjectName(QString::fromUtf8("mode"));
        mode->setMinimumSize(QSize(50, 0));
        mode->setMaximumSize(QSize(20, 16777215));
        mode->setLayoutDirection(Qt::RightToLeft);
        mode->setFrameShape(QFrame::Panel);
        mode->setFrameShadow(QFrame::Sunken);
        mode->setLineWidth(1);

        formLayout->setWidget(3, QFormLayout::FieldRole, mode);

        TLV_Len_field = new QLineEdit(Lldp_tlv);
        TLV_Len_field->setObjectName(QString::fromUtf8("TLV_Len_field"));

        formLayout->setWidget(1, QFormLayout::FieldRole, TLV_Len_field);

        label_3 = new QLabel(Lldp_tlv);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);


        gridLayout->addLayout(formLayout, 2, 1, 1, 1);


        retranslateUi(Lldp_tlv);

        QMetaObject::connectSlotsByName(Lldp_tlv);
    } // setupUi

    void retranslateUi(QWidget *Lldp_tlv)
    {
        Lldp_tlv->setWindowTitle(QApplication::translate("Lldp_tlv", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Lldp_tlv", "TLV ID", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Lldp_tlv", "TLV Data", 0, QApplication::UnicodeUTF8));
        mode->setText(QString());
        label_3->setText(QApplication::translate("Lldp_tlv", "TLV Length", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Lldp_tlv: public Ui_Lldp_tlv {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LLDP_TLV_H
