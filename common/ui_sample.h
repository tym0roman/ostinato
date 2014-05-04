/********************************************************************************
** Form generated from reading UI file 'sample.ui'
**
** Created: Thu May 1 12:18:52 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAMPLE_H
#define UI_SAMPLE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Sample
{
public:
    QGridLayout *gridLayout;
    QLabel *label_22;
    QLineEdit *sampleA;
    QCheckBox *isChecksumOverride;
    QLineEdit *sampleChecksum;
    QLabel *label_24;
    QLineEdit *sampleB;
    QLabel *label_25;
    QLineEdit *sampleX;
    QSpacerItem *spacerItem;
    QLabel *label_27;
    QLineEdit *samplePayloadLength;
    QLabel *label_26;
    QLineEdit *sampleY;
    QSpacerItem *spacerItem1;

    void setupUi(QWidget *Sample)
    {
        if (Sample->objectName().isEmpty())
            Sample->setObjectName(QString::fromUtf8("Sample"));
        Sample->resize(263, 116);
        gridLayout = new QGridLayout(Sample);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_22 = new QLabel(Sample);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_22, 0, 0, 1, 1);

        sampleA = new QLineEdit(Sample);
        sampleA->setObjectName(QString::fromUtf8("sampleA"));

        gridLayout->addWidget(sampleA, 0, 1, 1, 1);

        isChecksumOverride = new QCheckBox(Sample);
        isChecksumOverride->setObjectName(QString::fromUtf8("isChecksumOverride"));

        gridLayout->addWidget(isChecksumOverride, 0, 2, 1, 1);

        sampleChecksum = new QLineEdit(Sample);
        sampleChecksum->setObjectName(QString::fromUtf8("sampleChecksum"));
        sampleChecksum->setEnabled(false);

        gridLayout->addWidget(sampleChecksum, 0, 3, 1, 1);

        label_24 = new QLabel(Sample);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_24, 1, 0, 1, 1);

        sampleB = new QLineEdit(Sample);
        sampleB->setObjectName(QString::fromUtf8("sampleB"));

        gridLayout->addWidget(sampleB, 1, 1, 1, 1);

        label_25 = new QLabel(Sample);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_25, 1, 2, 1, 1);

        sampleX = new QLineEdit(Sample);
        sampleX->setObjectName(QString::fromUtf8("sampleX"));

        gridLayout->addWidget(sampleX, 1, 3, 1, 1);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 1, 4, 1, 1);

        label_27 = new QLabel(Sample);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_27, 2, 0, 1, 1);

        samplePayloadLength = new QLineEdit(Sample);
        samplePayloadLength->setObjectName(QString::fromUtf8("samplePayloadLength"));
        samplePayloadLength->setEnabled(false);

        gridLayout->addWidget(samplePayloadLength, 2, 1, 1, 1);

        label_26 = new QLabel(Sample);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_26, 2, 2, 1, 1);

        sampleY = new QLineEdit(Sample);
        sampleY->setObjectName(QString::fromUtf8("sampleY"));

        gridLayout->addWidget(sampleY, 2, 3, 1, 1);

        spacerItem1 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem1, 3, 2, 1, 1);

#ifndef QT_NO_SHORTCUT
        label_22->setBuddy(sampleA);
        label_24->setBuddy(sampleB);
        label_25->setBuddy(sampleX);
        label_27->setBuddy(samplePayloadLength);
        label_26->setBuddy(sampleY);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(sampleA, sampleB);
        QWidget::setTabOrder(sampleB, samplePayloadLength);
        QWidget::setTabOrder(samplePayloadLength, isChecksumOverride);
        QWidget::setTabOrder(isChecksumOverride, sampleChecksum);
        QWidget::setTabOrder(sampleChecksum, sampleX);
        QWidget::setTabOrder(sampleX, sampleY);

        retranslateUi(Sample);
        QObject::connect(isChecksumOverride, SIGNAL(toggled(bool)), sampleChecksum, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(Sample);
    } // setupUi

    void retranslateUi(QWidget *Sample)
    {
        Sample->setWindowTitle(QApplication::translate("Sample", "Form", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("Sample", "Field A", 0, QApplication::UnicodeUTF8));
        sampleA->setInputMask(QApplication::translate("Sample", ">HH; ", 0, QApplication::UnicodeUTF8));
        sampleA->setText(QString());
        isChecksumOverride->setText(QApplication::translate("Sample", "Checksum", 0, QApplication::UnicodeUTF8));
        sampleChecksum->setInputMask(QApplication::translate("Sample", ">HH HH; ", 0, QApplication::UnicodeUTF8));
        label_24->setText(QApplication::translate("Sample", "Field B", 0, QApplication::UnicodeUTF8));
        sampleB->setInputMask(QApplication::translate("Sample", ">HH HH; ", 0, QApplication::UnicodeUTF8));
        label_25->setText(QApplication::translate("Sample", "Field X", 0, QApplication::UnicodeUTF8));
        label_27->setText(QApplication::translate("Sample", "Length", 0, QApplication::UnicodeUTF8));
        samplePayloadLength->setText(QString());
        label_26->setText(QApplication::translate("Sample", "Field Y", 0, QApplication::UnicodeUTF8));
        sampleY->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Sample: public Ui_Sample {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAMPLE_H
