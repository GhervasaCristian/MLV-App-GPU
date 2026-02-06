/********************************************************************************
** Form generated from reading UI file 'InfoDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFODIALOG_H
#define UI_INFODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_InfoDialog
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButtonClose;
    QSpacerItem *horizontalSpacer;
    QTableWidget *tableWidget;

    void setupUi(QDialog *InfoDialog)
    {
        if (InfoDialog->objectName().isEmpty())
            InfoDialog->setObjectName("InfoDialog");
        InfoDialog->resize(399, 511);
        gridLayout = new QGridLayout(InfoDialog);
        gridLayout->setObjectName("gridLayout");
        pushButtonClose = new QPushButton(InfoDialog);
        pushButtonClose->setObjectName("pushButtonClose");

        gridLayout->addWidget(pushButtonClose, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(297, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        tableWidget = new QTableWidget(InfoDialog);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        if (tableWidget->rowCount() < 15)
            tableWidget->setRowCount(15);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(5, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(6, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(7, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(8, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(9, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(10, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(11, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(12, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(13, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(14, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget->setItem(0, 0, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidget->setItem(0, 1, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidget->setItem(1, 0, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableWidget->setItem(1, 1, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableWidget->setItem(2, 0, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tableWidget->setItem(2, 1, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tableWidget->setItem(3, 0, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        tableWidget->setItem(3, 1, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        tableWidget->setItem(4, 0, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        tableWidget->setItem(4, 1, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        tableWidget->setItem(5, 0, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        tableWidget->setItem(5, 1, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        tableWidget->setItem(6, 0, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        tableWidget->setItem(6, 1, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        tableWidget->setItem(7, 0, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        tableWidget->setItem(7, 1, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        tableWidget->setItem(8, 0, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        tableWidget->setItem(8, 1, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        tableWidget->setItem(9, 0, __qtablewidgetitem35);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        tableWidget->setItem(9, 1, __qtablewidgetitem36);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        tableWidget->setItem(10, 0, __qtablewidgetitem37);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        tableWidget->setItem(10, 1, __qtablewidgetitem38);
        QTableWidgetItem *__qtablewidgetitem39 = new QTableWidgetItem();
        tableWidget->setItem(11, 0, __qtablewidgetitem39);
        QTableWidgetItem *__qtablewidgetitem40 = new QTableWidgetItem();
        tableWidget->setItem(11, 1, __qtablewidgetitem40);
        QTableWidgetItem *__qtablewidgetitem41 = new QTableWidgetItem();
        tableWidget->setItem(12, 0, __qtablewidgetitem41);
        QTableWidgetItem *__qtablewidgetitem42 = new QTableWidgetItem();
        tableWidget->setItem(12, 1, __qtablewidgetitem42);
        QTableWidgetItem *__qtablewidgetitem43 = new QTableWidgetItem();
        tableWidget->setItem(13, 0, __qtablewidgetitem43);
        QTableWidgetItem *__qtablewidgetitem44 = new QTableWidgetItem();
        tableWidget->setItem(13, 1, __qtablewidgetitem44);
        QTableWidgetItem *__qtablewidgetitem45 = new QTableWidgetItem();
        tableWidget->setItem(14, 0, __qtablewidgetitem45);
        QTableWidgetItem *__qtablewidgetitem46 = new QTableWidgetItem();
        tableWidget->setItem(14, 1, __qtablewidgetitem46);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setFocusPolicy(Qt::NoFocus);
        tableWidget->setContextMenuPolicy(Qt::NoContextMenu);
        tableWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        tableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setSelectionMode(QAbstractItemView::NoSelection);
        tableWidget->horizontalHeader()->setVisible(false);
        tableWidget->horizontalHeader()->setDefaultSectionSize(110);
        tableWidget->horizontalHeader()->setStretchLastSection(true);
        tableWidget->verticalHeader()->setVisible(false);

        gridLayout->addWidget(tableWidget, 0, 0, 1, 2);


        retranslateUi(InfoDialog);
        QObject::connect(pushButtonClose, &QPushButton::clicked, InfoDialog, qOverload<>(&QDialog::hide));

        QMetaObject::connectSlotsByName(InfoDialog);
    } // setupUi

    void retranslateUi(QDialog *InfoDialog)
    {
        InfoDialog->setWindowTitle(QCoreApplication::translate("InfoDialog", "Clip Information", nullptr));
        pushButtonClose->setText(QCoreApplication::translate("InfoDialog", "Close", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("InfoDialog", "Category", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("InfoDialog", "Value", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("InfoDialog", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("InfoDialog", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("InfoDialog", "3", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("InfoDialog", "4", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("InfoDialog", "5", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->verticalHeaderItem(5);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("InfoDialog", "6", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->verticalHeaderItem(6);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("InfoDialog", "7", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->verticalHeaderItem(7);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("InfoDialog", "8", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->verticalHeaderItem(8);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("InfoDialog", "9", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->verticalHeaderItem(9);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("InfoDialog", "10", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->verticalHeaderItem(10);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("InfoDialog", "11", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget->verticalHeaderItem(11);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("InfoDialog", "12", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget->verticalHeaderItem(12);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("InfoDialog", "13", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget->verticalHeaderItem(13);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("InfoDialog", "14", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget->verticalHeaderItem(14);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("InfoDialog", "15", nullptr));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget->item(0, 0);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("InfoDialog", "Camera", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget->item(0, 1);
        ___qtablewidgetitem18->setText(QCoreApplication::translate("InfoDialog", "-", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget->item(1, 0);
        ___qtablewidgetitem19->setText(QCoreApplication::translate("InfoDialog", "Lens", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidget->item(1, 1);
        ___qtablewidgetitem20->setText(QCoreApplication::translate("InfoDialog", "-", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = tableWidget->item(2, 0);
        ___qtablewidgetitem21->setText(QCoreApplication::translate("InfoDialog", "Resolution", nullptr));
        QTableWidgetItem *___qtablewidgetitem22 = tableWidget->item(2, 1);
        ___qtablewidgetitem22->setText(QCoreApplication::translate("InfoDialog", "-", nullptr));
        QTableWidgetItem *___qtablewidgetitem23 = tableWidget->item(3, 0);
        ___qtablewidgetitem23->setText(QCoreApplication::translate("InfoDialog", "Duration", nullptr));
        QTableWidgetItem *___qtablewidgetitem24 = tableWidget->item(3, 1);
        ___qtablewidgetitem24->setText(QCoreApplication::translate("InfoDialog", "-", nullptr));
        QTableWidgetItem *___qtablewidgetitem25 = tableWidget->item(4, 0);
        ___qtablewidgetitem25->setText(QCoreApplication::translate("InfoDialog", "Frames", nullptr));
        QTableWidgetItem *___qtablewidgetitem26 = tableWidget->item(4, 1);
        ___qtablewidgetitem26->setText(QCoreApplication::translate("InfoDialog", "-", nullptr));
        QTableWidgetItem *___qtablewidgetitem27 = tableWidget->item(5, 0);
        ___qtablewidgetitem27->setText(QCoreApplication::translate("InfoDialog", "Frame Rate", nullptr));
        QTableWidgetItem *___qtablewidgetitem28 = tableWidget->item(5, 1);
        ___qtablewidgetitem28->setText(QCoreApplication::translate("InfoDialog", "-", nullptr));
        QTableWidgetItem *___qtablewidgetitem29 = tableWidget->item(6, 0);
        ___qtablewidgetitem29->setText(QCoreApplication::translate("InfoDialog", "Focal Length", nullptr));
        QTableWidgetItem *___qtablewidgetitem30 = tableWidget->item(6, 1);
        ___qtablewidgetitem30->setText(QCoreApplication::translate("InfoDialog", "-", nullptr));
        QTableWidgetItem *___qtablewidgetitem31 = tableWidget->item(7, 0);
        ___qtablewidgetitem31->setText(QCoreApplication::translate("InfoDialog", "Shutter", nullptr));
        QTableWidgetItem *___qtablewidgetitem32 = tableWidget->item(7, 1);
        ___qtablewidgetitem32->setText(QCoreApplication::translate("InfoDialog", "-", nullptr));
        QTableWidgetItem *___qtablewidgetitem33 = tableWidget->item(8, 0);
        ___qtablewidgetitem33->setText(QCoreApplication::translate("InfoDialog", "Aperture", nullptr));
        QTableWidgetItem *___qtablewidgetitem34 = tableWidget->item(8, 1);
        ___qtablewidgetitem34->setText(QCoreApplication::translate("InfoDialog", "-", nullptr));
        QTableWidgetItem *___qtablewidgetitem35 = tableWidget->item(9, 0);
        ___qtablewidgetitem35->setText(QCoreApplication::translate("InfoDialog", "ISO", nullptr));
        QTableWidgetItem *___qtablewidgetitem36 = tableWidget->item(9, 1);
        ___qtablewidgetitem36->setText(QCoreApplication::translate("InfoDialog", "-", nullptr));
        QTableWidgetItem *___qtablewidgetitem37 = tableWidget->item(10, 0);
        ___qtablewidgetitem37->setText(QCoreApplication::translate("InfoDialog", "Bit Depth", nullptr));
        QTableWidgetItem *___qtablewidgetitem38 = tableWidget->item(10, 1);
        ___qtablewidgetitem38->setText(QCoreApplication::translate("InfoDialog", "-", nullptr));
        QTableWidgetItem *___qtablewidgetitem39 = tableWidget->item(11, 0);
        ___qtablewidgetitem39->setText(QCoreApplication::translate("InfoDialog", "Levels", nullptr));
        QTableWidgetItem *___qtablewidgetitem40 = tableWidget->item(11, 1);
        ___qtablewidgetitem40->setText(QCoreApplication::translate("InfoDialog", "-", nullptr));
        QTableWidgetItem *___qtablewidgetitem41 = tableWidget->item(12, 0);
        ___qtablewidgetitem41->setText(QCoreApplication::translate("InfoDialog", "Date / Time", nullptr));
        QTableWidgetItem *___qtablewidgetitem42 = tableWidget->item(12, 1);
        ___qtablewidgetitem42->setText(QCoreApplication::translate("InfoDialog", "-", nullptr));
        QTableWidgetItem *___qtablewidgetitem43 = tableWidget->item(13, 0);
        ___qtablewidgetitem43->setText(QCoreApplication::translate("InfoDialog", "Audio", nullptr));
        QTableWidgetItem *___qtablewidgetitem44 = tableWidget->item(13, 1);
        ___qtablewidgetitem44->setText(QCoreApplication::translate("InfoDialog", "-", nullptr));
        QTableWidgetItem *___qtablewidgetitem45 = tableWidget->item(14, 0);
        ___qtablewidgetitem45->setText(QCoreApplication::translate("InfoDialog", "Size / Data Rate", nullptr));
        QTableWidgetItem *___qtablewidgetitem46 = tableWidget->item(14, 1);
        ___qtablewidgetitem46->setText(QCoreApplication::translate("InfoDialog", "-", nullptr));
        tableWidget->setSortingEnabled(__sortingEnabled);

    } // retranslateUi

};

namespace Ui {
    class InfoDialog: public Ui_InfoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFODIALOG_H
