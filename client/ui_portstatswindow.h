/********************************************************************************
** Form generated from reading UI file 'portstatswindow.ui'
**
** Created: Thu May 1 12:20:33 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PORTSTATSWINDOW_H
#define UI_PORTSTATSWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableView>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PortStatsWindow
{
public:
    QVBoxLayout *vboxLayout;
    QFrame *frame;
    QHBoxLayout *hboxLayout;
    QToolButton *tbStartTransmit;
    QToolButton *tbStopTransmit;
    QToolButton *tbClear;
    QToolButton *tbClearAll;
    QToolButton *tbStartCapture;
    QToolButton *tbStopCapture;
    QToolButton *tbViewCapture;
    QFrame *line;
    QSpacerItem *spacerItem;
    QToolButton *tbFilter;
    QTableView *tvPortStats;

    void setupUi(QWidget *PortStatsWindow)
    {
        if (PortStatsWindow->objectName().isEmpty())
            PortStatsWindow->setObjectName(QString::fromUtf8("PortStatsWindow"));
        PortStatsWindow->resize(502, 415);
        vboxLayout = new QVBoxLayout(PortStatsWindow);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        frame = new QFrame(PortStatsWindow);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::Panel);
        frame->setFrameShadow(QFrame::Raised);
        hboxLayout = new QHBoxLayout(frame);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        tbStartTransmit = new QToolButton(frame);
        tbStartTransmit->setObjectName(QString::fromUtf8("tbStartTransmit"));
        const QIcon icon = QIcon(QString::fromUtf8(":/icons/control_play.png"));
        tbStartTransmit->setIcon(icon);

        hboxLayout->addWidget(tbStartTransmit);

        tbStopTransmit = new QToolButton(frame);
        tbStopTransmit->setObjectName(QString::fromUtf8("tbStopTransmit"));
        const QIcon icon1 = QIcon(QString::fromUtf8(":/icons/control_stop.png"));
        tbStopTransmit->setIcon(icon1);

        hboxLayout->addWidget(tbStopTransmit);

        tbClear = new QToolButton(frame);
        tbClear->setObjectName(QString::fromUtf8("tbClear"));
        const QIcon icon2 = QIcon(QString::fromUtf8(":/icons/portstats_clear.png"));
        tbClear->setIcon(icon2);

        hboxLayout->addWidget(tbClear);

        tbClearAll = new QToolButton(frame);
        tbClearAll->setObjectName(QString::fromUtf8("tbClearAll"));
        const QIcon icon3 = QIcon(QString::fromUtf8(":/icons/portstats_clear_all.png"));
        tbClearAll->setIcon(icon3);

        hboxLayout->addWidget(tbClearAll);

        tbStartCapture = new QToolButton(frame);
        tbStartCapture->setObjectName(QString::fromUtf8("tbStartCapture"));
        const QIcon icon4 = QIcon(QString::fromUtf8(":/icons/sound_none.png"));
        tbStartCapture->setIcon(icon4);

        hboxLayout->addWidget(tbStartCapture);

        tbStopCapture = new QToolButton(frame);
        tbStopCapture->setObjectName(QString::fromUtf8("tbStopCapture"));
        const QIcon icon5 = QIcon(QString::fromUtf8(":/icons/sound_mute.png"));
        tbStopCapture->setIcon(icon5);

        hboxLayout->addWidget(tbStopCapture);

        tbViewCapture = new QToolButton(frame);
        tbViewCapture->setObjectName(QString::fromUtf8("tbViewCapture"));
        const QIcon icon6 = QIcon(QString::fromUtf8(":/icons/magnifier.png"));
        tbViewCapture->setIcon(icon6);

        hboxLayout->addWidget(tbViewCapture);

        line = new QFrame(frame);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        hboxLayout->addWidget(line);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        tbFilter = new QToolButton(frame);
        tbFilter->setObjectName(QString::fromUtf8("tbFilter"));
        const QIcon icon7 = QIcon(QString::fromUtf8(":/icons/portstats_filter.png"));
        tbFilter->setIcon(icon7);

        hboxLayout->addWidget(tbFilter);


        vboxLayout->addWidget(frame);

        tvPortStats = new QTableView(PortStatsWindow);
        tvPortStats->setObjectName(QString::fromUtf8("tvPortStats"));

        vboxLayout->addWidget(tvPortStats);


        retranslateUi(PortStatsWindow);

        QMetaObject::connectSlotsByName(PortStatsWindow);
    } // setupUi

    void retranslateUi(QWidget *PortStatsWindow)
    {
        PortStatsWindow->setWindowTitle(QApplication::translate("PortStatsWindow", "Form", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        tbStartTransmit->setToolTip(QApplication::translate("PortStatsWindow", "Start Tx", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        tbStartTransmit->setStatusTip(QApplication::translate("PortStatsWindow", "Starts transmit on selected port(s)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        tbStartTransmit->setText(QApplication::translate("PortStatsWindow", "Start Transmit", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        tbStopTransmit->setToolTip(QApplication::translate("PortStatsWindow", "Stop Tx", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        tbStopTransmit->setStatusTip(QApplication::translate("PortStatsWindow", "Stops transmit on selected port(s)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        tbStopTransmit->setText(QApplication::translate("PortStatsWindow", "Stop Trasmit", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        tbClear->setToolTip(QApplication::translate("PortStatsWindow", "Clear Selected Port Stats", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        tbClear->setStatusTip(QApplication::translate("PortStatsWindow", "Clears statistics of the selected port(s)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        tbClear->setText(QApplication::translate("PortStatsWindow", "Clear", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        tbClearAll->setToolTip(QApplication::translate("PortStatsWindow", "Clear All Ports Stats", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        tbClearAll->setStatusTip(QApplication::translate("PortStatsWindow", "Clears statistics of all ports", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        tbClearAll->setText(QApplication::translate("PortStatsWindow", "Clear All", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        tbStartCapture->setToolTip(QApplication::translate("PortStatsWindow", "Start Capture", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        tbStartCapture->setStatusTip(QApplication::translate("PortStatsWindow", "Captures packets on the selected port(s)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        tbStartCapture->setText(QApplication::translate("PortStatsWindow", "Start Capture", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        tbStopCapture->setToolTip(QApplication::translate("PortStatsWindow", "Stop Capture", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        tbStopCapture->setStatusTip(QApplication::translate("PortStatsWindow", "End capture on selecteed port(s)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        tbStopCapture->setText(QApplication::translate("PortStatsWindow", "Stop Capture", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        tbViewCapture->setToolTip(QApplication::translate("PortStatsWindow", "View Capture Buffer", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        tbViewCapture->setStatusTip(QApplication::translate("PortStatsWindow", "View captured packets on selected port(s)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        tbViewCapture->setText(QApplication::translate("PortStatsWindow", "View Capture", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        tbFilter->setStatusTip(QApplication::translate("PortStatsWindow", "Select which ports to view", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        tbFilter->setText(QApplication::translate("PortStatsWindow", "Filter", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PortStatsWindow: public Ui_PortStatsWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PORTSTATSWINDOW_H
