/********************************************************************************
** Form generated from reading UI file 'FcpxmlAssistantDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FCPXMLASSISTANTDIALOG_H
#define UI_FCPXMLASSISTANTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_FcpxmlAssistantDialog
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QPushButton *pushButtonFcpxml;
    QLineEdit *lineEditFcpxml;
    QPushButton *pushButtonMlv;
    QLineEdit *lineEditMlvFolder;
    QCheckBox *checkBoxScanRecursively;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *labelStatus;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonAbort;
    QPushButton *pushButtonImport;

    void setupUi(QDialog *FcpxmlAssistantDialog)
    {
        if (FcpxmlAssistantDialog->objectName().isEmpty())
            FcpxmlAssistantDialog->setObjectName("FcpxmlAssistantDialog");
        FcpxmlAssistantDialog->resize(616, 428);
        gridLayout_2 = new QGridLayout(FcpxmlAssistantDialog);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        pushButtonFcpxml = new QPushButton(FcpxmlAssistantDialog);
        pushButtonFcpxml->setObjectName("pushButtonFcpxml");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/RetinaIMG/RetinaIMG/Movie-icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButtonFcpxml->setIcon(icon);
        pushButtonFcpxml->setFlat(false);

        gridLayout->addWidget(pushButtonFcpxml, 0, 0, 1, 1);

        lineEditFcpxml = new QLineEdit(FcpxmlAssistantDialog);
        lineEditFcpxml->setObjectName("lineEditFcpxml");
        lineEditFcpxml->setReadOnly(true);

        gridLayout->addWidget(lineEditFcpxml, 0, 1, 1, 1);

        pushButtonMlv = new QPushButton(FcpxmlAssistantDialog);
        pushButtonMlv->setObjectName("pushButtonMlv");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/RetinaIMG/RetinaIMG/Folder-Open-icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButtonMlv->setIcon(icon1);

        gridLayout->addWidget(pushButtonMlv, 1, 0, 1, 1);

        lineEditMlvFolder = new QLineEdit(FcpxmlAssistantDialog);
        lineEditMlvFolder->setObjectName("lineEditMlvFolder");
        lineEditMlvFolder->setReadOnly(true);

        gridLayout->addWidget(lineEditMlvFolder, 1, 1, 1, 1);

        checkBoxScanRecursively = new QCheckBox(FcpxmlAssistantDialog);
        checkBoxScanRecursively->setObjectName("checkBoxScanRecursively");

        gridLayout->addWidget(checkBoxScanRecursively, 2, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        tableWidget = new QTableWidget(FcpxmlAssistantDialog);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setSelectionMode(QAbstractItemView::NoSelection);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget->horizontalHeader()->setDefaultSectionSize(200);
        tableWidget->horizontalHeader()->setStretchLastSection(true);
        tableWidget->verticalHeader()->setVisible(false);

        gridLayout_2->addWidget(tableWidget, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        labelStatus = new QLabel(FcpxmlAssistantDialog);
        labelStatus->setObjectName("labelStatus");

        horizontalLayout->addWidget(labelStatus);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButtonAbort = new QPushButton(FcpxmlAssistantDialog);
        pushButtonAbort->setObjectName("pushButtonAbort");

        horizontalLayout->addWidget(pushButtonAbort);

        pushButtonImport = new QPushButton(FcpxmlAssistantDialog);
        pushButtonImport->setObjectName("pushButtonImport");

        horizontalLayout->addWidget(pushButtonImport);


        gridLayout_2->addLayout(horizontalLayout, 2, 0, 1, 1);

        QWidget::setTabOrder(pushButtonFcpxml, lineEditFcpxml);
        QWidget::setTabOrder(lineEditFcpxml, pushButtonMlv);
        QWidget::setTabOrder(pushButtonMlv, lineEditMlvFolder);
        QWidget::setTabOrder(lineEditMlvFolder, tableWidget);
        QWidget::setTabOrder(tableWidget, pushButtonAbort);
        QWidget::setTabOrder(pushButtonAbort, pushButtonImport);

        retranslateUi(FcpxmlAssistantDialog);
        QObject::connect(pushButtonAbort, &QPushButton::clicked, FcpxmlAssistantDialog, qOverload<>(&QDialog::reject));
        QObject::connect(pushButtonImport, &QPushButton::clicked, FcpxmlAssistantDialog, qOverload<>(&QDialog::accept));

        pushButtonFcpxml->setDefault(true);
        pushButtonImport->setDefault(true);


        QMetaObject::connectSlotsByName(FcpxmlAssistantDialog);
    } // setupUi

    void retranslateUi(QDialog *FcpxmlAssistantDialog)
    {
        FcpxmlAssistantDialog->setWindowTitle(QCoreApplication::translate("FcpxmlAssistantDialog", "FCPXML Import Assistant", nullptr));
        pushButtonFcpxml->setText(QCoreApplication::translate("FcpxmlAssistantDialog", "Select FCPXML", nullptr));
        pushButtonMlv->setText(QCoreApplication::translate("FcpxmlAssistantDialog", "Select MLV Folder", nullptr));
        checkBoxScanRecursively->setText(QCoreApplication::translate("FcpxmlAssistantDialog", "Scan recursively", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("FcpxmlAssistantDialog", "Clips in FCPXML", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("FcpxmlAssistantDialog", "Found MLV", nullptr));
        labelStatus->setText(QCoreApplication::translate("FcpxmlAssistantDialog", "TextLabel", nullptr));
        pushButtonAbort->setText(QCoreApplication::translate("FcpxmlAssistantDialog", "Abort", nullptr));
        pushButtonImport->setText(QCoreApplication::translate("FcpxmlAssistantDialog", "Import", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FcpxmlAssistantDialog: public Ui_FcpxmlAssistantDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FCPXMLASSISTANTDIALOG_H
