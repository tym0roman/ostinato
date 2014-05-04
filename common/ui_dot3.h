/********************************************************************************
** Form generated from reading UI file 'dot3.ui'
**
** Created: Thu May 1 12:18:52 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOT3_H
#define UI_DOT3_H

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

class Ui_dot3
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QHBoxLayout *hboxLayout;
    QCheckBox *cbOverrideLength;
    QLineEdit *leLength;
    QSpacerItem *spacerItem;
    QSpacerItem *spacerItem1;

    void setupUi(QWidget *dot3)
    {
        if (dot3->objectName().isEmpty())
            dot3->setObjectName(QString::fromUtf8("dot3"));
        dot3->resize(181, 98);
        gridLayout = new QGridLayout(dot3);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox = new QGroupBox(dot3);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        hboxLayout = new QHBoxLayout(groupBox);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        cbOverrideLength = new QCheckBox(groupBox);
        cbOverrideLength->setObjectName(QString::fromUtf8("cbOverrideLength"));

        hboxLayout->addWidget(cbOverrideLength);

        leLength = new QLineEdit(groupBox);
        leLength->setObjectName(QString::fromUtf8("leLength"));
        leLength->setEnabled(false);

        hboxLayout->addWidget(leLength);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        spacerItem = new QSpacerItem(16, 54, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 0, 1, 1, 1);

        spacerItem1 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem1, 1, 0, 1, 1);


        retranslateUi(dot3);
        QObject::connect(cbOverrideLength, SIGNAL(toggled(bool)), leLength, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(dot3);
    } // setupUi

    void retranslateUi(QWidget *dot3)
    {
        dot3->setWindowTitle(QApplication::translate("dot3", "Form", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("dot3", "802.3", 0, QApplication::UnicodeUTF8));
        cbOverrideLength->setText(QApplication::translate("dot3", "Length", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class dot3: public Ui_dot3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOT3_H
