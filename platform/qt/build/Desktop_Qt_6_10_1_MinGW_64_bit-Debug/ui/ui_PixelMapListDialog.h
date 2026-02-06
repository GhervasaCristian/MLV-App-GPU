/********************************************************************************
** Form generated from reading UI file 'PixelMapListDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PIXELMAPLISTDIALOG_H
#define UI_PIXELMAPLISTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>

QT_BEGIN_NAMESPACE

class Ui_PixelMapListDialog
{
public:
    QGridLayout *gridLayout;
    QTreeWidget *treeWidget;
    QPushButton *pushButton;
    QLabel *labelMissing;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *PixelMapListDialog)
    {
        if (PixelMapListDialog->objectName().isEmpty())
            PixelMapListDialog->setObjectName("PixelMapListDialog");
        PixelMapListDialog->resize(444, 300);
        gridLayout = new QGridLayout(PixelMapListDialog);
        gridLayout->setObjectName("gridLayout");
        treeWidget = new QTreeWidget(PixelMapListDialog);
        treeWidget->headerItem()->setText(0, QString());
        treeWidget->setObjectName("treeWidget");

        gridLayout->addWidget(treeWidget, 0, 0, 1, 4);

        pushButton = new QPushButton(PixelMapListDialog);
        pushButton->setObjectName("pushButton");

        gridLayout->addWidget(pushButton, 1, 3, 1, 1);

        labelMissing = new QLabel(PixelMapListDialog);
        labelMissing->setObjectName("labelMissing");

        gridLayout->addWidget(labelMissing, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(295, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 2, 1, 1);


        retranslateUi(PixelMapListDialog);
        QObject::connect(pushButton, &QPushButton::clicked, PixelMapListDialog, qOverload<>(&QDialog::close));

        QMetaObject::connectSlotsByName(PixelMapListDialog);
    } // setupUi

    void retranslateUi(QDialog *PixelMapListDialog)
    {
        PixelMapListDialog->setWindowTitle(QCoreApplication::translate("PixelMapListDialog", "Installed Focus Pixel Maps", nullptr));
        pushButton->setText(QCoreApplication::translate("PixelMapListDialog", "Close", nullptr));
        labelMissing->setText(QCoreApplication::translate("PixelMapListDialog", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PixelMapListDialog: public Ui_PixelMapListDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PIXELMAPLISTDIALOG_H
