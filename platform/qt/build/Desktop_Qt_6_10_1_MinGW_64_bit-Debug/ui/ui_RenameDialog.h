/********************************************************************************
** Form generated from reading UI file 'RenameDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RENAMEDIALOG_H
#define UI_RENAMEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_RenameDialog
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonRename;
    QPushButton *pushButtonAbort;

    void setupUi(QDialog *RenameDialog)
    {
        if (RenameDialog->objectName().isEmpty())
            RenameDialog->setObjectName("RenameDialog");
        RenameDialog->resize(648, 129);
        gridLayout_2 = new QGridLayout(RenameDialog);
        gridLayout_2->setObjectName("gridLayout_2");
        groupBox = new QGroupBox(RenameDialog);
        groupBox->setObjectName("groupBox");
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName("lineEdit");

        gridLayout->addWidget(lineEdit, 0, 0, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButtonRename = new QPushButton(RenameDialog);
        pushButtonRename->setObjectName("pushButtonRename");

        horizontalLayout->addWidget(pushButtonRename);

        pushButtonAbort = new QPushButton(RenameDialog);
        pushButtonAbort->setObjectName("pushButtonAbort");

        horizontalLayout->addWidget(pushButtonAbort);


        gridLayout_2->addLayout(horizontalLayout, 1, 0, 1, 1);


        retranslateUi(RenameDialog);
        QObject::connect(pushButtonRename, &QPushButton::clicked, RenameDialog, qOverload<>(&QDialog::accept));
        QObject::connect(pushButtonAbort, &QPushButton::clicked, RenameDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(RenameDialog);
    } // setupUi

    void retranslateUi(QDialog *RenameDialog)
    {
        RenameDialog->setWindowTitle(QCoreApplication::translate("RenameDialog", "Rename Clip", nullptr));
        groupBox->setTitle(QCoreApplication::translate("RenameDialog", "Rename clip to...", nullptr));
        lineEdit->setInputMask(QString());
        lineEdit->setText(QString());
        pushButtonRename->setText(QCoreApplication::translate("RenameDialog", "Rename", nullptr));
        pushButtonAbort->setText(QCoreApplication::translate("RenameDialog", "Abort", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RenameDialog: public Ui_RenameDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RENAMEDIALOG_H
