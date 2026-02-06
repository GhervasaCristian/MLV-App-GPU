/********************************************************************************
** Form generated from reading UI file 'ReceiptCopyMaskDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECEIPTCOPYMASKDIALOG_H
#define UI_RECEIPTCOPYMASKDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ReceiptCopyMaskDialog
{
public:
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QCheckBox *checkBoxRawCorrection;
    QCheckBox *checkBoxDetails;
    QVBoxLayout *verticalLayout;
    QCheckBox *checkBoxSharpen;
    QCheckBox *checkBoxChromaBlur;
    QCheckBox *checkBoxDenoise;
    QCheckBox *checkBoxGrain;
    QCheckBox *checkBoxToning;
    QCheckBox *checkBoxFilter;
    QCheckBox *checkBoxHslCurves;
    QCheckBox *checkBoxGradient;
    QCheckBox *checkBoxTransformation;
    QCheckBox *checkBoxDebayer;
    QCheckBox *checkBoxProcessing;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *checkBoxRawCorrectEnable;
    QCheckBox *checkBoxDarkFrameSubtraction;
    QCheckBox *checkBoxFoxusDots;
    QCheckBox *checkBoxBadPixels;
    QCheckBox *checkBoxChromaSmooth;
    QCheckBox *checkBoxVerticalStripes;
    QCheckBox *checkBoxDualIso;
    QCheckBox *checkBoxPatternNoise;
    QCheckBox *checkBoxRawBlackLevel;
    QCheckBox *checkBoxRawWhiteLevel;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *checkBoxExposure;
    QCheckBox *checkBoxContrast;
    QCheckBox *checkBoxPivot;
    QCheckBox *checkBoxWb;
    QCheckBox *checkBoxClarity;
    QCheckBox *checkBoxVibrance;
    QCheckBox *checkBoxSaturation;
    QCheckBox *checkBoxCurve;
    QCheckBox *checkBoxHighlights;
    QCheckBox *checkBoxShadows;
    QCheckBox *checkBoxGradationCurve;
    QCheckBox *checkBoxHighlightReconstruction;
    QCheckBox *checkBoxCameraMatrix;
    QCheckBox *checkBoxProfile;
    QSpacerItem *verticalSpacer_2;
    QCheckBox *checkBoxVignette;
    QCheckBox *checkBoxLut;
    QSpacerItem *verticalSpacer_4;
    QPushButton *pushButtonAll;
    QPushButton *pushButtonNone;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonOk;

    void setupUi(QDialog *ReceiptCopyMaskDialog)
    {
        if (ReceiptCopyMaskDialog->objectName().isEmpty())
            ReceiptCopyMaskDialog->setObjectName("ReceiptCopyMaskDialog");
        ReceiptCopyMaskDialog->resize(712, 406);
        gridLayout_3 = new QGridLayout(ReceiptCopyMaskDialog);
        gridLayout_3->setObjectName("gridLayout_3");
        groupBox = new QGroupBox(ReceiptCopyMaskDialog);
        groupBox->setObjectName("groupBox");
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        gridLayout->setVerticalSpacing(6);
        checkBoxRawCorrection = new QCheckBox(groupBox);
        checkBoxRawCorrection->setObjectName("checkBoxRawCorrection");
        checkBoxRawCorrection->setTristate(false);

        gridLayout->addWidget(checkBoxRawCorrection, 0, 0, 1, 2);

        checkBoxDetails = new QCheckBox(groupBox);
        checkBoxDetails->setObjectName("checkBoxDetails");
        checkBoxDetails->setTristate(false);

        gridLayout->addWidget(checkBoxDetails, 1, 4, 1, 2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        checkBoxSharpen = new QCheckBox(groupBox);
        checkBoxSharpen->setObjectName("checkBoxSharpen");

        verticalLayout->addWidget(checkBoxSharpen);

        checkBoxChromaBlur = new QCheckBox(groupBox);
        checkBoxChromaBlur->setObjectName("checkBoxChromaBlur");

        verticalLayout->addWidget(checkBoxChromaBlur);

        checkBoxDenoise = new QCheckBox(groupBox);
        checkBoxDenoise->setObjectName("checkBoxDenoise");

        verticalLayout->addWidget(checkBoxDenoise);

        checkBoxGrain = new QCheckBox(groupBox);
        checkBoxGrain->setObjectName("checkBoxGrain");

        verticalLayout->addWidget(checkBoxGrain);


        gridLayout->addLayout(verticalLayout, 2, 5, 2, 1);

        checkBoxToning = new QCheckBox(groupBox);
        checkBoxToning->setObjectName("checkBoxToning");

        gridLayout->addWidget(checkBoxToning, 5, 4, 1, 2);

        checkBoxFilter = new QCheckBox(groupBox);
        checkBoxFilter->setObjectName("checkBoxFilter");

        gridLayout->addWidget(checkBoxFilter, 8, 4, 1, 2);

        checkBoxHslCurves = new QCheckBox(groupBox);
        checkBoxHslCurves->setObjectName("checkBoxHslCurves");

        gridLayout->addWidget(checkBoxHslCurves, 4, 4, 1, 2);

        checkBoxGradient = new QCheckBox(groupBox);
        checkBoxGradient->setObjectName("checkBoxGradient");

        gridLayout->addWidget(checkBoxGradient, 6, 4, 1, 2);

        checkBoxTransformation = new QCheckBox(groupBox);
        checkBoxTransformation->setObjectName("checkBoxTransformation");

        gridLayout->addWidget(checkBoxTransformation, 10, 4, 1, 2);

        checkBoxDebayer = new QCheckBox(groupBox);
        checkBoxDebayer->setObjectName("checkBoxDebayer");

        gridLayout->addWidget(checkBoxDebayer, 0, 4, 1, 2);

        checkBoxProcessing = new QCheckBox(groupBox);
        checkBoxProcessing->setObjectName("checkBoxProcessing");
        checkBoxProcessing->setChecked(false);
        checkBoxProcessing->setTristate(false);

        gridLayout->addWidget(checkBoxProcessing, 0, 2, 1, 2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setSizeConstraint(QLayout::SetMinimumSize);
        checkBoxRawCorrectEnable = new QCheckBox(groupBox);
        checkBoxRawCorrectEnable->setObjectName("checkBoxRawCorrectEnable");

        verticalLayout_3->addWidget(checkBoxRawCorrectEnable);

        checkBoxDarkFrameSubtraction = new QCheckBox(groupBox);
        checkBoxDarkFrameSubtraction->setObjectName("checkBoxDarkFrameSubtraction");

        verticalLayout_3->addWidget(checkBoxDarkFrameSubtraction);

        checkBoxFoxusDots = new QCheckBox(groupBox);
        checkBoxFoxusDots->setObjectName("checkBoxFoxusDots");

        verticalLayout_3->addWidget(checkBoxFoxusDots);

        checkBoxBadPixels = new QCheckBox(groupBox);
        checkBoxBadPixels->setObjectName("checkBoxBadPixels");

        verticalLayout_3->addWidget(checkBoxBadPixels);

        checkBoxChromaSmooth = new QCheckBox(groupBox);
        checkBoxChromaSmooth->setObjectName("checkBoxChromaSmooth");

        verticalLayout_3->addWidget(checkBoxChromaSmooth);

        checkBoxVerticalStripes = new QCheckBox(groupBox);
        checkBoxVerticalStripes->setObjectName("checkBoxVerticalStripes");

        verticalLayout_3->addWidget(checkBoxVerticalStripes);

        checkBoxDualIso = new QCheckBox(groupBox);
        checkBoxDualIso->setObjectName("checkBoxDualIso");

        verticalLayout_3->addWidget(checkBoxDualIso);

        checkBoxPatternNoise = new QCheckBox(groupBox);
        checkBoxPatternNoise->setObjectName("checkBoxPatternNoise");

        verticalLayout_3->addWidget(checkBoxPatternNoise);

        checkBoxRawBlackLevel = new QCheckBox(groupBox);
        checkBoxRawBlackLevel->setObjectName("checkBoxRawBlackLevel");
        checkBoxRawBlackLevel->setStyleSheet(QString::fromUtf8("QCheckBox{\n"
"color: rgb(255, 154, 50)\n"
"}"));

        verticalLayout_3->addWidget(checkBoxRawBlackLevel);

        checkBoxRawWhiteLevel = new QCheckBox(groupBox);
        checkBoxRawWhiteLevel->setObjectName("checkBoxRawWhiteLevel");
        checkBoxRawWhiteLevel->setStyleSheet(QString::fromUtf8("QCheckBox{\n"
"color: rgb(255, 154, 50)\n"
"}"));

        verticalLayout_3->addWidget(checkBoxRawWhiteLevel);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        gridLayout->addLayout(verticalLayout_3, 1, 1, 11, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setSizeConstraint(QLayout::SetMinimumSize);
        checkBoxExposure = new QCheckBox(groupBox);
        checkBoxExposure->setObjectName("checkBoxExposure");

        verticalLayout_2->addWidget(checkBoxExposure);

        checkBoxContrast = new QCheckBox(groupBox);
        checkBoxContrast->setObjectName("checkBoxContrast");

        verticalLayout_2->addWidget(checkBoxContrast);

        checkBoxPivot = new QCheckBox(groupBox);
        checkBoxPivot->setObjectName("checkBoxPivot");

        verticalLayout_2->addWidget(checkBoxPivot);

        checkBoxWb = new QCheckBox(groupBox);
        checkBoxWb->setObjectName("checkBoxWb");

        verticalLayout_2->addWidget(checkBoxWb);

        checkBoxClarity = new QCheckBox(groupBox);
        checkBoxClarity->setObjectName("checkBoxClarity");

        verticalLayout_2->addWidget(checkBoxClarity);

        checkBoxVibrance = new QCheckBox(groupBox);
        checkBoxVibrance->setObjectName("checkBoxVibrance");

        verticalLayout_2->addWidget(checkBoxVibrance);

        checkBoxSaturation = new QCheckBox(groupBox);
        checkBoxSaturation->setObjectName("checkBoxSaturation");

        verticalLayout_2->addWidget(checkBoxSaturation);

        checkBoxCurve = new QCheckBox(groupBox);
        checkBoxCurve->setObjectName("checkBoxCurve");

        verticalLayout_2->addWidget(checkBoxCurve);

        checkBoxHighlights = new QCheckBox(groupBox);
        checkBoxHighlights->setObjectName("checkBoxHighlights");

        verticalLayout_2->addWidget(checkBoxHighlights);

        checkBoxShadows = new QCheckBox(groupBox);
        checkBoxShadows->setObjectName("checkBoxShadows");

        verticalLayout_2->addWidget(checkBoxShadows);

        checkBoxGradationCurve = new QCheckBox(groupBox);
        checkBoxGradationCurve->setObjectName("checkBoxGradationCurve");

        verticalLayout_2->addWidget(checkBoxGradationCurve);

        checkBoxHighlightReconstruction = new QCheckBox(groupBox);
        checkBoxHighlightReconstruction->setObjectName("checkBoxHighlightReconstruction");

        verticalLayout_2->addWidget(checkBoxHighlightReconstruction);

        checkBoxCameraMatrix = new QCheckBox(groupBox);
        checkBoxCameraMatrix->setObjectName("checkBoxCameraMatrix");

        verticalLayout_2->addWidget(checkBoxCameraMatrix);

        checkBoxProfile = new QCheckBox(groupBox);
        checkBoxProfile->setObjectName("checkBoxProfile");

        verticalLayout_2->addWidget(checkBoxProfile);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        gridLayout->addLayout(verticalLayout_2, 1, 3, 11, 1);

        checkBoxVignette = new QCheckBox(groupBox);
        checkBoxVignette->setObjectName("checkBoxVignette");

        gridLayout->addWidget(checkBoxVignette, 9, 4, 1, 2);

        checkBoxLut = new QCheckBox(groupBox);
        checkBoxLut->setObjectName("checkBoxLut");

        gridLayout->addWidget(checkBoxLut, 7, 4, 1, 2);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 11, 4, 1, 2);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        gridLayout_3->addWidget(groupBox, 0, 0, 1, 4);

        pushButtonAll = new QPushButton(ReceiptCopyMaskDialog);
        pushButtonAll->setObjectName("pushButtonAll");
        pushButtonAll->setMinimumSize(QSize(100, 0));

        gridLayout_3->addWidget(pushButtonAll, 1, 0, 1, 1);

        pushButtonNone = new QPushButton(ReceiptCopyMaskDialog);
        pushButtonNone->setObjectName("pushButtonNone");
        pushButtonNone->setMinimumSize(QSize(100, 0));

        gridLayout_3->addWidget(pushButtonNone, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(379, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 1, 2, 1, 1);

        pushButtonOk = new QPushButton(ReceiptCopyMaskDialog);
        pushButtonOk->setObjectName("pushButtonOk");
        pushButtonOk->setMinimumSize(QSize(100, 0));

        gridLayout_3->addWidget(pushButtonOk, 1, 3, 1, 1);

        QWidget::setTabOrder(pushButtonOk, pushButtonAll);
        QWidget::setTabOrder(pushButtonAll, pushButtonNone);
        QWidget::setTabOrder(pushButtonNone, checkBoxDarkFrameSubtraction);
        QWidget::setTabOrder(checkBoxDarkFrameSubtraction, checkBoxFoxusDots);
        QWidget::setTabOrder(checkBoxFoxusDots, checkBoxBadPixels);
        QWidget::setTabOrder(checkBoxBadPixels, checkBoxChromaSmooth);
        QWidget::setTabOrder(checkBoxChromaSmooth, checkBoxVerticalStripes);
        QWidget::setTabOrder(checkBoxVerticalStripes, checkBoxDualIso);
        QWidget::setTabOrder(checkBoxDualIso, checkBoxPatternNoise);
        QWidget::setTabOrder(checkBoxPatternNoise, checkBoxRawBlackLevel);
        QWidget::setTabOrder(checkBoxRawBlackLevel, checkBoxRawWhiteLevel);
        QWidget::setTabOrder(checkBoxRawWhiteLevel, checkBoxExposure);
        QWidget::setTabOrder(checkBoxExposure, checkBoxContrast);
        QWidget::setTabOrder(checkBoxContrast, checkBoxWb);
        QWidget::setTabOrder(checkBoxWb, checkBoxClarity);
        QWidget::setTabOrder(checkBoxClarity, checkBoxVibrance);
        QWidget::setTabOrder(checkBoxVibrance, checkBoxSaturation);
        QWidget::setTabOrder(checkBoxSaturation, checkBoxCurve);
        QWidget::setTabOrder(checkBoxCurve, checkBoxHighlights);
        QWidget::setTabOrder(checkBoxHighlights, checkBoxShadows);
        QWidget::setTabOrder(checkBoxShadows, checkBoxHighlightReconstruction);
        QWidget::setTabOrder(checkBoxHighlightReconstruction, checkBoxProfile);
        QWidget::setTabOrder(checkBoxProfile, checkBoxDetails);
        QWidget::setTabOrder(checkBoxDetails, checkBoxSharpen);
        QWidget::setTabOrder(checkBoxSharpen, checkBoxChromaBlur);

        retranslateUi(ReceiptCopyMaskDialog);
        QObject::connect(pushButtonOk, &QPushButton::clicked, ReceiptCopyMaskDialog, qOverload<>(&QDialog::close));

        QMetaObject::connectSlotsByName(ReceiptCopyMaskDialog);
    } // setupUi

    void retranslateUi(QDialog *ReceiptCopyMaskDialog)
    {
        ReceiptCopyMaskDialog->setWindowTitle(QCoreApplication::translate("ReceiptCopyMaskDialog", "Receipt Mask Setup", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ReceiptCopyMaskDialog", "Receipt Mask", nullptr));
        checkBoxRawCorrection->setText(QCoreApplication::translate("ReceiptCopyMaskDialog", "RAW Correction", nullptr));
        checkBoxDetails->setText(QCoreApplication::translate("ReceiptCopyMaskDialog", "Details", nullptr));
        checkBoxSharpen->setText(QCoreApplication::translate("ReceiptCopyMaskDialog", "Sharpen", nullptr));
        checkBoxChromaBlur->setText(QCoreApplication::translate("ReceiptCopyMaskDialog", "Chroma Blur", nullptr));
        checkBoxDenoise->setText(QCoreApplication::translate("ReceiptCopyMaskDialog", "Denoise", nullptr));
        checkBoxGrain->setText(QCoreApplication::translate("ReceiptCopyMaskDialog", "Grain", nullptr));
        checkBoxToning->setText(QCoreApplication::translate("ReceiptCopyMaskDialog", "Toning", nullptr));
        checkBoxFilter->setText(QCoreApplication::translate("ReceiptCopyMaskDialog", "Filter", nullptr));
#if QT_CONFIG(tooltip)
        checkBoxHslCurves->setToolTip(QCoreApplication::translate("ReceiptCopyMaskDialog", "Hue, Saturation, Luminance Curves", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBoxHslCurves->setText(QCoreApplication::translate("ReceiptCopyMaskDialog", "HSL Curves", nullptr));
        checkBoxGradient->setText(QCoreApplication::translate("ReceiptCopyMaskDialog", "Linear Gradient", nullptr));
#if QT_CONFIG(tooltip)
        checkBoxTransformation->setToolTip(QCoreApplication::translate("ReceiptCopyMaskDialog", "All parameters in group \"Transformation\"", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBoxTransformation->setText(QCoreApplication::translate("ReceiptCopyMaskDialog", "Transformation", nullptr));
        checkBoxDebayer->setText(QCoreApplication::translate("ReceiptCopyMaskDialog", "Debayer Algorithm", nullptr));
        checkBoxProcessing->setText(QCoreApplication::translate("ReceiptCopyMaskDialog", "Processing", nullptr));
        checkBoxRawCorrectEnable->setText(QCoreApplication::translate("ReceiptCopyMaskDialog", "Enable", nullptr));
        checkBoxDarkFrameSubtraction->setText(QCoreApplication::translate("ReceiptCopyMaskDialog", "Dark Frame Subtraction", nullptr));
        checkBoxFoxusDots->setText(QCoreApplication::translate("ReceiptCopyMaskDialog", "Fix Focus Dots", nullptr));
        checkBoxBadPixels->setText(QCoreApplication::translate("ReceiptCopyMaskDialog", "Fix Bad Pixles", nullptr));
        checkBoxChromaSmooth->setText(QCoreApplication::translate("ReceiptCopyMaskDialog", "Chroma Smooth", nullptr));
        checkBoxVerticalStripes->setText(QCoreApplication::translate("ReceiptCopyMaskDialog", "Vertical Stripes", nullptr));
        checkBoxDualIso->setText(QCoreApplication::translate("ReceiptCopyMaskDialog", "Dual ISO", nullptr));
        checkBoxPatternNoise->setText(QCoreApplication::translate("ReceiptCopyMaskDialog", "Pattern Noise", nullptr));
#if QT_CONFIG(tooltip)
        checkBoxRawBlackLevel->setToolTip(QCoreApplication::translate("ReceiptCopyMaskDialog", "Copying the RAW levels might screw up clips with different bit rate.", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBoxRawBlackLevel->setText(QCoreApplication::translate("ReceiptCopyMaskDialog", "RAW Black Level", nullptr));
#if QT_CONFIG(tooltip)
        checkBoxRawWhiteLevel->setToolTip(QCoreApplication::translate("ReceiptCopyMaskDialog", "Copying the RAW levels might screw up clips with different bit rate.", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBoxRawWhiteLevel->setText(QCoreApplication::translate("ReceiptCopyMaskDialog", "RAW White Level", nullptr));
        checkBoxExposure->setText(QCoreApplication::translate("ReceiptCopyMaskDialog", "Exposure", nullptr));
        checkBoxContrast->setText(QCoreApplication::translate("ReceiptCopyMaskDialog", "Contrast", nullptr));
        checkBoxPivot->setText(QCoreApplication::translate("ReceiptCopyMaskDialog", "Pivot", nullptr));
        checkBoxWb->setText(QCoreApplication::translate("ReceiptCopyMaskDialog", "White Balance", nullptr));
        checkBoxClarity->setText(QCoreApplication::translate("ReceiptCopyMaskDialog", "Clarity", nullptr));
        checkBoxVibrance->setText(QCoreApplication::translate("ReceiptCopyMaskDialog", "Vibrance", nullptr));
        checkBoxSaturation->setText(QCoreApplication::translate("ReceiptCopyMaskDialog", "Saturation", nullptr));
#if QT_CONFIG(tooltip)
        checkBoxCurve->setToolTip(QCoreApplication::translate("ReceiptCopyMaskDialog", "Light/Dark Strength/Range, Lighten", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBoxCurve->setText(QCoreApplication::translate("ReceiptCopyMaskDialog", "Curve", nullptr));
        checkBoxHighlights->setText(QCoreApplication::translate("ReceiptCopyMaskDialog", "Highlights", nullptr));
        checkBoxShadows->setText(QCoreApplication::translate("ReceiptCopyMaskDialog", "Shadows", nullptr));
        checkBoxGradationCurve->setText(QCoreApplication::translate("ReceiptCopyMaskDialog", "Gradation Curve", nullptr));
        checkBoxHighlightReconstruction->setText(QCoreApplication::translate("ReceiptCopyMaskDialog", "Highlight Reconstruction", nullptr));
        checkBoxCameraMatrix->setText(QCoreApplication::translate("ReceiptCopyMaskDialog", "Camera Matrix", nullptr));
        checkBoxProfile->setText(QCoreApplication::translate("ReceiptCopyMaskDialog", "Profile", nullptr));
#if QT_CONFIG(tooltip)
        checkBoxVignette->setToolTip(QCoreApplication::translate("ReceiptCopyMaskDialog", "All parameters in group \"Lens Correction\"", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBoxVignette->setText(QCoreApplication::translate("ReceiptCopyMaskDialog", "Lens Correction", nullptr));
        checkBoxLut->setText(QCoreApplication::translate("ReceiptCopyMaskDialog", "LUT", nullptr));
        pushButtonAll->setText(QCoreApplication::translate("ReceiptCopyMaskDialog", "All", nullptr));
        pushButtonNone->setText(QCoreApplication::translate("ReceiptCopyMaskDialog", "None", nullptr));
        pushButtonOk->setText(QCoreApplication::translate("ReceiptCopyMaskDialog", "Ok", nullptr));
#if QT_CONFIG(shortcut)
        pushButtonOk->setShortcut(QCoreApplication::translate("ReceiptCopyMaskDialog", "Return", nullptr));
#endif // QT_CONFIG(shortcut)
    } // retranslateUi

};

namespace Ui {
    class ReceiptCopyMaskDialog: public Ui_ReceiptCopyMaskDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECEIPTCOPYMASKDIALOG_H
