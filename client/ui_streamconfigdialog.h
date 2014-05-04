/********************************************************************************
** Form generated from reading UI file 'streamconfigdialog.ui'
**
** Created: Thu May 1 19:30:28 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STREAMCONFIGDIALOG_H
#define UI_STREAMCONFIGDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListView>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSplitter>
#include <QtGui/QTabWidget>
#include <QtGui/QToolBox>
#include <QtGui/QToolButton>
#include <QtGui/QTreeView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "dumpview.h"

QT_BEGIN_NAMESPACE

class Ui_StreamConfigDialog
{
public:
    QGridLayout *gridLayout;
    QTabWidget *twTopLevel;
    QWidget *packetConfigTab;
    QGridLayout *gridLayout1;
    QSpacerItem *spacerItem;
    QGroupBox *gbFrameLength;
    QGridLayout *gridLayout2;
    QComboBox *cmbPktLenMode;
    QLabel *label_18;
    QLineEdit *lePktLenMin;
    QLineEdit *lePktLen;
    QLabel *label_19;
    QLineEdit *lePktLenMax;
    QToolBox *tbSelectProtocols;
    QWidget *page;
    QGridLayout *gridLayout3;
    QGroupBox *gbL1Proto;
    QVBoxLayout *vboxLayout;
    QRadioButton *rbL1None;
    QRadioButton *rbL1Mac;
    QRadioButton *rbL1Other;
    QGroupBox *gbFrameType;
    QVBoxLayout *vboxLayout1;
    QRadioButton *rbFtNone;
    QRadioButton *rbFtEthernet2;
    QRadioButton *rbFt802Dot3Raw;
    QRadioButton *rbFt802Dot3Llc;
    QRadioButton *rbFtLlcSnap;
    QRadioButton *rbFtOther;
    QGroupBox *gbL3Proto;
    QGridLayout *gridLayout4;
    QRadioButton *rbL3None;
    QRadioButton *rbL3Arp;
    QRadioButton *rbL3Ipv4;
    QRadioButton *rbL3Ipv6;
    QRadioButton *rbL3Ip6over4;
    QRadioButton *rbL3Ip4over6;
    QRadioButton *rbL3Ip4over4;
    QRadioButton *rbL3Ip6over6;
    QRadioButton *rbL3Other;
    QGroupBox *gbL5Proto;
    QVBoxLayout *vboxLayout2;
    QRadioButton *rbL5None;
    QRadioButton *rbL5Text;
    QRadioButton *rbL5Other;
    QGroupBox *gbVlan;
    QVBoxLayout *vboxLayout3;
    QRadioButton *rbVlanNone;
    QRadioButton *rbVlanSingle;
    QRadioButton *rbVlanDouble;
    QGroupBox *gbL4Proto;
    QGridLayout *gridLayout5;
    QRadioButton *rbL4None;
    QRadioButton *rbL4Icmp;
    QRadioButton *rbL4Igmp;
    QRadioButton *rbL4Tcp;
    QRadioButton *rbL4Udp;
    QRadioButton *rbL4Other;
    QRadioButton *rbL4Mld;
    QGroupBox *gbPayloadProto;
    QVBoxLayout *vboxLayout4;
    QRadioButton *rbPayloadNone;
    QRadioButton *rbPayloadPattern;
    QRadioButton *rbPayloadHexDump;
    QRadioButton *rbPayloadOther;
    QWidget *page_2;
    QHBoxLayout *hboxLayout;
    QVBoxLayout *vboxLayout5;
    QLabel *label;
    QListView *lvAllProtocols;
    QVBoxLayout *vboxLayout6;
    QSpacerItem *spacerItem1;
    QToolButton *tbAdd;
    QSpacerItem *spacerItem2;
    QVBoxLayout *vboxLayout7;
    QLabel *label_2;
    QHBoxLayout *hboxLayout1;
    QToolButton *tbUp;
    QToolButton *tbDown;
    QToolButton *tbDelete;
    QSpacerItem *spacerItem3;
    QListView *lvSelectedProtocols;
    QWidget *tab_2;
    QHBoxLayout *hboxLayout2;
    QToolBox *tbProtocolData;
    QWidget *streamControlTab;
    QGridLayout *gridLayout6;
    QGroupBox *groupBox_3;
    QVBoxLayout *vboxLayout8;
    QRadioButton *rbSendPackets;
    QRadioButton *rbSendBursts;
    QGroupBox *groupBox_13;
    QVBoxLayout *vboxLayout9;
    QLabel *label_7;
    QLineEdit *leNumPackets;
    QLabel *label_13;
    QLineEdit *leNumBursts;
    QLabel *label_12;
    QLineEdit *lePacketsPerBurst;
    QGroupBox *groupBox_14;
    QVBoxLayout *vboxLayout10;
    QRadioButton *rbPacketsPerSec;
    QLineEdit *lePacketsPerSec;
    QRadioButton *rbBurstsPerSec;
    QLineEdit *leBurstsPerSec;
    QRadioButton *rbBitsPerSec;
    QLineEdit *leBitsPerSec;
    QGroupBox *nextWhat;
    QVBoxLayout *vboxLayout11;
    QRadioButton *rbActionStop;
    QRadioButton *rbActionGotoNext;
    QRadioButton *rbActionGotoStream;
    QLineEdit *leStreamId;
    QSpacerItem *spacerItem4;
    QGroupBox *groupBox_5;
    QVBoxLayout *vboxLayout12;
    QRadioButton *rbModeFixed;
    QRadioButton *rbModeContinuous;
    QGroupBox *groupBox_12;
    QGridLayout *gridLayout7;
    QLabel *label_45;
    QLabel *label_14;
    QLineEdit *leGapIsg;
    QLabel *label_42;
    QLineEdit *leGapIbg;
    QLabel *label_15;
    QLineEdit *leGapIpg;
    QSpacerItem *spacerItem5;
    QWidget *packetViewTab;
    QHBoxLayout *hboxLayout3;
    QSplitter *splitter;
    QTreeView *tvPacketTree;
    DumpView *vwPacketDump;
    QHBoxLayout *hboxLayout4;
    QPushButton *pbPrev;
    QPushButton *pbNext;
    QSpacerItem *spacerItem6;
    QPushButton *pbOk;
    QPushButton *pbCancel;

    void setupUi(QDialog *StreamConfigDialog)
    {
        if (StreamConfigDialog->objectName().isEmpty())
            StreamConfigDialog->setObjectName(QString::fromUtf8("StreamConfigDialog"));
        StreamConfigDialog->setWindowModality(Qt::ApplicationModal);
        StreamConfigDialog->resize(664, 507);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(StreamConfigDialog->sizePolicy().hasHeightForWidth());
        StreamConfigDialog->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/stream_edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        StreamConfigDialog->setWindowIcon(icon);
        StreamConfigDialog->setModal(true);
        gridLayout = new QGridLayout(StreamConfigDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        twTopLevel = new QTabWidget(StreamConfigDialog);
        twTopLevel->setObjectName(QString::fromUtf8("twTopLevel"));
        packetConfigTab = new QWidget();
        packetConfigTab->setObjectName(QString::fromUtf8("packetConfigTab"));
        gridLayout1 = new QGridLayout(packetConfigTab);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        spacerItem = new QSpacerItem(241, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(spacerItem, 0, 0, 1, 1);

        gbFrameLength = new QGroupBox(packetConfigTab);
        gbFrameLength->setObjectName(QString::fromUtf8("gbFrameLength"));
        gridLayout2 = new QGridLayout(gbFrameLength);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        cmbPktLenMode = new QComboBox(gbFrameLength);
        cmbPktLenMode->setObjectName(QString::fromUtf8("cmbPktLenMode"));

        gridLayout2->addWidget(cmbPktLenMode, 0, 0, 1, 1);

        label_18 = new QLabel(gbFrameLength);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        gridLayout2->addWidget(label_18, 0, 1, 1, 1);

        lePktLenMin = new QLineEdit(gbFrameLength);
        lePktLenMin->setObjectName(QString::fromUtf8("lePktLenMin"));
        lePktLenMin->setEnabled(false);
        lePktLenMin->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout2->addWidget(lePktLenMin, 0, 2, 1, 1);

        lePktLen = new QLineEdit(gbFrameLength);
        lePktLen->setObjectName(QString::fromUtf8("lePktLen"));
        lePktLen->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout2->addWidget(lePktLen, 1, 0, 1, 1);

        label_19 = new QLabel(gbFrameLength);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout2->addWidget(label_19, 1, 1, 1, 1);

        lePktLenMax = new QLineEdit(gbFrameLength);
        lePktLenMax->setObjectName(QString::fromUtf8("lePktLenMax"));
        lePktLenMax->setEnabled(false);
        lePktLenMax->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout2->addWidget(lePktLenMax, 1, 2, 1, 1);


        gridLayout1->addWidget(gbFrameLength, 0, 1, 1, 1);

        tbSelectProtocols = new QToolBox(packetConfigTab);
        tbSelectProtocols->setObjectName(QString::fromUtf8("tbSelectProtocols"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        page->setGeometry(QRect(0, 0, 765, 280));
        gridLayout3 = new QGridLayout(page);
        gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
        gbL1Proto = new QGroupBox(page);
        gbL1Proto->setObjectName(QString::fromUtf8("gbL1Proto"));
        vboxLayout = new QVBoxLayout(gbL1Proto);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        rbL1None = new QRadioButton(gbL1Proto);
        rbL1None->setObjectName(QString::fromUtf8("rbL1None"));
        rbL1None->setChecked(true);

        vboxLayout->addWidget(rbL1None);

        rbL1Mac = new QRadioButton(gbL1Proto);
        rbL1Mac->setObjectName(QString::fromUtf8("rbL1Mac"));
        rbL1Mac->setChecked(false);

        vboxLayout->addWidget(rbL1Mac);

        rbL1Other = new QRadioButton(gbL1Proto);
        rbL1Other->setObjectName(QString::fromUtf8("rbL1Other"));
        rbL1Other->setEnabled(false);

        vboxLayout->addWidget(rbL1Other);


        gridLayout3->addWidget(gbL1Proto, 0, 0, 1, 1);

        gbFrameType = new QGroupBox(page);
        gbFrameType->setObjectName(QString::fromUtf8("gbFrameType"));
        gbFrameType->setEnabled(true);
        vboxLayout1 = new QVBoxLayout(gbFrameType);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        rbFtNone = new QRadioButton(gbFrameType);
        rbFtNone->setObjectName(QString::fromUtf8("rbFtNone"));
        rbFtNone->setChecked(true);

        vboxLayout1->addWidget(rbFtNone);

        rbFtEthernet2 = new QRadioButton(gbFrameType);
        rbFtEthernet2->setObjectName(QString::fromUtf8("rbFtEthernet2"));
        rbFtEthernet2->setChecked(false);

        vboxLayout1->addWidget(rbFtEthernet2);

        rbFt802Dot3Raw = new QRadioButton(gbFrameType);
        rbFt802Dot3Raw->setObjectName(QString::fromUtf8("rbFt802Dot3Raw"));

        vboxLayout1->addWidget(rbFt802Dot3Raw);

        rbFt802Dot3Llc = new QRadioButton(gbFrameType);
        rbFt802Dot3Llc->setObjectName(QString::fromUtf8("rbFt802Dot3Llc"));
        rbFt802Dot3Llc->setChecked(false);

        vboxLayout1->addWidget(rbFt802Dot3Llc);

        rbFtLlcSnap = new QRadioButton(gbFrameType);
        rbFtLlcSnap->setObjectName(QString::fromUtf8("rbFtLlcSnap"));

        vboxLayout1->addWidget(rbFtLlcSnap);

        rbFtOther = new QRadioButton(gbFrameType);
        rbFtOther->setObjectName(QString::fromUtf8("rbFtOther"));
        rbFtOther->setEnabled(false);

        vboxLayout1->addWidget(rbFtOther);


        gridLayout3->addWidget(gbFrameType, 0, 1, 2, 1);

        gbL3Proto = new QGroupBox(page);
        gbL3Proto->setObjectName(QString::fromUtf8("gbL3Proto"));
        gbL3Proto->setEnabled(true);
        gridLayout4 = new QGridLayout(gbL3Proto);
        gridLayout4->setObjectName(QString::fromUtf8("gridLayout4"));
        rbL3None = new QRadioButton(gbL3Proto);
        rbL3None->setObjectName(QString::fromUtf8("rbL3None"));
        rbL3None->setChecked(true);

        gridLayout4->addWidget(rbL3None, 0, 0, 1, 1);

        rbL3Arp = new QRadioButton(gbL3Proto);
        rbL3Arp->setObjectName(QString::fromUtf8("rbL3Arp"));
        rbL3Arp->setEnabled(false);

        gridLayout4->addWidget(rbL3Arp, 0, 1, 1, 1);

        rbL3Ipv4 = new QRadioButton(gbL3Proto);
        rbL3Ipv4->setObjectName(QString::fromUtf8("rbL3Ipv4"));
        rbL3Ipv4->setEnabled(false);
        rbL3Ipv4->setChecked(false);

        gridLayout4->addWidget(rbL3Ipv4, 0, 2, 1, 1);

        rbL3Ipv6 = new QRadioButton(gbL3Proto);
        rbL3Ipv6->setObjectName(QString::fromUtf8("rbL3Ipv6"));
        rbL3Ipv6->setEnabled(false);

        gridLayout4->addWidget(rbL3Ipv6, 1, 0, 1, 1);

        rbL3Ip6over4 = new QRadioButton(gbL3Proto);
        rbL3Ip6over4->setObjectName(QString::fromUtf8("rbL3Ip6over4"));
        rbL3Ip6over4->setEnabled(false);
        rbL3Ip6over4->setChecked(false);

        gridLayout4->addWidget(rbL3Ip6over4, 1, 1, 1, 1);

        rbL3Ip4over6 = new QRadioButton(gbL3Proto);
        rbL3Ip4over6->setObjectName(QString::fromUtf8("rbL3Ip4over6"));
        rbL3Ip4over6->setEnabled(false);
        rbL3Ip4over6->setChecked(false);

        gridLayout4->addWidget(rbL3Ip4over6, 1, 2, 1, 1);

        rbL3Ip4over4 = new QRadioButton(gbL3Proto);
        rbL3Ip4over4->setObjectName(QString::fromUtf8("rbL3Ip4over4"));
        rbL3Ip4over4->setEnabled(false);
        rbL3Ip4over4->setChecked(false);

        gridLayout4->addWidget(rbL3Ip4over4, 2, 0, 1, 1);

        rbL3Ip6over6 = new QRadioButton(gbL3Proto);
        rbL3Ip6over6->setObjectName(QString::fromUtf8("rbL3Ip6over6"));
        rbL3Ip6over6->setEnabled(false);
        rbL3Ip6over6->setChecked(false);

        gridLayout4->addWidget(rbL3Ip6over6, 2, 1, 1, 1);

        rbL3Other = new QRadioButton(gbL3Proto);
        rbL3Other->setObjectName(QString::fromUtf8("rbL3Other"));
        rbL3Other->setEnabled(false);

        gridLayout4->addWidget(rbL3Other, 2, 2, 1, 1);


        gridLayout3->addWidget(gbL3Proto, 0, 2, 1, 1);

        gbL5Proto = new QGroupBox(page);
        gbL5Proto->setObjectName(QString::fromUtf8("gbL5Proto"));
        gbL5Proto->setEnabled(true);
        vboxLayout2 = new QVBoxLayout(gbL5Proto);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        rbL5None = new QRadioButton(gbL5Proto);
        rbL5None->setObjectName(QString::fromUtf8("rbL5None"));
        rbL5None->setChecked(true);

        vboxLayout2->addWidget(rbL5None);

        rbL5Text = new QRadioButton(gbL5Proto);
        rbL5Text->setObjectName(QString::fromUtf8("rbL5Text"));
        rbL5Text->setEnabled(false);

        vboxLayout2->addWidget(rbL5Text);

        rbL5Other = new QRadioButton(gbL5Proto);
        rbL5Other->setObjectName(QString::fromUtf8("rbL5Other"));
        rbL5Other->setEnabled(false);

        vboxLayout2->addWidget(rbL5Other);


        gridLayout3->addWidget(gbL5Proto, 0, 3, 1, 1);

        gbVlan = new QGroupBox(page);
        gbVlan->setObjectName(QString::fromUtf8("gbVlan"));
        gbVlan->setEnabled(true);
        gbVlan->setCheckable(false);
        gbVlan->setChecked(false);
        vboxLayout3 = new QVBoxLayout(gbVlan);
        vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));
        rbVlanNone = new QRadioButton(gbVlan);
        rbVlanNone->setObjectName(QString::fromUtf8("rbVlanNone"));
        rbVlanNone->setChecked(true);

        vboxLayout3->addWidget(rbVlanNone);

        rbVlanSingle = new QRadioButton(gbVlan);
        rbVlanSingle->setObjectName(QString::fromUtf8("rbVlanSingle"));

        vboxLayout3->addWidget(rbVlanSingle);

        rbVlanDouble = new QRadioButton(gbVlan);
        rbVlanDouble->setObjectName(QString::fromUtf8("rbVlanDouble"));

        vboxLayout3->addWidget(rbVlanDouble);


        gridLayout3->addWidget(gbVlan, 1, 0, 1, 1);

        gbL4Proto = new QGroupBox(page);
        gbL4Proto->setObjectName(QString::fromUtf8("gbL4Proto"));
        gbL4Proto->setEnabled(true);
        gridLayout5 = new QGridLayout(gbL4Proto);
        gridLayout5->setObjectName(QString::fromUtf8("gridLayout5"));
        rbL4None = new QRadioButton(gbL4Proto);
        rbL4None->setObjectName(QString::fromUtf8("rbL4None"));
        rbL4None->setChecked(true);

        gridLayout5->addWidget(rbL4None, 0, 0, 1, 1);

        rbL4Icmp = new QRadioButton(gbL4Proto);
        rbL4Icmp->setObjectName(QString::fromUtf8("rbL4Icmp"));
        rbL4Icmp->setEnabled(false);

        gridLayout5->addWidget(rbL4Icmp, 0, 1, 1, 1);

        rbL4Igmp = new QRadioButton(gbL4Proto);
        rbL4Igmp->setObjectName(QString::fromUtf8("rbL4Igmp"));
        rbL4Igmp->setEnabled(false);

        gridLayout5->addWidget(rbL4Igmp, 0, 2, 1, 1);

        rbL4Tcp = new QRadioButton(gbL4Proto);
        rbL4Tcp->setObjectName(QString::fromUtf8("rbL4Tcp"));
        rbL4Tcp->setEnabled(false);

        gridLayout5->addWidget(rbL4Tcp, 1, 0, 1, 1);

        rbL4Udp = new QRadioButton(gbL4Proto);
        rbL4Udp->setObjectName(QString::fromUtf8("rbL4Udp"));
        rbL4Udp->setEnabled(false);

        gridLayout5->addWidget(rbL4Udp, 1, 1, 1, 1);

        rbL4Other = new QRadioButton(gbL4Proto);
        rbL4Other->setObjectName(QString::fromUtf8("rbL4Other"));
        rbL4Other->setEnabled(false);

        gridLayout5->addWidget(rbL4Other, 1, 2, 1, 1);

        rbL4Mld = new QRadioButton(gbL4Proto);
        rbL4Mld->setObjectName(QString::fromUtf8("rbL4Mld"));
        rbL4Mld->setEnabled(false);

        gridLayout5->addWidget(rbL4Mld, 0, 3, 1, 1);


        gridLayout3->addWidget(gbL4Proto, 1, 2, 1, 1);

        gbPayloadProto = new QGroupBox(page);
        gbPayloadProto->setObjectName(QString::fromUtf8("gbPayloadProto"));
        gbPayloadProto->setEnabled(true);
        vboxLayout4 = new QVBoxLayout(gbPayloadProto);
        vboxLayout4->setObjectName(QString::fromUtf8("vboxLayout4"));
        rbPayloadNone = new QRadioButton(gbPayloadProto);
        rbPayloadNone->setObjectName(QString::fromUtf8("rbPayloadNone"));
        rbPayloadNone->setChecked(true);

        vboxLayout4->addWidget(rbPayloadNone);

        rbPayloadPattern = new QRadioButton(gbPayloadProto);
        rbPayloadPattern->setObjectName(QString::fromUtf8("rbPayloadPattern"));
        rbPayloadPattern->setChecked(false);

        vboxLayout4->addWidget(rbPayloadPattern);

        rbPayloadHexDump = new QRadioButton(gbPayloadProto);
        rbPayloadHexDump->setObjectName(QString::fromUtf8("rbPayloadHexDump"));

        vboxLayout4->addWidget(rbPayloadHexDump);

        rbPayloadOther = new QRadioButton(gbPayloadProto);
        rbPayloadOther->setObjectName(QString::fromUtf8("rbPayloadOther"));
        rbPayloadOther->setEnabled(false);

        vboxLayout4->addWidget(rbPayloadOther);


        gridLayout3->addWidget(gbPayloadProto, 1, 3, 1, 1);

        tbSelectProtocols->addItem(page, QString::fromUtf8("Simple"));
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        page_2->setGeometry(QRect(0, 0, 624, 239));
        hboxLayout = new QHBoxLayout(page_2);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        vboxLayout5 = new QVBoxLayout();
        vboxLayout5->setObjectName(QString::fromUtf8("vboxLayout5"));
        label = new QLabel(page_2);
        label->setObjectName(QString::fromUtf8("label"));

        vboxLayout5->addWidget(label);

        lvAllProtocols = new QListView(page_2);
        lvAllProtocols->setObjectName(QString::fromUtf8("lvAllProtocols"));
        lvAllProtocols->setDragEnabled(true);
        lvAllProtocols->setSelectionMode(QAbstractItemView::ExtendedSelection);
        lvAllProtocols->setSelectionBehavior(QAbstractItemView::SelectRows);

        vboxLayout5->addWidget(lvAllProtocols);


        hboxLayout->addLayout(vboxLayout5);

        vboxLayout6 = new QVBoxLayout();
        vboxLayout6->setObjectName(QString::fromUtf8("vboxLayout6"));
        spacerItem1 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout6->addItem(spacerItem1);

        tbAdd = new QToolButton(page_2);
        tbAdd->setObjectName(QString::fromUtf8("tbAdd"));
        tbAdd->setEnabled(false);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/arrow_right.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbAdd->setIcon(icon1);

        vboxLayout6->addWidget(tbAdd);

        spacerItem2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout6->addItem(spacerItem2);


        hboxLayout->addLayout(vboxLayout6);

        vboxLayout7 = new QVBoxLayout();
        vboxLayout7->setObjectName(QString::fromUtf8("vboxLayout7"));
        label_2 = new QLabel(page_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        vboxLayout7->addWidget(label_2);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        tbUp = new QToolButton(page_2);
        tbUp->setObjectName(QString::fromUtf8("tbUp"));
        tbUp->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/arrow_up.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbUp->setIcon(icon2);

        hboxLayout1->addWidget(tbUp);

        tbDown = new QToolButton(page_2);
        tbDown->setObjectName(QString::fromUtf8("tbDown"));
        tbDown->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/arrow_down.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbDown->setIcon(icon3);

        hboxLayout1->addWidget(tbDown);

        tbDelete = new QToolButton(page_2);
        tbDelete->setObjectName(QString::fromUtf8("tbDelete"));
        tbDelete->setEnabled(false);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbDelete->setIcon(icon4);

        hboxLayout1->addWidget(tbDelete);

        spacerItem3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem3);


        vboxLayout7->addLayout(hboxLayout1);

        lvSelectedProtocols = new QListView(page_2);
        lvSelectedProtocols->setObjectName(QString::fromUtf8("lvSelectedProtocols"));
        lvSelectedProtocols->setSelectionBehavior(QAbstractItemView::SelectRows);

        vboxLayout7->addWidget(lvSelectedProtocols);


        hboxLayout->addLayout(vboxLayout7);

        tbSelectProtocols->addItem(page_2, QString::fromUtf8("Advanced"));

        gridLayout1->addWidget(tbSelectProtocols, 1, 0, 1, 2);

        twTopLevel->addTab(packetConfigTab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        hboxLayout2 = new QHBoxLayout(tab_2);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        tbProtocolData = new QToolBox(tab_2);
        tbProtocolData->setObjectName(QString::fromUtf8("tbProtocolData"));

        hboxLayout2->addWidget(tbProtocolData);

        twTopLevel->addTab(tab_2, QString());
        streamControlTab = new QWidget();
        streamControlTab->setObjectName(QString::fromUtf8("streamControlTab"));
        gridLayout6 = new QGridLayout(streamControlTab);
        gridLayout6->setObjectName(QString::fromUtf8("gridLayout6"));
        groupBox_3 = new QGroupBox(streamControlTab);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        vboxLayout8 = new QVBoxLayout(groupBox_3);
        vboxLayout8->setObjectName(QString::fromUtf8("vboxLayout8"));
        rbSendPackets = new QRadioButton(groupBox_3);
        rbSendPackets->setObjectName(QString::fromUtf8("rbSendPackets"));
        rbSendPackets->setChecked(true);

        vboxLayout8->addWidget(rbSendPackets);

        rbSendBursts = new QRadioButton(groupBox_3);
        rbSendBursts->setObjectName(QString::fromUtf8("rbSendBursts"));

        vboxLayout8->addWidget(rbSendBursts);


        gridLayout6->addWidget(groupBox_3, 0, 0, 1, 1);

        groupBox_13 = new QGroupBox(streamControlTab);
        groupBox_13->setObjectName(QString::fromUtf8("groupBox_13"));
        vboxLayout9 = new QVBoxLayout(groupBox_13);
        vboxLayout9->setObjectName(QString::fromUtf8("vboxLayout9"));
        label_7 = new QLabel(groupBox_13);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        vboxLayout9->addWidget(label_7);

        leNumPackets = new QLineEdit(groupBox_13);
        leNumPackets->setObjectName(QString::fromUtf8("leNumPackets"));
        leNumPackets->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        vboxLayout9->addWidget(leNumPackets);

        label_13 = new QLabel(groupBox_13);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        vboxLayout9->addWidget(label_13);

        leNumBursts = new QLineEdit(groupBox_13);
        leNumBursts->setObjectName(QString::fromUtf8("leNumBursts"));
        leNumBursts->setEnabled(false);
        leNumBursts->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        vboxLayout9->addWidget(leNumBursts);

        label_12 = new QLabel(groupBox_13);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        vboxLayout9->addWidget(label_12);

        lePacketsPerBurst = new QLineEdit(groupBox_13);
        lePacketsPerBurst->setObjectName(QString::fromUtf8("lePacketsPerBurst"));
        lePacketsPerBurst->setEnabled(false);
        lePacketsPerBurst->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        vboxLayout9->addWidget(lePacketsPerBurst);


        gridLayout6->addWidget(groupBox_13, 0, 1, 2, 1);

        groupBox_14 = new QGroupBox(streamControlTab);
        groupBox_14->setObjectName(QString::fromUtf8("groupBox_14"));
        groupBox_14->setCheckable(false);
        groupBox_14->setChecked(false);
        vboxLayout10 = new QVBoxLayout(groupBox_14);
        vboxLayout10->setObjectName(QString::fromUtf8("vboxLayout10"));
        rbPacketsPerSec = new QRadioButton(groupBox_14);
        rbPacketsPerSec->setObjectName(QString::fromUtf8("rbPacketsPerSec"));
        rbPacketsPerSec->setChecked(true);

        vboxLayout10->addWidget(rbPacketsPerSec);

        lePacketsPerSec = new QLineEdit(groupBox_14);
        lePacketsPerSec->setObjectName(QString::fromUtf8("lePacketsPerSec"));
        lePacketsPerSec->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        vboxLayout10->addWidget(lePacketsPerSec);

        rbBurstsPerSec = new QRadioButton(groupBox_14);
        rbBurstsPerSec->setObjectName(QString::fromUtf8("rbBurstsPerSec"));
        rbBurstsPerSec->setEnabled(false);

        vboxLayout10->addWidget(rbBurstsPerSec);

        leBurstsPerSec = new QLineEdit(groupBox_14);
        leBurstsPerSec->setObjectName(QString::fromUtf8("leBurstsPerSec"));
        leBurstsPerSec->setEnabled(false);
        leBurstsPerSec->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        vboxLayout10->addWidget(leBurstsPerSec);

        rbBitsPerSec = new QRadioButton(groupBox_14);
        rbBitsPerSec->setObjectName(QString::fromUtf8("rbBitsPerSec"));

        vboxLayout10->addWidget(rbBitsPerSec);

        leBitsPerSec = new QLineEdit(groupBox_14);
        leBitsPerSec->setObjectName(QString::fromUtf8("leBitsPerSec"));
        leBitsPerSec->setEnabled(false);
        leBitsPerSec->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        vboxLayout10->addWidget(leBitsPerSec);


        gridLayout6->addWidget(groupBox_14, 0, 2, 2, 1);

        nextWhat = new QGroupBox(streamControlTab);
        nextWhat->setObjectName(QString::fromUtf8("nextWhat"));
        vboxLayout11 = new QVBoxLayout(nextWhat);
        vboxLayout11->setObjectName(QString::fromUtf8("vboxLayout11"));
        rbActionStop = new QRadioButton(nextWhat);
        rbActionStop->setObjectName(QString::fromUtf8("rbActionStop"));

        vboxLayout11->addWidget(rbActionStop);

        rbActionGotoNext = new QRadioButton(nextWhat);
        rbActionGotoNext->setObjectName(QString::fromUtf8("rbActionGotoNext"));
        rbActionGotoNext->setChecked(true);

        vboxLayout11->addWidget(rbActionGotoNext);

        rbActionGotoStream = new QRadioButton(nextWhat);
        rbActionGotoStream->setObjectName(QString::fromUtf8("rbActionGotoStream"));

        vboxLayout11->addWidget(rbActionGotoStream);

        leStreamId = new QLineEdit(nextWhat);
        leStreamId->setObjectName(QString::fromUtf8("leStreamId"));
        leStreamId->setEnabled(false);
        leStreamId->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        vboxLayout11->addWidget(leStreamId);


        gridLayout6->addWidget(nextWhat, 0, 3, 2, 1);

        spacerItem4 = new QSpacerItem(20, 41, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout6->addItem(spacerItem4, 0, 4, 2, 1);

        groupBox_5 = new QGroupBox(streamControlTab);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        vboxLayout12 = new QVBoxLayout(groupBox_5);
        vboxLayout12->setObjectName(QString::fromUtf8("vboxLayout12"));
        rbModeFixed = new QRadioButton(groupBox_5);
        rbModeFixed->setObjectName(QString::fromUtf8("rbModeFixed"));
        rbModeFixed->setChecked(true);

        vboxLayout12->addWidget(rbModeFixed);

        rbModeContinuous = new QRadioButton(groupBox_5);
        rbModeContinuous->setObjectName(QString::fromUtf8("rbModeContinuous"));

        vboxLayout12->addWidget(rbModeContinuous);


        gridLayout6->addWidget(groupBox_5, 1, 0, 1, 1);

        groupBox_12 = new QGroupBox(streamControlTab);
        groupBox_12->setObjectName(QString::fromUtf8("groupBox_12"));
        groupBox_12->setEnabled(true);
        groupBox_12->setCheckable(false);
        groupBox_12->setChecked(false);
        gridLayout7 = new QGridLayout(groupBox_12);
        gridLayout7->setObjectName(QString::fromUtf8("gridLayout7"));
        label_45 = new QLabel(groupBox_12);
        label_45->setObjectName(QString::fromUtf8("label_45"));
        label_45->setPixmap(QPixmap(QString::fromUtf8(":/icons/gaps.png")));

        gridLayout7->addWidget(label_45, 0, 0, 1, 4);

        label_14 = new QLabel(groupBox_12);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout7->addWidget(label_14, 1, 0, 1, 1);

        leGapIsg = new QLineEdit(groupBox_12);
        leGapIsg->setObjectName(QString::fromUtf8("leGapIsg"));
        leGapIsg->setEnabled(false);
        leGapIsg->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout7->addWidget(leGapIsg, 1, 1, 1, 1);

        label_42 = new QLabel(groupBox_12);
        label_42->setObjectName(QString::fromUtf8("label_42"));

        gridLayout7->addWidget(label_42, 1, 2, 1, 1);

        leGapIbg = new QLineEdit(groupBox_12);
        leGapIbg->setObjectName(QString::fromUtf8("leGapIbg"));
        leGapIbg->setEnabled(false);
        leGapIbg->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout7->addWidget(leGapIbg, 1, 3, 1, 1);

        label_15 = new QLabel(groupBox_12);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout7->addWidget(label_15, 1, 4, 1, 1);

        leGapIpg = new QLineEdit(groupBox_12);
        leGapIpg->setObjectName(QString::fromUtf8("leGapIpg"));
        leGapIpg->setEnabled(false);
        leGapIpg->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout7->addWidget(leGapIpg, 1, 5, 1, 1);


        gridLayout6->addWidget(groupBox_12, 3, 0, 1, 5);

        spacerItem5 = new QSpacerItem(153, 21, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout6->addItem(spacerItem5, 4, 1, 1, 2);

        twTopLevel->addTab(streamControlTab, QString());
        packetViewTab = new QWidget();
        packetViewTab->setObjectName(QString::fromUtf8("packetViewTab"));
        hboxLayout3 = new QHBoxLayout(packetViewTab);
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        splitter = new QSplitter(packetViewTab);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Vertical);
        tvPacketTree = new QTreeView(splitter);
        tvPacketTree->setObjectName(QString::fromUtf8("tvPacketTree"));
        tvPacketTree->setSelectionBehavior(QAbstractItemView::SelectItems);
        tvPacketTree->setWordWrap(true);
        splitter->addWidget(tvPacketTree);
        vwPacketDump = new DumpView(splitter);
        vwPacketDump->setObjectName(QString::fromUtf8("vwPacketDump"));
        splitter->addWidget(vwPacketDump);

        hboxLayout3->addWidget(splitter);

        twTopLevel->addTab(packetViewTab, QString());

        gridLayout->addWidget(twTopLevel, 0, 0, 1, 1);

        hboxLayout4 = new QHBoxLayout();
        hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
        pbPrev = new QPushButton(StreamConfigDialog);
        pbPrev->setObjectName(QString::fromUtf8("pbPrev"));

        hboxLayout4->addWidget(pbPrev);

        pbNext = new QPushButton(StreamConfigDialog);
        pbNext->setObjectName(QString::fromUtf8("pbNext"));

        hboxLayout4->addWidget(pbNext);

        spacerItem6 = new QSpacerItem(191, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout4->addItem(spacerItem6);

        pbOk = new QPushButton(StreamConfigDialog);
        pbOk->setObjectName(QString::fromUtf8("pbOk"));
        pbOk->setDefault(true);

        hboxLayout4->addWidget(pbOk);

        pbCancel = new QPushButton(StreamConfigDialog);
        pbCancel->setObjectName(QString::fromUtf8("pbCancel"));

        hboxLayout4->addWidget(pbCancel);


        gridLayout->addLayout(hboxLayout4, 1, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        label_7->setBuddy(leNumPackets);
        label_13->setBuddy(leNumBursts);
        label_12->setBuddy(lePacketsPerBurst);
        label_14->setBuddy(leGapIsg);
        label_42->setBuddy(leGapIbg);
        label_15->setBuddy(leGapIpg);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(twTopLevel, cmbPktLenMode);
        QWidget::setTabOrder(cmbPktLenMode, lePktLen);
        QWidget::setTabOrder(lePktLen, lePktLenMin);
        QWidget::setTabOrder(lePktLenMin, lePktLenMax);
        QWidget::setTabOrder(lePktLenMax, rbFtEthernet2);
        QWidget::setTabOrder(rbFtEthernet2, rbFt802Dot3Raw);
        QWidget::setTabOrder(rbFt802Dot3Raw, rbFt802Dot3Llc);
        QWidget::setTabOrder(rbFt802Dot3Llc, rbFtLlcSnap);
        QWidget::setTabOrder(rbFtLlcSnap, rbFtOther);
        QWidget::setTabOrder(rbFtOther, rbVlanNone);
        QWidget::setTabOrder(rbVlanNone, rbVlanSingle);
        QWidget::setTabOrder(rbVlanSingle, rbVlanDouble);
        QWidget::setTabOrder(rbVlanDouble, rbL3None);
        QWidget::setTabOrder(rbL3None, rbL3Ipv4);
        QWidget::setTabOrder(rbL3Ipv4, rbL3Ipv6);
        QWidget::setTabOrder(rbL3Ipv6, rbL3Arp);
        QWidget::setTabOrder(rbL3Arp, rbL3Other);
        QWidget::setTabOrder(rbL3Other, rbL4None);
        QWidget::setTabOrder(rbL4None, rbL4Icmp);
        QWidget::setTabOrder(rbL4Icmp, rbL4Igmp);
        QWidget::setTabOrder(rbL4Igmp, rbL4Tcp);
        QWidget::setTabOrder(rbL4Tcp, rbL4Udp);
        QWidget::setTabOrder(rbL4Udp, rbL4Other);
        QWidget::setTabOrder(rbL4Other, rbPayloadPattern);
        QWidget::setTabOrder(rbPayloadPattern, rbPayloadOther);
        QWidget::setTabOrder(rbPayloadOther, pbPrev);
        QWidget::setTabOrder(pbPrev, pbNext);
        QWidget::setTabOrder(pbNext, pbOk);
        QWidget::setTabOrder(pbOk, pbCancel);
        QWidget::setTabOrder(pbCancel, rbSendBursts);
        QWidget::setTabOrder(rbSendBursts, leNumPackets);
        QWidget::setTabOrder(leNumPackets, leNumBursts);
        QWidget::setTabOrder(leNumBursts, lePacketsPerBurst);
        QWidget::setTabOrder(lePacketsPerBurst, rbActionStop);
        QWidget::setTabOrder(rbActionStop, rbActionGotoNext);
        QWidget::setTabOrder(rbActionGotoNext, rbActionGotoStream);
        QWidget::setTabOrder(rbActionGotoStream, leStreamId);
        QWidget::setTabOrder(leStreamId, rbModeFixed);
        QWidget::setTabOrder(rbModeFixed, rbModeContinuous);
        QWidget::setTabOrder(rbModeContinuous, lePacketsPerSec);
        QWidget::setTabOrder(lePacketsPerSec, leBurstsPerSec);
        QWidget::setTabOrder(leBurstsPerSec, leGapIsg);
        QWidget::setTabOrder(leGapIsg, leGapIpg);
        QWidget::setTabOrder(leGapIpg, leGapIbg);
        QWidget::setTabOrder(leGapIbg, tvPacketTree);
        QWidget::setTabOrder(tvPacketTree, tbDown);
        QWidget::setTabOrder(tbDown, tbDelete);
        QWidget::setTabOrder(tbDelete, lvSelectedProtocols);
        QWidget::setTabOrder(lvSelectedProtocols, rbSendPackets);
        QWidget::setTabOrder(rbSendPackets, tbUp);
        QWidget::setTabOrder(tbUp, lvAllProtocols);
        QWidget::setTabOrder(lvAllProtocols, tbAdd);

        retranslateUi(StreamConfigDialog);
        QObject::connect(pbCancel, SIGNAL(clicked()), StreamConfigDialog, SLOT(reject()));
        QObject::connect(rbActionGotoStream, SIGNAL(toggled(bool)), leStreamId, SLOT(setEnabled(bool)));
        QObject::connect(rbSendPackets, SIGNAL(toggled(bool)), rbPacketsPerSec, SLOT(setEnabled(bool)));
        QObject::connect(rbSendBursts, SIGNAL(toggled(bool)), rbBurstsPerSec, SLOT(setEnabled(bool)));
        QObject::connect(rbSendBursts, SIGNAL(toggled(bool)), lePacketsPerBurst, SLOT(setEnabled(bool)));
        QObject::connect(rbPacketsPerSec, SIGNAL(toggled(bool)), lePacketsPerSec, SLOT(setEnabled(bool)));
        QObject::connect(rbBurstsPerSec, SIGNAL(toggled(bool)), leBurstsPerSec, SLOT(setEnabled(bool)));
        QObject::connect(rbBitsPerSec, SIGNAL(toggled(bool)), leBitsPerSec, SLOT(setEnabled(bool)));
        QObject::connect(rbSendPackets, SIGNAL(toggled(bool)), rbPacketsPerSec, SLOT(setChecked(bool)));
        QObject::connect(rbSendBursts, SIGNAL(toggled(bool)), rbBurstsPerSec, SLOT(setChecked(bool)));
        QObject::connect(rbModeContinuous, SIGNAL(toggled(bool)), leNumPackets, SLOT(setDisabled(bool)));
        QObject::connect(rbModeContinuous, SIGNAL(toggled(bool)), leNumBursts, SLOT(setDisabled(bool)));

        twTopLevel->setCurrentIndex(0);
        tbSelectProtocols->setCurrentIndex(0);
        tbProtocolData->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(StreamConfigDialog);
    } // setupUi

    void retranslateUi(QDialog *StreamConfigDialog)
    {
        StreamConfigDialog->setWindowTitle(QApplication::translate("StreamConfigDialog", "Edit Stream", 0, QApplication::UnicodeUTF8));
        StreamConfigDialog->setStyleSheet(QApplication::translate("StreamConfigDialog", "QLineEdit:enabled[inputMask = \"HH; \"],\n"
"QLineEdit:enabled[inputMask = \"HH HH; \"],\n"
"QLineEdit:enabled[inputMask = \"HH HH HH; \"],\n"
"QLineEdit:enabled[inputMask = \"HH HH HH HH; \"], \n"
"QLineEdit:enabled[inputMask = \"HH HH HH HH HH HH; \"] { background-color: #ccccff  } \n"
"", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        twTopLevel->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        gbFrameLength->setTitle(QApplication::translate("StreamConfigDialog", "Frame Length (including FCS)", 0, QApplication::UnicodeUTF8));
        cmbPktLenMode->clear();
        cmbPktLenMode->insertItems(0, QStringList()
         << QApplication::translate("StreamConfigDialog", "Fixed", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("StreamConfigDialog", "Increment", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("StreamConfigDialog", "Decrement", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("StreamConfigDialog", "Random", 0, QApplication::UnicodeUTF8)
        );
        label_18->setText(QApplication::translate("StreamConfigDialog", "Min", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("StreamConfigDialog", "Max", 0, QApplication::UnicodeUTF8));
        gbL1Proto->setTitle(QApplication::translate("StreamConfigDialog", "L1", 0, QApplication::UnicodeUTF8));
        rbL1None->setText(QApplication::translate("StreamConfigDialog", "None", 0, QApplication::UnicodeUTF8));
        rbL1Mac->setText(QApplication::translate("StreamConfigDialog", "Mac", 0, QApplication::UnicodeUTF8));
        rbL1Other->setText(QApplication::translate("StreamConfigDialog", "Other", 0, QApplication::UnicodeUTF8));
        gbFrameType->setTitle(QApplication::translate("StreamConfigDialog", "L2", 0, QApplication::UnicodeUTF8));
        rbFtNone->setText(QApplication::translate("StreamConfigDialog", "None", 0, QApplication::UnicodeUTF8));
        rbFtEthernet2->setText(QApplication::translate("StreamConfigDialog", "Ethernet II", 0, QApplication::UnicodeUTF8));
        rbFt802Dot3Raw->setText(QApplication::translate("StreamConfigDialog", "802.3 Raw", 0, QApplication::UnicodeUTF8));
        rbFt802Dot3Llc->setText(QApplication::translate("StreamConfigDialog", "802.3 LLC", 0, QApplication::UnicodeUTF8));
        rbFtLlcSnap->setText(QApplication::translate("StreamConfigDialog", "802.3 LLC SNAP", 0, QApplication::UnicodeUTF8));
        rbFtOther->setText(QApplication::translate("StreamConfigDialog", "Other", 0, QApplication::UnicodeUTF8));
        gbL3Proto->setTitle(QApplication::translate("StreamConfigDialog", "L3", 0, QApplication::UnicodeUTF8));
        rbL3None->setText(QApplication::translate("StreamConfigDialog", "None", 0, QApplication::UnicodeUTF8));
        rbL3Arp->setText(QApplication::translate("StreamConfigDialog", "ARP", 0, QApplication::UnicodeUTF8));
        rbL3Ipv4->setText(QApplication::translate("StreamConfigDialog", "IPv4", 0, QApplication::UnicodeUTF8));
        rbL3Ipv6->setText(QApplication::translate("StreamConfigDialog", "IPv6", 0, QApplication::UnicodeUTF8));
        rbL3Ip6over4->setText(QApplication::translate("StreamConfigDialog", "IP 6over4", 0, QApplication::UnicodeUTF8));
        rbL3Ip4over6->setText(QApplication::translate("StreamConfigDialog", "IP 4over6", 0, QApplication::UnicodeUTF8));
        rbL3Ip4over4->setText(QApplication::translate("StreamConfigDialog", "IP 4over4", 0, QApplication::UnicodeUTF8));
        rbL3Ip6over6->setText(QApplication::translate("StreamConfigDialog", "IP 6over6", 0, QApplication::UnicodeUTF8));
        rbL3Other->setText(QApplication::translate("StreamConfigDialog", "Other", 0, QApplication::UnicodeUTF8));
        gbL5Proto->setTitle(QApplication::translate("StreamConfigDialog", "L5", 0, QApplication::UnicodeUTF8));
        rbL5None->setText(QApplication::translate("StreamConfigDialog", "None", 0, QApplication::UnicodeUTF8));
        rbL5Text->setText(QApplication::translate("StreamConfigDialog", "Text", 0, QApplication::UnicodeUTF8));
        rbL5Other->setText(QApplication::translate("StreamConfigDialog", "Other", 0, QApplication::UnicodeUTF8));
        gbVlan->setTitle(QApplication::translate("StreamConfigDialog", "VLAN", 0, QApplication::UnicodeUTF8));
        rbVlanNone->setText(QApplication::translate("StreamConfigDialog", "Untagged", 0, QApplication::UnicodeUTF8));
        rbVlanSingle->setText(QApplication::translate("StreamConfigDialog", "Tagged", 0, QApplication::UnicodeUTF8));
        rbVlanDouble->setText(QApplication::translate("StreamConfigDialog", "Stacked", 0, QApplication::UnicodeUTF8));
        gbL4Proto->setTitle(QApplication::translate("StreamConfigDialog", "L4", 0, QApplication::UnicodeUTF8));
        rbL4None->setText(QApplication::translate("StreamConfigDialog", "None", 0, QApplication::UnicodeUTF8));
        rbL4Icmp->setText(QApplication::translate("StreamConfigDialog", "ICMP", 0, QApplication::UnicodeUTF8));
        rbL4Igmp->setText(QApplication::translate("StreamConfigDialog", "IGMP", 0, QApplication::UnicodeUTF8));
        rbL4Tcp->setText(QApplication::translate("StreamConfigDialog", "TCP", 0, QApplication::UnicodeUTF8));
        rbL4Udp->setText(QApplication::translate("StreamConfigDialog", "UDP", 0, QApplication::UnicodeUTF8));
        rbL4Other->setText(QApplication::translate("StreamConfigDialog", "Other", 0, QApplication::UnicodeUTF8));
        rbL4Mld->setText(QApplication::translate("StreamConfigDialog", "MLD", 0, QApplication::UnicodeUTF8));
        gbPayloadProto->setTitle(QApplication::translate("StreamConfigDialog", "Payload", 0, QApplication::UnicodeUTF8));
        rbPayloadNone->setText(QApplication::translate("StreamConfigDialog", "None", 0, QApplication::UnicodeUTF8));
        rbPayloadPattern->setText(QApplication::translate("StreamConfigDialog", "Pattern", 0, QApplication::UnicodeUTF8));
        rbPayloadHexDump->setText(QApplication::translate("StreamConfigDialog", "Hex Dump", 0, QApplication::UnicodeUTF8));
        rbPayloadOther->setText(QApplication::translate("StreamConfigDialog", "Other", 0, QApplication::UnicodeUTF8));
        tbSelectProtocols->setItemText(tbSelectProtocols->indexOf(page), QApplication::translate("StreamConfigDialog", "Simple", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("StreamConfigDialog", "Available Protocols", 0, QApplication::UnicodeUTF8));
        tbAdd->setText(QApplication::translate("StreamConfigDialog", ">", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("StreamConfigDialog", "Selected Protocols", 0, QApplication::UnicodeUTF8));
        tbUp->setText(QApplication::translate("StreamConfigDialog", "^", 0, QApplication::UnicodeUTF8));
        tbDown->setText(QApplication::translate("StreamConfigDialog", "v", 0, QApplication::UnicodeUTF8));
        tbDelete->setText(QApplication::translate("StreamConfigDialog", "-", 0, QApplication::UnicodeUTF8));
        tbSelectProtocols->setItemText(tbSelectProtocols->indexOf(page_2), QApplication::translate("StreamConfigDialog", "Advanced", 0, QApplication::UnicodeUTF8));
        twTopLevel->setTabText(twTopLevel->indexOf(packetConfigTab), QApplication::translate("StreamConfigDialog", "Protocol Selection", 0, QApplication::UnicodeUTF8));
        twTopLevel->setTabText(twTopLevel->indexOf(tab_2), QApplication::translate("StreamConfigDialog", "Protocol Data", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("StreamConfigDialog", "Send", 0, QApplication::UnicodeUTF8));
        rbSendPackets->setText(QApplication::translate("StreamConfigDialog", "Packets", 0, QApplication::UnicodeUTF8));
        rbSendBursts->setText(QApplication::translate("StreamConfigDialog", "Bursts", 0, QApplication::UnicodeUTF8));
        groupBox_13->setTitle(QApplication::translate("StreamConfigDialog", "Numbers", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("StreamConfigDialog", "Number of Packets", 0, QApplication::UnicodeUTF8));
        leNumPackets->setInputMask(QString());
        leNumPackets->setText(QString());
        label_13->setText(QApplication::translate("StreamConfigDialog", "Number of Bursts", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("StreamConfigDialog", "Packets per Burst", 0, QApplication::UnicodeUTF8));
        groupBox_14->setTitle(QApplication::translate("StreamConfigDialog", "Rate", 0, QApplication::UnicodeUTF8));
        rbPacketsPerSec->setText(QApplication::translate("StreamConfigDialog", "Packets/Sec", 0, QApplication::UnicodeUTF8));
        rbBurstsPerSec->setText(QApplication::translate("StreamConfigDialog", "Bursts/Sec", 0, QApplication::UnicodeUTF8));
        rbBitsPerSec->setText(QApplication::translate("StreamConfigDialog", "Bits/Sec", 0, QApplication::UnicodeUTF8));
        nextWhat->setTitle(QApplication::translate("StreamConfigDialog", "After this stream", 0, QApplication::UnicodeUTF8));
        rbActionStop->setText(QApplication::translate("StreamConfigDialog", "Stop", 0, QApplication::UnicodeUTF8));
        rbActionGotoNext->setText(QApplication::translate("StreamConfigDialog", "Goto Next Stream", 0, QApplication::UnicodeUTF8));
        rbActionGotoStream->setText(QApplication::translate("StreamConfigDialog", "Goto First", 0, QApplication::UnicodeUTF8));
        groupBox_5->setTitle(QApplication::translate("StreamConfigDialog", "Mode", 0, QApplication::UnicodeUTF8));
        rbModeFixed->setText(QApplication::translate("StreamConfigDialog", "Fixed", 0, QApplication::UnicodeUTF8));
        rbModeContinuous->setText(QApplication::translate("StreamConfigDialog", "Continuous", 0, QApplication::UnicodeUTF8));
        groupBox_12->setTitle(QApplication::translate("StreamConfigDialog", "Gaps (in seconds)", 0, QApplication::UnicodeUTF8));
        label_45->setText(QString());
        label_14->setText(QApplication::translate("StreamConfigDialog", "ISG", 0, QApplication::UnicodeUTF8));
        label_42->setText(QApplication::translate("StreamConfigDialog", "IBG", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("StreamConfigDialog", "IPG", 0, QApplication::UnicodeUTF8));
        twTopLevel->setTabText(twTopLevel->indexOf(streamControlTab), QApplication::translate("StreamConfigDialog", "Stream Control", 0, QApplication::UnicodeUTF8));
        twTopLevel->setTabText(twTopLevel->indexOf(packetViewTab), QApplication::translate("StreamConfigDialog", "Packet View", 0, QApplication::UnicodeUTF8));
        pbPrev->setText(QApplication::translate("StreamConfigDialog", "Prev", 0, QApplication::UnicodeUTF8));
        pbNext->setText(QApplication::translate("StreamConfigDialog", "Next", 0, QApplication::UnicodeUTF8));
        pbOk->setText(QApplication::translate("StreamConfigDialog", "OK", 0, QApplication::UnicodeUTF8));
        pbCancel->setText(QApplication::translate("StreamConfigDialog", "Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class StreamConfigDialog: public Ui_StreamConfigDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STREAMCONFIGDIALOG_H
