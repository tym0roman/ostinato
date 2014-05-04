/********************************************************************************
** Form generated from reading UI file 'tcp.ui'
**
** Created: Mon Apr 28 09:08:34 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TCP_H
#define UI_TCP_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tcp
{
public:
    QGridLayout *gridLayout;
    QCheckBox *cbTcpSrcPortOverride;
    QLineEdit *leTcpSrcPort;
    QFrame *line_3;
    QCheckBox *cbTcpCksumOverride;
    QLineEdit *leTcpCksum;
    QCheckBox *cbTcpDstPortOverride;
    QLineEdit *leTcpDstPort;
    QLabel *label_37;
    QLineEdit *leTcpUrgentPointer;
    QLabel *label_33;
    QLineEdit *leTcpSeqNum;
    QGroupBox *groupBox_10;
    QGridLayout *gridLayout1;
    QCheckBox *cbTcpFlagsUrg;
    QCheckBox *cbTcpFlagsAck;
    QCheckBox *cbTcpFlagsPsh;
    QCheckBox *cbTcpFlagsRst;
    QCheckBox *cbTcpFlagsSyn;
    QCheckBox *cbTcpFlagsFin;
    QSpacerItem *spacerItem;
    QLabel *label_34;
    QLineEdit *leTcpAckNum;
    QCheckBox *cbTcpHdrLenOverride;
    QLineEdit *leTcpHdrLen;
    QLabel *label_36;
    QLineEdit *leTcpWindow;
    QSpacerItem *spacerItem1;

    void setupUi(QWidget *tcp)
    {
        if (tcp->objectName().isEmpty())
            tcp->setObjectName(QString::fromUtf8("tcp"));
        tcp->resize(447, 194);
        gridLayout = new QGridLayout(tcp);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        cbTcpSrcPortOverride = new QCheckBox(tcp);
        cbTcpSrcPortOverride->setObjectName(QString::fromUtf8("cbTcpSrcPortOverride"));

        gridLayout->addWidget(cbTcpSrcPortOverride, 0, 0, 1, 1);

        leTcpSrcPort = new QLineEdit(tcp);
        leTcpSrcPort->setObjectName(QString::fromUtf8("leTcpSrcPort"));
        leTcpSrcPort->setEnabled(false);

        gridLayout->addWidget(leTcpSrcPort, 0, 1, 1, 1);

        line_3 = new QFrame(tcp);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_3, 0, 2, 6, 1);

        cbTcpCksumOverride = new QCheckBox(tcp);
        cbTcpCksumOverride->setObjectName(QString::fromUtf8("cbTcpCksumOverride"));

        gridLayout->addWidget(cbTcpCksumOverride, 0, 3, 1, 1);

        leTcpCksum = new QLineEdit(tcp);
        leTcpCksum->setObjectName(QString::fromUtf8("leTcpCksum"));
        leTcpCksum->setEnabled(false);

        gridLayout->addWidget(leTcpCksum, 0, 4, 1, 1);

        cbTcpDstPortOverride = new QCheckBox(tcp);
        cbTcpDstPortOverride->setObjectName(QString::fromUtf8("cbTcpDstPortOverride"));

        gridLayout->addWidget(cbTcpDstPortOverride, 1, 0, 1, 1);

        leTcpDstPort = new QLineEdit(tcp);
        leTcpDstPort->setObjectName(QString::fromUtf8("leTcpDstPort"));
        leTcpDstPort->setEnabled(false);

        gridLayout->addWidget(leTcpDstPort, 1, 1, 1, 1);

        label_37 = new QLabel(tcp);
        label_37->setObjectName(QString::fromUtf8("label_37"));

        gridLayout->addWidget(label_37, 1, 3, 1, 1);

        leTcpUrgentPointer = new QLineEdit(tcp);
        leTcpUrgentPointer->setObjectName(QString::fromUtf8("leTcpUrgentPointer"));

        gridLayout->addWidget(leTcpUrgentPointer, 1, 4, 1, 1);

        label_33 = new QLabel(tcp);
        label_33->setObjectName(QString::fromUtf8("label_33"));

        gridLayout->addWidget(label_33, 2, 0, 1, 1);

        leTcpSeqNum = new QLineEdit(tcp);
        leTcpSeqNum->setObjectName(QString::fromUtf8("leTcpSeqNum"));

        gridLayout->addWidget(leTcpSeqNum, 2, 1, 1, 1);

        groupBox_10 = new QGroupBox(tcp);
        groupBox_10->setObjectName(QString::fromUtf8("groupBox_10"));
        gridLayout1 = new QGridLayout(groupBox_10);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        cbTcpFlagsUrg = new QCheckBox(groupBox_10);
        cbTcpFlagsUrg->setObjectName(QString::fromUtf8("cbTcpFlagsUrg"));

        gridLayout1->addWidget(cbTcpFlagsUrg, 0, 0, 1, 1);

        cbTcpFlagsAck = new QCheckBox(groupBox_10);
        cbTcpFlagsAck->setObjectName(QString::fromUtf8("cbTcpFlagsAck"));

        gridLayout1->addWidget(cbTcpFlagsAck, 0, 1, 1, 1);

        cbTcpFlagsPsh = new QCheckBox(groupBox_10);
        cbTcpFlagsPsh->setObjectName(QString::fromUtf8("cbTcpFlagsPsh"));

        gridLayout1->addWidget(cbTcpFlagsPsh, 0, 2, 1, 1);

        cbTcpFlagsRst = new QCheckBox(groupBox_10);
        cbTcpFlagsRst->setObjectName(QString::fromUtf8("cbTcpFlagsRst"));

        gridLayout1->addWidget(cbTcpFlagsRst, 1, 0, 1, 1);

        cbTcpFlagsSyn = new QCheckBox(groupBox_10);
        cbTcpFlagsSyn->setObjectName(QString::fromUtf8("cbTcpFlagsSyn"));

        gridLayout1->addWidget(cbTcpFlagsSyn, 1, 1, 1, 1);

        cbTcpFlagsFin = new QCheckBox(groupBox_10);
        cbTcpFlagsFin->setObjectName(QString::fromUtf8("cbTcpFlagsFin"));

        gridLayout1->addWidget(cbTcpFlagsFin, 1, 2, 1, 1);


        gridLayout->addWidget(groupBox_10, 2, 3, 4, 2);

        spacerItem = new QSpacerItem(21, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 2, 5, 2, 1);

        label_34 = new QLabel(tcp);
        label_34->setObjectName(QString::fromUtf8("label_34"));

        gridLayout->addWidget(label_34, 3, 0, 1, 1);

        leTcpAckNum = new QLineEdit(tcp);
        leTcpAckNum->setObjectName(QString::fromUtf8("leTcpAckNum"));

        gridLayout->addWidget(leTcpAckNum, 3, 1, 1, 1);

        cbTcpHdrLenOverride = new QCheckBox(tcp);
        cbTcpHdrLenOverride->setObjectName(QString::fromUtf8("cbTcpHdrLenOverride"));

        gridLayout->addWidget(cbTcpHdrLenOverride, 4, 0, 1, 1);

        leTcpHdrLen = new QLineEdit(tcp);
        leTcpHdrLen->setObjectName(QString::fromUtf8("leTcpHdrLen"));
        leTcpHdrLen->setEnabled(false);

        gridLayout->addWidget(leTcpHdrLen, 4, 1, 1, 1);

        label_36 = new QLabel(tcp);
        label_36->setObjectName(QString::fromUtf8("label_36"));

        gridLayout->addWidget(label_36, 5, 0, 1, 1);

        leTcpWindow = new QLineEdit(tcp);
        leTcpWindow->setObjectName(QString::fromUtf8("leTcpWindow"));

        gridLayout->addWidget(leTcpWindow, 5, 1, 1, 1);

        spacerItem1 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem1, 6, 2, 1, 2);


        retranslateUi(tcp);
        QObject::connect(cbTcpHdrLenOverride, SIGNAL(toggled(bool)), leTcpHdrLen, SLOT(setEnabled(bool)));
        QObject::connect(cbTcpCksumOverride, SIGNAL(toggled(bool)), leTcpCksum, SLOT(setEnabled(bool)));
        QObject::connect(cbTcpSrcPortOverride, SIGNAL(toggled(bool)), leTcpSrcPort, SLOT(setEnabled(bool)));
        QObject::connect(cbTcpDstPortOverride, SIGNAL(toggled(bool)), leTcpDstPort, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(tcp);
    } // setupUi

    void retranslateUi(QWidget *tcp)
    {
        tcp->setWindowTitle(QApplication::translate("tcp", "Form", 0, QApplication::UnicodeUTF8));
        cbTcpSrcPortOverride->setText(QApplication::translate("tcp", "Override Source Port", 0, QApplication::UnicodeUTF8));
        cbTcpCksumOverride->setText(QApplication::translate("tcp", "Override Checksum", 0, QApplication::UnicodeUTF8));
        leTcpCksum->setInputMask(QApplication::translate("tcp", ">HH HH; ", 0, QApplication::UnicodeUTF8));
        cbTcpDstPortOverride->setText(QApplication::translate("tcp", "Override Destination Port", 0, QApplication::UnicodeUTF8));
        label_37->setText(QApplication::translate("tcp", "Urgent Pointer", 0, QApplication::UnicodeUTF8));
        label_33->setText(QApplication::translate("tcp", "Sequence Number", 0, QApplication::UnicodeUTF8));
        groupBox_10->setTitle(QApplication::translate("tcp", "Flags", 0, QApplication::UnicodeUTF8));
        cbTcpFlagsUrg->setText(QApplication::translate("tcp", "URG", 0, QApplication::UnicodeUTF8));
        cbTcpFlagsAck->setText(QApplication::translate("tcp", "ACK", 0, QApplication::UnicodeUTF8));
        cbTcpFlagsPsh->setText(QApplication::translate("tcp", "PSH", 0, QApplication::UnicodeUTF8));
        cbTcpFlagsRst->setText(QApplication::translate("tcp", "RST", 0, QApplication::UnicodeUTF8));
        cbTcpFlagsSyn->setText(QApplication::translate("tcp", "SYN", 0, QApplication::UnicodeUTF8));
        cbTcpFlagsFin->setText(QApplication::translate("tcp", "FIN", 0, QApplication::UnicodeUTF8));
        label_34->setText(QApplication::translate("tcp", "Acknowledgement Number", 0, QApplication::UnicodeUTF8));
        cbTcpHdrLenOverride->setText(QApplication::translate("tcp", "Override Header Length (x4)", 0, QApplication::UnicodeUTF8));
        label_36->setText(QApplication::translate("tcp", "Window", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class tcp: public Ui_tcp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TCP_H
