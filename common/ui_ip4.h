/********************************************************************************
** Form generated from reading UI file 'ip4.ui'
**
** Created: Mon Apr 28 09:08:34 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IP4_H
#define UI_IP4_H

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
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ip4
{
public:
    QGridLayout *gridLayout;
    QGridLayout *gridLayout1;
    QCheckBox *cbIpVersionOverride;
    QLineEdit *leIpVersion;
    QCheckBox *cbIpHdrLenOverride;
    QLineEdit *leIpHdrLen;
    QLabel *label_22;
    QLineEdit *leIpTos;
    QCheckBox *cbIpLengthOverride;
    QLineEdit *leIpLength;
    QLabel *label_24;
    QLineEdit *leIpId;
    QGridLayout *gridLayout2;
    QLabel *label_25;
    QLineEdit *leIpFragOfs;
    QCheckBox *cbIpFlagsDf;
    QCheckBox *cbIpFlagsMf;
    QLabel *label_26;
    QLineEdit *leIpTtl;
    QLineEdit *leIpProto;
    QCheckBox *cbIpCksumOverride;
    QLineEdit *leIpCksum;
    QCheckBox *cbIpProtocolOverride;
    QGroupBox *groupBox_7;
    QGridLayout *gridLayout3;
    QSpacerItem *spacerItem;
    QLabel *label_31;
    QLabel *label_23;
    QLabel *label_30;
    QLabel *label_20;
    QLineEdit *leIpSrcAddr;
    QComboBox *cmbIpSrcAddrMode;
    QLineEdit *leIpSrcAddrCount;
    QLineEdit *leIpSrcAddrMask;
    QLabel *label_21;
    QLineEdit *leIpDstAddr;
    QComboBox *cmbIpDstAddrMode;
    QLineEdit *leIpDstAddrCount;
    QLineEdit *leIpDstAddrMask;
    QHBoxLayout *hboxLayout;
    QLabel *label_29;
    QLineEdit *leIpOptions;
    QToolButton *tbIpOptionsEdit;
    QSpacerItem *spacerItem1;

    void setupUi(QWidget *ip4)
    {
        if (ip4->objectName().isEmpty())
            ip4->setObjectName(QString::fromUtf8("ip4"));
        ip4->resize(507, 308);
        gridLayout = new QGridLayout(ip4);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout1 = new QGridLayout();
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        cbIpVersionOverride = new QCheckBox(ip4);
        cbIpVersionOverride->setObjectName(QString::fromUtf8("cbIpVersionOverride"));

        gridLayout1->addWidget(cbIpVersionOverride, 0, 0, 1, 1);

        leIpVersion = new QLineEdit(ip4);
        leIpVersion->setObjectName(QString::fromUtf8("leIpVersion"));
        leIpVersion->setEnabled(false);

        gridLayout1->addWidget(leIpVersion, 0, 1, 1, 1);

        cbIpHdrLenOverride = new QCheckBox(ip4);
        cbIpHdrLenOverride->setObjectName(QString::fromUtf8("cbIpHdrLenOverride"));

        gridLayout1->addWidget(cbIpHdrLenOverride, 1, 0, 1, 1);

        leIpHdrLen = new QLineEdit(ip4);
        leIpHdrLen->setObjectName(QString::fromUtf8("leIpHdrLen"));
        leIpHdrLen->setEnabled(false);

        gridLayout1->addWidget(leIpHdrLen, 1, 1, 1, 1);

        label_22 = new QLabel(ip4);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        gridLayout1->addWidget(label_22, 2, 0, 1, 1);

        leIpTos = new QLineEdit(ip4);
        leIpTos->setObjectName(QString::fromUtf8("leIpTos"));

        gridLayout1->addWidget(leIpTos, 2, 1, 1, 1);

        cbIpLengthOverride = new QCheckBox(ip4);
        cbIpLengthOverride->setObjectName(QString::fromUtf8("cbIpLengthOverride"));

        gridLayout1->addWidget(cbIpLengthOverride, 3, 0, 1, 1);

        leIpLength = new QLineEdit(ip4);
        leIpLength->setObjectName(QString::fromUtf8("leIpLength"));
        leIpLength->setEnabled(false);

        gridLayout1->addWidget(leIpLength, 3, 1, 1, 1);

        label_24 = new QLabel(ip4);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        gridLayout1->addWidget(label_24, 4, 0, 1, 1);

        leIpId = new QLineEdit(ip4);
        leIpId->setObjectName(QString::fromUtf8("leIpId"));

        gridLayout1->addWidget(leIpId, 4, 1, 1, 1);


        gridLayout->addLayout(gridLayout1, 0, 0, 1, 1);

        gridLayout2 = new QGridLayout();
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        label_25 = new QLabel(ip4);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        gridLayout2->addWidget(label_25, 0, 0, 1, 1);

        leIpFragOfs = new QLineEdit(ip4);
        leIpFragOfs->setObjectName(QString::fromUtf8("leIpFragOfs"));

        gridLayout2->addWidget(leIpFragOfs, 0, 1, 1, 1);

        cbIpFlagsDf = new QCheckBox(ip4);
        cbIpFlagsDf->setObjectName(QString::fromUtf8("cbIpFlagsDf"));

        gridLayout2->addWidget(cbIpFlagsDf, 1, 0, 1, 1);

        cbIpFlagsMf = new QCheckBox(ip4);
        cbIpFlagsMf->setObjectName(QString::fromUtf8("cbIpFlagsMf"));

        gridLayout2->addWidget(cbIpFlagsMf, 1, 1, 1, 1);

        label_26 = new QLabel(ip4);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        gridLayout2->addWidget(label_26, 2, 0, 1, 1);

        leIpTtl = new QLineEdit(ip4);
        leIpTtl->setObjectName(QString::fromUtf8("leIpTtl"));

        gridLayout2->addWidget(leIpTtl, 2, 1, 1, 1);

        leIpProto = new QLineEdit(ip4);
        leIpProto->setObjectName(QString::fromUtf8("leIpProto"));
        leIpProto->setEnabled(false);

        gridLayout2->addWidget(leIpProto, 3, 1, 1, 1);

        cbIpCksumOverride = new QCheckBox(ip4);
        cbIpCksumOverride->setObjectName(QString::fromUtf8("cbIpCksumOverride"));

        gridLayout2->addWidget(cbIpCksumOverride, 4, 0, 1, 1);

        leIpCksum = new QLineEdit(ip4);
        leIpCksum->setObjectName(QString::fromUtf8("leIpCksum"));
        leIpCksum->setEnabled(false);

        gridLayout2->addWidget(leIpCksum, 4, 1, 1, 1);

        cbIpProtocolOverride = new QCheckBox(ip4);
        cbIpProtocolOverride->setObjectName(QString::fromUtf8("cbIpProtocolOverride"));

        gridLayout2->addWidget(cbIpProtocolOverride, 3, 0, 1, 1);


        gridLayout->addLayout(gridLayout2, 0, 2, 1, 1);

        groupBox_7 = new QGroupBox(ip4);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setFlat(false);
        gridLayout3 = new QGridLayout(groupBox_7);
        gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
        spacerItem = new QSpacerItem(101, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout3->addItem(spacerItem, 0, 0, 1, 2);

        label_31 = new QLabel(groupBox_7);
        label_31->setObjectName(QString::fromUtf8("label_31"));

        gridLayout3->addWidget(label_31, 0, 2, 1, 1);

        label_23 = new QLabel(groupBox_7);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        gridLayout3->addWidget(label_23, 0, 3, 1, 1);

        label_30 = new QLabel(groupBox_7);
        label_30->setObjectName(QString::fromUtf8("label_30"));

        gridLayout3->addWidget(label_30, 0, 4, 1, 1);

        label_20 = new QLabel(groupBox_7);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        gridLayout3->addWidget(label_20, 1, 0, 1, 1);

        leIpSrcAddr = new QLineEdit(groupBox_7);
        leIpSrcAddr->setObjectName(QString::fromUtf8("leIpSrcAddr"));
        leIpSrcAddr->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout3->addWidget(leIpSrcAddr, 1, 1, 1, 1);

        cmbIpSrcAddrMode = new QComboBox(groupBox_7);
        cmbIpSrcAddrMode->setObjectName(QString::fromUtf8("cmbIpSrcAddrMode"));

        gridLayout3->addWidget(cmbIpSrcAddrMode, 1, 2, 1, 1);

        leIpSrcAddrCount = new QLineEdit(groupBox_7);
        leIpSrcAddrCount->setObjectName(QString::fromUtf8("leIpSrcAddrCount"));
        leIpSrcAddrCount->setEnabled(false);

        gridLayout3->addWidget(leIpSrcAddrCount, 1, 3, 1, 1);

        leIpSrcAddrMask = new QLineEdit(groupBox_7);
        leIpSrcAddrMask->setObjectName(QString::fromUtf8("leIpSrcAddrMask"));
        leIpSrcAddrMask->setEnabled(false);

        gridLayout3->addWidget(leIpSrcAddrMask, 1, 4, 1, 1);

        label_21 = new QLabel(groupBox_7);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        gridLayout3->addWidget(label_21, 2, 0, 1, 1);

        leIpDstAddr = new QLineEdit(groupBox_7);
        leIpDstAddr->setObjectName(QString::fromUtf8("leIpDstAddr"));
        leIpDstAddr->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout3->addWidget(leIpDstAddr, 2, 1, 1, 1);

        cmbIpDstAddrMode = new QComboBox(groupBox_7);
        cmbIpDstAddrMode->setObjectName(QString::fromUtf8("cmbIpDstAddrMode"));

        gridLayout3->addWidget(cmbIpDstAddrMode, 2, 2, 1, 1);

        leIpDstAddrCount = new QLineEdit(groupBox_7);
        leIpDstAddrCount->setObjectName(QString::fromUtf8("leIpDstAddrCount"));
        leIpDstAddrCount->setEnabled(false);

        gridLayout3->addWidget(leIpDstAddrCount, 2, 3, 1, 1);

        leIpDstAddrMask = new QLineEdit(groupBox_7);
        leIpDstAddrMask->setObjectName(QString::fromUtf8("leIpDstAddrMask"));
        leIpDstAddrMask->setEnabled(false);

        gridLayout3->addWidget(leIpDstAddrMask, 2, 4, 1, 1);


        gridLayout->addWidget(groupBox_7, 1, 0, 1, 3);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        label_29 = new QLabel(ip4);
        label_29->setObjectName(QString::fromUtf8("label_29"));

        hboxLayout->addWidget(label_29);

        leIpOptions = new QLineEdit(ip4);
        leIpOptions->setObjectName(QString::fromUtf8("leIpOptions"));
        leIpOptions->setEnabled(false);

        hboxLayout->addWidget(leIpOptions);

        tbIpOptionsEdit = new QToolButton(ip4);
        tbIpOptionsEdit->setObjectName(QString::fromUtf8("tbIpOptionsEdit"));
        tbIpOptionsEdit->setEnabled(false);

        hboxLayout->addWidget(tbIpOptionsEdit);


        gridLayout->addLayout(hboxLayout, 2, 0, 1, 3);

        spacerItem1 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem1, 3, 1, 1, 1);

        QWidget::setTabOrder(cbIpVersionOverride, leIpVersion);
        QWidget::setTabOrder(leIpVersion, cbIpHdrLenOverride);
        QWidget::setTabOrder(cbIpHdrLenOverride, leIpHdrLen);
        QWidget::setTabOrder(leIpHdrLen, leIpTos);
        QWidget::setTabOrder(leIpTos, cbIpLengthOverride);
        QWidget::setTabOrder(cbIpLengthOverride, leIpLength);
        QWidget::setTabOrder(leIpLength, leIpId);
        QWidget::setTabOrder(leIpId, leIpFragOfs);
        QWidget::setTabOrder(leIpFragOfs, cbIpFlagsDf);
        QWidget::setTabOrder(cbIpFlagsDf, cbIpFlagsMf);
        QWidget::setTabOrder(cbIpFlagsMf, leIpTtl);
        QWidget::setTabOrder(leIpTtl, cbIpProtocolOverride);
        QWidget::setTabOrder(cbIpProtocolOverride, leIpProto);
        QWidget::setTabOrder(leIpProto, cbIpCksumOverride);
        QWidget::setTabOrder(cbIpCksumOverride, leIpCksum);
        QWidget::setTabOrder(leIpCksum, leIpSrcAddr);
        QWidget::setTabOrder(leIpSrcAddr, cmbIpSrcAddrMode);
        QWidget::setTabOrder(cmbIpSrcAddrMode, leIpSrcAddrCount);
        QWidget::setTabOrder(leIpSrcAddrCount, leIpSrcAddrMask);
        QWidget::setTabOrder(leIpSrcAddrMask, leIpDstAddr);
        QWidget::setTabOrder(leIpDstAddr, cmbIpDstAddrMode);
        QWidget::setTabOrder(cmbIpDstAddrMode, leIpDstAddrCount);
        QWidget::setTabOrder(leIpDstAddrCount, leIpDstAddrMask);
        QWidget::setTabOrder(leIpDstAddrMask, leIpOptions);
        QWidget::setTabOrder(leIpOptions, tbIpOptionsEdit);

        retranslateUi(ip4);
        QObject::connect(cbIpVersionOverride, SIGNAL(toggled(bool)), leIpVersion, SLOT(setEnabled(bool)));
        QObject::connect(cbIpHdrLenOverride, SIGNAL(toggled(bool)), leIpHdrLen, SLOT(setEnabled(bool)));
        QObject::connect(cbIpLengthOverride, SIGNAL(toggled(bool)), leIpLength, SLOT(setEnabled(bool)));
        QObject::connect(cbIpCksumOverride, SIGNAL(toggled(bool)), leIpCksum, SLOT(setEnabled(bool)));
        QObject::connect(cbIpProtocolOverride, SIGNAL(toggled(bool)), leIpProto, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(ip4);
    } // setupUi

    void retranslateUi(QWidget *ip4)
    {
        ip4->setWindowTitle(QApplication::translate("ip4", "Form", 0, QApplication::UnicodeUTF8));
        cbIpVersionOverride->setText(QApplication::translate("ip4", "Override Version", 0, QApplication::UnicodeUTF8));
        leIpVersion->setText(QString());
        cbIpHdrLenOverride->setText(QApplication::translate("ip4", "Override Header\n"
"Length (x4)", 0, QApplication::UnicodeUTF8));
        leIpHdrLen->setText(QString());
        label_22->setText(QApplication::translate("ip4", "TOS/DSCP", 0, QApplication::UnicodeUTF8));
        leIpTos->setInputMask(QApplication::translate("ip4", ">HH; ", 0, QApplication::UnicodeUTF8));
        leIpTos->setText(QString());
        cbIpLengthOverride->setText(QApplication::translate("ip4", "Override Length", 0, QApplication::UnicodeUTF8));
        label_24->setText(QApplication::translate("ip4", "Identification", 0, QApplication::UnicodeUTF8));
        leIpId->setInputMask(QApplication::translate("ip4", ">HH HH; ", 0, QApplication::UnicodeUTF8));
        label_25->setText(QApplication::translate("ip4", "Fragment Offset (x8)", 0, QApplication::UnicodeUTF8));
        cbIpFlagsDf->setText(QApplication::translate("ip4", "Don't Fragment", 0, QApplication::UnicodeUTF8));
        cbIpFlagsMf->setText(QApplication::translate("ip4", "More Fragments", 0, QApplication::UnicodeUTF8));
        label_26->setText(QApplication::translate("ip4", "Time To Live (TTL)", 0, QApplication::UnicodeUTF8));
        leIpTtl->setText(QString());
        leIpProto->setInputMask(QApplication::translate("ip4", ">HH; ", 0, QApplication::UnicodeUTF8));
        leIpProto->setText(QString());
        cbIpCksumOverride->setText(QApplication::translate("ip4", "Override Checksum", 0, QApplication::UnicodeUTF8));
        leIpCksum->setInputMask(QApplication::translate("ip4", ">HH HH; ", 0, QApplication::UnicodeUTF8));
        cbIpProtocolOverride->setText(QApplication::translate("ip4", "Override Protocol", 0, QApplication::UnicodeUTF8));
        groupBox_7->setTitle(QString());
        label_31->setText(QApplication::translate("ip4", "Mode", 0, QApplication::UnicodeUTF8));
        label_23->setText(QApplication::translate("ip4", "Count", 0, QApplication::UnicodeUTF8));
        label_30->setText(QApplication::translate("ip4", "Mask", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("ip4", "Source", 0, QApplication::UnicodeUTF8));
        leIpSrcAddr->setInputMask(QApplication::translate("ip4", "009.009.009.009; ", 0, QApplication::UnicodeUTF8));
        leIpSrcAddr->setText(QApplication::translate("ip4", "...", 0, QApplication::UnicodeUTF8));
        cmbIpSrcAddrMode->clear();
        cmbIpSrcAddrMode->insertItems(0, QStringList()
         << QApplication::translate("ip4", "Fixed", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ip4", "Increment Host", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ip4", "Decrement Host", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ip4", "Random Host", 0, QApplication::UnicodeUTF8)
        );
        leIpSrcAddrCount->setText(QString());
        leIpSrcAddrMask->setInputMask(QApplication::translate("ip4", "009.009.009.009; ", 0, QApplication::UnicodeUTF8));
        leIpSrcAddrMask->setText(QApplication::translate("ip4", "...", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("ip4", "Destination", 0, QApplication::UnicodeUTF8));
        leIpDstAddr->setInputMask(QApplication::translate("ip4", "000.000.000.000; ", 0, QApplication::UnicodeUTF8));
        leIpDstAddr->setText(QApplication::translate("ip4", "...", 0, QApplication::UnicodeUTF8));
        cmbIpDstAddrMode->clear();
        cmbIpDstAddrMode->insertItems(0, QStringList()
         << QApplication::translate("ip4", "Fixed", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ip4", "Increment Host", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ip4", "Decrement Host", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ip4", "Random Host", 0, QApplication::UnicodeUTF8)
        );
        leIpDstAddrCount->setText(QString());
        leIpDstAddrMask->setInputMask(QApplication::translate("ip4", "009.009.009.009; ", 0, QApplication::UnicodeUTF8));
        leIpDstAddrMask->setText(QApplication::translate("ip4", "...", 0, QApplication::UnicodeUTF8));
        label_29->setText(QApplication::translate("ip4", "Options", 0, QApplication::UnicodeUTF8));
        leIpOptions->setText(QApplication::translate("ip4", "TODO", 0, QApplication::UnicodeUTF8));
        tbIpOptionsEdit->setText(QApplication::translate("ip4", "...", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ip4: public Ui_ip4 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IP4_H
