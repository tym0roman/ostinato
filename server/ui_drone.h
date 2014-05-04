/********************************************************************************
** Form generated from reading UI file 'drone.ui'
**
** Created: Mon Apr 28 09:18:15 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DRONE_H
#define UI_DRONE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Drone
{
public:
    QAction *actionShow;
    QAction *actionExit;
    QVBoxLayout *vboxLayout;
    QSpacerItem *spacerItem;
    QLabel *label_2;
    QLabel *versionLabel;
    QLabel *label_3;
    QLabel *label;
    QSpacerItem *spacerItem1;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem2;
    QPushButton *pushButton;
    QSpacerItem *spacerItem3;

    void setupUi(QWidget *Drone)
    {
        if (Drone->objectName().isEmpty())
            Drone->setObjectName(QString::fromUtf8("Drone"));
        Drone->resize(268, 216);
        const QIcon icon = QIcon(QString::fromUtf8(":/icons/portgroup.png"));
        Drone->setWindowIcon(icon);
        actionShow = new QAction(Drone);
        actionShow->setObjectName(QString::fromUtf8("actionShow"));
        actionExit = new QAction(Drone);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        vboxLayout = new QVBoxLayout(Drone);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);

        label_2 = new QLabel(Drone);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        vboxLayout->addWidget(label_2);

        versionLabel = new QLabel(Drone);
        versionLabel->setObjectName(QString::fromUtf8("versionLabel"));
        versionLabel->setAlignment(Qt::AlignCenter);

        vboxLayout->addWidget(versionLabel);

        label_3 = new QLabel(Drone);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        vboxLayout->addWidget(label_3);

        label = new QLabel(Drone);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        vboxLayout->addWidget(label);

        spacerItem1 = new QSpacerItem(20, 51, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem2);

        pushButton = new QPushButton(Drone);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        hboxLayout->addWidget(pushButton);

        spacerItem3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem3);


        vboxLayout->addLayout(hboxLayout);


        retranslateUi(Drone);
        QObject::connect(pushButton, SIGNAL(clicked()), actionExit, SLOT(trigger()));
        QObject::connect(actionShow, SIGNAL(triggered()), Drone, SLOT(showNormal()));
        QObject::connect(actionExit, SIGNAL(triggered()), Drone, SLOT(close()));

        QMetaObject::connectSlotsByName(Drone);
    } // setupUi

    void retranslateUi(QWidget *Drone)
    {
        Drone->setWindowTitle(QApplication::translate("Drone", "Drone", 0, QApplication::UnicodeUTF8));
        actionShow->setText(QApplication::translate("Drone", "Show", 0, QApplication::UnicodeUTF8));
        actionExit->setText(QApplication::translate("Drone", "Exit", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Drone", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:29pt; font-weight:600;\">Ostinato</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        versionLabel->setText(QApplication::translate("Drone", "Version/Revision Placeholder", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Drone", "(Server)", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Drone", "TODO: Info/Status here", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Drone", "Exit", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Drone: public Ui_Drone {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRONE_H
