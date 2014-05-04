/********************************************************************************
** Form generated from reading UI file 'pcapfileimport.ui'
**
** Created: Thu May 1 12:18:52 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PCAPFILEIMPORT_H
#define UI_PCAPFILEIMPORT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PcapFileImport
{
public:
    QVBoxLayout *vboxLayout;
    QCheckBox *viaPdml;
    QHBoxLayout *hboxLayout;
    QWidget *widget;
    QCheckBox *doDiff;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *PcapFileImport)
    {
        if (PcapFileImport->objectName().isEmpty())
            PcapFileImport->setObjectName(QString::fromUtf8("PcapFileImport"));
        PcapFileImport->resize(326, 93);
        vboxLayout = new QVBoxLayout(PcapFileImport);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        viaPdml = new QCheckBox(PcapFileImport);
        viaPdml->setObjectName(QString::fromUtf8("viaPdml"));

        vboxLayout->addWidget(viaPdml);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        widget = new QWidget(PcapFileImport);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setMinimumSize(QSize(16, 16));

        hboxLayout->addWidget(widget);

        doDiff = new QCheckBox(PcapFileImport);
        doDiff->setObjectName(QString::fromUtf8("doDiff"));
        doDiff->setEnabled(false);

        hboxLayout->addWidget(doDiff);


        vboxLayout->addLayout(hboxLayout);

        buttonBox = new QDialogButtonBox(PcapFileImport);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);


        retranslateUi(PcapFileImport);
        QObject::connect(buttonBox, SIGNAL(accepted()), PcapFileImport, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PcapFileImport, SLOT(reject()));
        QObject::connect(viaPdml, SIGNAL(toggled(bool)), doDiff, SLOT(setEnabled(bool)));
        QObject::connect(viaPdml, SIGNAL(toggled(bool)), doDiff, SLOT(setChecked(bool)));

        QMetaObject::connectSlotsByName(PcapFileImport);
    } // setupUi

    void retranslateUi(QDialog *PcapFileImport)
    {
        PcapFileImport->setWindowTitle(QApplication::translate("PcapFileImport", "PCAP import options", 0, QApplication::UnicodeUTF8));
        viaPdml->setText(QApplication::translate("PcapFileImport", "Intelligent Import (via PDML)", 0, QApplication::UnicodeUTF8));
        doDiff->setText(QApplication::translate("PcapFileImport", "Do a diff after import", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PcapFileImport: public Ui_PcapFileImport {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PCAPFILEIMPORT_H
