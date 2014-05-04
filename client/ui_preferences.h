/********************************************************************************
** Form generated from reading UI file 'preferences.ui'
**
** Created: Thu May 1 12:20:33 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFERENCES_H
#define UI_PREFERENCES_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Preferences
{
public:
    QVBoxLayout *vboxLayout;
    QFrame *frame;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *wiresharkPathEdit;
    QToolButton *wiresharkPathButton;
    QLabel *label_2;
    QLineEdit *tsharkPathEdit;
    QToolButton *tsharkPathButton;
    QLabel *label_5;
    QLineEdit *gzipPathEdit;
    QToolButton *gzipPathButton;
    QLabel *label_3;
    QLineEdit *diffPathEdit;
    QToolButton *diffPathButton;
    QLabel *label_4;
    QLineEdit *awkPathEdit;
    QToolButton *awkPathButton;
    QSpacerItem *spacerItem;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Preferences)
    {
        if (Preferences->objectName().isEmpty())
            Preferences->setObjectName(QString::fromUtf8("Preferences"));
        Preferences->resize(400, 220);
        const QIcon icon = QIcon(QString::fromUtf8(":/icons/preferences.png"));
        Preferences->setWindowIcon(icon);
        vboxLayout = new QVBoxLayout(Preferences);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        frame = new QFrame(Preferences);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Sunken);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        wiresharkPathEdit = new QLineEdit(frame);
        wiresharkPathEdit->setObjectName(QString::fromUtf8("wiresharkPathEdit"));
        wiresharkPathEdit->setEnabled(false);

        gridLayout->addWidget(wiresharkPathEdit, 0, 1, 1, 1);

        wiresharkPathButton = new QToolButton(frame);
        wiresharkPathButton->setObjectName(QString::fromUtf8("wiresharkPathButton"));

        gridLayout->addWidget(wiresharkPathButton, 0, 2, 1, 1);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        tsharkPathEdit = new QLineEdit(frame);
        tsharkPathEdit->setObjectName(QString::fromUtf8("tsharkPathEdit"));
        tsharkPathEdit->setEnabled(false);

        gridLayout->addWidget(tsharkPathEdit, 1, 1, 1, 1);

        tsharkPathButton = new QToolButton(frame);
        tsharkPathButton->setObjectName(QString::fromUtf8("tsharkPathButton"));

        gridLayout->addWidget(tsharkPathButton, 1, 2, 1, 1);

        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        gzipPathEdit = new QLineEdit(frame);
        gzipPathEdit->setObjectName(QString::fromUtf8("gzipPathEdit"));
        gzipPathEdit->setEnabled(false);

        gridLayout->addWidget(gzipPathEdit, 2, 1, 1, 1);

        gzipPathButton = new QToolButton(frame);
        gzipPathButton->setObjectName(QString::fromUtf8("gzipPathButton"));

        gridLayout->addWidget(gzipPathButton, 2, 2, 1, 1);

        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        diffPathEdit = new QLineEdit(frame);
        diffPathEdit->setObjectName(QString::fromUtf8("diffPathEdit"));
        diffPathEdit->setEnabled(false);

        gridLayout->addWidget(diffPathEdit, 3, 1, 1, 1);

        diffPathButton = new QToolButton(frame);
        diffPathButton->setObjectName(QString::fromUtf8("diffPathButton"));

        gridLayout->addWidget(diffPathButton, 3, 2, 1, 1);

        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        awkPathEdit = new QLineEdit(frame);
        awkPathEdit->setObjectName(QString::fromUtf8("awkPathEdit"));
        awkPathEdit->setEnabled(false);

        gridLayout->addWidget(awkPathEdit, 4, 1, 1, 1);

        awkPathButton = new QToolButton(frame);
        awkPathButton->setObjectName(QString::fromUtf8("awkPathButton"));

        gridLayout->addWidget(awkPathButton, 4, 2, 1, 1);

        spacerItem = new QSpacerItem(21, 61, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem, 5, 1, 1, 1);


        vboxLayout->addWidget(frame);

        buttonBox = new QDialogButtonBox(Preferences);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(wiresharkPathEdit);
        label_2->setBuddy(tsharkPathEdit);
        label_5->setBuddy(diffPathEdit);
        label_3->setBuddy(diffPathEdit);
        label_4->setBuddy(awkPathEdit);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(wiresharkPathEdit, wiresharkPathButton);
        QWidget::setTabOrder(wiresharkPathButton, tsharkPathEdit);
        QWidget::setTabOrder(tsharkPathEdit, tsharkPathButton);
        QWidget::setTabOrder(tsharkPathButton, gzipPathEdit);
        QWidget::setTabOrder(gzipPathEdit, gzipPathButton);
        QWidget::setTabOrder(gzipPathButton, diffPathEdit);
        QWidget::setTabOrder(diffPathEdit, diffPathButton);
        QWidget::setTabOrder(diffPathButton, awkPathEdit);
        QWidget::setTabOrder(awkPathEdit, awkPathButton);
        QWidget::setTabOrder(awkPathButton, buttonBox);

        retranslateUi(Preferences);
        QObject::connect(buttonBox, SIGNAL(accepted()), Preferences, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Preferences, SLOT(reject()));

        QMetaObject::connectSlotsByName(Preferences);
    } // setupUi

    void retranslateUi(QDialog *Preferences)
    {
        Preferences->setWindowTitle(QApplication::translate("Preferences", "Preferences", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Preferences", "'wireshark' Path", 0, QApplication::UnicodeUTF8));
        wiresharkPathButton->setText(QApplication::translate("Preferences", "...", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Preferences", "'tshark' Path", 0, QApplication::UnicodeUTF8));
        tsharkPathButton->setText(QApplication::translate("Preferences", "...", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("Preferences", "'gzip' Path", 0, QApplication::UnicodeUTF8));
        gzipPathButton->setText(QApplication::translate("Preferences", "...", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Preferences", "'diff' Path", 0, QApplication::UnicodeUTF8));
        diffPathButton->setText(QApplication::translate("Preferences", "...", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Preferences", "'awk' Path", 0, QApplication::UnicodeUTF8));
        awkPathButton->setText(QApplication::translate("Preferences", "...", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Preferences: public Ui_Preferences {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFERENCES_H
