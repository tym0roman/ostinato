/********************************************************************************
** Form generated from reading UI file 'portstatsfilter.ui'
**
** Created: Mon Apr 28 09:18:56 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PORTSTATSFILTER_H
#define UI_PORTSTATSFILTER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QListView>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PortStatsFilterDialog
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QListView *lvUnselected;
    QVBoxLayout *vboxLayout1;
    QSpacerItem *spacerItem;
    QToolButton *tbSelectIn;
    QToolButton *tbSelectOut;
    QSpacerItem *spacerItem1;
    QListView *lvSelected;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *PortStatsFilterDialog)
    {
        if (PortStatsFilterDialog->objectName().isEmpty())
            PortStatsFilterDialog->setObjectName(QString::fromUtf8("PortStatsFilterDialog"));
        PortStatsFilterDialog->resize(319, 193);
        const QIcon icon = QIcon(QString::fromUtf8(":/icons/portstats_filter.png"));
        PortStatsFilterDialog->setWindowIcon(icon);
        vboxLayout = new QVBoxLayout(PortStatsFilterDialog);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        lvUnselected = new QListView(PortStatsFilterDialog);
        lvUnselected->setObjectName(QString::fromUtf8("lvUnselected"));
        lvUnselected->setAcceptDrops(false);
        lvUnselected->setDragEnabled(false);
        lvUnselected->setDragDropMode(QAbstractItemView::NoDragDrop);
        lvUnselected->setSelectionMode(QAbstractItemView::ExtendedSelection);
        lvUnselected->setMovement(QListView::Static);

        hboxLayout->addWidget(lvUnselected);

        vboxLayout1 = new QVBoxLayout();
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout1->addItem(spacerItem);

        tbSelectIn = new QToolButton(PortStatsFilterDialog);
        tbSelectIn->setObjectName(QString::fromUtf8("tbSelectIn"));
        const QIcon icon1 = QIcon(QString::fromUtf8(":/icons/arrow_right.png"));
        tbSelectIn->setIcon(icon1);

        vboxLayout1->addWidget(tbSelectIn);

        tbSelectOut = new QToolButton(PortStatsFilterDialog);
        tbSelectOut->setObjectName(QString::fromUtf8("tbSelectOut"));
        const QIcon icon2 = QIcon(QString::fromUtf8(":/icons/arrow_left.png"));
        tbSelectOut->setIcon(icon2);

        vboxLayout1->addWidget(tbSelectOut);

        spacerItem1 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout1->addItem(spacerItem1);


        hboxLayout->addLayout(vboxLayout1);

        lvSelected = new QListView(PortStatsFilterDialog);
        lvSelected->setObjectName(QString::fromUtf8("lvSelected"));
        lvSelected->setAcceptDrops(true);
        lvSelected->setDragEnabled(true);
        lvSelected->setDragDropOverwriteMode(false);
        lvSelected->setDragDropMode(QAbstractItemView::InternalMove);
        lvSelected->setSelectionMode(QAbstractItemView::ExtendedSelection);
        lvSelected->setMovement(QListView::Free);

        hboxLayout->addWidget(lvSelected);


        vboxLayout->addLayout(hboxLayout);

        buttonBox = new QDialogButtonBox(PortStatsFilterDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);

        QWidget::setTabOrder(lvUnselected, tbSelectIn);
        QWidget::setTabOrder(tbSelectIn, tbSelectOut);
        QWidget::setTabOrder(tbSelectOut, lvSelected);
        QWidget::setTabOrder(lvSelected, buttonBox);

        retranslateUi(PortStatsFilterDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), PortStatsFilterDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PortStatsFilterDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(PortStatsFilterDialog);
    } // setupUi

    void retranslateUi(QDialog *PortStatsFilterDialog)
    {
        PortStatsFilterDialog->setWindowTitle(QApplication::translate("PortStatsFilterDialog", "Select Ports", 0, QApplication::UnicodeUTF8));
        tbSelectIn->setText(QApplication::translate("PortStatsFilterDialog", ">", 0, QApplication::UnicodeUTF8));
        tbSelectOut->setText(QApplication::translate("PortStatsFilterDialog", "<", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PortStatsFilterDialog: public Ui_PortStatsFilterDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PORTSTATSFILTER_H
