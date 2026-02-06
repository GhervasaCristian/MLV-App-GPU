/********************************************************************************
** Form generated from reading UI file 'UserManualDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERMANUALDIALOG_H
#define UI_USERMANUALDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_UserManualDialog
{
public:
    QGridLayout *gridLayout;
    QTextBrowser *textBrowser;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonClose;

    void setupUi(QDialog *UserManualDialog)
    {
        if (UserManualDialog->objectName().isEmpty())
            UserManualDialog->setObjectName("UserManualDialog");
        UserManualDialog->resize(496, 386);
        gridLayout = new QGridLayout(UserManualDialog);
        gridLayout->setObjectName("gridLayout");
        textBrowser = new QTextBrowser(UserManualDialog);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse);
        textBrowser->setOpenLinks(false);

        gridLayout->addWidget(textBrowser, 0, 0, 1, 2);

        horizontalSpacer = new QSpacerItem(390, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        pushButtonClose = new QPushButton(UserManualDialog);
        pushButtonClose->setObjectName("pushButtonClose");

        gridLayout->addWidget(pushButtonClose, 1, 1, 1, 1);


        retranslateUi(UserManualDialog);
        QObject::connect(pushButtonClose, &QPushButton::clicked, UserManualDialog, qOverload<>(&QDialog::close));

        QMetaObject::connectSlotsByName(UserManualDialog);
    } // setupUi

    void retranslateUi(QDialog *UserManualDialog)
    {
        UserManualDialog->setWindowTitle(QCoreApplication::translate("UserManualDialog", "Help", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("UserManualDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI';\"><br /></p></body></html>", nullptr));
        pushButtonClose->setText(QCoreApplication::translate("UserManualDialog", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserManualDialog: public Ui_UserManualDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERMANUALDIALOG_H
