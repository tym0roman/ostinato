/********************************************************************************
** Form generated from reading UI file 'stp.ui'
**
** Created: Thu May 1 12:18:52 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STP_H
#define UI_STP_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Stp
{
public:
    QGridLayout *gridLayout;
    QLabel *label_11;
    QLineEdit *ui_root_system_id;
    QLineEdit *ui_hello_time;
    QLabel *label_6;
    QLabel *label_22;
    QLabel *label_24;
    QLabel *label_27;
    QLineEdit *ui_protocol_id;
    QLineEdit *ui_version_id;
    QLineEdit *ui_protocol_type;
    QLabel *label_7;
    QLabel *label_9;
    QLabel *label;
    QSpacerItem *spacerItem;
    QLabel *label_5;
    QLineEdit *ui_port_id;
    QLabel *label_3;
    QLineEdit *ui_root_path;
    QLineEdit *ui_max_age;
    QLineEdit *ui_message_age;
    QLineEdit *ui_forward_delay;
    QLabel *label_8;
    QLineEdit *ui_flags;
    QLabel *label_13;
    QLineEdit *ui_bridge_system_id;
    QLabel *label_15;
    QLabel *label_10;
    QLabel *label_12;
    QLineEdit *ui_root_system_id_ex;
    QLabel *label_4;
    QLineEdit *ui_bridge_system_id_ex;

    void setupUi(QWidget *Stp)
    {
        if (Stp->objectName().isEmpty())
            Stp->setObjectName(QString::fromUtf8("Stp"));
        Stp->resize(421, 596);
        gridLayout = new QGridLayout(Stp);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_11 = new QLabel(Stp);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout->addWidget(label_11, 20, 0, 1, 1);

        ui_root_system_id = new QLineEdit(Stp);
        ui_root_system_id->setObjectName(QString::fromUtf8("ui_root_system_id"));

        gridLayout->addWidget(ui_root_system_id, 19, 2, 1, 3);

        ui_hello_time = new QLineEdit(Stp);
        ui_hello_time->setObjectName(QString::fromUtf8("ui_hello_time"));

        gridLayout->addWidget(ui_hello_time, 12, 2, 1, 3);

        label_6 = new QLabel(Stp);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 10, 0, 1, 1);

        label_22 = new QLabel(Stp);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_22, 0, 0, 1, 1);

        label_24 = new QLabel(Stp);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_24, 1, 0, 1, 1);

        label_27 = new QLabel(Stp);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_27, 2, 0, 1, 1);

        ui_protocol_id = new QLineEdit(Stp);
        ui_protocol_id->setObjectName(QString::fromUtf8("ui_protocol_id"));
        ui_protocol_id->setEnabled(true);
        ui_protocol_id->setMaxLength(5);
        ui_protocol_id->setCursorPosition(5);

        gridLayout->addWidget(ui_protocol_id, 0, 2, 1, 3);

        ui_version_id = new QLineEdit(Stp);
        ui_version_id->setObjectName(QString::fromUtf8("ui_version_id"));
        ui_version_id->setEnabled(true);
        ui_version_id->setMaxLength(2);
        ui_version_id->setCursorPosition(2);

        gridLayout->addWidget(ui_version_id, 1, 2, 1, 3);

        ui_protocol_type = new QLineEdit(Stp);
        ui_protocol_type->setObjectName(QString::fromUtf8("ui_protocol_type"));

        gridLayout->addWidget(ui_protocol_type, 2, 2, 1, 3);

        label_7 = new QLabel(Stp);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 11, 0, 1, 1);

        label_9 = new QLabel(Stp);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 13, 0, 1, 1);

        label = new QLabel(Stp);
        label->setObjectName(QString::fromUtf8("label"));
        label->setLayoutDirection(Qt::LeftToRight);

        gridLayout->addWidget(label, 4, 0, 1, 1);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem, 24, 3, 1, 1);

        label_5 = new QLabel(Stp);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 9, 0, 1, 1);

        ui_port_id = new QLineEdit(Stp);
        ui_port_id->setObjectName(QString::fromUtf8("ui_port_id"));

        gridLayout->addWidget(ui_port_id, 9, 2, 1, 3);

        label_3 = new QLabel(Stp);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 7, 0, 1, 1);

        ui_root_path = new QLineEdit(Stp);
        ui_root_path->setObjectName(QString::fromUtf8("ui_root_path"));

        gridLayout->addWidget(ui_root_path, 7, 2, 1, 3);

        ui_max_age = new QLineEdit(Stp);
        ui_max_age->setObjectName(QString::fromUtf8("ui_max_age"));

        gridLayout->addWidget(ui_max_age, 11, 2, 1, 3);

        ui_message_age = new QLineEdit(Stp);
        ui_message_age->setObjectName(QString::fromUtf8("ui_message_age"));

        gridLayout->addWidget(ui_message_age, 10, 2, 1, 3);

        ui_forward_delay = new QLineEdit(Stp);
        ui_forward_delay->setObjectName(QString::fromUtf8("ui_forward_delay"));

        gridLayout->addWidget(ui_forward_delay, 13, 2, 1, 3);

        label_8 = new QLabel(Stp);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 12, 0, 1, 1);

        ui_flags = new QLineEdit(Stp);
        ui_flags->setObjectName(QString::fromUtf8("ui_flags"));

        gridLayout->addWidget(ui_flags, 4, 2, 1, 3);

        label_13 = new QLabel(Stp);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout->addWidget(label_13, 19, 0, 1, 1);

        ui_bridge_system_id = new QLineEdit(Stp);
        ui_bridge_system_id->setObjectName(QString::fromUtf8("ui_bridge_system_id"));

        gridLayout->addWidget(ui_bridge_system_id, 23, 2, 1, 3);

        label_15 = new QLabel(Stp);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout->addWidget(label_15, 23, 0, 1, 1);

        label_10 = new QLabel(Stp);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_10->setWordWrap(false);

        gridLayout->addWidget(label_10, 16, 0, 1, 1);

        label_12 = new QLabel(Stp);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout->addWidget(label_12, 17, 0, 2, 1);

        ui_root_system_id_ex = new QLineEdit(Stp);
        ui_root_system_id_ex->setObjectName(QString::fromUtf8("ui_root_system_id_ex"));

        gridLayout->addWidget(ui_root_system_id_ex, 17, 2, 2, 3);

        label_4 = new QLabel(Stp);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 21, 0, 2, 1);

        ui_bridge_system_id_ex = new QLineEdit(Stp);
        ui_bridge_system_id_ex->setObjectName(QString::fromUtf8("ui_bridge_system_id_ex"));

        gridLayout->addWidget(ui_bridge_system_id_ex, 21, 2, 2, 3);

#ifndef QT_NO_SHORTCUT
        label_24->setBuddy(ui_version_id);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(ui_version_id, ui_protocol_id);
        QWidget::setTabOrder(ui_protocol_id, ui_protocol_type);

        retranslateUi(Stp);

        QMetaObject::connectSlotsByName(Stp);
    } // setupUi

    void retranslateUi(QWidget *Stp)
    {
        Stp->setWindowTitle(QApplication::translate("Stp", "Form", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("Stp", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; text-decoration: underline;\">Bridge ID</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        ui_root_system_id->setInputMask(QApplication::translate("Stp", ">HH:HH:HH:HH:HH:HH; ", 0, QApplication::UnicodeUTF8));
        ui_hello_time->setInputMask(QApplication::translate("Stp", ">HHHH; ", 0, QApplication::UnicodeUTF8));
        ui_hello_time->setText(QString());
        label_6->setText(QApplication::translate("Stp", "Message age", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("Stp", "Protocol Identifer", 0, QApplication::UnicodeUTF8));
        label_24->setText(QApplication::translate("Stp", "Version Identifer", 0, QApplication::UnicodeUTF8));
        label_27->setText(QApplication::translate("Stp", "BPDU Type", 0, QApplication::UnicodeUTF8));
        ui_protocol_id->setInputMask(QApplication::translate("Stp", ">HH HH; ", 0, QApplication::UnicodeUTF8));
        ui_protocol_id->setText(QString());
        ui_version_id->setInputMask(QApplication::translate("Stp", ">HH; ", 0, QApplication::UnicodeUTF8));
        ui_version_id->setText(QString());
        ui_protocol_type->setInputMask(QApplication::translate("Stp", ">HH; ", 0, QApplication::UnicodeUTF8));
        ui_protocol_type->setText(QString());
        label_7->setText(QApplication::translate("Stp", "Max age", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("Stp", "Forward delay", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Stp", "Flags", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("Stp", "Port ID", 0, QApplication::UnicodeUTF8));
        ui_port_id->setInputMask(QApplication::translate("Stp", ">HHHH; ", 0, QApplication::UnicodeUTF8));
        ui_port_id->setText(QString());
        label_3->setText(QApplication::translate("Stp", "Root Path", 0, QApplication::UnicodeUTF8));
        ui_root_path->setInputMask(QApplication::translate("Stp", ">HH HH HH HH; ", 0, QApplication::UnicodeUTF8));
        ui_root_path->setText(QString());
        ui_max_age->setInputMask(QApplication::translate("Stp", ">HHHH; ", 0, QApplication::UnicodeUTF8));
        ui_max_age->setText(QString());
        ui_message_age->setInputMask(QApplication::translate("Stp", ">HHHH; ", 0, QApplication::UnicodeUTF8));
        ui_message_age->setText(QString());
        ui_forward_delay->setInputMask(QApplication::translate("Stp", ">HHHH; ", 0, QApplication::UnicodeUTF8));
        ui_forward_delay->setText(QString());
        label_8->setText(QApplication::translate("Stp", "Hello time", 0, QApplication::UnicodeUTF8));
        ui_flags->setInputMask(QApplication::translate("Stp", ">HH; ", 0, QApplication::UnicodeUTF8));
        ui_flags->setText(QString());
        label_13->setText(QApplication::translate("Stp", "RootB System ID", 0, QApplication::UnicodeUTF8));
        ui_bridge_system_id->setInputMask(QApplication::translate("Stp", ">HH:HH:HH:HH:HH:HH; ", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("Stp", "Bridge System ID", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("Stp", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; text-decoration: underline;\">Root ID</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("Stp", "<html><head/><body><p align=\"center\"><span style=\" font-size:9pt;\">Root Bridge<br/>System ID<br/>Priority and Extension</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        ui_root_system_id_ex->setInputMask(QApplication::translate("Stp", ">HH HH; ", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Stp", "<html><head/><body><p align=\"center\"><span style=\" font-size:9pt;\">Bridge<br/>System ID<br/>Priority and Extension</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        ui_bridge_system_id_ex->setInputMask(QApplication::translate("Stp", ">HH HH; ", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Stp: public Ui_Stp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STP_H
