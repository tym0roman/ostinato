/********************************************************************************
** Form generated from reading UI file 'lacp.ui'
**
** Created: Thu May 1 12:18:52 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LACP_H
#define UI_LACP_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QFormLayout>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Lacp
{
public:
    QGridLayout *gridLayout_7;
    QSpacerItem *horizontalSpacer;
    QFormLayout *formLayout;
    QLabel *label_12;
    QLineEdit *ui_FCS;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout_5;
    QCheckBox *checkTLVCollector;
    QLineEdit *ui_TLV_Collector;
    QCheckBox *checkCollectorInfo;
    QLineEdit *ui_CollectorInfo;
    QLabel *label_11;
    QLineEdit *ui_collMaxDel;
    QCheckBox *checkTLV_T;
    QLineEdit *ui_TLV_Terminator;
    QCheckBox *checkTerminatorLen;
    QLineEdit *ui_TerminatoLen;
    QGridLayout *gridLayout_3;
    QLineEdit *ui_TLV_Partner;
    QCheckBox *checkPartnerInfo;
    QLineEdit *ui_par_sys_prior;
    QCheckBox *checkTLV_P;
    QLineEdit *ui_psys;
    QLabel *label_9;
    QLabel *label_8;
    QLineEdit *ui_pport;
    QLineEdit *ui_pkey;
    QLabel *label_10;
    QLineEdit *ui_PartnerInfo;
    QLabel *label_7;
    QLabel *label_6;
    QLineEdit *ui_pport_prior;
    QGroupBox *ui_astate_2;
    QGridLayout *gridLayout_8;
    QGridLayout *gridLayout_6;
    QCheckBox *checkActivity_p;
    QCheckBox *checkDefaulted_p;
    QCheckBox *checkTimeout_p;
    QCheckBox *checkAggregation_p;
    QCheckBox *checkCollecting_p;
    QCheckBox *checkExpired_p;
    QCheckBox *checkDistributing_p;
    QCheckBox *checkSynchronization_p;
    QGridLayout *gridLayout_9;
    QGridLayout *gridLayout;
    QCheckBox *checkActorInfo;
    QLineEdit *ui_aport;
    QLabel *label_2;
    QLabel *label_5;
    QLineEdit *ui_Subtype;
    QLabel *label_3;
    QLineEdit *ui_ActorInfo;
    QLineEdit *ui_akey;
    QLineEdit *ui_act_sys_prior;
    QLineEdit *ui_aport_prior;
    QLineEdit *ui_lacp_asys;
    QLineEdit *ui_Version;
    QLineEdit *ui_TLV_Actor;
    QLabel *label_4;
    QLabel *label;
    QCheckBox *checkSubtype;
    QCheckBox *checkVersion;
    QCheckBox *checkTLV_A;
    QGroupBox *ui_astate;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_2;
    QCheckBox *checkActivity;
    QCheckBox *checkDefaulted;
    QCheckBox *checkTimeout;
    QCheckBox *checkAggregation;
    QCheckBox *checkCollecting;
    QCheckBox *checkExpired;
    QCheckBox *checkDistributing;
    QCheckBox *checkSynchronization;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *Lacp)
    {
        if (Lacp->objectName().isEmpty())
            Lacp->setObjectName(QString::fromUtf8("Lacp"));
        Lacp->resize(842, 540);
        gridLayout_7 = new QGridLayout(Lacp);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer, 0, 1, 1, 1);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label_12 = new QLabel(Lacp);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_12);

        ui_FCS = new QLineEdit(Lacp);
        ui_FCS->setObjectName(QString::fromUtf8("ui_FCS"));

        formLayout->setWidget(0, QFormLayout::FieldRole, ui_FCS);


        gridLayout_7->addLayout(formLayout, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_7->addItem(verticalSpacer, 3, 2, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        checkTLVCollector = new QCheckBox(Lacp);
        checkTLVCollector->setObjectName(QString::fromUtf8("checkTLVCollector"));

        gridLayout_5->addWidget(checkTLVCollector, 0, 0, 1, 1);

        ui_TLV_Collector = new QLineEdit(Lacp);
        ui_TLV_Collector->setObjectName(QString::fromUtf8("ui_TLV_Collector"));
        ui_TLV_Collector->setEnabled(false);

        gridLayout_5->addWidget(ui_TLV_Collector, 0, 1, 1, 1);

        checkCollectorInfo = new QCheckBox(Lacp);
        checkCollectorInfo->setObjectName(QString::fromUtf8("checkCollectorInfo"));

        gridLayout_5->addWidget(checkCollectorInfo, 1, 0, 1, 1);

        ui_CollectorInfo = new QLineEdit(Lacp);
        ui_CollectorInfo->setObjectName(QString::fromUtf8("ui_CollectorInfo"));
        ui_CollectorInfo->setEnabled(false);

        gridLayout_5->addWidget(ui_CollectorInfo, 1, 1, 1, 1);

        label_11 = new QLabel(Lacp);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_5->addWidget(label_11, 2, 0, 1, 1);

        ui_collMaxDel = new QLineEdit(Lacp);
        ui_collMaxDel->setObjectName(QString::fromUtf8("ui_collMaxDel"));

        gridLayout_5->addWidget(ui_collMaxDel, 2, 1, 1, 1);

        checkTLV_T = new QCheckBox(Lacp);
        checkTLV_T->setObjectName(QString::fromUtf8("checkTLV_T"));

        gridLayout_5->addWidget(checkTLV_T, 3, 0, 1, 1);

        ui_TLV_Terminator = new QLineEdit(Lacp);
        ui_TLV_Terminator->setObjectName(QString::fromUtf8("ui_TLV_Terminator"));
        ui_TLV_Terminator->setEnabled(false);

        gridLayout_5->addWidget(ui_TLV_Terminator, 3, 1, 1, 1);

        checkTerminatorLen = new QCheckBox(Lacp);
        checkTerminatorLen->setObjectName(QString::fromUtf8("checkTerminatorLen"));

        gridLayout_5->addWidget(checkTerminatorLen, 4, 0, 1, 1);

        ui_TerminatoLen = new QLineEdit(Lacp);
        ui_TerminatoLen->setObjectName(QString::fromUtf8("ui_TerminatoLen"));
        ui_TerminatoLen->setEnabled(false);

        gridLayout_5->addWidget(ui_TerminatoLen, 4, 1, 1, 1);


        gridLayout_7->addLayout(gridLayout_5, 1, 2, 2, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        ui_TLV_Partner = new QLineEdit(Lacp);
        ui_TLV_Partner->setObjectName(QString::fromUtf8("ui_TLV_Partner"));
        ui_TLV_Partner->setEnabled(false);

        gridLayout_3->addWidget(ui_TLV_Partner, 0, 1, 1, 1);

        checkPartnerInfo = new QCheckBox(Lacp);
        checkPartnerInfo->setObjectName(QString::fromUtf8("checkPartnerInfo"));

        gridLayout_3->addWidget(checkPartnerInfo, 1, 0, 1, 1);

        ui_par_sys_prior = new QLineEdit(Lacp);
        ui_par_sys_prior->setObjectName(QString::fromUtf8("ui_par_sys_prior"));

        gridLayout_3->addWidget(ui_par_sys_prior, 2, 1, 1, 1);

        checkTLV_P = new QCheckBox(Lacp);
        checkTLV_P->setObjectName(QString::fromUtf8("checkTLV_P"));

        gridLayout_3->addWidget(checkTLV_P, 0, 0, 1, 1);

        ui_psys = new QLineEdit(Lacp);
        ui_psys->setObjectName(QString::fromUtf8("ui_psys"));

        gridLayout_3->addWidget(ui_psys, 3, 1, 1, 1);

        label_9 = new QLabel(Lacp);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_3->addWidget(label_9, 5, 0, 1, 1);

        label_8 = new QLabel(Lacp);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_3->addWidget(label_8, 4, 0, 1, 1);

        ui_pport = new QLineEdit(Lacp);
        ui_pport->setObjectName(QString::fromUtf8("ui_pport"));

        gridLayout_3->addWidget(ui_pport, 6, 1, 1, 1);

        ui_pkey = new QLineEdit(Lacp);
        ui_pkey->setObjectName(QString::fromUtf8("ui_pkey"));

        gridLayout_3->addWidget(ui_pkey, 4, 1, 1, 1);

        label_10 = new QLabel(Lacp);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_3->addWidget(label_10, 6, 0, 1, 1);

        ui_PartnerInfo = new QLineEdit(Lacp);
        ui_PartnerInfo->setObjectName(QString::fromUtf8("ui_PartnerInfo"));
        ui_PartnerInfo->setEnabled(false);

        gridLayout_3->addWidget(ui_PartnerInfo, 1, 1, 1, 1);

        label_7 = new QLabel(Lacp);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_3->addWidget(label_7, 3, 0, 1, 1);

        label_6 = new QLabel(Lacp);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_3->addWidget(label_6, 2, 0, 1, 1);

        ui_pport_prior = new QLineEdit(Lacp);
        ui_pport_prior->setObjectName(QString::fromUtf8("ui_pport_prior"));

        gridLayout_3->addWidget(ui_pport_prior, 5, 1, 1, 1);

        ui_astate_2 = new QGroupBox(Lacp);
        ui_astate_2->setObjectName(QString::fromUtf8("ui_astate_2"));
        gridLayout_8 = new QGridLayout(ui_astate_2);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        checkActivity_p = new QCheckBox(ui_astate_2);
        checkActivity_p->setObjectName(QString::fromUtf8("checkActivity_p"));

        gridLayout_6->addWidget(checkActivity_p, 0, 0, 1, 1);

        checkDefaulted_p = new QCheckBox(ui_astate_2);
        checkDefaulted_p->setObjectName(QString::fromUtf8("checkDefaulted_p"));

        gridLayout_6->addWidget(checkDefaulted_p, 0, 2, 1, 1);

        checkTimeout_p = new QCheckBox(ui_astate_2);
        checkTimeout_p->setObjectName(QString::fromUtf8("checkTimeout_p"));

        gridLayout_6->addWidget(checkTimeout_p, 1, 0, 1, 1);

        checkAggregation_p = new QCheckBox(ui_astate_2);
        checkAggregation_p->setObjectName(QString::fromUtf8("checkAggregation_p"));

        gridLayout_6->addWidget(checkAggregation_p, 2, 0, 1, 1);

        checkCollecting_p = new QCheckBox(ui_astate_2);
        checkCollecting_p->setObjectName(QString::fromUtf8("checkCollecting_p"));

        gridLayout_6->addWidget(checkCollecting_p, 1, 1, 1, 1);

        checkExpired_p = new QCheckBox(ui_astate_2);
        checkExpired_p->setObjectName(QString::fromUtf8("checkExpired_p"));

        gridLayout_6->addWidget(checkExpired_p, 1, 2, 1, 1);

        checkDistributing_p = new QCheckBox(ui_astate_2);
        checkDistributing_p->setObjectName(QString::fromUtf8("checkDistributing_p"));

        gridLayout_6->addWidget(checkDistributing_p, 2, 1, 1, 1);

        checkSynchronization_p = new QCheckBox(ui_astate_2);
        checkSynchronization_p->setObjectName(QString::fromUtf8("checkSynchronization_p"));

        gridLayout_6->addWidget(checkSynchronization_p, 0, 1, 1, 1);


        gridLayout_8->addLayout(gridLayout_6, 0, 0, 1, 1);


        gridLayout_3->addWidget(ui_astate_2, 7, 0, 1, 2);


        gridLayout_7->addLayout(gridLayout_3, 0, 2, 1, 1);

        gridLayout_9 = new QGridLayout();
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        checkActorInfo = new QCheckBox(Lacp);
        checkActorInfo->setObjectName(QString::fromUtf8("checkActorInfo"));

        gridLayout->addWidget(checkActorInfo, 3, 0, 1, 1);

        ui_aport = new QLineEdit(Lacp);
        ui_aport->setObjectName(QString::fromUtf8("ui_aport"));

        gridLayout->addWidget(ui_aport, 8, 1, 1, 1);

        label_2 = new QLabel(Lacp);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 4, 0, 1, 1);

        label_5 = new QLabel(Lacp);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 8, 0, 1, 1);

        ui_Subtype = new QLineEdit(Lacp);
        ui_Subtype->setObjectName(QString::fromUtf8("ui_Subtype"));
        ui_Subtype->setEnabled(false);

        gridLayout->addWidget(ui_Subtype, 0, 1, 1, 1);

        label_3 = new QLabel(Lacp);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 6, 0, 1, 1);

        ui_ActorInfo = new QLineEdit(Lacp);
        ui_ActorInfo->setObjectName(QString::fromUtf8("ui_ActorInfo"));
        ui_ActorInfo->setEnabled(false);

        gridLayout->addWidget(ui_ActorInfo, 3, 1, 1, 1);

        ui_akey = new QLineEdit(Lacp);
        ui_akey->setObjectName(QString::fromUtf8("ui_akey"));

        gridLayout->addWidget(ui_akey, 6, 1, 1, 1);

        ui_act_sys_prior = new QLineEdit(Lacp);
        ui_act_sys_prior->setObjectName(QString::fromUtf8("ui_act_sys_prior"));

        gridLayout->addWidget(ui_act_sys_prior, 4, 1, 1, 1);

        ui_aport_prior = new QLineEdit(Lacp);
        ui_aport_prior->setObjectName(QString::fromUtf8("ui_aport_prior"));

        gridLayout->addWidget(ui_aport_prior, 7, 1, 1, 1);

        ui_lacp_asys = new QLineEdit(Lacp);
        ui_lacp_asys->setObjectName(QString::fromUtf8("ui_lacp_asys"));

        gridLayout->addWidget(ui_lacp_asys, 5, 1, 1, 1);

        ui_Version = new QLineEdit(Lacp);
        ui_Version->setObjectName(QString::fromUtf8("ui_Version"));
        ui_Version->setEnabled(false);

        gridLayout->addWidget(ui_Version, 1, 1, 1, 1);

        ui_TLV_Actor = new QLineEdit(Lacp);
        ui_TLV_Actor->setObjectName(QString::fromUtf8("ui_TLV_Actor"));
        ui_TLV_Actor->setEnabled(false);

        gridLayout->addWidget(ui_TLV_Actor, 2, 1, 1, 1);

        label_4 = new QLabel(Lacp);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 7, 0, 1, 1);

        label = new QLabel(Lacp);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 5, 0, 1, 1);

        checkSubtype = new QCheckBox(Lacp);
        checkSubtype->setObjectName(QString::fromUtf8("checkSubtype"));

        gridLayout->addWidget(checkSubtype, 0, 0, 1, 1);

        checkVersion = new QCheckBox(Lacp);
        checkVersion->setObjectName(QString::fromUtf8("checkVersion"));

        gridLayout->addWidget(checkVersion, 1, 0, 1, 1);

        checkTLV_A = new QCheckBox(Lacp);
        checkTLV_A->setObjectName(QString::fromUtf8("checkTLV_A"));

        gridLayout->addWidget(checkTLV_A, 2, 0, 1, 1);


        gridLayout_9->addLayout(gridLayout, 0, 0, 1, 1);

        ui_astate = new QGroupBox(Lacp);
        ui_astate->setObjectName(QString::fromUtf8("ui_astate"));
        gridLayout_4 = new QGridLayout(ui_astate);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        checkActivity = new QCheckBox(ui_astate);
        checkActivity->setObjectName(QString::fromUtf8("checkActivity"));

        gridLayout_2->addWidget(checkActivity, 0, 0, 1, 1);

        checkDefaulted = new QCheckBox(ui_astate);
        checkDefaulted->setObjectName(QString::fromUtf8("checkDefaulted"));

        gridLayout_2->addWidget(checkDefaulted, 0, 2, 1, 1);

        checkTimeout = new QCheckBox(ui_astate);
        checkTimeout->setObjectName(QString::fromUtf8("checkTimeout"));

        gridLayout_2->addWidget(checkTimeout, 1, 0, 1, 1);

        checkAggregation = new QCheckBox(ui_astate);
        checkAggregation->setObjectName(QString::fromUtf8("checkAggregation"));

        gridLayout_2->addWidget(checkAggregation, 2, 0, 1, 1);

        checkCollecting = new QCheckBox(ui_astate);
        checkCollecting->setObjectName(QString::fromUtf8("checkCollecting"));

        gridLayout_2->addWidget(checkCollecting, 1, 1, 1, 1);

        checkExpired = new QCheckBox(ui_astate);
        checkExpired->setObjectName(QString::fromUtf8("checkExpired"));

        gridLayout_2->addWidget(checkExpired, 1, 2, 1, 1);

        checkDistributing = new QCheckBox(ui_astate);
        checkDistributing->setObjectName(QString::fromUtf8("checkDistributing"));

        gridLayout_2->addWidget(checkDistributing, 2, 1, 1, 1);

        checkSynchronization = new QCheckBox(ui_astate);
        checkSynchronization->setObjectName(QString::fromUtf8("checkSynchronization"));

        gridLayout_2->addWidget(checkSynchronization, 0, 1, 1, 1);


        gridLayout_4->addLayout(gridLayout_2, 0, 0, 1, 1);


        gridLayout_9->addWidget(ui_astate, 1, 0, 1, 1);


        gridLayout_7->addLayout(gridLayout_9, 0, 0, 2, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_2, 0, 3, 1, 1);


        retranslateUi(Lacp);
        QObject::connect(checkSubtype, SIGNAL(toggled(bool)), ui_Subtype, SLOT(setEnabled(bool)));
        QObject::connect(checkActorInfo, SIGNAL(toggled(bool)), ui_ActorInfo, SLOT(setEnabled(bool)));
        QObject::connect(checkTLV_P, SIGNAL(toggled(bool)), ui_TLV_Partner, SLOT(setEnabled(bool)));
        QObject::connect(checkPartnerInfo, SIGNAL(toggled(bool)), ui_PartnerInfo, SLOT(setEnabled(bool)));
        QObject::connect(checkTLVCollector, SIGNAL(toggled(bool)), ui_TLV_Collector, SLOT(setEnabled(bool)));
        QObject::connect(checkCollectorInfo, SIGNAL(toggled(bool)), ui_CollectorInfo, SLOT(setEnabled(bool)));
        QObject::connect(checkTLV_T, SIGNAL(toggled(bool)), ui_TLV_Terminator, SLOT(setEnabled(bool)));
        QObject::connect(checkTerminatorLen, SIGNAL(toggled(bool)), ui_TerminatoLen, SLOT(setEnabled(bool)));
        QObject::connect(checkVersion, SIGNAL(toggled(bool)), ui_Version, SLOT(setEnabled(bool)));
        QObject::connect(checkTLV_A, SIGNAL(toggled(bool)), ui_TLV_Actor, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(Lacp);
    } // setupUi

    void retranslateUi(QWidget *Lacp)
    {
        Lacp->setWindowTitle(QApplication::translate("Lacp", "Form", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("Lacp", "FCS", 0, QApplication::UnicodeUTF8));
        ui_FCS->setInputMask(QApplication::translate("Lacp", ">HH HH HH HH; ", 0, QApplication::UnicodeUTF8));
        checkTLVCollector->setText(QApplication::translate("Lacp", "TLV_typ\320\265 = Collector Info", 0, QApplication::UnicodeUTF8));
        checkCollectorInfo->setText(QApplication::translate("Lacp", "Collector Information Length", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("Lacp", "Collector Max Delay", 0, QApplication::UnicodeUTF8));
        checkTLV_T->setText(QApplication::translate("Lacp", "TLV_typ\320\265  = Terminator", 0, QApplication::UnicodeUTF8));
        checkTerminatorLen->setText(QApplication::translate("Lacp", "Terminator Length", 0, QApplication::UnicodeUTF8));
        checkPartnerInfo->setText(QApplication::translate("Lacp", "Partner Information Length", 0, QApplication::UnicodeUTF8));
        checkTLV_P->setText(QApplication::translate("Lacp", "TLV_typ\320\265 = Partner Info", 0, QApplication::UnicodeUTF8));
        ui_psys->setInputMask(QApplication::translate("Lacp", ">HH HH HH HH HH HH; ", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("Lacp", "Partner Port Priority", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("Lacp", "Partner Key", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("Lacp", "Partner Port", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("Lacp", "Partner System", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("Lacp", "Partner System Priority", 0, QApplication::UnicodeUTF8));
        ui_astate_2->setTitle(QApplication::translate("Lacp", "Partner State", 0, QApplication::UnicodeUTF8));
        checkActivity_p->setText(QApplication::translate("Lacp", "LACP Activity", 0, QApplication::UnicodeUTF8));
        checkDefaulted_p->setText(QApplication::translate("Lacp", "Defaulted", 0, QApplication::UnicodeUTF8));
        checkTimeout_p->setText(QApplication::translate("Lacp", "LACP Timeout", 0, QApplication::UnicodeUTF8));
        checkAggregation_p->setText(QApplication::translate("Lacp", "Aggregation", 0, QApplication::UnicodeUTF8));
        checkCollecting_p->setText(QApplication::translate("Lacp", "Collecting", 0, QApplication::UnicodeUTF8));
        checkExpired_p->setText(QApplication::translate("Lacp", "Expired", 0, QApplication::UnicodeUTF8));
        checkDistributing_p->setText(QApplication::translate("Lacp", "Distributing", 0, QApplication::UnicodeUTF8));
        checkSynchronization_p->setText(QApplication::translate("Lacp", "Synchronization", 0, QApplication::UnicodeUTF8));
        checkActorInfo->setText(QApplication::translate("Lacp", "Actor Information Length", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Lacp", "Actor System Priority", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("Lacp", "Actor Port", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Lacp", "Actor Key", 0, QApplication::UnicodeUTF8));
        ui_akey->setInputMask(QString());
        ui_act_sys_prior->setInputMask(QString());
        ui_act_sys_prior->setText(QString());
        ui_aport_prior->setInputMask(QString());
        ui_lacp_asys->setInputMask(QApplication::translate("Lacp", ">HH HH HH HH HH HH; ", 0, QApplication::UnicodeUTF8));
        ui_lacp_asys->setText(QString());
        label_4->setText(QApplication::translate("Lacp", "Actor Port Priority", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Lacp", "Actor System", 0, QApplication::UnicodeUTF8));
        checkSubtype->setText(QApplication::translate("Lacp", "Subtype", 0, QApplication::UnicodeUTF8));
        checkVersion->setText(QApplication::translate("Lacp", "Version Number ", 0, QApplication::UnicodeUTF8));
        checkTLV_A->setText(QApplication::translate("Lacp", "TLV_typ\320\265 = Actor Info", 0, QApplication::UnicodeUTF8));
        ui_astate->setTitle(QApplication::translate("Lacp", "Actor State", 0, QApplication::UnicodeUTF8));
        checkActivity->setText(QApplication::translate("Lacp", "LACP Activity", 0, QApplication::UnicodeUTF8));
        checkDefaulted->setText(QApplication::translate("Lacp", "Defaulted", 0, QApplication::UnicodeUTF8));
        checkTimeout->setText(QApplication::translate("Lacp", "LACP Timeout", 0, QApplication::UnicodeUTF8));
        checkAggregation->setText(QApplication::translate("Lacp", "Aggregation", 0, QApplication::UnicodeUTF8));
        checkCollecting->setText(QApplication::translate("Lacp", "Collecting", 0, QApplication::UnicodeUTF8));
        checkExpired->setText(QApplication::translate("Lacp", "Expired", 0, QApplication::UnicodeUTF8));
        checkDistributing->setText(QApplication::translate("Lacp", "Distributing", 0, QApplication::UnicodeUTF8));
        checkSynchronization->setText(QApplication::translate("Lacp", "Synchronization", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Lacp: public Ui_Lacp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LACP_H
