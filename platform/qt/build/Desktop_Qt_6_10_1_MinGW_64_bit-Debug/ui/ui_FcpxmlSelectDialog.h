/********************************************************************************
** Form generated from reading UI file 'FcpxmlSelectDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FCPXMLSELECTDIALOG_H
#define UI_FCPXMLSELECTDIALOG_H

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

class Ui_FcpxmlSelectDialog
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QCheckBox *checkBoxInvert;
    QPushButton *pushButtonFcpxml;
    QLineEdit *lineEditFcpxml;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *labelStatus;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonAbort;
    QPushButton *pushButtonSelect;

    void setupUi(QDialog *FcpxmlSelectDialog)
    {
        if (FcpxmlSelectDialog->objectName().isEmpty())
            FcpxmlSelectDialog->setObjectName("FcpxmlSelectDialog");
        FcpxmlSelectDialog->resize(616, 428);
        gridLayout_2 = new QGridLayout(FcpxmlSelectDialog);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        checkBoxInvert = new QCheckBox(FcpxmlSelectDialog);
        checkBoxInvert->setObjectName("checkBoxInvert");

        gridLayout->addWidget(checkBoxInvert, 1, 1, 1, 1);

        pushButtonFcpxml = new QPushButton(FcpxmlSelectDialog);
        pushButtonFcpxml->setObjectName("pushButtonFcpxml");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/RetinaIMG/RetinaIMG/Movie-icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButtonFcpxml->setIcon(icon);
        pushButtonFcpxml->setFlat(false);

        gridLayout->addWidget(pushButtonFcpxml, 0, 0, 1, 1);

        lineEditFcpxml = new QLineEdit(FcpxmlSelectDialog);
        lineEditFcpxml->setObjectName("lineEditFcpxml");
        lineEditFcpxml->setReadOnly(true);

        gridLayout->addWidget(lineEditFcpxml, 0, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        tableWidget = new QTableWidget(FcpxmlSelectDialog);
        if (tableWidget->columnCount() < 1)
            tableWidget->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setSelectionMode(QAbstractItemView::NoSelection);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget->horizontalHeader()->setDefaultSectionSize(150);
        tableWidget->horizontalHeader()->setStretchLastSection(true);
        tableWidget->verticalHeader()->setVisible(false);

        gridLayout_2->addWidget(tableWidget, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        labelStatus = new QLabel(FcpxmlSelectDialog);
        labelStatus->setObjectName("labelStatus");

        horizontalLayout->addWidget(labelStatus);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButtonAbort = new QPushButton(FcpxmlSelectDialog);
        pushButtonAbort->setObjectName("pushButtonAbort");

        horizontalLayout->addWidget(pushButtonAbort);

        pushButtonSelect = new QPushButton(FcpxmlSelectDialog);
        pushButtonSelect->setObjectName("pushButtonSelect");

        horizontalLayout->addWidget(pushButtonSelect);


        gridLayout_2->addLayout(horizontalLayout, 2, 0, 1, 1);

        QWidget::setTabOrder(pushButtonFcpxml, lineEditFcpxml);
        QWidget::setTabOrder(lineEditFcpxml, tableWidget);
        QWidget::setTabOrder(tableWidget, pushButtonAbort);
        QWidget::setTabOrder(pushButtonAbort, pushButtonSelect);

        retranslateUi(FcpxmlSelectDialog);
        QObject::connect(pushButtonAbort, &QPushButton::clicked, FcpxmlSelectDialog, qOverload<>(&QDialog::reject));

        pushButtonFcpxml->setDefault(true);
        pushButtonSelect->setDefault(true);


        QMetaObject::connectSlotsByName(FcpxmlSelectDialog);
    } // setupUi

    void retranslateUi(QDialog *FcpxmlSelectDialog)
    {
        FcpxmlSelectDialog->setWindowTitle(QCoreApplication::translate("FcpxmlSelectDialog", "FCPXML Selection Assistant", nullptr));
        checkBoxInvert->setText(QCoreApplication::translate("FcpxmlSelectDialog", "Invert", nullptr));
        pushButtonFcpxml->setText(QCoreApplication::translate("FcpxmlSelectDialog", "Select FCPXML", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("FcpxmlSelectDialog", "Clips in Session", nullptr));
        labelStatus->setText(QCoreApplication::translate("FcpxmlSelectDialog", "TextLabel", nullptr));
        pushButtonAbort->setText(QCoreApplication::translate("FcpxmlSelectDialog", "Abort", nullptr));
        pushButtonSelect->setText(QCoreApplication::translate("FcpxmlSelectDialog", "Select", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FcpxmlSelectDialog: public Ui_FcpxmlSelectDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FCPXMLSELECTDIALOG_H
