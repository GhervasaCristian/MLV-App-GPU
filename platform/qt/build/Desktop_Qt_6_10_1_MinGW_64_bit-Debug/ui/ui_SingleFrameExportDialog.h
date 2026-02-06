/********************************************************************************
** Form generated from reading UI file 'SingleFrameExportDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SINGLEFRAMEEXPORTDIALOG_H
#define UI_SINGLEFRAMEEXPORTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_SingleFrameExportDialog
{
public:
    QGridLayout *gridLayout;
    QComboBox *comboBoxCodec;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonOk;
    QPushButton *pushButtonCancel;

    void setupUi(QDialog *SingleFrameExportDialog)
    {
        if (SingleFrameExportDialog->objectName().isEmpty())
            SingleFrameExportDialog->setObjectName("SingleFrameExportDialog");
        SingleFrameExportDialog->resize(265, 81);
        gridLayout = new QGridLayout(SingleFrameExportDialog);
        gridLayout->setObjectName("gridLayout");
        comboBoxCodec = new QComboBox(SingleFrameExportDialog);
        comboBoxCodec->addItem(QString());
        comboBoxCodec->addItem(QString());
        comboBoxCodec->addItem(QString());
        comboBoxCodec->addItem(QString());
        comboBoxCodec->setObjectName("comboBoxCodec");

        gridLayout->addWidget(comboBoxCodec, 0, 0, 1, 3);

        horizontalSpacer = new QSpacerItem(70, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        pushButtonOk = new QPushButton(SingleFrameExportDialog);
        pushButtonOk->setObjectName("pushButtonOk");

        gridLayout->addWidget(pushButtonOk, 1, 1, 1, 1);

        pushButtonCancel = new QPushButton(SingleFrameExportDialog);
        pushButtonCancel->setObjectName("pushButtonCancel");

        gridLayout->addWidget(pushButtonCancel, 1, 2, 1, 1);


        retranslateUi(SingleFrameExportDialog);

        QMetaObject::connectSlotsByName(SingleFrameExportDialog);
    } // setupUi

    void retranslateUi(QDialog *SingleFrameExportDialog)
    {
        SingleFrameExportDialog->setWindowTitle(QCoreApplication::translate("SingleFrameExportDialog", "Export Current Frame", nullptr));
        comboBoxCodec->setItemText(0, QCoreApplication::translate("SingleFrameExportDialog", "DNG uncompressed", nullptr));
        comboBoxCodec->setItemText(1, QCoreApplication::translate("SingleFrameExportDialog", "DNG lossless", nullptr));
        comboBoxCodec->setItemText(2, QCoreApplication::translate("SingleFrameExportDialog", "PNG", nullptr));
        comboBoxCodec->setItemText(3, QCoreApplication::translate("SingleFrameExportDialog", "JPG", nullptr));

        pushButtonOk->setText(QCoreApplication::translate("SingleFrameExportDialog", "Export", nullptr));
        pushButtonCancel->setText(QCoreApplication::translate("SingleFrameExportDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SingleFrameExportDialog: public Ui_SingleFrameExportDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SINGLEFRAMEEXPORTDIALOG_H
