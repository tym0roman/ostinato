/********************************************************************************
** Form generated from reading UI file 'snap.ui'
**
** Created: Mon Apr 28 09:08:34 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SNAP_H
#define UI_SNAP_H

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

class Ui_snap
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QHBoxLayout *hboxLayout;
    QCheckBox *cbOverrideOui;
    QLineEdit *leOui;
    QCheckBox *cbOverrideType;
    QLineEdit *leType;
    QSpacerItem *spacerItem;
    QSpacerItem *spacerItem1;

    void setupUi(QWidget *snap)
    {
        if (snap->objectName().isEmpty())
            snap->setObjectName(QString::fromUtf8("snap"));
        snap->resize(268, 98);
        gridLayout = new QGridLayout(snap);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox = new QGroupBox(snap);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        hboxLayout = new QHBoxLayout(groupBox);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        cbOverrideOui = new QCheckBox(groupBox);
        cbOverrideOui->setObjectName(QString::fromUtf8("cbOverrideOui"));

        hboxLayout->addWidget(cbOverrideOui);

        leOui = new QLineEdit(groupBox);
        leOui->setObjectName(QString::fromUtf8("leOui"));
        leOui->setEnabled(false);

        hboxLayout->addWidget(leOui);

        cbOverrideType = new QCheckBox(groupBox);
        cbOverrideType->setObjectName(QString::fromUtf8("cbOverrideType"));

        hboxLayout->addWidget(cbOverrideType);

        leType = new QLineEdit(groupBox);
        leType->setObjectName(QString::fromUtf8("leType"));
        leType->setEnabled(false);

        hboxLayout->addWidget(leType);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 0, 1, 1, 1);

        spacerItem1 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem1, 1, 0, 1, 1);


        retranslateUi(snap);
        QObject::connect(cbOverrideOui, SIGNAL(toggled(bool)), leOui, SLOT(setEnabled(bool)));
        QObject::connect(cbOverrideType, SIGNAL(toggled(bool)), leType, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(snap);
    } // setupUi

    void retranslateUi(QWidget *snap)
    {
        snap->setWindowTitle(QApplication::translate("snap", "Form", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("snap", "SNAP", 0, QApplication::UnicodeUTF8));
        cbOverrideOui->setText(QApplication::translate("snap", "OUI", 0, QApplication::UnicodeUTF8));
        leOui->setInputMask(QApplication::translate("snap", ">HH HH HH; ", 0, QApplication::UnicodeUTF8));
        cbOverrideType->setText(QApplication::translate("snap", "Type", 0, QApplication::UnicodeUTF8));
        leType->setInputMask(QApplication::translate("snap", ">HH HH; ", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class snap: public Ui_snap {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SNAP_H
