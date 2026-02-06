/********************************************************************************
** Form generated from reading UI file 'TranscodeDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSCODEDIALOG_H
#define UI_TRANSCODEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>

QT_BEGIN_NAMESPACE

class Ui_TranscodeDialog
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonAddPics;
    QPushButton *pushButtonAddSequence;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *comboBoxBitDepth;
    QComboBox *comboBoxFps;
    QCheckBox *checkBoxCompress;
    QSpacerItem *horizontalSpacer_3;
    QTreeWidget *treeWidget;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButtonTranscode;

    void setupUi(QDialog *TranscodeDialog)
    {
        if (TranscodeDialog->objectName().isEmpty())
            TranscodeDialog->setObjectName("TranscodeDialog");
        TranscodeDialog->resize(480, 360);
        gridLayout = new QGridLayout(TranscodeDialog);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButtonAddPics = new QPushButton(TranscodeDialog);
        pushButtonAddPics->setObjectName("pushButtonAddPics");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/RetinaIMG/RetinaIMG/Images-icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButtonAddPics->setIcon(icon);
        pushButtonAddPics->setIconSize(QSize(24, 24));

        horizontalLayout->addWidget(pushButtonAddPics);

        pushButtonAddSequence = new QPushButton(TranscodeDialog);
        pushButtonAddSequence->setObjectName("pushButtonAddSequence");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/RetinaIMG/RetinaIMG/Pic-Folder-Open-icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButtonAddSequence->setIcon(icon1);
        pushButtonAddSequence->setIconSize(QSize(24, 24));

        horizontalLayout->addWidget(pushButtonAddSequence);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        comboBoxBitDepth = new QComboBox(TranscodeDialog);
        comboBoxBitDepth->addItem(QString());
        comboBoxBitDepth->addItem(QString());
        comboBoxBitDepth->addItem(QString());
        comboBoxBitDepth->addItem(QString());
        comboBoxBitDepth->addItem(QString());
        comboBoxBitDepth->setObjectName("comboBoxBitDepth");
        comboBoxBitDepth->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_3->addWidget(comboBoxBitDepth);

        comboBoxFps = new QComboBox(TranscodeDialog);
        comboBoxFps->addItem(QString());
        comboBoxFps->addItem(QString());
        comboBoxFps->addItem(QString());
        comboBoxFps->addItem(QString());
        comboBoxFps->addItem(QString());
        comboBoxFps->addItem(QString());
        comboBoxFps->addItem(QString());
        comboBoxFps->addItem(QString());
        comboBoxFps->addItem(QString());
        comboBoxFps->setObjectName("comboBoxFps");

        horizontalLayout_3->addWidget(comboBoxFps);

        checkBoxCompress = new QCheckBox(TranscodeDialog);
        checkBoxCompress->setObjectName("checkBoxCompress");
        checkBoxCompress->setEnabled(false);

        horizontalLayout_3->addWidget(checkBoxCompress);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        gridLayout->addLayout(horizontalLayout_3, 1, 0, 1, 1);

        treeWidget = new QTreeWidget(TranscodeDialog);
        treeWidget->setObjectName("treeWidget");
        treeWidget->header()->setDefaultSectionSize(200);

        gridLayout->addWidget(treeWidget, 2, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        pushButtonTranscode = new QPushButton(TranscodeDialog);
        pushButtonTranscode->setObjectName("pushButtonTranscode");

        horizontalLayout_2->addWidget(pushButtonTranscode);


        gridLayout->addLayout(horizontalLayout_2, 3, 0, 1, 1);

        QWidget::setTabOrder(pushButtonAddPics, pushButtonAddSequence);
        QWidget::setTabOrder(pushButtonAddSequence, treeWidget);
        QWidget::setTabOrder(treeWidget, pushButtonTranscode);

        retranslateUi(TranscodeDialog);

        QMetaObject::connectSlotsByName(TranscodeDialog);
    } // setupUi

    void retranslateUi(QDialog *TranscodeDialog)
    {
        TranscodeDialog->setWindowTitle(QCoreApplication::translate("TranscodeDialog", "Transcode and Import RAW2MLV", nullptr));
#if QT_CONFIG(tooltip)
        pushButtonAddPics->setToolTip(QCoreApplication::translate("TranscodeDialog", "Add Picture(s)", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButtonAddPics->setText(QString());
#if QT_CONFIG(tooltip)
        pushButtonAddSequence->setToolTip(QCoreApplication::translate("TranscodeDialog", "Add Sequence Folder", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButtonAddSequence->setText(QString());
        comboBoxBitDepth->setItemText(0, QCoreApplication::translate("TranscodeDialog", "Original Bitdepth", nullptr));
        comboBoxBitDepth->setItemText(1, QCoreApplication::translate("TranscodeDialog", "10 bit", nullptr));
        comboBoxBitDepth->setItemText(2, QCoreApplication::translate("TranscodeDialog", "12 bit", nullptr));
        comboBoxBitDepth->setItemText(3, QCoreApplication::translate("TranscodeDialog", "14 bit", nullptr));
        comboBoxBitDepth->setItemText(4, QCoreApplication::translate("TranscodeDialog", "16 bit", nullptr));

#if QT_CONFIG(tooltip)
        comboBoxBitDepth->setToolTip(QCoreApplication::translate("TranscodeDialog", "Use this bitdepth", nullptr));
#endif // QT_CONFIG(tooltip)
        comboBoxBitDepth->setCurrentText(QCoreApplication::translate("TranscodeDialog", "Original Bitdepth", nullptr));
        comboBoxFps->setItemText(0, QCoreApplication::translate("TranscodeDialog", "23.976 fps", nullptr));
        comboBoxFps->setItemText(1, QCoreApplication::translate("TranscodeDialog", "24 fps", nullptr));
        comboBoxFps->setItemText(2, QCoreApplication::translate("TranscodeDialog", "25 fps", nullptr));
        comboBoxFps->setItemText(3, QCoreApplication::translate("TranscodeDialog", "29.97 fps", nullptr));
        comboBoxFps->setItemText(4, QCoreApplication::translate("TranscodeDialog", "30 fps", nullptr));
        comboBoxFps->setItemText(5, QCoreApplication::translate("TranscodeDialog", "48 fps", nullptr));
        comboBoxFps->setItemText(6, QCoreApplication::translate("TranscodeDialog", "50 fps", nullptr));
        comboBoxFps->setItemText(7, QCoreApplication::translate("TranscodeDialog", "59.94 fps", nullptr));
        comboBoxFps->setItemText(8, QCoreApplication::translate("TranscodeDialog", "60 fps", nullptr));

#if QT_CONFIG(tooltip)
        checkBoxCompress->setToolTip(QCoreApplication::translate("TranscodeDialog", "Lossless Compression", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBoxCompress->setText(QCoreApplication::translate("TranscodeDialog", "Compress", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("TranscodeDialog", "Target", nullptr));
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("TranscodeDialog", "Full Path", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("TranscodeDialog", "Source", nullptr));
        pushButtonTranscode->setText(QCoreApplication::translate("TranscodeDialog", "Transcode and Import", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TranscodeDialog: public Ui_TranscodeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSCODEDIALOG_H
