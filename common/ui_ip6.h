/********************************************************************************
** Form generated from reading UI file 'ip6.ui'
**
** Created: Thu May 1 12:18:52 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IP6_H
#define UI_IP6_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Ip6
{
public:
    QVBoxLayout *vboxLayout;
    QGridLayout *gridLayout;
    QCheckBox *isVersionOverride;
    QLineEdit *version;
    QFrame *line;
    QCheckBox *isPayloadLengthOverride;
    QLineEdit *payloadLength;
    QLabel *label_22;
    QLineEdit *trafficClass;
    QCheckBox *isNextHeaderOverride;
    QLineEdit *nextHeader;
    QLabel *label_24;
    QLineEdit *flowLabel;
    QLabel *label_26;
    QLineEdit *hopLimit;
    QGroupBox *groupBox_7;
    QGridLayout *gridLayout1;
    QSpacerItem *spacerItem;
    QLabel *label;
    QLabel *label_31;
    QLabel *label_23;
    QLabel *label_30;
    QLabel *label_20;
    QLineEdit *srcAddr;
    QComboBox *srcAddrModeCombo;
    QLineEdit *srcAddrCount;
    QLineEdit *srcAddrPrefix;
    QLabel *label_21;
    QLineEdit *dstAddr;
    QComboBox *dstAddrModeCombo;
    QLineEdit *dstAddrCount;
    QLineEdit *dstAddrPrefix;
    QSpacerItem *spacerItem1;

    void setupUi(QWidget *Ip6)
    {
        if (Ip6->objectName().isEmpty())
            Ip6->setObjectName(QString::fromUtf8("Ip6"));
        Ip6->resize(506, 233);
        vboxLayout = new QVBoxLayout(Ip6);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        isVersionOverride = new QCheckBox(Ip6);
        isVersionOverride->setObjectName(QString::fromUtf8("isVersionOverride"));

        gridLayout->addWidget(isVersionOverride, 0, 0, 1, 1);

        version = new QLineEdit(Ip6);
        version->setObjectName(QString::fromUtf8("version"));
        version->setEnabled(false);

        gridLayout->addWidget(version, 0, 1, 1, 1);

        line = new QFrame(Ip6);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 0, 2, 3, 1);

        isPayloadLengthOverride = new QCheckBox(Ip6);
        isPayloadLengthOverride->setObjectName(QString::fromUtf8("isPayloadLengthOverride"));

        gridLayout->addWidget(isPayloadLengthOverride, 0, 3, 1, 1);

        payloadLength = new QLineEdit(Ip6);
        payloadLength->setObjectName(QString::fromUtf8("payloadLength"));
        payloadLength->setEnabled(false);

        gridLayout->addWidget(payloadLength, 0, 4, 1, 1);

        label_22 = new QLabel(Ip6);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        gridLayout->addWidget(label_22, 1, 0, 1, 1);

        trafficClass = new QLineEdit(Ip6);
        trafficClass->setObjectName(QString::fromUtf8("trafficClass"));

        gridLayout->addWidget(trafficClass, 1, 1, 1, 1);

        isNextHeaderOverride = new QCheckBox(Ip6);
        isNextHeaderOverride->setObjectName(QString::fromUtf8("isNextHeaderOverride"));

        gridLayout->addWidget(isNextHeaderOverride, 1, 3, 1, 1);

        nextHeader = new QLineEdit(Ip6);
        nextHeader->setObjectName(QString::fromUtf8("nextHeader"));
        nextHeader->setEnabled(false);

        gridLayout->addWidget(nextHeader, 1, 4, 1, 1);

        label_24 = new QLabel(Ip6);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        gridLayout->addWidget(label_24, 2, 0, 1, 1);

        flowLabel = new QLineEdit(Ip6);
        flowLabel->setObjectName(QString::fromUtf8("flowLabel"));

        gridLayout->addWidget(flowLabel, 2, 1, 1, 1);

        label_26 = new QLabel(Ip6);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        gridLayout->addWidget(label_26, 2, 3, 1, 1);

        hopLimit = new QLineEdit(Ip6);
        hopLimit->setObjectName(QString::fromUtf8("hopLimit"));

        gridLayout->addWidget(hopLimit, 2, 4, 1, 1);


        vboxLayout->addLayout(gridLayout);

        groupBox_7 = new QGroupBox(Ip6);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setFlat(false);
        gridLayout1 = new QGridLayout(groupBox_7);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        spacerItem = new QSpacerItem(51, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(spacerItem, 0, 0, 1, 1);

        label = new QLabel(groupBox_7);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout1->addWidget(label, 0, 1, 1, 1);

        label_31 = new QLabel(groupBox_7);
        label_31->setObjectName(QString::fromUtf8("label_31"));

        gridLayout1->addWidget(label_31, 0, 2, 1, 1);

        label_23 = new QLabel(groupBox_7);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        gridLayout1->addWidget(label_23, 0, 3, 1, 1);

        label_30 = new QLabel(groupBox_7);
        label_30->setObjectName(QString::fromUtf8("label_30"));

        gridLayout1->addWidget(label_30, 0, 4, 1, 1);

        label_20 = new QLabel(groupBox_7);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        gridLayout1->addWidget(label_20, 1, 0, 1, 1);

        srcAddr = new QLineEdit(groupBox_7);
        srcAddr->setObjectName(QString::fromUtf8("srcAddr"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(srcAddr->sizePolicy().hasHeightForWidth());
        srcAddr->setSizePolicy(sizePolicy);
        srcAddr->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(srcAddr, 1, 1, 1, 1);

        srcAddrModeCombo = new QComboBox(groupBox_7);
        srcAddrModeCombo->setObjectName(QString::fromUtf8("srcAddrModeCombo"));

        gridLayout1->addWidget(srcAddrModeCombo, 1, 2, 1, 1);

        srcAddrCount = new QLineEdit(groupBox_7);
        srcAddrCount->setObjectName(QString::fromUtf8("srcAddrCount"));
        srcAddrCount->setEnabled(false);
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(srcAddrCount->sizePolicy().hasHeightForWidth());
        srcAddrCount->setSizePolicy(sizePolicy1);
        srcAddrCount->setMaximumSize(QSize(50, 16777215));
        srcAddrCount->setMaxLength(10);

        gridLayout1->addWidget(srcAddrCount, 1, 3, 1, 1);

        srcAddrPrefix = new QLineEdit(groupBox_7);
        srcAddrPrefix->setObjectName(QString::fromUtf8("srcAddrPrefix"));
        srcAddrPrefix->setEnabled(false);
        sizePolicy1.setHeightForWidth(srcAddrPrefix->sizePolicy().hasHeightForWidth());
        srcAddrPrefix->setSizePolicy(sizePolicy1);
        srcAddrPrefix->setMaximumSize(QSize(50, 16777215));

        gridLayout1->addWidget(srcAddrPrefix, 1, 4, 1, 1);

        label_21 = new QLabel(groupBox_7);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        gridLayout1->addWidget(label_21, 2, 0, 1, 1);

        dstAddr = new QLineEdit(groupBox_7);
        dstAddr->setObjectName(QString::fromUtf8("dstAddr"));
        sizePolicy.setHeightForWidth(dstAddr->sizePolicy().hasHeightForWidth());
        dstAddr->setSizePolicy(sizePolicy);
        dstAddr->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(dstAddr, 2, 1, 1, 1);

        dstAddrModeCombo = new QComboBox(groupBox_7);
        dstAddrModeCombo->setObjectName(QString::fromUtf8("dstAddrModeCombo"));

        gridLayout1->addWidget(dstAddrModeCombo, 2, 2, 1, 1);

        dstAddrCount = new QLineEdit(groupBox_7);
        dstAddrCount->setObjectName(QString::fromUtf8("dstAddrCount"));
        dstAddrCount->setEnabled(false);
        sizePolicy1.setHeightForWidth(dstAddrCount->sizePolicy().hasHeightForWidth());
        dstAddrCount->setSizePolicy(sizePolicy1);
        dstAddrCount->setMaximumSize(QSize(50, 16777215));
        dstAddrCount->setMaxLength(10);

        gridLayout1->addWidget(dstAddrCount, 2, 3, 1, 1);

        dstAddrPrefix = new QLineEdit(groupBox_7);
        dstAddrPrefix->setObjectName(QString::fromUtf8("dstAddrPrefix"));
        dstAddrPrefix->setEnabled(false);
        sizePolicy1.setHeightForWidth(dstAddrPrefix->sizePolicy().hasHeightForWidth());
        dstAddrPrefix->setSizePolicy(sizePolicy1);
        dstAddrPrefix->setMaximumSize(QSize(50, 16777215));

        gridLayout1->addWidget(dstAddrPrefix, 2, 4, 1, 1);


        vboxLayout->addWidget(groupBox_7);

        spacerItem1 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem1);

#ifndef QT_NO_SHORTCUT
        label_22->setBuddy(trafficClass);
        label_24->setBuddy(flowLabel);
        label_26->setBuddy(hopLimit);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(isVersionOverride, version);
        QWidget::setTabOrder(version, trafficClass);
        QWidget::setTabOrder(trafficClass, flowLabel);
        QWidget::setTabOrder(flowLabel, isPayloadLengthOverride);
        QWidget::setTabOrder(isPayloadLengthOverride, payloadLength);
        QWidget::setTabOrder(payloadLength, isNextHeaderOverride);
        QWidget::setTabOrder(isNextHeaderOverride, nextHeader);
        QWidget::setTabOrder(nextHeader, hopLimit);
        QWidget::setTabOrder(hopLimit, srcAddr);
        QWidget::setTabOrder(srcAddr, srcAddrModeCombo);
        QWidget::setTabOrder(srcAddrModeCombo, srcAddrCount);
        QWidget::setTabOrder(srcAddrCount, srcAddrPrefix);
        QWidget::setTabOrder(srcAddrPrefix, dstAddr);
        QWidget::setTabOrder(dstAddr, dstAddrModeCombo);
        QWidget::setTabOrder(dstAddrModeCombo, dstAddrCount);
        QWidget::setTabOrder(dstAddrCount, dstAddrPrefix);

        retranslateUi(Ip6);
        QObject::connect(isVersionOverride, SIGNAL(toggled(bool)), version, SLOT(setEnabled(bool)));
        QObject::connect(isPayloadLengthOverride, SIGNAL(toggled(bool)), payloadLength, SLOT(setEnabled(bool)));
        QObject::connect(isNextHeaderOverride, SIGNAL(toggled(bool)), nextHeader, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(Ip6);
    } // setupUi

    void retranslateUi(QWidget *Ip6)
    {
        Ip6->setWindowTitle(QApplication::translate("Ip6", "Form", 0, QApplication::UnicodeUTF8));
        isVersionOverride->setText(QApplication::translate("Ip6", "Version", 0, QApplication::UnicodeUTF8));
        version->setInputMask(QString());
        version->setText(QString());
        isPayloadLengthOverride->setText(QApplication::translate("Ip6", "Payload Length", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("Ip6", "Traffic Class", 0, QApplication::UnicodeUTF8));
        trafficClass->setInputMask(QApplication::translate("Ip6", ">HH; ", 0, QApplication::UnicodeUTF8));
        trafficClass->setText(QString());
        isNextHeaderOverride->setText(QApplication::translate("Ip6", "Next Header", 0, QApplication::UnicodeUTF8));
        nextHeader->setInputMask(QApplication::translate("Ip6", "HH; ", 0, QApplication::UnicodeUTF8));
        nextHeader->setText(QString());
        label_24->setText(QApplication::translate("Ip6", "Flow Label", 0, QApplication::UnicodeUTF8));
        flowLabel->setInputMask(QApplication::translate("Ip6", ">H HH HH; ", 0, QApplication::UnicodeUTF8));
        label_26->setText(QApplication::translate("Ip6", "Hop Limit", 0, QApplication::UnicodeUTF8));
        hopLimit->setText(QString());
        groupBox_7->setTitle(QString());
        label->setText(QApplication::translate("Ip6", "Address", 0, QApplication::UnicodeUTF8));
        label_31->setText(QApplication::translate("Ip6", "Mode", 0, QApplication::UnicodeUTF8));
        label_23->setText(QApplication::translate("Ip6", "Count", 0, QApplication::UnicodeUTF8));
        label_30->setText(QApplication::translate("Ip6", "Prefix", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("Ip6", "Source", 0, QApplication::UnicodeUTF8));
        srcAddr->setText(QString());
        srcAddrModeCombo->clear();
        srcAddrModeCombo->insertItems(0, QStringList()
         << QApplication::translate("Ip6", "Fixed", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Ip6", "Increment Host", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Ip6", "Decrement Host", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Ip6", "Random Host", 0, QApplication::UnicodeUTF8)
        );
        srcAddrCount->setText(QString());
        srcAddrPrefix->setInputMask(QApplication::translate("Ip6", "/009; ", 0, QApplication::UnicodeUTF8));
        srcAddrPrefix->setText(QApplication::translate("Ip6", "/64", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("Ip6", "Destination", 0, QApplication::UnicodeUTF8));
        dstAddr->setText(QString());
        dstAddrModeCombo->clear();
        dstAddrModeCombo->insertItems(0, QStringList()
         << QApplication::translate("Ip6", "Fixed", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Ip6", "Increment Host", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Ip6", "Decrement Host", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Ip6", "Random Host", 0, QApplication::UnicodeUTF8)
        );
        dstAddrCount->setText(QString());
        dstAddrPrefix->setInputMask(QApplication::translate("Ip6", "/009; ", 0, QApplication::UnicodeUTF8));
        dstAddrPrefix->setText(QApplication::translate("Ip6", "/64", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Ip6: public Ui_Ip6 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IP6_H
