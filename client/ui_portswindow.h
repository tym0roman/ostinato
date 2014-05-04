/********************************************************************************
** Form generated from reading UI file 'portswindow.ui'
**
** Created: Mon Apr 28 09:18:56 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PORTSWINDOW_H
#define UI_PORTSWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSplitter>
#include <QtGui/QStackedWidget>
#include <QtGui/QTableView>
#include <QtGui/QTreeView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PortsWindow
{
public:
    QAction *actionNew_Port_Group;
    QAction *actionDelete_Port_Group;
    QAction *actionConnect_Port_Group;
    QAction *actionDisconnect_Port_Group;
    QAction *actionNew_Stream;
    QAction *actionDelete_Stream;
    QAction *actionEdit_Stream;
    QAction *actionExclusive_Control;
    QAction *actionOpen_Streams;
    QAction *actionSave_Streams;
    QAction *actionPort_Configuration;
    QGridLayout *gridLayout;
    QSplitter *splitter;
    QTreeView *tvPortList;
    QStackedWidget *swDetail;
    QWidget *portDetail;
    QGridLayout *gridLayout1;
    QHBoxLayout *hboxLayout;
    QFrame *frAggregate;
    QGridLayout *gridLayout2;
    QRadioButton *radioButton;
    QLineEdit *averagePacketsPerSec;
    QRadioButton *radioButton_2;
    QLineEdit *averageBitsPerSec;
    QSpacerItem *spacerItem;
    QVBoxLayout *vboxLayout;
    QPushButton *pbApply;
    QSpacerItem *spacerItem1;
    QTableView *tvStreamList;
    QWidget *portGroupDetail;
    QHBoxLayout *hboxLayout1;
    QLabel *label_5;
    QWidget *blankPage;

    void setupUi(QWidget *PortsWindow)
    {
        if (PortsWindow->objectName().isEmpty())
            PortsWindow->setObjectName(QString::fromUtf8("PortsWindow"));
        PortsWindow->resize(710, 352);
        actionNew_Port_Group = new QAction(PortsWindow);
        actionNew_Port_Group->setObjectName(QString::fromUtf8("actionNew_Port_Group"));
        const QIcon icon = QIcon(QString::fromUtf8(":/icons/portgroup_add.png"));
        actionNew_Port_Group->setIcon(icon);
        actionDelete_Port_Group = new QAction(PortsWindow);
        actionDelete_Port_Group->setObjectName(QString::fromUtf8("actionDelete_Port_Group"));
        const QIcon icon1 = QIcon(QString::fromUtf8(":/icons/portgroup_delete.png"));
        actionDelete_Port_Group->setIcon(icon1);
        actionConnect_Port_Group = new QAction(PortsWindow);
        actionConnect_Port_Group->setObjectName(QString::fromUtf8("actionConnect_Port_Group"));
        const QIcon icon2 = QIcon(QString::fromUtf8(":/icons/portgroup_connect.png"));
        actionConnect_Port_Group->setIcon(icon2);
        actionDisconnect_Port_Group = new QAction(PortsWindow);
        actionDisconnect_Port_Group->setObjectName(QString::fromUtf8("actionDisconnect_Port_Group"));
        const QIcon icon3 = QIcon(QString::fromUtf8(":/icons/portgroup_disconnect.png"));
        actionDisconnect_Port_Group->setIcon(icon3);
        actionNew_Stream = new QAction(PortsWindow);
        actionNew_Stream->setObjectName(QString::fromUtf8("actionNew_Stream"));
        const QIcon icon4 = QIcon(QString::fromUtf8(":/icons/stream_add.png"));
        actionNew_Stream->setIcon(icon4);
        actionDelete_Stream = new QAction(PortsWindow);
        actionDelete_Stream->setObjectName(QString::fromUtf8("actionDelete_Stream"));
        const QIcon icon5 = QIcon(QString::fromUtf8(":/icons/stream_delete.png"));
        actionDelete_Stream->setIcon(icon5);
        actionEdit_Stream = new QAction(PortsWindow);
        actionEdit_Stream->setObjectName(QString::fromUtf8("actionEdit_Stream"));
        const QIcon icon6 = QIcon(QString::fromUtf8(":/icons/stream_edit.png"));
        actionEdit_Stream->setIcon(icon6);
        actionExclusive_Control = new QAction(PortsWindow);
        actionExclusive_Control->setObjectName(QString::fromUtf8("actionExclusive_Control"));
        actionExclusive_Control->setCheckable(true);
        actionOpen_Streams = new QAction(PortsWindow);
        actionOpen_Streams->setObjectName(QString::fromUtf8("actionOpen_Streams"));
        actionSave_Streams = new QAction(PortsWindow);
        actionSave_Streams->setObjectName(QString::fromUtf8("actionSave_Streams"));
        actionPort_Configuration = new QAction(PortsWindow);
        actionPort_Configuration->setObjectName(QString::fromUtf8("actionPort_Configuration"));
        gridLayout = new QGridLayout(PortsWindow);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        splitter = new QSplitter(PortsWindow);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        splitter->setChildrenCollapsible(false);
        tvPortList = new QTreeView(splitter);
        tvPortList->setObjectName(QString::fromUtf8("tvPortList"));
        tvPortList->setContextMenuPolicy(Qt::ActionsContextMenu);
        tvPortList->setSelectionMode(QAbstractItemView::SingleSelection);
        splitter->addWidget(tvPortList);
        swDetail = new QStackedWidget(splitter);
        swDetail->setObjectName(QString::fromUtf8("swDetail"));
        portDetail = new QWidget();
        portDetail->setObjectName(QString::fromUtf8("portDetail"));
        gridLayout1 = new QGridLayout(portDetail);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        gridLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        frAggregate = new QFrame(portDetail);
        frAggregate->setObjectName(QString::fromUtf8("frAggregate"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frAggregate->sizePolicy().hasHeightForWidth());
        frAggregate->setSizePolicy(sizePolicy);
        frAggregate->setFrameShape(QFrame::StyledPanel);
        frAggregate->setFrameShadow(QFrame::Sunken);
        gridLayout2 = new QGridLayout(frAggregate);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        radioButton = new QRadioButton(frAggregate);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setChecked(true);

        gridLayout2->addWidget(radioButton, 0, 0, 1, 1);

        averagePacketsPerSec = new QLineEdit(frAggregate);
        averagePacketsPerSec->setObjectName(QString::fromUtf8("averagePacketsPerSec"));

        gridLayout2->addWidget(averagePacketsPerSec, 0, 1, 1, 1);

        radioButton_2 = new QRadioButton(frAggregate);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        gridLayout2->addWidget(radioButton_2, 1, 0, 1, 1);

        averageBitsPerSec = new QLineEdit(frAggregate);
        averageBitsPerSec->setObjectName(QString::fromUtf8("averageBitsPerSec"));
        averageBitsPerSec->setEnabled(false);

        gridLayout2->addWidget(averageBitsPerSec, 1, 1, 1, 1);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout2->addItem(spacerItem, 0, 2, 1, 1);


        hboxLayout->addWidget(frAggregate);

        vboxLayout = new QVBoxLayout();
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        pbApply = new QPushButton(portDetail);
        pbApply->setObjectName(QString::fromUtf8("pbApply"));

        vboxLayout->addWidget(pbApply);

        spacerItem1 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem1);


        hboxLayout->addLayout(vboxLayout);


        gridLayout1->addLayout(hboxLayout, 0, 0, 1, 1);

        tvStreamList = new QTableView(portDetail);
        tvStreamList->setObjectName(QString::fromUtf8("tvStreamList"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(tvStreamList->sizePolicy().hasHeightForWidth());
        tvStreamList->setSizePolicy(sizePolicy1);
        tvStreamList->setContextMenuPolicy(Qt::ActionsContextMenu);
        tvStreamList->setFrameShape(QFrame::StyledPanel);
        tvStreamList->setLineWidth(1);
        tvStreamList->setSelectionMode(QAbstractItemView::ExtendedSelection);
        tvStreamList->setSelectionBehavior(QAbstractItemView::SelectRows);

        gridLayout1->addWidget(tvStreamList, 1, 0, 1, 1);

        swDetail->addWidget(portDetail);
        portGroupDetail = new QWidget();
        portGroupDetail->setObjectName(QString::fromUtf8("portGroupDetail"));
        hboxLayout1 = new QHBoxLayout(portGroupDetail);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        label_5 = new QLabel(portGroupDetail);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        hboxLayout1->addWidget(label_5);

        swDetail->addWidget(portGroupDetail);
        blankPage = new QWidget();
        blankPage->setObjectName(QString::fromUtf8("blankPage"));
        swDetail->addWidget(blankPage);
        splitter->addWidget(swDetail);

        gridLayout->addWidget(splitter, 0, 0, 1, 1);


        retranslateUi(PortsWindow);
        QObject::connect(radioButton, SIGNAL(toggled(bool)), averagePacketsPerSec, SLOT(setEnabled(bool)));
        QObject::connect(radioButton_2, SIGNAL(toggled(bool)), averageBitsPerSec, SLOT(setEnabled(bool)));

        swDetail->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PortsWindow);
    } // setupUi

    void retranslateUi(QWidget *PortsWindow)
    {
        PortsWindow->setWindowTitle(QApplication::translate("PortsWindow", "Form", 0, QApplication::UnicodeUTF8));
        actionNew_Port_Group->setText(QApplication::translate("PortsWindow", "New Port Group", 0, QApplication::UnicodeUTF8));
        actionDelete_Port_Group->setText(QApplication::translate("PortsWindow", "Delete Port Group", 0, QApplication::UnicodeUTF8));
        actionConnect_Port_Group->setText(QApplication::translate("PortsWindow", "Connect Port Group", 0, QApplication::UnicodeUTF8));
        actionDisconnect_Port_Group->setText(QApplication::translate("PortsWindow", "Disconnect Port Group", 0, QApplication::UnicodeUTF8));
        actionNew_Stream->setText(QApplication::translate("PortsWindow", "New Stream", 0, QApplication::UnicodeUTF8));
        actionDelete_Stream->setText(QApplication::translate("PortsWindow", "Delete Stream", 0, QApplication::UnicodeUTF8));
        actionEdit_Stream->setText(QApplication::translate("PortsWindow", "Edit Stream", 0, QApplication::UnicodeUTF8));
        actionExclusive_Control->setText(QApplication::translate("PortsWindow", "Exclusive Port Control (EXPERIMENTAL)", 0, QApplication::UnicodeUTF8));
        actionOpen_Streams->setText(QApplication::translate("PortsWindow", "Open Streams ...", 0, QApplication::UnicodeUTF8));
        actionSave_Streams->setText(QApplication::translate("PortsWindow", "Save Streams ...", 0, QApplication::UnicodeUTF8));
        actionPort_Configuration->setText(QApplication::translate("PortsWindow", "Port Configuration ...", 0, QApplication::UnicodeUTF8));
        radioButton->setText(QApplication::translate("PortsWindow", "Avg pps", 0, QApplication::UnicodeUTF8));
        radioButton_2->setText(QApplication::translate("PortsWindow", "Avg bps", 0, QApplication::UnicodeUTF8));
        pbApply->setText(QApplication::translate("PortsWindow", "Apply", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("PortsWindow", "Select a port to configure streams", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PortsWindow: public Ui_PortsWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PORTSWINDOW_H
