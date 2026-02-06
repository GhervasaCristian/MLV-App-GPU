/********************************************************************************
** Form generated from reading UI file 'EditSliderValueDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITSLIDERVALUEDIALOG_H
#define UI_EDITSLIDERVALUEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>

QT_BEGIN_NAMESPACE

class Ui_EditSliderValueDialog
{
public:
    QGridLayout *gridLayout;
    QDoubleSpinBox *doubleSpinBox;

    void setupUi(QDialog *EditSliderValueDialog)
    {
        if (EditSliderValueDialog->objectName().isEmpty())
            EditSliderValueDialog->setObjectName("EditSliderValueDialog");
        EditSliderValueDialog->resize(81, 24);
        gridLayout = new QGridLayout(EditSliderValueDialog);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        doubleSpinBox = new QDoubleSpinBox(EditSliderValueDialog);
        doubleSpinBox->setObjectName("doubleSpinBox");

        gridLayout->addWidget(doubleSpinBox, 0, 0, 1, 1);


        retranslateUi(EditSliderValueDialog);
        QObject::connect(doubleSpinBox, &QDoubleSpinBox::editingFinished, EditSliderValueDialog, qOverload<>(&QDialog::accept));

        QMetaObject::connectSlotsByName(EditSliderValueDialog);
    } // setupUi

    void retranslateUi(QDialog *EditSliderValueDialog)
    {
        EditSliderValueDialog->setWindowTitle(QString());
    } // retranslateUi

};

namespace Ui {
    class EditSliderValueDialog: public Ui_EditSliderValueDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITSLIDERVALUEDIALOG_H
