/********************************************************************************
** Form generated from reading UI file 'StatusDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATUSDIALOG_H
#define UI_STATUSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_StatusDialog
{
public:
    QGridLayout *gridLayout;
    QProgressBar *progressBar;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QLabel *labelEstimatedTime;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButtonAbort;

    void setupUi(QDialog *StatusDialog)
    {
        if (StatusDialog->objectName().isEmpty())
            StatusDialog->setObjectName("StatusDialog");
        StatusDialog->resize(464, 82);
        gridLayout = new QGridLayout(StatusDialog);
        gridLayout->setObjectName("gridLayout");
        progressBar = new QProgressBar(StatusDialog);
        progressBar->setObjectName("progressBar");
        progressBar->setValue(24);

        gridLayout->addWidget(progressBar, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(StatusDialog);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(10);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        labelEstimatedTime = new QLabel(StatusDialog);
        labelEstimatedTime->setObjectName("labelEstimatedTime");
        labelEstimatedTime->setFont(font);

        horizontalLayout->addWidget(labelEstimatedTime);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pushButtonAbort = new QPushButton(StatusDialog);
        pushButtonAbort->setObjectName("pushButtonAbort");

        horizontalLayout->addWidget(pushButtonAbort);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);


        retranslateUi(StatusDialog);

        QMetaObject::connectSlotsByName(StatusDialog);
    } // setupUi

    void retranslateUi(QDialog *StatusDialog)
    {
        StatusDialog->setWindowTitle(QCoreApplication::translate("StatusDialog", "Export...", nullptr));
        label->setText(QCoreApplication::translate("StatusDialog", "1/1", nullptr));
        labelEstimatedTime->setText(QCoreApplication::translate("StatusDialog", "--:--:--", nullptr));
        pushButtonAbort->setText(QCoreApplication::translate("StatusDialog", "Abort", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StatusDialog: public Ui_StatusDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATUSDIALOG_H
