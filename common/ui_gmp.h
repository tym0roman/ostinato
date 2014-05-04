/********************************************************************************
** Form generated from reading UI file 'gmp.ui'
**
** Created: Mon Apr 28 09:08:34 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GMP_H
#define UI_GMP_H

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
#include <QtGui/QListWidget>
#include <QtGui/QSpacerItem>
#include <QtGui/QStackedWidget>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "intcombobox.h"

QT_BEGIN_NAMESPACE

class Ui_Gmp
{
public:
    QVBoxLayout *vboxLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    IntComboBox *msgTypeCombo;
    QLabel *label_2;
    QLineEdit *maxResponseTime;
    QCheckBox *overrideChecksum;
    QLineEdit *checksum;
    QGroupBox *asmGroup;
    QGridLayout *gridLayout1;
    QLabel *label_4;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLineEdit *groupAddress;
    QComboBox *groupMode;
    QLineEdit *groupCount;
    QLineEdit *groupPrefix;
    QStackedWidget *ssmWidget;
    QWidget *page;
    QHBoxLayout *hboxLayout;
    QGroupBox *groupBox_3;
    QHBoxLayout *hboxLayout1;
    QGridLayout *gridLayout2;
    QCheckBox *sFlag;
    QLabel *label_5;
    QLineEdit *qrv;
    QSpacerItem *spacerItem;
    QLabel *label_6;
    QLineEdit *qqi;
    QSpacerItem *spacerItem1;
    QVBoxLayout *vboxLayout1;
    QHBoxLayout *hboxLayout2;
    QLabel *label_13;
    QSpacerItem *spacerItem2;
    QToolButton *addSource;
    QToolButton *deleteSource;
    QListWidget *sourceList;
    QHBoxLayout *hboxLayout3;
    QSpacerItem *spacerItem3;
    QCheckBox *overrideSourceCount;
    QLineEdit *sourceCount;
    QSpacerItem *spacerItem4;
    QWidget *page_2;
    QVBoxLayout *vboxLayout2;
    QGroupBox *groupBox_2;
    QHBoxLayout *hboxLayout4;
    QVBoxLayout *vboxLayout3;
    QHBoxLayout *hboxLayout5;
    QLabel *label_14;
    QSpacerItem *spacerItem5;
    QToolButton *addGroupRecord;
    QToolButton *deleteGroupRecord;
    QListWidget *groupList;
    QHBoxLayout *hboxLayout6;
    QCheckBox *overrideGroupRecordCount;
    QLineEdit *groupRecordCount;
    QWidget *groupRecord;
    QVBoxLayout *vboxLayout4;
    QGridLayout *gridLayout3;
    QLabel *label_3;
    QComboBox *groupRecordType;
    QLabel *label_7;
    QLineEdit *groupRecordAddress;
    QVBoxLayout *vboxLayout5;
    QHBoxLayout *hboxLayout7;
    QLabel *label_12;
    QSpacerItem *spacerItem6;
    QToolButton *addGroupRecordSource;
    QToolButton *deleteGroupRecordSource;
    QListWidget *groupRecordSourceList;
    QHBoxLayout *hboxLayout8;
    QCheckBox *overrideGroupRecordSourceCount;
    QLineEdit *groupRecordSourceCount;
    QSpacerItem *spacerItem7;
    QGridLayout *gridLayout4;
    QLabel *label_8;
    QSpacerItem *spacerItem8;
    QCheckBox *overrideAuxDataLength;
    QLineEdit *auxDataLength;
    QLineEdit *auxData;
    QSpacerItem *spacerItem9;

    void setupUi(QWidget *Gmp)
    {
        if (Gmp->objectName().isEmpty())
            Gmp->setObjectName(QString::fromUtf8("Gmp"));
        Gmp->resize(509, 355);
        vboxLayout = new QVBoxLayout(Gmp);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(Gmp);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        msgTypeCombo = new IntComboBox(Gmp);
        msgTypeCombo->setObjectName(QString::fromUtf8("msgTypeCombo"));

        gridLayout->addWidget(msgTypeCombo, 0, 1, 1, 1);

        label_2 = new QLabel(Gmp);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        maxResponseTime = new QLineEdit(Gmp);
        maxResponseTime->setObjectName(QString::fromUtf8("maxResponseTime"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(maxResponseTime->sizePolicy().hasHeightForWidth());
        maxResponseTime->setSizePolicy(sizePolicy);

        gridLayout->addWidget(maxResponseTime, 1, 1, 1, 1);

        overrideChecksum = new QCheckBox(Gmp);
        overrideChecksum->setObjectName(QString::fromUtf8("overrideChecksum"));

        gridLayout->addWidget(overrideChecksum, 1, 2, 1, 1);

        checksum = new QLineEdit(Gmp);
        checksum->setObjectName(QString::fromUtf8("checksum"));
        checksum->setEnabled(false);
        sizePolicy.setHeightForWidth(checksum->sizePolicy().hasHeightForWidth());
        checksum->setSizePolicy(sizePolicy);

        gridLayout->addWidget(checksum, 1, 3, 1, 1);


        vboxLayout->addLayout(gridLayout);

        asmGroup = new QGroupBox(Gmp);
        asmGroup->setObjectName(QString::fromUtf8("asmGroup"));
        gridLayout1 = new QGridLayout(asmGroup);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        label_4 = new QLabel(asmGroup);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout1->addWidget(label_4, 0, 0, 1, 1);

        label_9 = new QLabel(asmGroup);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout1->addWidget(label_9, 0, 1, 1, 1);

        label_10 = new QLabel(asmGroup);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout1->addWidget(label_10, 0, 2, 1, 1);

        label_11 = new QLabel(asmGroup);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout1->addWidget(label_11, 0, 3, 1, 1);

        groupAddress = new QLineEdit(asmGroup);
        groupAddress->setObjectName(QString::fromUtf8("groupAddress"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupAddress->sizePolicy().hasHeightForWidth());
        groupAddress->setSizePolicy(sizePolicy1);

        gridLayout1->addWidget(groupAddress, 1, 0, 1, 1);

        groupMode = new QComboBox(asmGroup);
        groupMode->setObjectName(QString::fromUtf8("groupMode"));

        gridLayout1->addWidget(groupMode, 1, 1, 1, 1);

        groupCount = new QLineEdit(asmGroup);
        groupCount->setObjectName(QString::fromUtf8("groupCount"));
        groupCount->setEnabled(false);
        sizePolicy.setHeightForWidth(groupCount->sizePolicy().hasHeightForWidth());
        groupCount->setSizePolicy(sizePolicy);

        gridLayout1->addWidget(groupCount, 1, 2, 1, 1);

        groupPrefix = new QLineEdit(asmGroup);
        groupPrefix->setObjectName(QString::fromUtf8("groupPrefix"));
        groupPrefix->setEnabled(false);
        sizePolicy.setHeightForWidth(groupPrefix->sizePolicy().hasHeightForWidth());
        groupPrefix->setSizePolicy(sizePolicy);

        gridLayout1->addWidget(groupPrefix, 1, 3, 1, 1);


        vboxLayout->addWidget(asmGroup);

        ssmWidget = new QStackedWidget(Gmp);
        ssmWidget->setObjectName(QString::fromUtf8("ssmWidget"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        hboxLayout = new QHBoxLayout(page);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        groupBox_3 = new QGroupBox(page);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        hboxLayout1 = new QHBoxLayout(groupBox_3);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        gridLayout2 = new QGridLayout();
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        sFlag = new QCheckBox(groupBox_3);
        sFlag->setObjectName(QString::fromUtf8("sFlag"));

        gridLayout2->addWidget(sFlag, 0, 0, 1, 3);

        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout2->addWidget(label_5, 1, 0, 1, 1);

        qrv = new QLineEdit(groupBox_3);
        qrv->setObjectName(QString::fromUtf8("qrv"));

        gridLayout2->addWidget(qrv, 1, 1, 1, 1);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout2->addItem(spacerItem, 1, 2, 1, 1);

        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout2->addWidget(label_6, 2, 0, 1, 1);

        qqi = new QLineEdit(groupBox_3);
        qqi->setObjectName(QString::fromUtf8("qqi"));

        gridLayout2->addWidget(qqi, 2, 1, 1, 1);

        spacerItem1 = new QSpacerItem(61, 41, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout2->addItem(spacerItem1, 3, 1, 1, 1);


        hboxLayout1->addLayout(gridLayout2);

        vboxLayout1 = new QVBoxLayout();
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        label_13 = new QLabel(groupBox_3);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        hboxLayout2->addWidget(label_13);

        spacerItem2 = new QSpacerItem(16, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem2);

        addSource = new QToolButton(groupBox_3);
        addSource->setObjectName(QString::fromUtf8("addSource"));

        hboxLayout2->addWidget(addSource);

        deleteSource = new QToolButton(groupBox_3);
        deleteSource->setObjectName(QString::fromUtf8("deleteSource"));

        hboxLayout2->addWidget(deleteSource);


        vboxLayout1->addLayout(hboxLayout2);

        sourceList = new QListWidget(groupBox_3);
        sourceList->setObjectName(QString::fromUtf8("sourceList"));
        sourceList->setDragEnabled(true);
        sourceList->setDragDropMode(QAbstractItemView::InternalMove);

        vboxLayout1->addWidget(sourceList);

        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        spacerItem3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout3->addItem(spacerItem3);

        overrideSourceCount = new QCheckBox(groupBox_3);
        overrideSourceCount->setObjectName(QString::fromUtf8("overrideSourceCount"));

        hboxLayout3->addWidget(overrideSourceCount);

        sourceCount = new QLineEdit(groupBox_3);
        sourceCount->setObjectName(QString::fromUtf8("sourceCount"));
        sourceCount->setEnabled(false);

        hboxLayout3->addWidget(sourceCount);


        vboxLayout1->addLayout(hboxLayout3);

        spacerItem4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout1->addItem(spacerItem4);


        hboxLayout1->addLayout(vboxLayout1);


        hboxLayout->addWidget(groupBox_3);

        ssmWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        vboxLayout2 = new QVBoxLayout(page_2);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        vboxLayout2->setContentsMargins(0, 0, 0, 0);
        groupBox_2 = new QGroupBox(page_2);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        hboxLayout4 = new QHBoxLayout(groupBox_2);
        hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
        vboxLayout3 = new QVBoxLayout();
        vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));
        hboxLayout5 = new QHBoxLayout();
        hboxLayout5->setObjectName(QString::fromUtf8("hboxLayout5"));
        label_14 = new QLabel(groupBox_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        hboxLayout5->addWidget(label_14);

        spacerItem5 = new QSpacerItem(16, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout5->addItem(spacerItem5);

        addGroupRecord = new QToolButton(groupBox_2);
        addGroupRecord->setObjectName(QString::fromUtf8("addGroupRecord"));

        hboxLayout5->addWidget(addGroupRecord);

        deleteGroupRecord = new QToolButton(groupBox_2);
        deleteGroupRecord->setObjectName(QString::fromUtf8("deleteGroupRecord"));

        hboxLayout5->addWidget(deleteGroupRecord);


        vboxLayout3->addLayout(hboxLayout5);

        groupList = new QListWidget(groupBox_2);
        groupList->setObjectName(QString::fromUtf8("groupList"));
        groupList->setDragEnabled(true);
        groupList->setDragDropMode(QAbstractItemView::InternalMove);

        vboxLayout3->addWidget(groupList);

        hboxLayout6 = new QHBoxLayout();
        hboxLayout6->setObjectName(QString::fromUtf8("hboxLayout6"));
        overrideGroupRecordCount = new QCheckBox(groupBox_2);
        overrideGroupRecordCount->setObjectName(QString::fromUtf8("overrideGroupRecordCount"));

        hboxLayout6->addWidget(overrideGroupRecordCount);

        groupRecordCount = new QLineEdit(groupBox_2);
        groupRecordCount->setObjectName(QString::fromUtf8("groupRecordCount"));
        groupRecordCount->setEnabled(false);

        hboxLayout6->addWidget(groupRecordCount);


        vboxLayout3->addLayout(hboxLayout6);


        hboxLayout4->addLayout(vboxLayout3);

        groupRecord = new QWidget(groupBox_2);
        groupRecord->setObjectName(QString::fromUtf8("groupRecord"));
        groupRecord->setEnabled(false);
        vboxLayout4 = new QVBoxLayout(groupRecord);
        vboxLayout4->setObjectName(QString::fromUtf8("vboxLayout4"));
        vboxLayout4->setContentsMargins(0, 0, 0, 0);
        gridLayout3 = new QGridLayout();
        gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
        label_3 = new QLabel(groupRecord);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout3->addWidget(label_3, 0, 0, 1, 1);

        groupRecordType = new QComboBox(groupRecord);
        groupRecordType->setObjectName(QString::fromUtf8("groupRecordType"));

        gridLayout3->addWidget(groupRecordType, 0, 1, 1, 1);

        label_7 = new QLabel(groupRecord);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout3->addWidget(label_7, 1, 0, 1, 1);

        groupRecordAddress = new QLineEdit(groupRecord);
        groupRecordAddress->setObjectName(QString::fromUtf8("groupRecordAddress"));

        gridLayout3->addWidget(groupRecordAddress, 1, 1, 1, 1);


        vboxLayout4->addLayout(gridLayout3);

        vboxLayout5 = new QVBoxLayout();
        vboxLayout5->setObjectName(QString::fromUtf8("vboxLayout5"));
        hboxLayout7 = new QHBoxLayout();
        hboxLayout7->setObjectName(QString::fromUtf8("hboxLayout7"));
        label_12 = new QLabel(groupRecord);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        hboxLayout7->addWidget(label_12);

        spacerItem6 = new QSpacerItem(191, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout7->addItem(spacerItem6);

        addGroupRecordSource = new QToolButton(groupRecord);
        addGroupRecordSource->setObjectName(QString::fromUtf8("addGroupRecordSource"));

        hboxLayout7->addWidget(addGroupRecordSource);

        deleteGroupRecordSource = new QToolButton(groupRecord);
        deleteGroupRecordSource->setObjectName(QString::fromUtf8("deleteGroupRecordSource"));

        hboxLayout7->addWidget(deleteGroupRecordSource);


        vboxLayout5->addLayout(hboxLayout7);

        groupRecordSourceList = new QListWidget(groupRecord);
        groupRecordSourceList->setObjectName(QString::fromUtf8("groupRecordSourceList"));
        groupRecordSourceList->setDragEnabled(true);
        groupRecordSourceList->setDragDropMode(QAbstractItemView::InternalMove);

        vboxLayout5->addWidget(groupRecordSourceList);

        hboxLayout8 = new QHBoxLayout();
        hboxLayout8->setObjectName(QString::fromUtf8("hboxLayout8"));
        overrideGroupRecordSourceCount = new QCheckBox(groupRecord);
        overrideGroupRecordSourceCount->setObjectName(QString::fromUtf8("overrideGroupRecordSourceCount"));

        hboxLayout8->addWidget(overrideGroupRecordSourceCount);

        groupRecordSourceCount = new QLineEdit(groupRecord);
        groupRecordSourceCount->setObjectName(QString::fromUtf8("groupRecordSourceCount"));
        groupRecordSourceCount->setEnabled(false);
        sizePolicy.setHeightForWidth(groupRecordSourceCount->sizePolicy().hasHeightForWidth());
        groupRecordSourceCount->setSizePolicy(sizePolicy);

        hboxLayout8->addWidget(groupRecordSourceCount);

        spacerItem7 = new QSpacerItem(81, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout8->addItem(spacerItem7);


        vboxLayout5->addLayout(hboxLayout8);


        vboxLayout4->addLayout(vboxLayout5);

        gridLayout4 = new QGridLayout();
        gridLayout4->setObjectName(QString::fromUtf8("gridLayout4"));
        label_8 = new QLabel(groupRecord);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout4->addWidget(label_8, 0, 0, 1, 1);

        spacerItem8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout4->addItem(spacerItem8, 0, 1, 1, 1);

        overrideAuxDataLength = new QCheckBox(groupRecord);
        overrideAuxDataLength->setObjectName(QString::fromUtf8("overrideAuxDataLength"));

        gridLayout4->addWidget(overrideAuxDataLength, 0, 2, 1, 1);

        auxDataLength = new QLineEdit(groupRecord);
        auxDataLength->setObjectName(QString::fromUtf8("auxDataLength"));
        auxDataLength->setEnabled(false);
        sizePolicy.setHeightForWidth(auxDataLength->sizePolicy().hasHeightForWidth());
        auxDataLength->setSizePolicy(sizePolicy);

        gridLayout4->addWidget(auxDataLength, 0, 3, 1, 1);

        auxData = new QLineEdit(groupRecord);
        auxData->setObjectName(QString::fromUtf8("auxData"));

        gridLayout4->addWidget(auxData, 1, 0, 1, 4);


        vboxLayout4->addLayout(gridLayout4);


        hboxLayout4->addWidget(groupRecord);


        vboxLayout2->addWidget(groupBox_2);

        ssmWidget->addWidget(page_2);

        vboxLayout->addWidget(ssmWidget);

        spacerItem9 = new QSpacerItem(101, 21, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem9);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(msgTypeCombo);
        label_2->setBuddy(maxResponseTime);
        label_4->setBuddy(groupAddress);
        label_9->setBuddy(msgTypeCombo);
        label_10->setBuddy(msgTypeCombo);
        label_11->setBuddy(msgTypeCombo);
        label_5->setBuddy(qrv);
        label_6->setBuddy(qqi);
        label_13->setBuddy(groupRecordAddress);
        label_14->setBuddy(groupRecordAddress);
        label_3->setBuddy(groupRecordType);
        label_7->setBuddy(groupRecordAddress);
        label_12->setBuddy(groupRecordAddress);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(msgTypeCombo, maxResponseTime);
        QWidget::setTabOrder(maxResponseTime, overrideChecksum);
        QWidget::setTabOrder(overrideChecksum, checksum);
        QWidget::setTabOrder(checksum, groupAddress);
        QWidget::setTabOrder(groupAddress, groupMode);
        QWidget::setTabOrder(groupMode, groupCount);
        QWidget::setTabOrder(groupCount, groupPrefix);
        QWidget::setTabOrder(groupPrefix, overrideGroupRecordCount);
        QWidget::setTabOrder(overrideGroupRecordCount, groupRecordCount);
        QWidget::setTabOrder(groupRecordCount, groupRecordType);
        QWidget::setTabOrder(groupRecordType, groupRecordAddress);
        QWidget::setTabOrder(groupRecordAddress, overrideGroupRecordSourceCount);
        QWidget::setTabOrder(overrideGroupRecordSourceCount, groupRecordSourceCount);
        QWidget::setTabOrder(groupRecordSourceCount, overrideAuxDataLength);
        QWidget::setTabOrder(overrideAuxDataLength, auxDataLength);
        QWidget::setTabOrder(auxDataLength, auxData);
        QWidget::setTabOrder(auxData, sFlag);
        QWidget::setTabOrder(sFlag, qrv);
        QWidget::setTabOrder(qrv, qqi);
        QWidget::setTabOrder(qqi, overrideSourceCount);
        QWidget::setTabOrder(overrideSourceCount, sourceCount);

        retranslateUi(Gmp);
        QObject::connect(overrideChecksum, SIGNAL(toggled(bool)), checksum, SLOT(setEnabled(bool)));
        QObject::connect(overrideGroupRecordSourceCount, SIGNAL(toggled(bool)), groupRecordSourceCount, SLOT(setEnabled(bool)));
        QObject::connect(overrideAuxDataLength, SIGNAL(toggled(bool)), auxDataLength, SLOT(setEnabled(bool)));
        QObject::connect(overrideGroupRecordCount, SIGNAL(toggled(bool)), groupRecordCount, SLOT(setEnabled(bool)));
        QObject::connect(overrideSourceCount, SIGNAL(toggled(bool)), sourceCount, SLOT(setEnabled(bool)));

        ssmWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Gmp);
    } // setupUi

    void retranslateUi(QWidget *Gmp)
    {
        Gmp->setWindowTitle(QApplication::translate("Gmp", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Gmp", "Message Type", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Gmp", "Max Response Time (1/10s)", 0, QApplication::UnicodeUTF8));
        overrideChecksum->setText(QApplication::translate("Gmp", "Checksum", 0, QApplication::UnicodeUTF8));
        checksum->setInputMask(QApplication::translate("Gmp", ">HHHH; ", 0, QApplication::UnicodeUTF8));
        asmGroup->setTitle(QString());
        label_4->setText(QApplication::translate("Gmp", "Group Address", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("Gmp", "Mode", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("Gmp", "Count", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("Gmp", "Prefix", 0, QApplication::UnicodeUTF8));
        groupMode->clear();
        groupMode->insertItems(0, QStringList()
         << QApplication::translate("Gmp", "Fixed", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Gmp", "Increment Host", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Gmp", "Decrement Host", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Gmp", "Random Host", 0, QApplication::UnicodeUTF8)
        );
        groupPrefix->setInputMask(QApplication::translate("Gmp", "/900; ", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QString());
        sFlag->setText(QApplication::translate("Gmp", "S Flag (Suppress Router Processing)", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("Gmp", "QRV", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("Gmp", "QQI", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("Gmp", "Source List", 0, QApplication::UnicodeUTF8));
        addSource->setText(QApplication::translate("Gmp", "+", 0, QApplication::UnicodeUTF8));
        deleteSource->setText(QApplication::translate("Gmp", "\342\200\223", 0, QApplication::UnicodeUTF8));
        overrideSourceCount->setText(QApplication::translate("Gmp", "Count", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QString());
        label_14->setText(QApplication::translate("Gmp", "Group Records", 0, QApplication::UnicodeUTF8));
        addGroupRecord->setText(QApplication::translate("Gmp", "+", 0, QApplication::UnicodeUTF8));
        deleteGroupRecord->setText(QApplication::translate("Gmp", "\342\200\223", 0, QApplication::UnicodeUTF8));
        overrideGroupRecordCount->setText(QApplication::translate("Gmp", "Number of Groups", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Gmp", "Record Type", 0, QApplication::UnicodeUTF8));
        groupRecordType->clear();
        groupRecordType->insertItems(0, QStringList()
         << QApplication::translate("Gmp", "Reserved", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Gmp", "Is Include", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Gmp", "Is Exclude", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Gmp", "To Include", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Gmp", "To Exclude", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Gmp", "Allow New", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Gmp", "Block Old", 0, QApplication::UnicodeUTF8)
        );
        label_7->setText(QApplication::translate("Gmp", "Group Address", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("Gmp", "Source List", 0, QApplication::UnicodeUTF8));
        addGroupRecordSource->setText(QApplication::translate("Gmp", "+", 0, QApplication::UnicodeUTF8));
        deleteGroupRecordSource->setText(QApplication::translate("Gmp", "\342\200\223", 0, QApplication::UnicodeUTF8));
        overrideGroupRecordSourceCount->setText(QApplication::translate("Gmp", "Number of Sources", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("Gmp", "Aux Data", 0, QApplication::UnicodeUTF8));
        overrideAuxDataLength->setText(QApplication::translate("Gmp", "Length (x4)", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Gmp: public Ui_Gmp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GMP_H
