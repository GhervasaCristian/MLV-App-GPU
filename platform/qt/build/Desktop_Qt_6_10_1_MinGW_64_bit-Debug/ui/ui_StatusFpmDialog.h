/********************************************************************************
** Form generated from reading UI file 'StatusFpmDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATUSFPMDIALOG_H
#define UI_STATUSFPMDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_StatusFpmDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label;

    void setupUi(QDialog *StatusFpmDialog)
    {
        if (StatusFpmDialog->objectName().isEmpty())
            StatusFpmDialog->setObjectName("StatusFpmDialog");
        StatusFpmDialog->resize(362, 82);
        gridLayout = new QGridLayout(StatusFpmDialog);
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(StatusFpmDialog);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);


        retranslateUi(StatusFpmDialog);

        QMetaObject::connectSlotsByName(StatusFpmDialog);
    } // setupUi

    void retranslateUi(QDialog *StatusFpmDialog)
    {
        StatusFpmDialog->setWindowTitle(QCoreApplication::translate("StatusFpmDialog", "Installing Focus Pixel Map(s)", nullptr));
        label->setText(QCoreApplication::translate("StatusFpmDialog", "Please wait while installing focus pixel map(s)...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StatusFpmDialog: public Ui_StatusFpmDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATUSFPMDIALOG_H
