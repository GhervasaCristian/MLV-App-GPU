/********************************************************************************
** Form generated from reading UI file 'OverwriteListDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OVERWRITELISTDIALOG_H
#define UI_OVERWRITELISTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_OverwriteListDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QListWidget *listWidget;
    QPushButton *pushButtonAbort;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonOverwrite;
    QPushButton *pushButtonSkip;

    void setupUi(QDialog *OverwriteListDialog)
    {
        if (OverwriteListDialog->objectName().isEmpty())
            OverwriteListDialog->setObjectName("OverwriteListDialog");
        OverwriteListDialog->resize(533, 284);
        gridLayout = new QGridLayout(OverwriteListDialog);
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(OverwriteListDialog);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 4);

        listWidget = new QListWidget(OverwriteListDialog);
        listWidget->setObjectName("listWidget");
        listWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        listWidget->setProperty("showDropIndicator", QVariant(false));
        listWidget->setDefaultDropAction(Qt::IgnoreAction);
        listWidget->setSelectionMode(QAbstractItemView::NoSelection);

        gridLayout->addWidget(listWidget, 1, 0, 1, 4);

        pushButtonAbort = new QPushButton(OverwriteListDialog);
        pushButtonAbort->setObjectName("pushButtonAbort");

        gridLayout->addWidget(pushButtonAbort, 2, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 0, 1, 1);

        pushButtonOverwrite = new QPushButton(OverwriteListDialog);
        pushButtonOverwrite->setObjectName("pushButtonOverwrite");

        gridLayout->addWidget(pushButtonOverwrite, 2, 1, 1, 1);

        pushButtonSkip = new QPushButton(OverwriteListDialog);
        pushButtonSkip->setObjectName("pushButtonSkip");

        gridLayout->addWidget(pushButtonSkip, 2, 2, 1, 1);


        retranslateUi(OverwriteListDialog);

        QMetaObject::connectSlotsByName(OverwriteListDialog);
    } // setupUi

    void retranslateUi(QDialog *OverwriteListDialog)
    {
        OverwriteListDialog->setWindowTitle(QCoreApplication::translate("OverwriteListDialog", "MLV App - Overwrite Files", nullptr));
        label->setText(QCoreApplication::translate("OverwriteListDialog", "Following files will be overwritten:", nullptr));
        pushButtonAbort->setText(QCoreApplication::translate("OverwriteListDialog", "Abort", nullptr));
        pushButtonOverwrite->setText(QCoreApplication::translate("OverwriteListDialog", "Overwrite", nullptr));
        pushButtonSkip->setText(QCoreApplication::translate("OverwriteListDialog", "Skip", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OverwriteListDialog: public Ui_OverwriteListDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OVERWRITELISTDIALOG_H
