/********************************************************************************
** Form generated from reading UI file 'ExportSettingsDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPORTSETTINGSDIALOG_H
#define UI_EXPORTSETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ExportSettingsDialog
{
public:
    QGridLayout *gridLayout_7;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_5;
    QListWidget *listWidget;
    QHBoxLayout *horizontalLayout;
    QToolButton *toolButtonAddPreset;
    QToolButton *toolButtonDeletePreset;
    QSpacerItem *horizontalSpacer_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout_2;
    QComboBox *comboBoxCodec;
    QComboBox *comboBoxOption;
    QLabel *label;
    QComboBox *comboBoxDebayer;
    QLabel *labelDebayer;
    QLabel *label_Info;
    QGridLayout *gridLayout;
    QSpinBox *spinBoxHeight;
    QSpinBox *spinBoxWidth;
    QCheckBox *checkBoxResize;
    QLabel *label_3;
    QCheckBox *checkBoxHdrBlending;
    QDoubleSpinBox *doubleSpinBoxFps;
    QToolButton *toolButtonLockHeight;
    QCheckBox *checkBoxFpsOverride;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_Smoothing;
    QComboBox *comboBoxSmoothing;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *checkBoxExportAudio;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *groupBoxScripting;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_3;
    QLabel *label_2;
    QComboBox *comboBoxPostExportScript;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonClose;

    void setupUi(QDialog *ExportSettingsDialog)
    {
        if (ExportSettingsDialog->objectName().isEmpty())
            ExportSettingsDialog->setObjectName("ExportSettingsDialog");
        ExportSettingsDialog->resize(569, 469);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ExportSettingsDialog->sizePolicy().hasHeightForWidth());
        ExportSettingsDialog->setSizePolicy(sizePolicy);
        gridLayout_7 = new QGridLayout(ExportSettingsDialog);
        gridLayout_7->setObjectName("gridLayout_7");
        groupBox_2 = new QGroupBox(ExportSettingsDialog);
        groupBox_2->setObjectName("groupBox_2");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy1);
        groupBox_2->setMaximumSize(QSize(170, 16777215));
        gridLayout_5 = new QGridLayout(groupBox_2);
        gridLayout_5->setObjectName("gridLayout_5");
        listWidget = new QListWidget(groupBox_2);
        listWidget->setObjectName("listWidget");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(listWidget->sizePolicy().hasHeightForWidth());
        listWidget->setSizePolicy(sizePolicy2);
        listWidget->setMaximumSize(QSize(16777215, 16777215));
        listWidget->setProperty("showDropIndicator", QVariant(false));
        listWidget->setDefaultDropAction(Qt::IgnoreAction);
        listWidget->setAlternatingRowColors(true);
        listWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        listWidget->setSortingEnabled(true);

        gridLayout_5->addWidget(listWidget, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        toolButtonAddPreset = new QToolButton(groupBox_2);
        toolButtonAddPreset->setObjectName("toolButtonAddPreset");
        toolButtonAddPreset->setMinimumSize(QSize(25, 0));
        toolButtonAddPreset->setMaximumSize(QSize(25, 16777215));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/RetinaIMG/RetinaIMG/plus.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        toolButtonAddPreset->setIcon(icon);

        horizontalLayout->addWidget(toolButtonAddPreset);

        toolButtonDeletePreset = new QToolButton(groupBox_2);
        toolButtonDeletePreset->setObjectName("toolButtonDeletePreset");
        toolButtonDeletePreset->setMinimumSize(QSize(25, 0));
        toolButtonDeletePreset->setMaximumSize(QSize(25, 16777215));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/RetinaIMG/RetinaIMG/minus.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        toolButtonDeletePreset->setIcon(icon1);

        horizontalLayout->addWidget(toolButtonDeletePreset);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        gridLayout_5->addLayout(horizontalLayout, 1, 0, 1, 1);


        gridLayout_7->addWidget(groupBox_2, 0, 0, 2, 1);

        groupBox = new QGroupBox(ExportSettingsDialog);
        groupBox->setObjectName("groupBox");
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName("verticalLayout_2");
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        comboBoxCodec = new QComboBox(groupBox);
        comboBoxCodec->addItem(QString());
        comboBoxCodec->addItem(QString());
        comboBoxCodec->addItem(QString());
        comboBoxCodec->addItem(QString());
        comboBoxCodec->addItem(QString());
        comboBoxCodec->addItem(QString());
        comboBoxCodec->addItem(QString());
        comboBoxCodec->addItem(QString());
        comboBoxCodec->addItem(QString());
        comboBoxCodec->addItem(QString());
        comboBoxCodec->addItem(QString());
        comboBoxCodec->addItem(QString());
        comboBoxCodec->addItem(QString());
        comboBoxCodec->addItem(QString());
        comboBoxCodec->addItem(QString());
        comboBoxCodec->addItem(QString());
        comboBoxCodec->addItem(QString());
        comboBoxCodec->addItem(QString());
        comboBoxCodec->addItem(QString());
        comboBoxCodec->addItem(QString());
        comboBoxCodec->addItem(QString());
        comboBoxCodec->addItem(QString());
        comboBoxCodec->addItem(QString());
        comboBoxCodec->addItem(QString());
        comboBoxCodec->addItem(QString());
        comboBoxCodec->setObjectName("comboBoxCodec");

        gridLayout_2->addWidget(comboBoxCodec, 0, 1, 1, 1);

        comboBoxOption = new QComboBox(groupBox);
        comboBoxOption->setObjectName("comboBoxOption");

        gridLayout_2->addWidget(comboBoxOption, 1, 1, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName("label");
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        comboBoxDebayer = new QComboBox(groupBox);
        comboBoxDebayer->addItem(QString());
        comboBoxDebayer->addItem(QString());
        comboBoxDebayer->addItem(QString());
        comboBoxDebayer->addItem(QString());
        comboBoxDebayer->addItem(QString());
        comboBoxDebayer->setObjectName("comboBoxDebayer");

        gridLayout_2->addWidget(comboBoxDebayer, 2, 1, 1, 1);

        labelDebayer = new QLabel(groupBox);
        labelDebayer->setObjectName("labelDebayer");

        gridLayout_2->addWidget(labelDebayer, 2, 0, 1, 1);

        label_Info = new QLabel(groupBox);
        label_Info->setObjectName("label_Info");
        label_Info->setScaledContents(false);

        gridLayout_2->addWidget(label_Info, 1, 0, 1, 1);


        verticalLayout_2->addLayout(gridLayout_2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        spinBoxHeight = new QSpinBox(groupBox);
        spinBoxHeight->setObjectName("spinBoxHeight");
        spinBoxHeight->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinBoxHeight->setMinimum(100);
        spinBoxHeight->setMaximum(10000);
        spinBoxHeight->setValue(1080);

        gridLayout->addWidget(spinBoxHeight, 0, 3, 1, 1);

        spinBoxWidth = new QSpinBox(groupBox);
        spinBoxWidth->setObjectName("spinBoxWidth");
        spinBoxWidth->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinBoxWidth->setMinimum(100);
        spinBoxWidth->setMaximum(10000);
        spinBoxWidth->setValue(1920);

        gridLayout->addWidget(spinBoxWidth, 0, 1, 1, 1);

        checkBoxResize = new QCheckBox(groupBox);
        checkBoxResize->setObjectName("checkBoxResize");

        gridLayout->addWidget(checkBoxResize, 0, 0, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label_3, 0, 2, 1, 1);

        checkBoxHdrBlending = new QCheckBox(groupBox);
        checkBoxHdrBlending->setObjectName("checkBoxHdrBlending");

        gridLayout->addWidget(checkBoxHdrBlending, 2, 0, 1, 5);

        doubleSpinBoxFps = new QDoubleSpinBox(groupBox);
        doubleSpinBoxFps->setObjectName("doubleSpinBoxFps");
        doubleSpinBoxFps->setEnabled(false);
        doubleSpinBoxFps->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doubleSpinBoxFps->setDecimals(3);
        doubleSpinBoxFps->setMinimum(1.000000000000000);
        doubleSpinBoxFps->setMaximum(60.000000000000000);
        doubleSpinBoxFps->setValue(25.000000000000000);

        gridLayout->addWidget(doubleSpinBoxFps, 1, 2, 1, 3);

        toolButtonLockHeight = new QToolButton(groupBox);
        toolButtonLockHeight->setObjectName("toolButtonLockHeight");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/RetinaIMG/RetinaIMG/Actions-document-decrypt-icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        toolButtonLockHeight->setIcon(icon2);
        toolButtonLockHeight->setCheckable(true);

        gridLayout->addWidget(toolButtonLockHeight, 0, 4, 1, 1);

        checkBoxFpsOverride = new QCheckBox(groupBox);
        checkBoxFpsOverride->setObjectName("checkBoxFpsOverride");

        gridLayout->addWidget(checkBoxFpsOverride, 1, 0, 1, 2);


        verticalLayout_2->addLayout(gridLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_Smoothing = new QLabel(groupBox);
        label_Smoothing->setObjectName("label_Smoothing");
        sizePolicy1.setHeightForWidth(label_Smoothing->sizePolicy().hasHeightForWidth());
        label_Smoothing->setSizePolicy(sizePolicy1);

        horizontalLayout_5->addWidget(label_Smoothing);

        comboBoxSmoothing = new QComboBox(groupBox);
        comboBoxSmoothing->addItem(QString());
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/RetinaIMG/RetinaIMG/Status-dialog-warning-icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        comboBoxSmoothing->addItem(icon3, QString());
        comboBoxSmoothing->addItem(icon3, QString());
        comboBoxSmoothing->addItem(icon3, QString());
        comboBoxSmoothing->addItem(icon3, QString());
        comboBoxSmoothing->setObjectName("comboBoxSmoothing");

        horizontalLayout_5->addWidget(comboBoxSmoothing);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        checkBoxExportAudio = new QCheckBox(groupBox);
        checkBoxExportAudio->setObjectName("checkBoxExportAudio");
        checkBoxExportAudio->setEnabled(true);
        checkBoxExportAudio->setChecked(true);

        horizontalLayout_4->addWidget(checkBoxExportAudio);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_4);


        gridLayout_7->addWidget(groupBox, 0, 1, 1, 1);

        groupBoxScripting = new QGroupBox(ExportSettingsDialog);
        groupBoxScripting->setObjectName("groupBoxScripting");
        gridLayout_4 = new QGridLayout(groupBoxScripting);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName("gridLayout_3");
        label_2 = new QLabel(groupBoxScripting);
        label_2->setObjectName("label_2");
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(label_2, 0, 0, 1, 1);

        comboBoxPostExportScript = new QComboBox(groupBoxScripting);
        comboBoxPostExportScript->addItem(QString());
        comboBoxPostExportScript->setObjectName("comboBoxPostExportScript");

        gridLayout_3->addWidget(comboBoxPostExportScript, 0, 1, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 0, 0, 1, 1);


        gridLayout_7->addWidget(groupBoxScripting, 1, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer = new QSpacerItem(212, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButtonClose = new QPushButton(ExportSettingsDialog);
        pushButtonClose->setObjectName("pushButtonClose");

        horizontalLayout_2->addWidget(pushButtonClose);


        gridLayout_7->addLayout(horizontalLayout_2, 2, 0, 1, 2);

        QWidget::setTabOrder(comboBoxCodec, checkBoxExportAudio);
        QWidget::setTabOrder(checkBoxExportAudio, pushButtonClose);

        retranslateUi(ExportSettingsDialog);
        QObject::connect(checkBoxFpsOverride, &QCheckBox::toggled, doubleSpinBoxFps, &QDoubleSpinBox::setEnabled);

        QMetaObject::connectSlotsByName(ExportSettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *ExportSettingsDialog)
    {
        ExportSettingsDialog->setWindowTitle(QCoreApplication::translate("ExportSettingsDialog", "Export Settings", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("ExportSettingsDialog", "Presets", nullptr));
#if QT_CONFIG(tooltip)
        toolButtonAddPreset->setToolTip(QCoreApplication::translate("ExportSettingsDialog", "Add and save current settings as preset", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButtonAddPreset->setText(QCoreApplication::translate("ExportSettingsDialog", "+", nullptr));
#if QT_CONFIG(tooltip)
        toolButtonDeletePreset->setToolTip(QCoreApplication::translate("ExportSettingsDialog", "Delete selected preset from list", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButtonDeletePreset->setText(QCoreApplication::translate("ExportSettingsDialog", "-", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ExportSettingsDialog", "File Export", nullptr));
        comboBoxCodec->setItemText(0, QCoreApplication::translate("ExportSettingsDialog", "Apple ProRes 422 Proxy", nullptr));
        comboBoxCodec->setItemText(1, QCoreApplication::translate("ExportSettingsDialog", "Apple ProRes 422 LT", nullptr));
        comboBoxCodec->setItemText(2, QCoreApplication::translate("ExportSettingsDialog", "Apple ProRes 422", nullptr));
        comboBoxCodec->setItemText(3, QCoreApplication::translate("ExportSettingsDialog", "Apple ProRes 422 HQ", nullptr));
        comboBoxCodec->setItemText(4, QCoreApplication::translate("ExportSettingsDialog", "Apple ProRes 4444", nullptr));
        comboBoxCodec->setItemText(5, QCoreApplication::translate("ExportSettingsDialog", "Uncompressed AVI", nullptr));
        comboBoxCodec->setItemText(6, QCoreApplication::translate("ExportSettingsDialog", "CinemaDNG Uncompressed", nullptr));
        comboBoxCodec->setItemText(7, QCoreApplication::translate("ExportSettingsDialog", "CinemaDNG Lossless", nullptr));
        comboBoxCodec->setItemText(8, QCoreApplication::translate("ExportSettingsDialog", "CinemaDNG Fast Pass", nullptr));
        comboBoxCodec->setItemText(9, QCoreApplication::translate("ExportSettingsDialog", "H.264", nullptr));
        comboBoxCodec->setItemText(10, QCoreApplication::translate("ExportSettingsDialog", "H.265 8bit 4:2:0", nullptr));
        comboBoxCodec->setItemText(11, QCoreApplication::translate("ExportSettingsDialog", "H.265 10bit 4:2:0", nullptr));
        comboBoxCodec->setItemText(12, QCoreApplication::translate("ExportSettingsDialog", "H.265 12bit 4:4:4", nullptr));
        comboBoxCodec->setItemText(13, QCoreApplication::translate("ExportSettingsDialog", "TIFF", nullptr));
        comboBoxCodec->setItemText(14, QCoreApplication::translate("ExportSettingsDialog", "PNG Sequence", nullptr));
        comboBoxCodec->setItemText(15, QCoreApplication::translate("ExportSettingsDialog", "JPEG2000", nullptr));
        comboBoxCodec->setItemText(16, QCoreApplication::translate("ExportSettingsDialog", "Motion JPEG", nullptr));
        comboBoxCodec->setItemText(17, QCoreApplication::translate("ExportSettingsDialog", "Huff YUV (FFVH)", nullptr));
        comboBoxCodec->setItemText(18, QCoreApplication::translate("ExportSettingsDialog", "MLV", nullptr));
        comboBoxCodec->setItemText(19, QCoreApplication::translate("ExportSettingsDialog", "DNxHD", nullptr));
        comboBoxCodec->setItemText(20, QCoreApplication::translate("ExportSettingsDialog", "DNxHR", nullptr));
        comboBoxCodec->setItemText(21, QCoreApplication::translate("ExportSettingsDialog", "GoPro Cineform 10bit 4:2:2", nullptr));
        comboBoxCodec->setItemText(22, QCoreApplication::translate("ExportSettingsDialog", "GoPro Cineform 12bit 4:4:4", nullptr));
        comboBoxCodec->setItemText(23, QCoreApplication::translate("ExportSettingsDialog", "VP9", nullptr));
        comboBoxCodec->setItemText(24, QCoreApplication::translate("ExportSettingsDialog", "WAV (Audio Only)", nullptr));

        label->setText(QCoreApplication::translate("ExportSettingsDialog", "Codec", nullptr));
        comboBoxDebayer->setItemText(0, QCoreApplication::translate("ExportSettingsDialog", "Force Bilinear", nullptr));
        comboBoxDebayer->setItemText(1, QCoreApplication::translate("ExportSettingsDialog", "Force AMaZE", nullptr));
        comboBoxDebayer->setItemText(2, QCoreApplication::translate("ExportSettingsDialog", "Force LMMSE", nullptr));
        comboBoxDebayer->setItemText(3, QCoreApplication::translate("ExportSettingsDialog", "Force IGV", nullptr));
        comboBoxDebayer->setItemText(4, QCoreApplication::translate("ExportSettingsDialog", "Receipt configuration", nullptr));

        labelDebayer->setText(QCoreApplication::translate("ExportSettingsDialog", "Debayer", nullptr));
        label_Info->setText(QString());
        checkBoxResize->setText(QCoreApplication::translate("ExportSettingsDialog", "Resize", nullptr));
        label_3->setText(QCoreApplication::translate("ExportSettingsDialog", "x", nullptr));
#if QT_CONFIG(tooltip)
        checkBoxHdrBlending->setToolTip(QCoreApplication::translate("ExportSettingsDialog", "Requires HDR clips!", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBoxHdrBlending->setText(QCoreApplication::translate("ExportSettingsDialog", "HDR blending", nullptr));
        doubleSpinBoxFps->setSuffix(QCoreApplication::translate("ExportSettingsDialog", " fps", nullptr));
#if QT_CONFIG(tooltip)
        toolButtonLockHeight->setToolTip(QCoreApplication::translate("ExportSettingsDialog", "Lock apect ratio - calculate height automatically", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButtonLockHeight->setText(QCoreApplication::translate("ExportSettingsDialog", "...", nullptr));
        checkBoxFpsOverride->setText(QCoreApplication::translate("ExportSettingsDialog", "Framerate override", nullptr));
        label_Smoothing->setText(QCoreApplication::translate("ExportSettingsDialog", "Smooth aliasing", nullptr));
        comboBoxSmoothing->setItemText(0, QCoreApplication::translate("ExportSettingsDialog", "Off", nullptr));
        comboBoxSmoothing->setItemText(1, QCoreApplication::translate("ExportSettingsDialog", "1 pass", nullptr));
        comboBoxSmoothing->setItemText(2, QCoreApplication::translate("ExportSettingsDialog", "3 pass", nullptr));
        comboBoxSmoothing->setItemText(3, QCoreApplication::translate("ExportSettingsDialog", "3 pass + unsharp mask", nullptr));
        comboBoxSmoothing->setItemText(4, QCoreApplication::translate("ExportSettingsDialog", "last resort", nullptr));

#if QT_CONFIG(tooltip)
        comboBoxSmoothing->setToolTip(QCoreApplication::translate("ExportSettingsDialog", "Use this option to smooth aliasing / moiree artifacts.\n"
"This option is very slow and runs when export progressbar is at 100%!\n"
"It won't bring good results in shots with much movement and much detail.", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBoxExportAudio->setText(QCoreApplication::translate("ExportSettingsDialog", "Export audio", nullptr));
        groupBoxScripting->setTitle(QCoreApplication::translate("ExportSettingsDialog", "Scripting", nullptr));
        label_2->setText(QCoreApplication::translate("ExportSettingsDialog", "Post Export", nullptr));
        comboBoxPostExportScript->setItemText(0, QCoreApplication::translate("ExportSettingsDialog", "None", nullptr));

        pushButtonClose->setText(QCoreApplication::translate("ExportSettingsDialog", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ExportSettingsDialog: public Ui_ExportSettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPORTSETTINGSDIALOG_H
