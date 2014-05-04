/********************************************************************************
** Form generated from reading UI file 'udp.ui'
**
** Created: Mon Apr 28 09:08:34 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UDP_H
#define UI_UDP_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_udp
{
public:
    QGridLayout *gridLayout;
    QGridLayout *gridLayout1;
    QCheckBox *cbUdpSrcPortOverride;
    QLineEdit *leUdpSrcPort;
    QCheckBox *cbUdpDstPortOverride;
    QLineEdit *leUdpDstPort;
    QCheckBox *cbUdpLengthOverride;
    QLineEdit *leUdpLength;
    QCheckBox *cbUdpCksumOverride;
    QLineEdit *leUdpCksum;
    QSpacerItem *spacerItem;
    QSpacerItem *spacerItem1;

    void setupUi(QWidget *udp)
    {
        if (udp->objectName().isEmpty())
            udp->setObjectName(QString::fromUtf8("udp"));
        udp->resize(246, 144);
        gridLayout = new QGridLayout(udp);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout1 = new QGridLayout();
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        cbUdpSrcPortOverride = new QCheckBox(udp);
        cbUdpSrcPortOverride->setObjectName(QString::fromUtf8("cbUdpSrcPortOverride"));

        gridLayout1->addWidget(cbUdpSrcPortOverride, 0, 0, 1, 1);

        leUdpSrcPort = new QLineEdit(udp);
        leUdpSrcPort->setObjectName(QString::fromUtf8("leUdpSrcPort"));
        leUdpSrcPort->setEnabled(false);

        gridLayout1->addWidget(leUdpSrcPort, 0, 1, 1, 1);

        cbUdpDstPortOverride = new QCheckBox(udp);
        cbUdpDstPortOverride->setObjectName(QString::fromUtf8("cbUdpDstPortOverride"));

        gridLayout1->addWidget(cbUdpDstPortOverride, 1, 0, 1, 1);

        leUdpDstPort = new QLineEdit(udp);
        leUdpDstPort->setObjectName(QString::fromUtf8("leUdpDstPort"));
        leUdpDstPort->setEnabled(false);

        gridLayout1->addWidget(leUdpDstPort, 1, 1, 1, 1);

        cbUdpLengthOverride = new QCheckBox(udp);
        cbUdpLengthOverride->setObjectName(QString::fromUtf8("cbUdpLengthOverride"));

        gridLayout1->addWidget(cbUdpLengthOverride, 2, 0, 1, 1);

        leUdpLength = new QLineEdit(udp);
        leUdpLength->setObjectName(QString::fromUtf8("leUdpLength"));
        leUdpLength->setEnabled(false);

        gridLayout1->addWidget(leUdpLength, 2, 1, 1, 1);

        cbUdpCksumOverride = new QCheckBox(udp);
        cbUdpCksumOverride->setObjectName(QString::fromUtf8("cbUdpCksumOverride"));

        gridLayout1->addWidget(cbUdpCksumOverride, 3, 0, 1, 1);

        leUdpCksum = new QLineEdit(udp);
        leUdpCksum->setObjectName(QString::fromUtf8("leUdpCksum"));
        leUdpCksum->setEnabled(false);

        gridLayout1->addWidget(leUdpCksum, 3, 1, 1, 1);


        gridLayout->addLayout(gridLayout1, 0, 0, 1, 1);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 0, 1, 1, 1);

        spacerItem1 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem1, 1, 0, 1, 1);


        retranslateUi(udp);
        QObject::connect(cbUdpLengthOverride, SIGNAL(toggled(bool)), leUdpLength, SLOT(setEnabled(bool)));
        QObject::connect(cbUdpCksumOverride, SIGNAL(toggled(bool)), leUdpCksum, SLOT(setEnabled(bool)));
        QObject::connect(cbUdpDstPortOverride, SIGNAL(toggled(bool)), leUdpDstPort, SLOT(setEnabled(bool)));
        QObject::connect(cbUdpSrcPortOverride, SIGNAL(toggled(bool)), leUdpSrcPort, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(udp);
    } // setupUi

    void retranslateUi(QWidget *udp)
    {
        udp->setWindowTitle(QApplication::translate("udp", "Form", 0, QApplication::UnicodeUTF8));
        cbUdpSrcPortOverride->setText(QApplication::translate("udp", "Override Source Port", 0, QApplication::UnicodeUTF8));
        cbUdpDstPortOverride->setText(QApplication::translate("udp", "Override Destination Port", 0, QApplication::UnicodeUTF8));
        cbUdpLengthOverride->setText(QApplication::translate("udp", "Override Length", 0, QApplication::UnicodeUTF8));
        cbUdpCksumOverride->setText(QApplication::translate("udp", "Override Checksum", 0, QApplication::UnicodeUTF8));
        leUdpCksum->setInputMask(QApplication::translate("udp", ">HH HH; ", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class udp: public Ui_udp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UDP_H
