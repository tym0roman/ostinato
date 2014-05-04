/********************************************************************************
** Form generated from reading UI file 'dcbx.ui'
**
** Created: Thu May 1 12:18:52 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DCBX_H
#define UI_DCBX_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dcbx
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_4;
    QTabWidget *tabWidgetDCBX;
    QWidget *tabHead;
    QGridLayout *gridLayout_4;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayout_2;
    QRadioButton *radioButtonConf;
    QRadioButton *radioButtonRec;
    QRadioButton *radioButtonPrior;
    QRadioButton *radioButtonApp;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_3;
    QGridLayout *gridLayout_3;
    QLabel *label_2;
    QLineEdit *lineEditType;
    QLineEdit *lineEditInfo;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QWidget *tabConf;
    QGridLayout *gridLayout_7;
    QGridLayout *gridLayout_6;
    QLineEdit *lineEditCBS_c;
    QLabel *labelMAX_c;
    QLineEdit *lineEditMAX_c;
    QLabel *labelOUI_c;
    QLineEdit *lineEditOUI_c;
    QLabel *label_17;
    QLabel *label_16;
    QLineEdit *lineEditWilling_c;
    QLabel *label_11;
    QLineEdit *lineEditReserved_c;
    QLineEdit *lineEditTCBand_c;
    QLineEdit *lineEditSubtype_c;
    QLineEdit *lineEditPriAss_c;
    QLabel *label_12;
    QLabel *label_15;
    QLabel *label_4;
    QLineEdit *lineEditTSAAss_c;
    QLabel *labelReserved_c;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_2;
    QWidget *tabRecomm;
    QGridLayout *gridLayout_9;
    QGridLayout *gridLayout_8;
    QLineEdit *lineEditTC_r;
    QLabel *label_20;
    QLineEdit *lineEditOUI_r;
    QLabel *label_6;
    QLineEdit *lineEditReserved_r;
    QLineEdit *lineEditSubtype_r;
    QLineEdit *lineEditTSA_r;
    QLabel *label_5;
    QLabel *label_18;
    QLabel *label_21;
    QLabel *label_19;
    QLineEdit *lineEditPriority_r;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_5;
    QWidget *tabCont;
    QGridLayout *gridLayout_19;
    QGridLayout *gridLayout_18;
    QLabel *label_7;
    QLineEdit *lineEditOUI_p;
    QLabel *label_46;
    QLineEdit *lineEditPFC_p;
    QLabel *label_8;
    QLineEdit *lineEditsubtype_p;
    QLabel *label_47;
    QLineEdit *lineEditPFC_p_2;
    QLabel *label_44;
    QLineEdit *lineEditWilling_p;
    QLabel *labelMBC_p;
    QLineEdit *lineEditMBC_p;
    QLabel *label_43;
    QLineEdit *lineEditReserved_p;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *verticalSpacer_9;
    QWidget *tabApp;
    QGridLayout *gridLayout_21;
    QGridLayout *gridLayout_20;
    QLabel *label_9;
    QLineEdit *lineEditOUI_a;
    QLabel *labelsubtype_a;
    QLabel *label_48;
    QLineEdit *lineEditReserved_a;
    QLabel *label_49;
    QLineEdit *lineEditApplication_a;
    QLineEdit *lineEditsubtype_a;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *verticalSpacer_10;

    void setupUi(QWidget *Dcbx)
    {
        if (Dcbx->objectName().isEmpty())
            Dcbx->setObjectName(QString::fromUtf8("Dcbx"));
        Dcbx->resize(801, 294);
        gridLayout = new QGridLayout(Dcbx);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 1, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 2, 0, 1, 1);

        tabWidgetDCBX = new QTabWidget(Dcbx);
        tabWidgetDCBX->setObjectName(QString::fromUtf8("tabWidgetDCBX"));
        tabWidgetDCBX->setEnabled(true);
        tabHead = new QWidget();
        tabHead->setObjectName(QString::fromUtf8("tabHead"));
        gridLayout_4 = new QGridLayout(tabHead);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        groupBox = new QGroupBox(tabHead);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_5 = new QGridLayout(groupBox);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        radioButtonConf = new QRadioButton(groupBox);
        radioButtonConf->setObjectName(QString::fromUtf8("radioButtonConf"));

        gridLayout_2->addWidget(radioButtonConf, 0, 0, 1, 1);

        radioButtonRec = new QRadioButton(groupBox);
        radioButtonRec->setObjectName(QString::fromUtf8("radioButtonRec"));

        gridLayout_2->addWidget(radioButtonRec, 1, 0, 1, 1);

        radioButtonPrior = new QRadioButton(groupBox);
        radioButtonPrior->setObjectName(QString::fromUtf8("radioButtonPrior"));

        gridLayout_2->addWidget(radioButtonPrior, 2, 0, 1, 1);

        radioButtonApp = new QRadioButton(groupBox);
        radioButtonApp->setObjectName(QString::fromUtf8("radioButtonApp"));

        gridLayout_2->addWidget(radioButtonApp, 3, 0, 1, 1);


        gridLayout_5->addLayout(gridLayout_2, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer, 0, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_3, 1, 0, 1, 1);


        gridLayout_4->addWidget(groupBox, 1, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_2 = new QLabel(tabHead);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_3->addWidget(label_2, 1, 0, 1, 1);

        lineEditType = new QLineEdit(tabHead);
        lineEditType->setObjectName(QString::fromUtf8("lineEditType"));

        gridLayout_3->addWidget(lineEditType, 0, 1, 1, 1);

        lineEditInfo = new QLineEdit(tabHead);
        lineEditInfo->setObjectName(QString::fromUtf8("lineEditInfo"));

        gridLayout_3->addWidget(lineEditInfo, 1, 1, 1, 1);

        label = new QLabel(tabHead);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_3->addWidget(label, 0, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_2, 0, 1, 1, 1);

        tabWidgetDCBX->addTab(tabHead, QString());
        tabConf = new QWidget();
        tabConf->setObjectName(QString::fromUtf8("tabConf"));
        tabConf->setEnabled(true);
        gridLayout_7 = new QGridLayout(tabConf);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        lineEditCBS_c = new QLineEdit(tabConf);
        lineEditCBS_c->setObjectName(QString::fromUtf8("lineEditCBS_c"));

        gridLayout_6->addWidget(lineEditCBS_c, 3, 1, 1, 1);

        labelMAX_c = new QLabel(tabConf);
        labelMAX_c->setObjectName(QString::fromUtf8("labelMAX_c"));

        gridLayout_6->addWidget(labelMAX_c, 0, 2, 1, 1);

        lineEditMAX_c = new QLineEdit(tabConf);
        lineEditMAX_c->setObjectName(QString::fromUtf8("lineEditMAX_c"));

        gridLayout_6->addWidget(lineEditMAX_c, 0, 3, 1, 1);

        labelOUI_c = new QLabel(tabConf);
        labelOUI_c->setObjectName(QString::fromUtf8("labelOUI_c"));

        gridLayout_6->addWidget(labelOUI_c, 0, 0, 1, 1);

        lineEditOUI_c = new QLineEdit(tabConf);
        lineEditOUI_c->setObjectName(QString::fromUtf8("lineEditOUI_c"));

        gridLayout_6->addWidget(lineEditOUI_c, 0, 1, 1, 1);

        label_17 = new QLabel(tabConf);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout_6->addWidget(label_17, 3, 2, 1, 1);

        label_16 = new QLabel(tabConf);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_6->addWidget(label_16, 2, 2, 1, 1);

        lineEditWilling_c = new QLineEdit(tabConf);
        lineEditWilling_c->setObjectName(QString::fromUtf8("lineEditWilling_c"));

        gridLayout_6->addWidget(lineEditWilling_c, 2, 1, 1, 1);

        label_11 = new QLabel(tabConf);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_6->addWidget(label_11, 2, 0, 1, 1);

        lineEditReserved_c = new QLineEdit(tabConf);
        lineEditReserved_c->setObjectName(QString::fromUtf8("lineEditReserved_c"));

        gridLayout_6->addWidget(lineEditReserved_c, 4, 1, 1, 1);

        lineEditTCBand_c = new QLineEdit(tabConf);
        lineEditTCBand_c->setObjectName(QString::fromUtf8("lineEditTCBand_c"));

        gridLayout_6->addWidget(lineEditTCBand_c, 2, 3, 1, 1);

        lineEditSubtype_c = new QLineEdit(tabConf);
        lineEditSubtype_c->setObjectName(QString::fromUtf8("lineEditSubtype_c"));

        gridLayout_6->addWidget(lineEditSubtype_c, 1, 1, 1, 1);

        lineEditPriAss_c = new QLineEdit(tabConf);
        lineEditPriAss_c->setObjectName(QString::fromUtf8("lineEditPriAss_c"));

        gridLayout_6->addWidget(lineEditPriAss_c, 1, 3, 1, 1);

        label_12 = new QLabel(tabConf);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_6->addWidget(label_12, 3, 0, 1, 1);

        label_15 = new QLabel(tabConf);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_6->addWidget(label_15, 1, 2, 1, 1);

        label_4 = new QLabel(tabConf);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_6->addWidget(label_4, 1, 0, 1, 1);

        lineEditTSAAss_c = new QLineEdit(tabConf);
        lineEditTSAAss_c->setObjectName(QString::fromUtf8("lineEditTSAAss_c"));

        gridLayout_6->addWidget(lineEditTSAAss_c, 3, 3, 1, 1);

        labelReserved_c = new QLabel(tabConf);
        labelReserved_c->setObjectName(QString::fromUtf8("labelReserved_c"));

        gridLayout_6->addWidget(labelReserved_c, 4, 0, 1, 1);


        gridLayout_7->addLayout(gridLayout_6, 0, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_3, 0, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_7->addItem(verticalSpacer_2, 1, 0, 1, 1);

        tabWidgetDCBX->addTab(tabConf, QString());
        tabRecomm = new QWidget();
        tabRecomm->setObjectName(QString::fromUtf8("tabRecomm"));
        tabRecomm->setEnabled(true);
        gridLayout_9 = new QGridLayout(tabRecomm);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        gridLayout_8 = new QGridLayout();
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        lineEditTC_r = new QLineEdit(tabRecomm);
        lineEditTC_r->setObjectName(QString::fromUtf8("lineEditTC_r"));

        gridLayout_8->addWidget(lineEditTC_r, 1, 3, 1, 1);

        label_20 = new QLabel(tabRecomm);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        gridLayout_8->addWidget(label_20, 2, 2, 1, 1);

        lineEditOUI_r = new QLineEdit(tabRecomm);
        lineEditOUI_r->setObjectName(QString::fromUtf8("lineEditOUI_r"));

        gridLayout_8->addWidget(lineEditOUI_r, 0, 1, 1, 1);

        label_6 = new QLabel(tabRecomm);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_8->addWidget(label_6, 1, 0, 1, 1);

        lineEditReserved_r = new QLineEdit(tabRecomm);
        lineEditReserved_r->setObjectName(QString::fromUtf8("lineEditReserved_r"));

        gridLayout_8->addWidget(lineEditReserved_r, 2, 1, 1, 1);

        lineEditSubtype_r = new QLineEdit(tabRecomm);
        lineEditSubtype_r->setObjectName(QString::fromUtf8("lineEditSubtype_r"));

        gridLayout_8->addWidget(lineEditSubtype_r, 1, 1, 1, 1);

        lineEditTSA_r = new QLineEdit(tabRecomm);
        lineEditTSA_r->setObjectName(QString::fromUtf8("lineEditTSA_r"));

        gridLayout_8->addWidget(lineEditTSA_r, 2, 3, 1, 1);

        label_5 = new QLabel(tabRecomm);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_8->addWidget(label_5, 0, 0, 1, 1);

        label_18 = new QLabel(tabRecomm);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        gridLayout_8->addWidget(label_18, 2, 0, 1, 1);

        label_21 = new QLabel(tabRecomm);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        gridLayout_8->addWidget(label_21, 1, 2, 1, 1);

        label_19 = new QLabel(tabRecomm);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout_8->addWidget(label_19, 0, 2, 1, 1);

        lineEditPriority_r = new QLineEdit(tabRecomm);
        lineEditPriority_r->setObjectName(QString::fromUtf8("lineEditPriority_r"));

        gridLayout_8->addWidget(lineEditPriority_r, 0, 3, 1, 1);


        gridLayout_9->addLayout(gridLayout_8, 0, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_9->addItem(horizontalSpacer_4, 0, 1, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_9->addItem(verticalSpacer_5, 1, 0, 1, 1);

        tabWidgetDCBX->addTab(tabRecomm, QString());
        tabCont = new QWidget();
        tabCont->setObjectName(QString::fromUtf8("tabCont"));
        tabCont->setEnabled(true);
        gridLayout_19 = new QGridLayout(tabCont);
        gridLayout_19->setObjectName(QString::fromUtf8("gridLayout_19"));
        gridLayout_18 = new QGridLayout();
        gridLayout_18->setObjectName(QString::fromUtf8("gridLayout_18"));
        label_7 = new QLabel(tabCont);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_18->addWidget(label_7, 0, 0, 1, 1);

        lineEditOUI_p = new QLineEdit(tabCont);
        lineEditOUI_p->setObjectName(QString::fromUtf8("lineEditOUI_p"));

        gridLayout_18->addWidget(lineEditOUI_p, 0, 1, 1, 1);

        label_46 = new QLabel(tabCont);
        label_46->setObjectName(QString::fromUtf8("label_46"));

        gridLayout_18->addWidget(label_46, 0, 2, 1, 1);

        lineEditPFC_p = new QLineEdit(tabCont);
        lineEditPFC_p->setObjectName(QString::fromUtf8("lineEditPFC_p"));

        gridLayout_18->addWidget(lineEditPFC_p, 0, 3, 1, 1);

        label_8 = new QLabel(tabCont);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_18->addWidget(label_8, 1, 0, 1, 1);

        lineEditsubtype_p = new QLineEdit(tabCont);
        lineEditsubtype_p->setObjectName(QString::fromUtf8("lineEditsubtype_p"));

        gridLayout_18->addWidget(lineEditsubtype_p, 1, 1, 1, 1);

        label_47 = new QLabel(tabCont);
        label_47->setObjectName(QString::fromUtf8("label_47"));

        gridLayout_18->addWidget(label_47, 1, 2, 1, 1);

        lineEditPFC_p_2 = new QLineEdit(tabCont);
        lineEditPFC_p_2->setObjectName(QString::fromUtf8("lineEditPFC_p_2"));

        gridLayout_18->addWidget(lineEditPFC_p_2, 1, 3, 1, 1);

        label_44 = new QLabel(tabCont);
        label_44->setObjectName(QString::fromUtf8("label_44"));

        gridLayout_18->addWidget(label_44, 2, 0, 1, 1);

        lineEditWilling_p = new QLineEdit(tabCont);
        lineEditWilling_p->setObjectName(QString::fromUtf8("lineEditWilling_p"));

        gridLayout_18->addWidget(lineEditWilling_p, 2, 1, 1, 1);

        labelMBC_p = new QLabel(tabCont);
        labelMBC_p->setObjectName(QString::fromUtf8("labelMBC_p"));

        gridLayout_18->addWidget(labelMBC_p, 3, 0, 1, 1);

        lineEditMBC_p = new QLineEdit(tabCont);
        lineEditMBC_p->setObjectName(QString::fromUtf8("lineEditMBC_p"));

        gridLayout_18->addWidget(lineEditMBC_p, 3, 1, 1, 1);

        label_43 = new QLabel(tabCont);
        label_43->setObjectName(QString::fromUtf8("label_43"));

        gridLayout_18->addWidget(label_43, 4, 0, 1, 1);

        lineEditReserved_p = new QLineEdit(tabCont);
        lineEditReserved_p->setObjectName(QString::fromUtf8("lineEditReserved_p"));

        gridLayout_18->addWidget(lineEditReserved_p, 4, 1, 1, 1);


        gridLayout_19->addLayout(gridLayout_18, 0, 0, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_19->addItem(horizontalSpacer_9, 0, 1, 1, 1);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_19->addItem(verticalSpacer_9, 1, 0, 1, 1);

        tabWidgetDCBX->addTab(tabCont, QString());
        tabApp = new QWidget();
        tabApp->setObjectName(QString::fromUtf8("tabApp"));
        tabApp->setEnabled(true);
        gridLayout_21 = new QGridLayout(tabApp);
        gridLayout_21->setObjectName(QString::fromUtf8("gridLayout_21"));
        gridLayout_20 = new QGridLayout();
        gridLayout_20->setObjectName(QString::fromUtf8("gridLayout_20"));
        label_9 = new QLabel(tabApp);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_20->addWidget(label_9, 0, 0, 1, 1);

        lineEditOUI_a = new QLineEdit(tabApp);
        lineEditOUI_a->setObjectName(QString::fromUtf8("lineEditOUI_a"));

        gridLayout_20->addWidget(lineEditOUI_a, 0, 1, 1, 1);

        labelsubtype_a = new QLabel(tabApp);
        labelsubtype_a->setObjectName(QString::fromUtf8("labelsubtype_a"));

        gridLayout_20->addWidget(labelsubtype_a, 1, 0, 1, 1);

        label_48 = new QLabel(tabApp);
        label_48->setObjectName(QString::fromUtf8("label_48"));

        gridLayout_20->addWidget(label_48, 2, 0, 1, 1);

        lineEditReserved_a = new QLineEdit(tabApp);
        lineEditReserved_a->setObjectName(QString::fromUtf8("lineEditReserved_a"));

        gridLayout_20->addWidget(lineEditReserved_a, 2, 1, 1, 1);

        label_49 = new QLabel(tabApp);
        label_49->setObjectName(QString::fromUtf8("label_49"));

        gridLayout_20->addWidget(label_49, 3, 0, 1, 1);

        lineEditApplication_a = new QLineEdit(tabApp);
        lineEditApplication_a->setObjectName(QString::fromUtf8("lineEditApplication_a"));

        gridLayout_20->addWidget(lineEditApplication_a, 3, 1, 1, 1);

        lineEditsubtype_a = new QLineEdit(tabApp);
        lineEditsubtype_a->setObjectName(QString::fromUtf8("lineEditsubtype_a"));

        gridLayout_20->addWidget(lineEditsubtype_a, 1, 1, 1, 1);


        gridLayout_21->addLayout(gridLayout_20, 0, 0, 1, 1);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_21->addItem(horizontalSpacer_10, 0, 1, 1, 1);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_21->addItem(verticalSpacer_10, 1, 0, 1, 1);

        tabWidgetDCBX->addTab(tabApp, QString());

        gridLayout->addWidget(tabWidgetDCBX, 1, 0, 1, 1);


        retranslateUi(Dcbx);

        tabWidgetDCBX->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(Dcbx);
    } // setupUi

    void retranslateUi(QWidget *Dcbx)
    {
        Dcbx->setWindowTitle(QApplication::translate("Dcbx", "Form", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("Dcbx", "DCBX TLV types", 0, QApplication::UnicodeUTF8));
        radioButtonConf->setText(QApplication::translate("Dcbx", "Configuration TLV", 0, QApplication::UnicodeUTF8));
        radioButtonRec->setText(QApplication::translate("Dcbx", "Recommendation TLV", 0, QApplication::UnicodeUTF8));
        radioButtonPrior->setText(QApplication::translate("Dcbx", "Priority-base Flow Control Confiduration TLV", 0, QApplication::UnicodeUTF8));
        radioButtonApp->setText(QApplication::translate("Dcbx", "Application Priority TLV", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Dcbx", "TLV information string length", 0, QApplication::UnicodeUTF8));
        lineEditType->setInputMask(QString());
        lineEditInfo->setInputMask(QString());
        label->setText(QApplication::translate("Dcbx", "TLV Type", 0, QApplication::UnicodeUTF8));
        tabWidgetDCBX->setTabText(tabWidgetDCBX->indexOf(tabHead), QApplication::translate("Dcbx", "TLV header", 0, QApplication::UnicodeUTF8));
        lineEditCBS_c->setInputMask(QApplication::translate("Dcbx", ">B; ", 0, QApplication::UnicodeUTF8));
        labelMAX_c->setText(QApplication::translate("Dcbx", "MAX TCs", 0, QApplication::UnicodeUTF8));
        lineEditMAX_c->setInputMask(QApplication::translate("Dcbx", ">BBB; ", 0, QApplication::UnicodeUTF8));
        labelOUI_c->setText(QApplication::translate("Dcbx", "802.1 OUI", 0, QApplication::UnicodeUTF8));
        lineEditOUI_c->setInputMask(QApplication::translate("Dcbx", ">HH HH HH; ", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("Dcbx", "TSA Assignment Table", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("Dcbx", "TC Bandwidth Table", 0, QApplication::UnicodeUTF8));
        lineEditWilling_c->setInputMask(QApplication::translate("Dcbx", ">B; ", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("Dcbx", "Willing", 0, QApplication::UnicodeUTF8));
        lineEditReserved_c->setInputMask(QApplication::translate("Dcbx", ">BBB; ", 0, QApplication::UnicodeUTF8));
        lineEditTCBand_c->setInputMask(QApplication::translate("Dcbx", "> HH HH HH HH HH HH HH HH; ", 0, QApplication::UnicodeUTF8));
        lineEditSubtype_c->setInputMask(QString());
        lineEditPriAss_c->setInputMask(QApplication::translate("Dcbx", "> HH HH HH HH; ", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("Dcbx", "CBS", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("Dcbx", "Priority Assignment Table", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Dcbx", "802.1 subtype", 0, QApplication::UnicodeUTF8));
        lineEditTSAAss_c->setInputMask(QApplication::translate("Dcbx", "> HH HH HH HH HH HH HH HH; ", 0, QApplication::UnicodeUTF8));
        labelReserved_c->setText(QApplication::translate("Dcbx", "Reserved", 0, QApplication::UnicodeUTF8));
        tabWidgetDCBX->setTabText(tabWidgetDCBX->indexOf(tabConf), QApplication::translate("Dcbx", "Configuration TLV", 0, QApplication::UnicodeUTF8));
        lineEditTC_r->setInputMask(QApplication::translate("Dcbx", "> HH HH HH HH HH HH HH HH; ", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("Dcbx", "TSA Assignment Table", 0, QApplication::UnicodeUTF8));
        lineEditOUI_r->setInputMask(QApplication::translate("Dcbx", ">HH HH HH; ", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("Dcbx", "802.1 subtype", 0, QApplication::UnicodeUTF8));
        lineEditReserved_r->setInputMask(QApplication::translate("Dcbx", ">HH; ", 0, QApplication::UnicodeUTF8));
        lineEditSubtype_r->setInputMask(QString());
        lineEditTSA_r->setInputMask(QApplication::translate("Dcbx", "> HH HH HH HH HH HH HH HH; ", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("Dcbx", "802.1 OUI", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("Dcbx", "Reserved", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("Dcbx", "TC Bandwidth Table", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("Dcbx", "Priority Assignment Table", 0, QApplication::UnicodeUTF8));
        lineEditPriority_r->setInputMask(QApplication::translate("Dcbx", "> HH HH HH HH; ", 0, QApplication::UnicodeUTF8));
        tabWidgetDCBX->setTabText(tabWidgetDCBX->indexOf(tabRecomm), QApplication::translate("Dcbx", "Recommendation TLV", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("Dcbx", "802.1 OUI", 0, QApplication::UnicodeUTF8));
        lineEditOUI_p->setInputMask(QApplication::translate("Dcbx", ">HH HH HH; ", 0, QApplication::UnicodeUTF8));
        label_46->setText(QApplication::translate("Dcbx", "PFC cap", 0, QApplication::UnicodeUTF8));
        lineEditPFC_p->setInputMask(QApplication::translate("Dcbx", ">BBBB; ", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("Dcbx", "802.1 subtype", 0, QApplication::UnicodeUTF8));
        lineEditsubtype_p->setInputMask(QString());
        label_47->setText(QApplication::translate("Dcbx", "PFC Enable", 0, QApplication::UnicodeUTF8));
        lineEditPFC_p_2->setInputMask(QApplication::translate("Dcbx", ">HH; ", 0, QApplication::UnicodeUTF8));
        label_44->setText(QApplication::translate("Dcbx", "Willing", 0, QApplication::UnicodeUTF8));
        lineEditWilling_p->setInputMask(QApplication::translate("Dcbx", ">B; ", 0, QApplication::UnicodeUTF8));
        labelMBC_p->setText(QApplication::translate("Dcbx", "MBC", 0, QApplication::UnicodeUTF8));
        lineEditMBC_p->setInputMask(QApplication::translate("Dcbx", ">B; ", 0, QApplication::UnicodeUTF8));
        label_43->setText(QApplication::translate("Dcbx", "Reserved", 0, QApplication::UnicodeUTF8));
        lineEditReserved_p->setInputMask(QApplication::translate("Dcbx", ">BB; ", 0, QApplication::UnicodeUTF8));
        tabWidgetDCBX->setTabText(tabWidgetDCBX->indexOf(tabCont), QApplication::translate("Dcbx", "Control Confiduration TLV", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("Dcbx", "802.1 OUI", 0, QApplication::UnicodeUTF8));
        lineEditOUI_a->setInputMask(QApplication::translate("Dcbx", ">HH HH HH; ", 0, QApplication::UnicodeUTF8));
        labelsubtype_a->setText(QApplication::translate("Dcbx", "802.1 subtype", 0, QApplication::UnicodeUTF8));
        label_48->setText(QApplication::translate("Dcbx", "Reserved", 0, QApplication::UnicodeUTF8));
        lineEditReserved_a->setInputMask(QApplication::translate("Dcbx", ">HH; ", 0, QApplication::UnicodeUTF8));
        label_49->setText(QApplication::translate("Dcbx", "Application Priority Table", 0, QApplication::UnicodeUTF8));
        lineEditApplication_a->setInputMask(QApplication::translate("Dcbx", ">HH HH HH; ", 0, QApplication::UnicodeUTF8));
        lineEditsubtype_a->setInputMask(QString());
        lineEditsubtype_a->setText(QString());
        tabWidgetDCBX->setTabText(tabWidgetDCBX->indexOf(tabApp), QApplication::translate("Dcbx", "Application Priority TLV", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Dcbx: public Ui_Dcbx {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DCBX_H
