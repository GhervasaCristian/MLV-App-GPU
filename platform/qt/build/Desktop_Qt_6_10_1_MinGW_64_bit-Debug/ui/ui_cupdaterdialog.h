/********************************************************************************
** Form generated from reading UI file 'cupdaterdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUPDATERDIALOG_H
#define UI_CUPDATERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CUpdaterDialog
{
public:
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *lblOperationInProgress;
    QProgressBar *progressBar;
    QLabel *lblPercentage;
    QSpacerItem *verticalSpacer;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QTextEdit *changeLogViewer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *CUpdaterDialog)
    {
        if (CUpdaterDialog->objectName().isEmpty())
            CUpdaterDialog->setObjectName("CUpdaterDialog");
        CUpdaterDialog->setWindowModality(Qt::NonModal);
        CUpdaterDialog->resize(564, 331);
        CUpdaterDialog->setModal(true);
        verticalLayout = new QVBoxLayout(CUpdaterDialog);
        verticalLayout->setObjectName("verticalLayout");
        stackedWidget = new QStackedWidget(CUpdaterDialog);
        stackedWidget->setObjectName("stackedWidget");
        page = new QWidget();
        page->setObjectName("page");
        verticalLayout_2 = new QVBoxLayout(page);
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        lblOperationInProgress = new QLabel(page);
        lblOperationInProgress->setObjectName("lblOperationInProgress");

        horizontalLayout->addWidget(lblOperationInProgress);

        progressBar = new QProgressBar(page);
        progressBar->setObjectName("progressBar");
        progressBar->setValue(0);
        progressBar->setTextVisible(false);

        horizontalLayout->addWidget(progressBar);

        lblPercentage = new QLabel(page);
        lblPercentage->setObjectName("lblPercentage");
        lblPercentage->setText(QString::fromUtf8("0.0 %"));

        horizontalLayout->addWidget(lblPercentage);

        horizontalLayout->setStretch(1, 1);

        verticalLayout_2->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 234, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        verticalLayout_3 = new QVBoxLayout(page_2);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(3, 3, 3, 3);
        label = new QLabel(page_2);
        label->setObjectName("label");

        verticalLayout_3->addWidget(label);

        changeLogViewer = new QTextEdit(page_2);
        changeLogViewer->setObjectName("changeLogViewer");
        changeLogViewer->setUndoRedoEnabled(false);
        changeLogViewer->setReadOnly(true);

        verticalLayout_3->addWidget(changeLogViewer);

        buttonBox = new QDialogButtonBox(page_2);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Ok);

        verticalLayout_3->addWidget(buttonBox);

        stackedWidget->addWidget(page_2);

        verticalLayout->addWidget(stackedWidget);


        retranslateUi(CUpdaterDialog);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(CUpdaterDialog);
    } // setupUi

    void retranslateUi(QDialog *CUpdaterDialog)
    {
        CUpdaterDialog->setWindowTitle(QCoreApplication::translate("CUpdaterDialog", "MLV App - Updates", nullptr));
        lblOperationInProgress->setText(QCoreApplication::translate("CUpdaterDialog", "Searching for updates...", nullptr));
        label->setText(QCoreApplication::translate("CUpdaterDialog", "A new version is available!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CUpdaterDialog: public Ui_CUpdaterDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUPDATERDIALOG_H
