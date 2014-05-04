/********************************************************************************
** Form generated from reading UI file 'payload.ui'
**
** Created: Thu May 1 12:18:52 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAYLOAD_H
#define UI_PAYLOAD_H

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

class Ui_payload
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *cmbPatternMode;
    QSpacerItem *spacerItem;
    QLabel *label_2;
    QLineEdit *lePattern;
    QSpacerItem *spacerItem1;

    void setupUi(QWidget *payload)
    {
        if (payload->objectName().isEmpty())
            payload->setObjectName(QString::fromUtf8("payload"));
        payload->resize(299, 114);
        gridLayout = new QGridLayout(payload);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(payload);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        cmbPatternMode = new QComboBox(payload);
        cmbPatternMode->setObjectName(QString::fromUtf8("cmbPatternMode"));

        gridLayout->addWidget(cmbPatternMode, 0, 1, 1, 1);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 0, 2, 1, 1);

        label_2 = new QLabel(payload);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lePattern = new QLineEdit(payload);
        lePattern->setObjectName(QString::fromUtf8("lePattern"));
        lePattern->setMaxLength(11);
        lePattern->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(lePattern, 1, 1, 1, 1);

        spacerItem1 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem1, 2, 1, 1, 1);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(cmbPatternMode);
        label_2->setBuddy(lePattern);
#endif // QT_NO_SHORTCUT

        retranslateUi(payload);

        QMetaObject::connectSlotsByName(payload);
    } // setupUi

    void retranslateUi(QWidget *payload)
    {
        payload->setWindowTitle(QApplication::translate("payload", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("payload", "Type", 0, QApplication::UnicodeUTF8));
        cmbPatternMode->clear();
        cmbPatternMode->insertItems(0, QStringList()
         << QApplication::translate("payload", "Fixed Word", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("payload", "Increment Byte", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("payload", "Decrement Byte", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("payload", "Random", 0, QApplication::UnicodeUTF8)
        );
        label_2->setText(QApplication::translate("payload", "Pattern", 0, QApplication::UnicodeUTF8));
        lePattern->setInputMask(QApplication::translate("payload", ">HH HH HH HH; ", 0, QApplication::UnicodeUTF8));
        lePattern->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class payload: public Ui_payload {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAYLOAD_H
