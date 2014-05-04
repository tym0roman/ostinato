/********************************************************************************
** Form generated from reading UI file 'ip4.ui'
**
** Created: Fri May 2 19:51:02 2014
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
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ip4
{
public:
    QGridLayout *gridLayout;
    QGridLayout *gridLayout1;
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
    QGridLayout *gridLayout2;
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
    QGridLayout *gridLayout3;
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
    QGroupBox *Options;
    QGridLayout *gridLayout4;
    QComboBox *cmbIpOptMode;
    QLabel *lOptLen;
    QLabel *lOptType;
    QLabel *lDataPattern;
    QLineEdit *leIpOptData;
    QLineEdit *leIpOptLen;
    QLabel *lOptMode;
    QComboBox *cmbIpOptType;

    void setupUi(QWidget *ip4)
    {
        if (ip4->objectName().isEmpty())
            ip4->setObjectName(QString::fromUtf8("ip4"));
        ip4->setEnabled(true);
        ip4->resize(567, 421);
        gridLayout = new QGridLayout(ip4);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout1 = new QGridLayout();
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        label_25 = new QLabel(ip4);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        gridLayout1->addWidget(label_25, 0, 0, 1, 1);

        leIpFragOfs = new QLineEdit(ip4);
        leIpFragOfs->setObjectName(QString::fromUtf8("leIpFragOfs"));

        gridLayout1->addWidget(leIpFragOfs, 0, 1, 1, 1);

        cbIpFlagsDf = new QCheckBox(ip4);
        cbIpFlagsDf->setObjectName(QString::fromUtf8("cbIpFlagsDf"));

        gridLayout1->addWidget(cbIpFlagsDf, 1, 0, 1, 1);

        cbIpFlagsMf = new QCheckBox(ip4);
        cbIpFlagsMf->setObjectName(QString::fromUtf8("cbIpFlagsMf"));
        cbIpFlagsMf->setContextMenuPolicy(Qt::DefaultContextMenu);

        gridLayout1->addWidget(cbIpFlagsMf, 1, 1, 1, 1);

        label_26 = new QLabel(ip4);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        gridLayout1->addWidget(label_26, 2, 0, 1, 1);

        leIpTtl = new QLineEdit(ip4);
        leIpTtl->setObjectName(QString::fromUtf8("leIpTtl"));

        gridLayout1->addWidget(leIpTtl, 2, 1, 1, 1);

        leIpProto = new QLineEdit(ip4);
        leIpProto->setObjectName(QString::fromUtf8("leIpProto"));
        leIpProto->setEnabled(false);

        gridLayout1->addWidget(leIpProto, 3, 1, 1, 1);

        cbIpCksumOverride = new QCheckBox(ip4);
        cbIpCksumOverride->setObjectName(QString::fromUtf8("cbIpCksumOverride"));

        gridLayout1->addWidget(cbIpCksumOverride, 4, 0, 1, 1);

        leIpCksum = new QLineEdit(ip4);
        leIpCksum->setObjectName(QString::fromUtf8("leIpCksum"));
        leIpCksum->setEnabled(false);

        gridLayout1->addWidget(leIpCksum, 4, 1, 1, 1);

        cbIpProtocolOverride = new QCheckBox(ip4);
        cbIpProtocolOverride->setObjectName(QString::fromUtf8("cbIpProtocolOverride"));

        gridLayout1->addWidget(cbIpProtocolOverride, 3, 0, 1, 1);


        gridLayout->addLayout(gridLayout1, 0, 1, 1, 1);

        groupBox_7 = new QGroupBox(ip4);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setFlat(false);
        gridLayout2 = new QGridLayout(groupBox_7);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        spacerItem = new QSpacerItem(101, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout2->addItem(spacerItem, 0, 0, 1, 2);

        label_31 = new QLabel(groupBox_7);
        label_31->setObjectName(QString::fromUtf8("label_31"));

        gridLayout2->addWidget(label_31, 0, 2, 1, 1);

        label_23 = new QLabel(groupBox_7);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        gridLayout2->addWidget(label_23, 0, 3, 1, 1);

        label_30 = new QLabel(groupBox_7);
        label_30->setObjectName(QString::fromUtf8("label_30"));

        gridLayout2->addWidget(label_30, 0, 4, 1, 1);

        label_20 = new QLabel(groupBox_7);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        gridLayout2->addWidget(label_20, 1, 0, 1, 1);

        leIpSrcAddr = new QLineEdit(groupBox_7);
        leIpSrcAddr->setObjectName(QString::fromUtf8("leIpSrcAddr"));
        leIpSrcAddr->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout2->addWidget(leIpSrcAddr, 1, 1, 1, 1);

        cmbIpSrcAddrMode = new QComboBox(groupBox_7);
        cmbIpSrcAddrMode->setObjectName(QString::fromUtf8("cmbIpSrcAddrMode"));

        gridLayout2->addWidget(cmbIpSrcAddrMode, 1, 2, 1, 1);

        leIpSrcAddrCount = new QLineEdit(groupBox_7);
        leIpSrcAddrCount->setObjectName(QString::fromUtf8("leIpSrcAddrCount"));
        leIpSrcAddrCount->setEnabled(false);

        gridLayout2->addWidget(leIpSrcAddrCount, 1, 3, 1, 1);

        leIpSrcAddrMask = new QLineEdit(groupBox_7);
        leIpSrcAddrMask->setObjectName(QString::fromUtf8("leIpSrcAddrMask"));
        leIpSrcAddrMask->setEnabled(false);

        gridLayout2->addWidget(leIpSrcAddrMask, 1, 4, 1, 1);

        label_21 = new QLabel(groupBox_7);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        gridLayout2->addWidget(label_21, 2, 0, 1, 1);

        leIpDstAddr = new QLineEdit(groupBox_7);
        leIpDstAddr->setObjectName(QString::fromUtf8("leIpDstAddr"));
        leIpDstAddr->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout2->addWidget(leIpDstAddr, 2, 1, 1, 1);

        cmbIpDstAddrMode = new QComboBox(groupBox_7);
        cmbIpDstAddrMode->setObjectName(QString::fromUtf8("cmbIpDstAddrMode"));

        gridLayout2->addWidget(cmbIpDstAddrMode, 2, 2, 1, 1);

        leIpDstAddrCount = new QLineEdit(groupBox_7);
        leIpDstAddrCount->setObjectName(QString::fromUtf8("leIpDstAddrCount"));
        leIpDstAddrCount->setEnabled(false);

        gridLayout2->addWidget(leIpDstAddrCount, 2, 3, 1, 1);

        leIpDstAddrMask = new QLineEdit(groupBox_7);
        leIpDstAddrMask->setObjectName(QString::fromUtf8("leIpDstAddrMask"));
        leIpDstAddrMask->setEnabled(false);

        gridLayout2->addWidget(leIpDstAddrMask, 2, 4, 1, 1);


        gridLayout->addWidget(groupBox_7, 1, 0, 1, 2);

        gridLayout3 = new QGridLayout();
        gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
        gridLayout3->setHorizontalSpacing(6);
        cbIpVersionOverride = new QCheckBox(ip4);
        cbIpVersionOverride->setObjectName(QString::fromUtf8("cbIpVersionOverride"));
        cbIpVersionOverride->setTristate(false);

        gridLayout3->addWidget(cbIpVersionOverride, 0, 0, 1, 1);

        leIpVersion = new QLineEdit(ip4);
        leIpVersion->setObjectName(QString::fromUtf8("leIpVersion"));
        leIpVersion->setEnabled(false);

        gridLayout3->addWidget(leIpVersion, 0, 1, 1, 1);

        cbIpHdrLenOverride = new QCheckBox(ip4);
        cbIpHdrLenOverride->setObjectName(QString::fromUtf8("cbIpHdrLenOverride"));

        gridLayout3->addWidget(cbIpHdrLenOverride, 1, 0, 1, 1);

        leIpHdrLen = new QLineEdit(ip4);
        leIpHdrLen->setObjectName(QString::fromUtf8("leIpHdrLen"));
        leIpHdrLen->setEnabled(false);

        gridLayout3->addWidget(leIpHdrLen, 1, 1, 1, 1);

        label_22 = new QLabel(ip4);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        gridLayout3->addWidget(label_22, 2, 0, 1, 1);

        leIpTos = new QLineEdit(ip4);
        leIpTos->setObjectName(QString::fromUtf8("leIpTos"));

        gridLayout3->addWidget(leIpTos, 2, 1, 1, 1);

        cbIpLengthOverride = new QCheckBox(ip4);
        cbIpLengthOverride->setObjectName(QString::fromUtf8("cbIpLengthOverride"));

        gridLayout3->addWidget(cbIpLengthOverride, 3, 0, 1, 1);

        leIpLength = new QLineEdit(ip4);
        leIpLength->setObjectName(QString::fromUtf8("leIpLength"));
        leIpLength->setEnabled(false);

        gridLayout3->addWidget(leIpLength, 3, 1, 1, 1);

        label_24 = new QLabel(ip4);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        gridLayout3->addWidget(label_24, 4, 0, 1, 1);

        leIpId = new QLineEdit(ip4);
        leIpId->setObjectName(QString::fromUtf8("leIpId"));

        gridLayout3->addWidget(leIpId, 4, 1, 1, 1);


        gridLayout->addLayout(gridLayout3, 0, 0, 1, 1);

        Options = new QGroupBox(ip4);
        Options->setObjectName(QString::fromUtf8("Options"));
        Options->setEnabled(true);
        Options->setCheckable(false);
        Options->setChecked(false);
        gridLayout4 = new QGridLayout(Options);
        gridLayout4->setObjectName(QString::fromUtf8("gridLayout4"));
        cmbIpOptMode = new QComboBox(Options);
        cmbIpOptMode->setObjectName(QString::fromUtf8("cmbIpOptMode"));
        cmbIpOptMode->setEnabled(false);
        cmbIpOptMode->setEditable(false);

        gridLayout4->addWidget(cmbIpOptMode, 2, 4, 1, 1);

        lOptLen = new QLabel(Options);
        lOptLen->setObjectName(QString::fromUtf8("lOptLen"));

        gridLayout4->addWidget(lOptLen, 0, 3, 1, 1);

        lOptType = new QLabel(Options);
        lOptType->setObjectName(QString::fromUtf8("lOptType"));

        gridLayout4->addWidget(lOptType, 0, 0, 1, 1);

        lDataPattern = new QLabel(Options);
        lDataPattern->setObjectName(QString::fromUtf8("lDataPattern"));

        gridLayout4->addWidget(lDataPattern, 2, 0, 1, 1);

        leIpOptData = new QLineEdit(Options);
        leIpOptData->setObjectName(QString::fromUtf8("leIpOptData"));
        leIpOptData->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(leIpOptData->sizePolicy().hasHeightForWidth());
        leIpOptData->setSizePolicy(sizePolicy);
        leIpOptData->setMouseTracking(true);
        leIpOptData->setFocusPolicy(Qt::StrongFocus);
        leIpOptData->setAcceptDrops(true);
        leIpOptData->setCursorPosition(2);

        gridLayout4->addWidget(leIpOptData, 2, 1, 1, 1);

        leIpOptLen = new QLineEdit(Options);
        leIpOptLen->setObjectName(QString::fromUtf8("leIpOptLen"));
        leIpOptLen->setEnabled(false);
        leIpOptLen->setInputMethodHints(Qt::ImhDigitsOnly);
        leIpOptLen->setMaxLength(2);
        leIpOptLen->setCursorPosition(0);

        gridLayout4->addWidget(leIpOptLen, 0, 4, 1, 1);

        lOptMode = new QLabel(Options);
        lOptMode->setObjectName(QString::fromUtf8("lOptMode"));

        gridLayout4->addWidget(lOptMode, 2, 3, 1, 1);

        cmbIpOptType = new QComboBox(Options);
        cmbIpOptType->setObjectName(QString::fromUtf8("cmbIpOptType"));
        cmbIpOptType->setEnabled(false);

        gridLayout4->addWidget(cmbIpOptType, 0, 1, 1, 1);


        gridLayout->addWidget(Options, 2, 0, 2, 2);

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

        retranslateUi(ip4);
        QObject::connect(cbIpVersionOverride, SIGNAL(toggled(bool)), leIpVersion, SLOT(setEnabled(bool)));
        QObject::connect(cbIpHdrLenOverride, SIGNAL(toggled(bool)), leIpHdrLen, SLOT(setEnabled(bool)));
        QObject::connect(cbIpLengthOverride, SIGNAL(toggled(bool)), leIpLength, SLOT(setEnabled(bool)));
        QObject::connect(cbIpCksumOverride, SIGNAL(toggled(bool)), leIpCksum, SLOT(setEnabled(bool)));
        QObject::connect(cbIpProtocolOverride, SIGNAL(toggled(bool)), leIpProto, SLOT(setEnabled(bool)));
        QObject::connect(cbIpHdrLenOverride, SIGNAL(toggled(bool)), leIpOptData, SLOT(setEnabled(bool)));
        QObject::connect(cbIpHdrLenOverride, SIGNAL(toggled(bool)), leIpOptLen, SLOT(setEnabled(bool)));
        QObject::connect(cbIpHdrLenOverride, SIGNAL(toggled(bool)), cmbIpOptMode, SLOT(setEnabled(bool)));
        QObject::connect(cbIpHdrLenOverride, SIGNAL(toggled(bool)), cmbIpOptType, SLOT(setEnabled(bool)));

        cmbIpOptMode->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ip4);
    } // setupUi

    void retranslateUi(QWidget *ip4)
    {
        ip4->setWindowTitle(QApplication::translate("ip4", "Form", 0, QApplication::UnicodeUTF8));
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
        Options->setTitle(QApplication::translate("ip4", "Options", 0, QApplication::UnicodeUTF8));
        cmbIpOptMode->clear();
        cmbIpOptMode->insertItems(0, QStringList()
         << QApplication::translate("ip4", "Fixed", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ip4", "Increment", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ip4", "Decrement", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ip4", "Random", 0, QApplication::UnicodeUTF8)
        );
        lOptLen->setText(QApplication::translate("ip4", "Length", 0, QApplication::UnicodeUTF8));
        lOptType->setText(QApplication::translate("ip4", "Type", 0, QApplication::UnicodeUTF8));
        lDataPattern->setText(QApplication::translate("ip4", "Data Pattern", 0, QApplication::UnicodeUTF8));
        leIpOptData->setInputMask(QApplication::translate("ip4", ">HH; ", 0, QApplication::UnicodeUTF8));
        leIpOptLen->setText(QString());
        lOptMode->setText(QApplication::translate("ip4", "Mode", 0, QApplication::UnicodeUTF8));
        cmbIpOptType->clear();
        cmbIpOptType->insertItems(0, QStringList()
         << QApplication::translate("ip4", "EOOL [00]", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ip4", "NOP [01]", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ip4", "SEC [82]", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ip4", "LSR [83]", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ip4", "TS [44]", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ip4", "E-SEC [85]", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ip4", "CIPSO [86]", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ip4", "RR [07]", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ip4", "SID [88]", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ip4", "SSR [89]", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ip4", "ZSU [0A]", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ip4", "MTUP [0B]", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ip4", "MTUR [0C]", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ip4", "FINN [CD]", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ip4", "VISA [8E]", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ip4", "ENCODE [0F]", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ip4", "IMITD [90]", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ip4", "EIP [91]", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ip4", "TR [52]", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ip4", "ADDEXT [93]", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ip4", "RTRALT [94]", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ip4", "SDB [95]", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ip4", "Unassigned [96]", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ip4", "DPS [97]", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ip4", "UMP [98]", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ip4", "QS [19]", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ip4", "EXP [1E]", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ip4", "EXP [5E]", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ip4", "EXP [9E]", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ip4", "EXP [DE]", 0, QApplication::UnicodeUTF8)
        );
    } // retranslateUi

};

namespace Ui {
    class ip4: public Ui_ip4 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IP4_H
