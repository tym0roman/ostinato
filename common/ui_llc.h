/********************************************************************************
** Form generated from reading UI file 'llc.ui'
**
** Created: Thu May 1 12:18:52 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LLC_H
#define UI_LLC_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_llc
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QHBoxLayout *hboxLayout;
    QCheckBox *cbOverrideDsap;
    QLineEdit *leDsap;
    QCheckBox *cbOverrideSsap;
    QLineEdit *leSsap;
    QCheckBox *cbOverrideControl;
    QLineEdit *leControl;
    QSpacerItem *spacerItem;
    QSpacerItem *spacerItem1;

    void setupUi(QWidget *llc)
    {
        if (llc->objectName().isEmpty())
            llc->setObjectName(QString::fromUtf8("llc"));
        llc->resize(396, 98);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(llc->sizePolicy().hasHeightForWidth());
        llc->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(llc);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox = new QGroupBox(llc);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        hboxLayout = new QHBoxLayout(groupBox);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        cbOverrideDsap = new QCheckBox(groupBox);
        cbOverrideDsap->setObjectName(QString::fromUtf8("cbOverrideDsap"));

        hboxLayout->addWidget(cbOverrideDsap);

        leDsap = new QLineEdit(groupBox);
        leDsap->setObjectName(QString::fromUtf8("leDsap"));
        leDsap->setEnabled(false);

        hboxLayout->addWidget(leDsap);

        cbOverrideSsap = new QCheckBox(groupBox);
        cbOverrideSsap->setObjectName(QString::fromUtf8("cbOverrideSsap"));

        hboxLayout->addWidget(cbOverrideSsap);

        leSsap = new QLineEdit(groupBox);
        leSsap->setObjectName(QString::fromUtf8("leSsap"));
        leSsap->setEnabled(false);

        hboxLayout->addWidget(leSsap);

        cbOverrideControl = new QCheckBox(groupBox);
        cbOverrideControl->setObjectName(QString::fromUtf8("cbOverrideControl"));

        hboxLayout->addWidget(cbOverrideControl);

        leControl = new QLineEdit(groupBox);
        leControl->setObjectName(QString::fromUtf8("leControl"));
        leControl->setEnabled(false);

        hboxLayout->addWidget(leControl);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        spacerItem = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 0, 1, 1, 1);

        spacerItem1 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem1, 1, 0, 1, 1);


        retranslateUi(llc);
        QObject::connect(cbOverrideDsap, SIGNAL(toggled(bool)), leDsap, SLOT(setEnabled(bool)));
        QObject::connect(cbOverrideSsap, SIGNAL(toggled(bool)), leSsap, SLOT(setEnabled(bool)));
        QObject::connect(cbOverrideControl, SIGNAL(toggled(bool)), leControl, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(llc);
    } // setupUi

    void retranslateUi(QWidget *llc)
    {
        llc->setWindowTitle(QApplication::translate("llc", "Form", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("llc", "LLC", 0, QApplication::UnicodeUTF8));
        cbOverrideDsap->setText(QApplication::translate("llc", "DSAP", 0, QApplication::UnicodeUTF8));
        leDsap->setInputMask(QApplication::translate("llc", ">HH; ", 0, QApplication::UnicodeUTF8));
        cbOverrideSsap->setText(QApplication::translate("llc", "SSAP", 0, QApplication::UnicodeUTF8));
        leSsap->setInputMask(QApplication::translate("llc", ">HH; ", 0, QApplication::UnicodeUTF8));
        cbOverrideControl->setText(QApplication::translate("llc", "Control", 0, QApplication::UnicodeUTF8));
        leControl->setInputMask(QApplication::translate("llc", ">HH; ", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class llc: public Ui_llc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LLC_H
