/********************************************************************************
** Form generated from reading UI file 'portconfigdialog.ui'
**
** Created: Mon Apr 28 09:18:56 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PORTCONFIGDIALOG_H
#define UI_PORTCONFIGDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PortConfigDialog
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *transmitModeBox;
    QVBoxLayout *vboxLayout1;
    QRadioButton *sequentialStreamsButton;
    QRadioButton *interleavedStreamsButton;
    QCheckBox *exclusiveControlButton;
    QSpacerItem *spacerItem;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *PortConfigDialog)
    {
        if (PortConfigDialog->objectName().isEmpty())
            PortConfigDialog->setObjectName(QString::fromUtf8("PortConfigDialog"));
        PortConfigDialog->resize(244, 160);
        vboxLayout = new QVBoxLayout(PortConfigDialog);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        transmitModeBox = new QGroupBox(PortConfigDialog);
        transmitModeBox->setObjectName(QString::fromUtf8("transmitModeBox"));
        vboxLayout1 = new QVBoxLayout(transmitModeBox);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        sequentialStreamsButton = new QRadioButton(transmitModeBox);
        sequentialStreamsButton->setObjectName(QString::fromUtf8("sequentialStreamsButton"));
        sequentialStreamsButton->setChecked(true);

        vboxLayout1->addWidget(sequentialStreamsButton);

        interleavedStreamsButton = new QRadioButton(transmitModeBox);
        interleavedStreamsButton->setObjectName(QString::fromUtf8("interleavedStreamsButton"));

        vboxLayout1->addWidget(interleavedStreamsButton);


        vboxLayout->addWidget(transmitModeBox);

        exclusiveControlButton = new QCheckBox(PortConfigDialog);
        exclusiveControlButton->setObjectName(QString::fromUtf8("exclusiveControlButton"));

        vboxLayout->addWidget(exclusiveControlButton);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);

        buttonBox = new QDialogButtonBox(PortConfigDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);


        retranslateUi(PortConfigDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), PortConfigDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PortConfigDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(PortConfigDialog);
    } // setupUi

    void retranslateUi(QDialog *PortConfigDialog)
    {
        PortConfigDialog->setWindowTitle(QApplication::translate("PortConfigDialog", "Port Config", 0, QApplication::UnicodeUTF8));
        transmitModeBox->setTitle(QApplication::translate("PortConfigDialog", "Transmit Mode", 0, QApplication::UnicodeUTF8));
        sequentialStreamsButton->setText(QApplication::translate("PortConfigDialog", "Sequential Streams", 0, QApplication::UnicodeUTF8));
        interleavedStreamsButton->setText(QApplication::translate("PortConfigDialog", "Interleaved Streams", 0, QApplication::UnicodeUTF8));
        exclusiveControlButton->setText(QApplication::translate("PortConfigDialog", "Exclusive Control", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PortConfigDialog: public Ui_PortConfigDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PORTCONFIGDIALOG_H
