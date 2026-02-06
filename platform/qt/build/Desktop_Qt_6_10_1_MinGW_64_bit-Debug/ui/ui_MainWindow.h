/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDial>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ColorToolButton.h"
#include "ColorWheel.h"
#include "Curves.h"
#include "DoubleClickLabel.h"
#include "GraphicsZoomView.h"
#include "HueVsDiagram.h"
#include "JumpSlider.h"
#include "NoScrollComboBox.h"
#include "NoScrollSlider.h"
#include "NoScrollSpinBox.h"
#include "ResizeLabel.h"
#include "ScopesLabel.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen;
    QAction *actionCopyRecept;
    QAction *actionPasteReceipt;
    QAction *actionQuit;
    QAction *actionAbout;
    QAction *actionExport;
    QAction *actionClip_Information;
    QAction *actionPlay;
    QAction *actionGoto_First_Frame;
    QAction *actionLoop;
    QAction *actionDropFrameMode;
    QAction *actionZoomFit;
    QAction *actionZoom100;
    QAction *actionShowHistogram;
    QAction *actionShowWaveFormMonitor;
    QAction *actionAlwaysUseAMaZE;
    QAction *actionExportSettings;
    QAction *actionShowSessionArea;
    QAction *actionShowEditArea;
    QAction *actionResetReceipt;
    QAction *actionNewSession;
    QAction *actionOpenSession;
    QAction *actionSaveSession;
    QAction *actionFullscreen;
    QAction *actionCaching;
    QAction *actionShowAudioTrack;
    QAction *actionMinimize;
    QAction *actionMaximize;
    QAction *actionAudioOutput;
    QAction *actionShowZebras;
    QAction *actionNextFrame;
    QAction *actionPreviousFrame;
    QAction *actionShowParade;
    QAction *actionWhiteBalancePicker;
    QAction *actionExportCurrentFrame;
    QAction *actionAboutQt;
    QAction *actionExportReceipt;
    QAction *actionImportReceipt;
    QAction *actionPreviewDisabled;
    QAction *actionPreviewList;
    QAction *actionPreviewPicture;
    QAction *actionUseBilinear;
    QAction *actionCreateMappFiles;
    QAction *actionNext_Clip;
    QAction *actionPrevious_Clip;
    QAction *actionSelectAllClips;
    QAction *actionDeleteSelectedClips;
    QAction *actionShowVectorScope;
    QAction *actionTimecodePositionRight;
    QAction *actionTimecodePositionMiddle;
    QAction *actionSaveAsSession;
    QAction *actionToggleTimecodeDisplay;
    QAction *actionCheckForUpdates;
    QAction *actionAutoCheckForUpdates;
    QAction *actionUseNoneDebayer;
    QAction *actionUseSimpleDebayer;
    QAction *actionUseLmmseDebayer;
    QAction *actionUseIgvDebayer;
    QAction *actionFcpxmlImportAssistant;
    QAction *actionHelp;
    QAction *actionFcpxmlSelectionAssistant;
    QAction *actionPlaybackPosition;
    QAction *actionPreviewPictureBottom;
    QAction *actionShowInFinder;
    QAction *actionOpenWithExternalApplication;
    QAction *actionSelectExternalApplication;
    QAction *actionAskForSavingOnQuit;
    QAction *actionDarktheme;
    QAction *actionDarkThemeStandard;
    QAction *actionDarkThemeModern;
    QAction *actionCreateAllMappFilesNow;
    QAction *actionBetterResizer;
    QAction *actionShowInstalledFocusPixelMaps;
    QAction *actionUseAhdDebayer;
    QAction *actionDontSwitchDebayerForPlayback;
    QAction *actionTranscodeAndImport;
    QAction *actionShowInstalledBadPixelMaps;
    QAction *actionUseDefaultReceipt;
    QAction *actionMarkRed;
    QAction *actionMarkYellow;
    QAction *actionMarkGreen;
    QAction *actionUnmark;
    QAction *actionShowRedClips;
    QAction *actionShowGreenClips;
    QAction *actionShowYellowClips;
    QAction *actionShowUnmarkedClips;
    QAction *actionPreviewTableModeBottom;
    QAction *actionUseRcdDebayer;
    QAction *actionUseDcbDebayer;
    QAction *actionViewerBackgroundColor;
    QAction *actionSaveSessionMetadata;
    QAction *actionFastOpen;
    QAction *actionNotificationExportFinished;
    QWidget *centralWidget;
    QGridLayout *gridLayoutMain;
    GraphicsZoomView *graphicsView;
    JumpSlider *horizontalSliderPosition;
    ResizeLabel *labelAudioTrack;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuHelp;
    QMenu *menuPlayback;
    QMenu *menuDemosaicForPlayback;
    QMenu *menuView;
    QMenu *menuSessionListPreview;
    QMenu *menuPlayback_Elements;
    QMenu *menuTheme;
    QMenu *menuWindow;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QDockWidget *dockWidgetEdit;
    QWidget *dockWidgetContents;
    QGridLayout *gridLayout_37;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_32;
    ScopesLabel *labelScope;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayoutScrollArea;
    QGroupBox *groupBoxRawCorrection;
    QGridLayout *gridLayout_15;
    QFrame *frameRawCorrection;
    QGridLayout *gridLayout_67;
    QCheckBox *checkBoxRawFixEnable;
    QFrame *line_10;
    QLabel *labelDarkFrameSubtraction;
    QHBoxLayout *horizontalLayout_24;
    ColorToolButton *toolButtonDarkFrameSubtractionFile;
    QFrame *toolButtonDarkFrameSubtraction;
    QHBoxLayout *horizontalLayout_23;
    ColorToolButton *toolButtonDarkFrameSubtractionOff;
    ColorToolButton *toolButtonDarkFrameSubtractionExt;
    ColorToolButton *toolButtonDarkFrameSubtractionInt;
    QLineEdit *lineEditDarkFrameFile;
    QFrame *line_7;
    QLabel *FocusPixelsLabel;
    QFrame *toolButtonFocusDots;
    QHBoxLayout *horizontalLayout_5;
    ColorToolButton *toolButtonFocusDotsOff;
    ColorToolButton *toolButtonFocusDotsOn;
    ColorToolButton *toolButtonFocusDotsCropRec;
    QHBoxLayout *horizontalLayout_12;
    QLabel *FocusPixelsInterpolationMethodLabel;
    QFrame *toolButtonFocusDotInterpolation;
    QHBoxLayout *horizontalLayout_6;
    ColorToolButton *toolButtonFocusDotMethod1;
    ColorToolButton *toolButtonFocusDotMethod2;
    ColorToolButton *toolButtonFocusDotMethod3;
    QFrame *line_3;
    QHBoxLayout *horizontalLayout_45;
    QLabel *BadPixelsLabel;
    QSpacerItem *horizontalSpacer_62;
    QFrame *toolButtonBadPixels;
    QHBoxLayout *horizontalLayout_7;
    ColorToolButton *toolButtonBadPixelsOff;
    ColorToolButton *toolButtonBadPixelsOn;
    ColorToolButton *toolButtonBadPixelsForce;
    ColorToolButton *toolButtonBadPixelsMap;
    QHBoxLayout *horizontalLayout_21;
    QLabel *FocusPixelsInterpolationMethodLabel_2;
    QFrame *toolButtonFocusDotInterpolation_2;
    QHBoxLayout *horizontalLayout_22;
    ColorToolButton *toolButtonBadPixelsSearchMethodNormal;
    ColorToolButton *toolButtonBadPixelsSearchMethodAggressive;
    ColorToolButton *toolButtonBadPixelsSearchMethodEdit;
    ColorToolButton *toolButtonBadPixelsCrosshairEnable;
    QToolButton *toolButtonDeleteBpm;
    QHBoxLayout *horizontalLayout_13;
    QLabel *BadPixelsInterpolationMethodLabel;
    QFrame *toolButtonBadPixelsInterpolation;
    QHBoxLayout *horizontalLayout_8;
    ColorToolButton *toolButtonBadPixelsMethod1;
    ColorToolButton *toolButtonBadPixelsMethod2;
    ColorToolButton *toolButtonBadPixelsMethod3;
    QFrame *line_4;
    QLabel *ChromaSmoothLabel;
    QFrame *toolButtonChroma;
    QHBoxLayout *horizontalLayout_9;
    ColorToolButton *toolButtonChromaOff;
    ColorToolButton *toolButtonChroma2x2;
    ColorToolButton *toolButtonChroma3x3;
    ColorToolButton *toolButtonChroma5x5;
    QFrame *line_8;
    QLabel *VerticalStripesLabel;
    QFrame *toolButtonVerticalStripes;
    QHBoxLayout *horizontalLayout_11;
    ColorToolButton *toolButtonVerticalStripesOff;
    ColorToolButton *toolButtonVerticalStripesNormal;
    ColorToolButton *toolButtonVerticalStripesForce;
    QFrame *line_9;
    QHBoxLayout *horizontalLayout_33;
    QLabel *DualISOLabel;
    QSpacerItem *horizontalSpacer_32;
    ColorToolButton *toolButtonDualIsoForce;
    QFrame *toolButtonDualIso;
    QHBoxLayout *horizontalLayout;
    ColorToolButton *toolButtonDualIsoOff;
    ColorToolButton *toolButtonDualIsoOn;
    ColorToolButton *toolButtonDualIsoPreview;
    QHBoxLayout *horizontalLayout_14;
    QLabel *DualISOInterpolationLabel;
    QFrame *toolButtonDualIsoInterpolation;
    QHBoxLayout *horizontalLayout_2;
    ColorToolButton *toolButtonDualIsoInterpolationAmaze;
    ColorToolButton *toolButtonDualIsoInterpolationMean;
    QHBoxLayout *horizontalLayout_15;
    QLabel *DualISOAliasMapLabel;
    QFrame *toolButtonDualIsoAliasMap;
    QHBoxLayout *horizontalLayout_3;
    ColorToolButton *toolButtonDualIsoAliasMapOff;
    ColorToolButton *toolButtonDualIsoAliasMapOn;
    QHBoxLayout *horizontalLayout_16;
    QLabel *DualISOFullresBlendingLabel;
    QFrame *toolButtonDualIsoFullresBlending;
    QHBoxLayout *horizontalLayout_4;
    ColorToolButton *toolButtonDualIsoFullresBlendingOff;
    ColorToolButton *toolButtonDualIsoFullresBlendingOn;
    QFrame *line_6;
    QHBoxLayout *horizontalLayout_18;
    QLabel *DeflickerTargetLabel;
    QSpinBox *spinBoxDeflickerTarget;
    QFrame *line_11;
    QLabel *PatternNoiseLabel;
    QFrame *toolButtonPatternNoise;
    QHBoxLayout *horizontalLayout_10;
    ColorToolButton *toolButtonPatternNoiseOff;
    ColorToolButton *toolButtonPatternNoiseOn;
    QFrame *line_16;
    QGridLayout *gridLayout_32;
    QLabel *RawBlackLabel;
    QSpacerItem *horizontalSpacer_27;
    DoubleClickLabel *label_RawBlackVal;
    NoScrollSlider *horizontalSliderRawBlack;
    QToolButton *toolButtonRawBlackAutoCorrect;
    QGridLayout *gridLayout_31;
    QLabel *RawWhiteLabel;
    QSpacerItem *horizontalSpacer_26;
    DoubleClickLabel *label_RawWhiteVal;
    NoScrollSlider *horizontalSliderRawWhite;
    QGroupBox *groupBoxCutInOut;
    QGridLayout *gridLayout_19;
    QFrame *frameCutInOut;
    QGridLayout *gridLayout_18;
    QToolButton *toolButtonCutIn;
    NoScrollSpinBox *spinBoxCutIn;
    QToolButton *toolButtonCutInDelete;
    QToolButton *toolButtonCutOut;
    NoScrollSpinBox *spinBoxCutOut;
    QToolButton *toolButtonCutOutDelete;
    QGroupBox *groupBoxDebayer;
    QGridLayout *gridLayout_39;
    QFrame *frameDebayer;
    QGridLayout *gridLayout_40;
    NoScrollComboBox *comboBoxDebayer;
    QGroupBox *groupBoxProcessing;
    QGridLayout *gridLayout_14;
    QFrame *frameProcessing;
    QVBoxLayout *verticalLayout_3;
    QGridLayout *gridLayout_3;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    DoubleClickLabel *label_ExposureVal;
    NoScrollSlider *horizontalSliderExposure;
    QGridLayout *gridLayout_33;
    QLabel *label_contrast;
    QSpacerItem *horizontalSpacer_28;
    DoubleClickLabel *label_ContrastVal;
    NoScrollSlider *horizontalSliderContrast;
    QGridLayout *gridLayout_68;
    QLabel *label_pivot;
    QSpacerItem *horizontalSpacer_58;
    DoubleClickLabel *label_PivotVal;
    NoScrollSlider *horizontalSliderPivot;
    QFrame *line_17;
    QGridLayout *gridLayout_4;
    QToolButton *toolButtonWb;
    NoScrollSlider *horizontalSliderTemperature;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    DoubleClickLabel *label_TemperatureVal;
    QToolButton *toolButtonWbMode;
    QGridLayout *gridLayout_5;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_3;
    DoubleClickLabel *label_TintVal;
    NoScrollSlider *horizontalSliderTint;
    QFrame *line_18;
    QGridLayout *gridLayout_35;
    QLabel *label_clarity;
    QSpacerItem *horizontalSpacer_30;
    DoubleClickLabel *label_ClarityVal;
    NoScrollSlider *horizontalSliderClarity;
    QGridLayout *gridLayout_34;
    QLabel *label_vibrance;
    QSpacerItem *horizontalSpacer_29;
    DoubleClickLabel *label_VibranceVal;
    NoScrollSlider *horizontalSliderVibrance;
    QGridLayout *gridLayout_6;
    QLabel *label_saturation;
    QSpacerItem *horizontalSpacer_4;
    DoubleClickLabel *label_SaturationVal;
    NoScrollSlider *horizontalSliderSaturation;
    QFrame *line_2;
    QGridLayout *gridLayout_7;
    QLabel *label_ds;
    QSpacerItem *horizontalSpacer_5;
    DoubleClickLabel *label_DsVal;
    NoScrollSlider *horizontalSliderDS;
    QGridLayout *gridLayout_8;
    QLabel *label_dr;
    QSpacerItem *horizontalSpacer_6;
    DoubleClickLabel *label_DrVal;
    NoScrollSlider *horizontalSliderDR;
    QGridLayout *gridLayout_9;
    QLabel *label_ls;
    QSpacerItem *horizontalSpacer_7;
    DoubleClickLabel *label_LsVal;
    NoScrollSlider *horizontalSliderLS;
    QGridLayout *gridLayout_10;
    QLabel *label_lr;
    QSpacerItem *horizontalSpacer_8;
    DoubleClickLabel *label_LrVal;
    NoScrollSlider *horizontalSliderLR;
    QGridLayout *gridLayout_11;
    QLabel *label_lighten;
    QSpacerItem *horizontalSpacer_9;
    DoubleClickLabel *label_LightenVal;
    NoScrollSlider *horizontalSliderLighten;
    QFrame *line_ShadowsHighlights;
    QCheckBox *checkBoxHighLightReconstruction;
    QGridLayout *gridLayout_Highlights;
    QLabel *label_highlights;
    NoScrollSlider *horizontalSliderHighlights;
    QSpacerItem *horizontalSpacer_16;
    DoubleClickLabel *label_HighlightsVal;
    QGridLayout *gridLayout_Shadow;
    DoubleClickLabel *label_ShadowsVal;
    QSpacerItem *horizontalSpacer_17;
    QLabel *label_shadows;
    NoScrollSlider *horizontalSliderShadows;
    QFrame *line;
    QHBoxLayout *horizontalLayout_37;
    QLabel *label_gradationcurves;
    QSpacerItem *horizontalSpacer_40;
    QToolButton *toolButtonGCurvesResetOne;
    QToolButton *toolButtonGCurvesReset;
    QHBoxLayout *horizontalLayout_35;
    Curves *labelCurves;
    QFrame *toolButtonGCurves;
    QHBoxLayout *horizontalLayout_34;
    ColorToolButton *toolButtonGCurvesY;
    ColorToolButton *toolButtonGCurvesR;
    ColorToolButton *toolButtonGCurvesG;
    ColorToolButton *toolButtonGCurvesB;
    QSpacerItem *horizontalSpacer_35;
    QGroupBox *groupBoxProfiles;
    QGridLayout *gridLayout_63;
    QFrame *frameProfiles;
    QGridLayout *gridLayout_62;
    QLabel *label_TransferFunction;
    QCheckBox *checkBoxCreativeAdjustments;
    QLabel *label_TonemappingFunction;
    QLabel *label_Gamut;
    NoScrollComboBox *comboBoxProfile;
    NoScrollComboBox *comboBoxProcessingGamut;
    QGridLayout *gridLayout_64;
    QLabel *label_GammaText;
    QSpacerItem *horizontalSpacer_Gamma;
    DoubleClickLabel *label_GammaVal;
    NoScrollSlider *horizontalSliderGamma;
    QFrame *line_27;
    QLabel *label_39;
    NoScrollComboBox *comboBoxUseCameraMatrix;
    QCheckBox *checkBoxExrMode;
    QLineEdit *lineEditTransferFunction;
    NoScrollComboBox *comboBoxTonemapFct;
    QFrame *line_20;
    QLabel *label_ProcessingProfile;
    QCheckBox *checkBoxAgX;
    QGroupBox *groupBoxDetails;
    QGridLayout *gridLayout;
    QFrame *frameDetails;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *checkBoxChromaSeparation;
    QGridLayout *gridLayout_12;
    QLabel *label_10;
    QSpacerItem *horizontalSpacer_10;
    DoubleClickLabel *label_Sharpen;
    NoScrollSlider *horizontalSliderSharpen;
    QGridLayout *gridLayout_61;
    QLabel *label_ShMaskingText;
    QSpacerItem *horizontalSpacer_57;
    DoubleClickLabel *label_ShMasking;
    NoScrollSlider *horizontalSliderShMasking;
    QGridLayout *gridLayout_13;
    DoubleClickLabel *label_ChromaBlur;
    NoScrollSlider *horizontalSliderChromaBlur;
    QSpacerItem *horizontalSpacer_11;
    QLabel *label_ChromaBlurText;
    QFrame *line_19;
    QHBoxLayout *horizontalLayout_31;
    QLabel *label_32;
    NoScrollComboBox *comboBoxDenoiseWindow;
    QGridLayout *gridLayout_36;
    QLabel *label_31;
    QSpacerItem *horizontalSpacer_31;
    DoubleClickLabel *label_DenoiseStrength;
    NoScrollSlider *horizontalSliderDenoiseStrength;
    QFrame *line_21;
    QGridLayout *gridLayout_50;
    QSpacerItem *horizontalSpacer_46;
    DoubleClickLabel *label_RbfDenoiseLuma;
    QLabel *label_35;
    NoScrollSlider *horizontalSliderRbfDenoiseLuma;
    QGridLayout *gridLayout_49;
    QLabel *label_34;
    DoubleClickLabel *label_RbfDenoiseChroma;
    NoScrollSlider *horizontalSliderRbfDenoiseChroma;
    QSpacerItem *horizontalSpacer_44;
    QGridLayout *gridLayout_51;
    DoubleClickLabel *label_RbfDenoiseRange;
    QLabel *label_36;
    NoScrollSlider *horizontalSliderRbfDenoiseRange;
    QSpacerItem *horizontalSpacer_47;
    QFrame *line_24;
    QGridLayout *gridLayout_52;
    QLabel *label_37;
    DoubleClickLabel *label_GrainStrength;
    NoScrollSlider *horizontalSliderGrainStrength;
    QSpacerItem *horizontalSpacer_48;
    QGridLayout *gridLayout_69;
    QLabel *label_40;
    DoubleClickLabel *label_GrainLumaWeight;
    NoScrollSlider *horizontalSliderGrainLumaWeight;
    QSpacerItem *horizontalSpacer_63;
    QGroupBox *groupBoxHsl;
    QGridLayout *gridLayout_42;
    QFrame *frameHsl;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_41;
    QLabel *label_hueVsHue;
    QSpacerItem *horizontalSpacer_45;
    QToolButton *toolButtonHueVsHueResetDefaultPoints;
    QToolButton *toolButtonHueVsHueReset;
    QHBoxLayout *horizontalLayout_42;
    HueVsDiagram *labelHueVsHue;
    QFrame *line_23;
    QHBoxLayout *horizontalLayout_38;
    QLabel *label_hueVsSat;
    QSpacerItem *horizontalSpacer_41;
    QToolButton *toolButtonHueVsSatResetDefaultPoints;
    QToolButton *toolButtonHueVsSatReset;
    QHBoxLayout *horizontalLayout_36;
    HueVsDiagram *labelHueVsSat;
    QFrame *line_22;
    QHBoxLayout *horizontalLayout_39;
    QLabel *label_hueVsLuma;
    QSpacerItem *horizontalSpacer_42;
    QToolButton *toolButtonHueVsLumaResetDefaultPoints;
    QToolButton *toolButtonHueVsLumaReset;
    QHBoxLayout *horizontalLayout_40;
    HueVsDiagram *labelHueVsLuma;
    QFrame *line_28;
    QHBoxLayout *horizontalLayout_43;
    QLabel *label_lumaVsSat;
    QSpacerItem *horizontalSpacer_59;
    QToolButton *toolButtonLumaVsSatReset;
    QHBoxLayout *horizontalLayout_44;
    HueVsDiagram *labelLumaVsSat;
    QGroupBox *groupBoxToning;
    QGridLayout *gridLayout_43;
    QFrame *frameToning;
    QVBoxLayout *verticalLayout_10;
    QGridLayout *gridLayout_44;
    QLabel *label_ToningColor;
    DoubleClickLabel *label_ToneVal;
    NoScrollSlider *horizontalSliderTone;
    QSpacerItem *horizontalSpacer_36;
    QLabel *label_ToneText;
    QSpacerItem *horizontalSpacer_38;
    QGridLayout *gridLayout_45;
    QLabel *label_ToningStrengthText;
    QSpacerItem *horizontalSpacer_37;
    DoubleClickLabel *label_ToningStrengthVal;
    NoScrollSlider *horizontalSliderToningStrength;
    QGroupBox *groupBoxColorWheels;
    QGridLayout *gridLayout_30;
    QFrame *frameColorWheels;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_9;
    QHBoxLayout *horizontalLayout_28;
    QSpacerItem *horizontalSpacer_18;
    ColorWheel *labelColorWheelMaster;
    QSpacerItem *horizontalSpacer_19;
    QGridLayout *gridLayout_26;
    QLabel *label_16;
    QLabel *label_15;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *labelYmaster;
    QLabel *labelRmaster_2;
    QLabel *labelGmaster;
    QLabel *labelBmaster;
    QFrame *line_13;
    QLabel *label_13;
    QHBoxLayout *horizontalLayout_27;
    QSpacerItem *horizontalSpacer_21;
    ColorWheel *labelColorWheelShadows;
    QSpacerItem *horizontalSpacer_20;
    QGridLayout *gridLayout_27;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *labelYshadows;
    QLabel *labelRshadows;
    QLabel *labelGshadows;
    QLabel *labelBshadows;
    QFrame *line_14;
    QLabel *label_14;
    QHBoxLayout *horizontalLayout_26;
    QSpacerItem *horizontalSpacer_23;
    ColorWheel *labelColorWheelMidtones;
    QSpacerItem *horizontalSpacer_22;
    QGridLayout *gridLayout_28;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *label_26;
    QLabel *labelYmids;
    QLabel *labelRmids;
    QLabel *labelGmids;
    QLabel *labelBmids;
    QFrame *line_15;
    QLabel *label_12;
    QHBoxLayout *horizontalLayout_25;
    QSpacerItem *horizontalSpacer_25;
    ColorWheel *labelColorWheelHighlights;
    QSpacerItem *horizontalSpacer_24;
    QGridLayout *gridLayout_29;
    QLabel *label_27;
    QLabel *label_28;
    QLabel *label_29;
    QLabel *label_30;
    QLabel *labelYhighlights;
    QLabel *labelRhighlights;
    QLabel *labelGhighlights;
    QLabel *labelBhighlights;
    QGroupBox *groupBoxLinearGradient;
    QGridLayout *gridLayout_17;
    QFrame *frameGradient;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_20;
    QCheckBox *checkBoxGradientEnable;
    QSpacerItem *horizontalSpacer_14;
    QToolButton *toolButtonGradientPaint;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_4;
    NoScrollSpinBox *spinBoxGradientX;
    QLabel *label_5;
    NoScrollSpinBox *spinBoxGradientY;
    QHBoxLayout *horizontalLayout_19;
    QDial *dialGradientAngle;
    DoubleClickLabel *labelGradientAngle;
    QSpacerItem *horizontalSpacer_13;
    QLabel *label_6;
    NoScrollSpinBox *spinBoxGradientLength;
    QFrame *line_5;
    QGridLayout *gridLayout_16;
    QLabel *label_11;
    QSpacerItem *horizontalSpacer_12;
    DoubleClickLabel *label_ExposureGradient;
    NoScrollSlider *horizontalSliderExposureGradient;
    QGridLayout *gridLayout_38;
    QLabel *label_contrast_gradient;
    QSpacerItem *horizontalSpacer_33;
    DoubleClickLabel *label_ContrastGradientVal;
    NoScrollSlider *horizontalSliderContrastGradient;
    QGroupBox *groupBoxLut;
    QGridLayout *gridLayout_24;
    QFrame *frameLut;
    QGridLayout *gridLayout_25;
    QGridLayout *gridLayout_41;
    QLabel *label_LutStrengthText;
    QSpacerItem *horizontalSpacer_34;
    DoubleClickLabel *label_LutStrengthVal;
    NoScrollSlider *horizontalSliderLutStrength;
    QCheckBox *checkBoxLutEnable;
    QHBoxLayout *horizontalLayout_30;
    QToolButton *toolButtonLoadLut;
    QLineEdit *lineEditLutName;
    QHBoxLayout *horizontalLayout_46;
    QToolButton *toolButtonPrevLut;
    QToolButton *toolButtonNextLut;
    QGroupBox *groupBoxFilter;
    QGridLayout *gridLayout_23;
    QFrame *frameFilter;
    QVBoxLayout *verticalLayout_8;
    QCheckBox *checkBoxFilterEnable;
    NoScrollComboBox *comboBoxFilterName;
    QGridLayout *gridLayout_22;
    QLabel *label_FilterStrengthText;
    QSpacerItem *horizontalSpacer_15;
    DoubleClickLabel *label_FilterStrengthVal;
    NoScrollSlider *horizontalSliderFilterStrength;
    QGroupBox *groupBoxVignette;
    QGridLayout *gridLayout_46;
    QFrame *frameVignette;
    QVBoxLayout *verticalLayout_11;
    QGridLayout *gridLayout_47;
    QLabel *label_VignetteStrengthText;
    QSpacerItem *horizontalSpacer_39;
    DoubleClickLabel *label_VignetteStrengthVal;
    NoScrollSlider *horizontalSliderVignetteStrength;
    QGridLayout *gridLayout_48;
    QSpacerItem *horizontalSpacer_43;
    NoScrollSlider *horizontalSliderVignetteRadius;
    DoubleClickLabel *label_VignetteRadiusVal;
    QLabel *label_VignetteRadiusText;
    QGridLayout *gridLayout_60;
    QSpacerItem *horizontalSpacer_56;
    NoScrollSlider *horizontalSliderVignetteShape;
    DoubleClickLabel *label_VignetteShapeVal;
    QLabel *label_VignetteShapeText;
    QFrame *line_26;
    QGridLayout *gridLayout_59;
    QSpacerItem *horizontalSpacer_55;
    DoubleClickLabel *label_CaRedVal;
    NoScrollSlider *horizontalSliderCaRed;
    QLabel *label_CaRedText;
    QGridLayout *gridLayout_58;
    QLabel *label_CaBlueText;
    QSpacerItem *horizontalSpacer_54;
    DoubleClickLabel *label_CaBlueVal;
    NoScrollSlider *horizontalSliderCaBlue;
    QFrame *line_29;
    QGridLayout *gridLayout_65;
    QLabel *label_CaDesaturateText;
    QSpacerItem *horizontalSpacer_60;
    DoubleClickLabel *label_CaDesaturateVal;
    NoScrollSlider *horizontalSliderCaDesaturate;
    QGridLayout *gridLayout_66;
    QLabel *label_CaRadiusText;
    QSpacerItem *horizontalSpacer_61;
    DoubleClickLabel *label_CaRadiusVal;
    NoScrollSlider *horizontalSliderCaRadius;
    QGroupBox *groupBoxTransformation;
    QGridLayout *gridLayout_20;
    QFrame *frameAspectRatio;
    QVBoxLayout *verticalLayout_7;
    QGridLayout *gridLayout_21;
    QGridLayout *gridLayout_54;
    NoScrollSlider *horizontalSliderVidstabShakiness;
    QSpacerItem *horizontalSpacer_50;
    QLabel *label_VidstabShakinessText;
    DoubleClickLabel *label_VidstabShakinessVal;
    QLabel *label_7;
    QLabel *label_33;
    QGridLayout *gridLayout_53;
    DoubleClickLabel *label_VidstabStepsizeVal;
    NoScrollSlider *horizontalSliderVidstabStepsize;
    QSpacerItem *horizontalSpacer_49;
    QLabel *label_VidstabStepsizeText;
    NoScrollComboBox *comboBoxHStretch;
    QGridLayout *gridLayout_57;
    QLabel *label_VidstabSmoothingText;
    NoScrollSlider *horizontalSliderVidstabSmoothing;
    QSpacerItem *horizontalSpacer_53;
    DoubleClickLabel *label_VidstabSmoothingVal;
    QLabel *label_8;
    QGridLayout *gridLayout_55;
    DoubleClickLabel *label_VidstabAccuracyVal;
    NoScrollSlider *horizontalSliderVidstabAccuracy;
    QSpacerItem *horizontalSpacer_51;
    QLabel *label_VidstabAccuracyText;
    QFrame *line_12;
    QFrame *toolButtonUpsideDown;
    QHBoxLayout *horizontalLayout_29;
    ColorToolButton *toolButtonUpsideDownOff;
    ColorToolButton *toolButtonUpsideDownOn;
    QCheckBox *checkBoxVidstabEnable;
    NoScrollComboBox *comboBoxVStretch;
    QLabel *UpsideDownLabel;
    QLabel *label_resResolution;
    QGridLayout *gridLayout_56;
    DoubleClickLabel *label_VidstabZoomVal;
    NoScrollSlider *horizontalSliderVidstabZoom;
    QSpacerItem *horizontalSpacer_52;
    QLabel *label_VidstabZoomText;
    QFrame *line_25;
    QCheckBox *checkBoxVidstabTripod;
    QSpacerItem *verticalSpacer;
    QDockWidget *dockWidgetSession;
    QWidget *dockWidgetContents_2;
    QVBoxLayout *verticalLayout;
    QListView *listViewSession;
    QTableView *tableViewSession;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1200, 700);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/RetinaIMG/RetinaIMG/MLVAPP.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        MainWindow->setWindowIcon(icon);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName("actionOpen");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/RetinaIMG/RetinaIMG/Movie-icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        icon1.addFile(QString::fromUtf8(":/IMG/IMG/fileopen.png"), QSize(), QIcon::Mode::Normal, QIcon::State::On);
        actionOpen->setIcon(icon1);
        actionCopyRecept = new QAction(MainWindow);
        actionCopyRecept->setObjectName("actionCopyRecept");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/RetinaIMG/RetinaIMG/File-Copy-icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionCopyRecept->setIcon(icon2);
        actionPasteReceipt = new QAction(MainWindow);
        actionPasteReceipt->setObjectName("actionPasteReceipt");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/RetinaIMG/RetinaIMG/Paste-icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionPasteReceipt->setIcon(icon3);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName("actionQuit");
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName("actionAbout");
        actionExport = new QAction(MainWindow);
        actionExport->setObjectName("actionExport");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/RetinaIMG/RetinaIMG/Export-To-File-icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionExport->setIcon(icon4);
        actionClip_Information = new QAction(MainWindow);
        actionClip_Information->setObjectName("actionClip_Information");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/IMG/IMG/information-icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionClip_Information->setIcon(icon5);
        actionPlay = new QAction(MainWindow);
        actionPlay->setObjectName("actionPlay");
        actionPlay->setCheckable(true);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/AudioVideoIcons/AudioVideoIcons/Play.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionPlay->setIcon(icon6);
        actionGoto_First_Frame = new QAction(MainWindow);
        actionGoto_First_Frame->setObjectName("actionGoto_First_Frame");
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/AudioVideoIcons/AudioVideoIcons/FirstFrame.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionGoto_First_Frame->setIcon(icon7);
        actionLoop = new QAction(MainWindow);
        actionLoop->setObjectName("actionLoop");
        actionLoop->setCheckable(true);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/AudioVideoIcons/AudioVideoIcons/Loop.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionLoop->setIcon(icon8);
        actionDropFrameMode = new QAction(MainWindow);
        actionDropFrameMode->setObjectName("actionDropFrameMode");
        actionDropFrameMode->setCheckable(true);
        actionZoomFit = new QAction(MainWindow);
        actionZoomFit->setObjectName("actionZoomFit");
        actionZoomFit->setCheckable(true);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/RetinaIMG/RetinaIMG/Actions-zoom-fit-icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionZoomFit->setIcon(icon9);
        actionZoom100 = new QAction(MainWindow);
        actionZoom100->setObjectName("actionZoom100");
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/RetinaIMG/RetinaIMG/Actions-zoom-100-icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionZoom100->setIcon(icon10);
        actionShowHistogram = new QAction(MainWindow);
        actionShowHistogram->setObjectName("actionShowHistogram");
        actionShowHistogram->setCheckable(true);
        actionShowWaveFormMonitor = new QAction(MainWindow);
        actionShowWaveFormMonitor->setObjectName("actionShowWaveFormMonitor");
        actionShowWaveFormMonitor->setCheckable(true);
        actionAlwaysUseAMaZE = new QAction(MainWindow);
        actionAlwaysUseAMaZE->setObjectName("actionAlwaysUseAMaZE");
        actionAlwaysUseAMaZE->setCheckable(true);
        actionExportSettings = new QAction(MainWindow);
        actionExportSettings->setObjectName("actionExportSettings");
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/RetinaIMG/RetinaIMG/Settings-icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionExportSettings->setIcon(icon11);
        actionShowSessionArea = new QAction(MainWindow);
        actionShowSessionArea->setObjectName("actionShowSessionArea");
        actionShowSessionArea->setCheckable(true);
        actionShowEditArea = new QAction(MainWindow);
        actionShowEditArea->setObjectName("actionShowEditArea");
        actionShowEditArea->setCheckable(true);
        actionResetReceipt = new QAction(MainWindow);
        actionResetReceipt->setObjectName("actionResetReceipt");
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/RetinaIMG/RetinaIMG/Recycle-Bin-icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionResetReceipt->setIcon(icon12);
        actionNewSession = new QAction(MainWindow);
        actionNewSession->setObjectName("actionNewSession");
        actionNewSession->setEnabled(true);
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/RetinaIMG/RetinaIMG/File-New-icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionNewSession->setIcon(icon13);
        actionOpenSession = new QAction(MainWindow);
        actionOpenSession->setObjectName("actionOpenSession");
        actionOpenSession->setEnabled(true);
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/RetinaIMG/RetinaIMG/Folder-Open-icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionOpenSession->setIcon(icon14);
        actionSaveSession = new QAction(MainWindow);
        actionSaveSession->setObjectName("actionSaveSession");
        actionSaveSession->setEnabled(true);
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/RetinaIMG/RetinaIMG/Save-icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionSaveSession->setIcon(icon15);
        actionFullscreen = new QAction(MainWindow);
        actionFullscreen->setObjectName("actionFullscreen");
        actionFullscreen->setCheckable(true);
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/RetinaIMG/RetinaIMG/Actions-window-fullscreen-icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionFullscreen->setIcon(icon16);
        actionCaching = new QAction(MainWindow);
        actionCaching->setObjectName("actionCaching");
        actionCaching->setCheckable(true);
        actionShowAudioTrack = new QAction(MainWindow);
        actionShowAudioTrack->setObjectName("actionShowAudioTrack");
        actionShowAudioTrack->setCheckable(true);
        actionShowAudioTrack->setChecked(true);
        actionMinimize = new QAction(MainWindow);
        actionMinimize->setObjectName("actionMinimize");
        actionMaximize = new QAction(MainWindow);
        actionMaximize->setObjectName("actionMaximize");
        actionAudioOutput = new QAction(MainWindow);
        actionAudioOutput->setObjectName("actionAudioOutput");
        actionAudioOutput->setCheckable(true);
        actionAudioOutput->setChecked(false);
        actionAudioOutput->setEnabled(false);
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/RetinaIMG/RetinaIMG/speaker-icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionAudioOutput->setIcon(icon17);
        actionShowZebras = new QAction(MainWindow);
        actionShowZebras->setObjectName("actionShowZebras");
        actionShowZebras->setCheckable(true);
        actionNextFrame = new QAction(MainWindow);
        actionNextFrame->setObjectName("actionNextFrame");
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/AudioVideoIcons/AudioVideoIcons/FrameFW.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionNextFrame->setIcon(icon18);
        actionPreviousFrame = new QAction(MainWindow);
        actionPreviousFrame->setObjectName("actionPreviousFrame");
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/AudioVideoIcons/AudioVideoIcons/FrameBW.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionPreviousFrame->setIcon(icon19);
        actionShowParade = new QAction(MainWindow);
        actionShowParade->setObjectName("actionShowParade");
        actionShowParade->setCheckable(true);
        actionWhiteBalancePicker = new QAction(MainWindow);
        actionWhiteBalancePicker->setObjectName("actionWhiteBalancePicker");
        actionWhiteBalancePicker->setCheckable(true);
        QIcon icon20;
        icon20.addFile(QString::fromUtf8(":/RetinaIMG/RetinaIMG/Actions-color-picker-grey-icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionWhiteBalancePicker->setIcon(icon20);
        actionExportCurrentFrame = new QAction(MainWindow);
        actionExportCurrentFrame->setObjectName("actionExportCurrentFrame");
        QIcon icon21;
        icon21.addFile(QString::fromUtf8(":/RetinaIMG/RetinaIMG/Export-Image-icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionExportCurrentFrame->setIcon(icon21);
        actionAboutQt = new QAction(MainWindow);
        actionAboutQt->setObjectName("actionAboutQt");
        actionExportReceipt = new QAction(MainWindow);
        actionExportReceipt->setObjectName("actionExportReceipt");
        QIcon icon22;
        icon22.addFile(QString::fromUtf8(":/RetinaIMG/RetinaIMG/ExportReceipt-icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionExportReceipt->setIcon(icon22);
        actionImportReceipt = new QAction(MainWindow);
        actionImportReceipt->setObjectName("actionImportReceipt");
        QIcon icon23;
        icon23.addFile(QString::fromUtf8(":/RetinaIMG/RetinaIMG/ImportReceipt-icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionImportReceipt->setIcon(icon23);
        actionPreviewDisabled = new QAction(MainWindow);
        actionPreviewDisabled->setObjectName("actionPreviewDisabled");
        actionPreviewDisabled->setCheckable(true);
        actionPreviewList = new QAction(MainWindow);
        actionPreviewList->setObjectName("actionPreviewList");
        actionPreviewList->setCheckable(true);
        actionPreviewPicture = new QAction(MainWindow);
        actionPreviewPicture->setObjectName("actionPreviewPicture");
        actionPreviewPicture->setCheckable(true);
        actionUseBilinear = new QAction(MainWindow);
        actionUseBilinear->setObjectName("actionUseBilinear");
        actionUseBilinear->setCheckable(true);
        actionUseBilinear->setChecked(true);
        actionCreateMappFiles = new QAction(MainWindow);
        actionCreateMappFiles->setObjectName("actionCreateMappFiles");
        actionCreateMappFiles->setCheckable(true);
        QIcon icon24;
        icon24.addFile(QString::fromUtf8(":/RetinaIMG/RetinaIMG/map-icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionCreateMappFiles->setIcon(icon24);
        actionNext_Clip = new QAction(MainWindow);
        actionNext_Clip->setObjectName("actionNext_Clip");
        actionPrevious_Clip = new QAction(MainWindow);
        actionPrevious_Clip->setObjectName("actionPrevious_Clip");
        actionSelectAllClips = new QAction(MainWindow);
        actionSelectAllClips->setObjectName("actionSelectAllClips");
        actionDeleteSelectedClips = new QAction(MainWindow);
        actionDeleteSelectedClips->setObjectName("actionDeleteSelectedClips");
        actionShowVectorScope = new QAction(MainWindow);
        actionShowVectorScope->setObjectName("actionShowVectorScope");
        actionShowVectorScope->setCheckable(true);
        actionTimecodePositionRight = new QAction(MainWindow);
        actionTimecodePositionRight->setObjectName("actionTimecodePositionRight");
        actionTimecodePositionRight->setCheckable(true);
        actionTimecodePositionMiddle = new QAction(MainWindow);
        actionTimecodePositionMiddle->setObjectName("actionTimecodePositionMiddle");
        actionTimecodePositionMiddle->setCheckable(true);
        actionSaveAsSession = new QAction(MainWindow);
        actionSaveAsSession->setObjectName("actionSaveAsSession");
        actionSaveAsSession->setIcon(icon15);
        actionToggleTimecodeDisplay = new QAction(MainWindow);
        actionToggleTimecodeDisplay->setObjectName("actionToggleTimecodeDisplay");
        actionCheckForUpdates = new QAction(MainWindow);
        actionCheckForUpdates->setObjectName("actionCheckForUpdates");
        actionAutoCheckForUpdates = new QAction(MainWindow);
        actionAutoCheckForUpdates->setObjectName("actionAutoCheckForUpdates");
        actionAutoCheckForUpdates->setCheckable(true);
        actionUseNoneDebayer = new QAction(MainWindow);
        actionUseNoneDebayer->setObjectName("actionUseNoneDebayer");
        actionUseNoneDebayer->setCheckable(true);
        actionUseSimpleDebayer = new QAction(MainWindow);
        actionUseSimpleDebayer->setObjectName("actionUseSimpleDebayer");
        actionUseSimpleDebayer->setCheckable(true);
        actionUseLmmseDebayer = new QAction(MainWindow);
        actionUseLmmseDebayer->setObjectName("actionUseLmmseDebayer");
        actionUseLmmseDebayer->setCheckable(true);
        actionUseIgvDebayer = new QAction(MainWindow);
        actionUseIgvDebayer->setObjectName("actionUseIgvDebayer");
        actionUseIgvDebayer->setCheckable(true);
        actionFcpxmlImportAssistant = new QAction(MainWindow);
        actionFcpxmlImportAssistant->setObjectName("actionFcpxmlImportAssistant");
        QIcon icon25;
        icon25.addFile(QString::fromUtf8(":/RetinaIMG/RetinaIMG/Window-Enter-icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionFcpxmlImportAssistant->setIcon(icon25);
        actionHelp = new QAction(MainWindow);
        actionHelp->setObjectName("actionHelp");
        actionFcpxmlSelectionAssistant = new QAction(MainWindow);
        actionFcpxmlSelectionAssistant->setObjectName("actionFcpxmlSelectionAssistant");
        QIcon icon26;
        icon26.addFile(QString::fromUtf8(":/RetinaIMG/RetinaIMG/Window-Left-Panel-icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionFcpxmlSelectionAssistant->setIcon(icon26);
        actionPlaybackPosition = new QAction(MainWindow);
        actionPlaybackPosition->setObjectName("actionPlaybackPosition");
        actionPlaybackPosition->setCheckable(true);
        actionPreviewPictureBottom = new QAction(MainWindow);
        actionPreviewPictureBottom->setObjectName("actionPreviewPictureBottom");
        actionPreviewPictureBottom->setCheckable(true);
        actionShowInFinder = new QAction(MainWindow);
        actionShowInFinder->setObjectName("actionShowInFinder");
        actionOpenWithExternalApplication = new QAction(MainWindow);
        actionOpenWithExternalApplication->setObjectName("actionOpenWithExternalApplication");
        actionSelectExternalApplication = new QAction(MainWindow);
        actionSelectExternalApplication->setObjectName("actionSelectExternalApplication");
        actionAskForSavingOnQuit = new QAction(MainWindow);
        actionAskForSavingOnQuit->setObjectName("actionAskForSavingOnQuit");
        actionAskForSavingOnQuit->setCheckable(true);
        actionDarktheme = new QAction(MainWindow);
        actionDarktheme->setObjectName("actionDarktheme");
        actionDarkThemeStandard = new QAction(MainWindow);
        actionDarkThemeStandard->setObjectName("actionDarkThemeStandard");
        actionDarkThemeStandard->setCheckable(true);
        actionDarkThemeModern = new QAction(MainWindow);
        actionDarkThemeModern->setObjectName("actionDarkThemeModern");
        actionDarkThemeModern->setCheckable(true);
        actionCreateAllMappFilesNow = new QAction(MainWindow);
        actionCreateAllMappFilesNow->setObjectName("actionCreateAllMappFilesNow");
        QIcon icon27;
        icon27.addFile(QString::fromUtf8(":/RetinaIMG/RetinaIMG/mapGo-icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionCreateAllMappFilesNow->setIcon(icon27);
        actionBetterResizer = new QAction(MainWindow);
        actionBetterResizer->setObjectName("actionBetterResizer");
        actionBetterResizer->setCheckable(true);
        actionShowInstalledFocusPixelMaps = new QAction(MainWindow);
        actionShowInstalledFocusPixelMaps->setObjectName("actionShowInstalledFocusPixelMaps");
        actionUseAhdDebayer = new QAction(MainWindow);
        actionUseAhdDebayer->setObjectName("actionUseAhdDebayer");
        actionUseAhdDebayer->setCheckable(true);
        actionDontSwitchDebayerForPlayback = new QAction(MainWindow);
        actionDontSwitchDebayerForPlayback->setObjectName("actionDontSwitchDebayerForPlayback");
        actionDontSwitchDebayerForPlayback->setCheckable(true);
        actionTranscodeAndImport = new QAction(MainWindow);
        actionTranscodeAndImport->setObjectName("actionTranscodeAndImport");
        QIcon icon28;
        icon28.addFile(QString::fromUtf8(":/RetinaIMG/RetinaIMG/Movie-import-icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionTranscodeAndImport->setIcon(icon28);
        actionShowInstalledBadPixelMaps = new QAction(MainWindow);
        actionShowInstalledBadPixelMaps->setObjectName("actionShowInstalledBadPixelMaps");
        actionUseDefaultReceipt = new QAction(MainWindow);
        actionUseDefaultReceipt->setObjectName("actionUseDefaultReceipt");
        actionUseDefaultReceipt->setCheckable(true);
        actionMarkRed = new QAction(MainWindow);
        actionMarkRed->setObjectName("actionMarkRed");
        QIcon icon29;
        icon29.addFile(QString::fromUtf8(":/RetinaIMG/RetinaIMG/Actions-flag-red-icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionMarkRed->setIcon(icon29);
        actionMarkYellow = new QAction(MainWindow);
        actionMarkYellow->setObjectName("actionMarkYellow");
        QIcon icon30;
        icon30.addFile(QString::fromUtf8(":/RetinaIMG/RetinaIMG/Actions-flag-yellow-icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionMarkYellow->setIcon(icon30);
        actionMarkGreen = new QAction(MainWindow);
        actionMarkGreen->setObjectName("actionMarkGreen");
        QIcon icon31;
        icon31.addFile(QString::fromUtf8(":/RetinaIMG/RetinaIMG/Actions-flag-icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionMarkGreen->setIcon(icon31);
        actionUnmark = new QAction(MainWindow);
        actionUnmark->setObjectName("actionUnmark");
        QIcon icon32;
        icon32.addFile(QString::fromUtf8(":/RetinaIMG/RetinaIMG/Actions-flag-black-icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionUnmark->setIcon(icon32);
        actionShowRedClips = new QAction(MainWindow);
        actionShowRedClips->setObjectName("actionShowRedClips");
        actionShowRedClips->setCheckable(true);
        actionShowRedClips->setChecked(true);
        actionShowGreenClips = new QAction(MainWindow);
        actionShowGreenClips->setObjectName("actionShowGreenClips");
        actionShowGreenClips->setCheckable(true);
        actionShowGreenClips->setChecked(true);
        actionShowYellowClips = new QAction(MainWindow);
        actionShowYellowClips->setObjectName("actionShowYellowClips");
        actionShowYellowClips->setCheckable(true);
        actionShowYellowClips->setChecked(true);
        actionShowUnmarkedClips = new QAction(MainWindow);
        actionShowUnmarkedClips->setObjectName("actionShowUnmarkedClips");
        actionShowUnmarkedClips->setCheckable(true);
        actionShowUnmarkedClips->setChecked(true);
        actionPreviewTableModeBottom = new QAction(MainWindow);
        actionPreviewTableModeBottom->setObjectName("actionPreviewTableModeBottom");
        actionPreviewTableModeBottom->setCheckable(true);
        actionUseRcdDebayer = new QAction(MainWindow);
        actionUseRcdDebayer->setObjectName("actionUseRcdDebayer");
        actionUseRcdDebayer->setCheckable(true);
        actionUseDcbDebayer = new QAction(MainWindow);
        actionUseDcbDebayer->setObjectName("actionUseDcbDebayer");
        actionUseDcbDebayer->setCheckable(true);
        actionViewerBackgroundColor = new QAction(MainWindow);
        actionViewerBackgroundColor->setObjectName("actionViewerBackgroundColor");
        actionSaveSessionMetadata = new QAction(MainWindow);
        actionSaveSessionMetadata->setObjectName("actionSaveSessionMetadata");
        QIcon icon33;
        icon33.addFile(QString::fromUtf8(":/RetinaIMG/RetinaIMG/Database-Table-icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionSaveSessionMetadata->setIcon(icon33);
        actionFastOpen = new QAction(MainWindow);
        actionFastOpen->setObjectName("actionFastOpen");
        actionFastOpen->setCheckable(true);
        actionFastOpen->setChecked(true);
        actionNotificationExportFinished = new QAction(MainWindow);
        actionNotificationExportFinished->setObjectName("actionNotificationExportFinished");
        actionNotificationExportFinished->setCheckable(true);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        gridLayoutMain = new QGridLayout(centralWidget);
        gridLayoutMain->setSpacing(6);
        gridLayoutMain->setContentsMargins(11, 11, 11, 11);
        gridLayoutMain->setObjectName("gridLayoutMain");
        gridLayoutMain->setContentsMargins(0, -1, 0, -1);
        graphicsView = new GraphicsZoomView(centralWidget);
        graphicsView->setObjectName("graphicsView");
        graphicsView->setBaseSize(QSize(0, 21));
        graphicsView->setContextMenuPolicy(Qt::CustomContextMenu);
        graphicsView->setFrameShape(QFrame::NoFrame);
        graphicsView->setFrameShadow(QFrame::Plain);
        graphicsView->setLineWidth(0);
        graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::BrushStyle::SolidPattern);
        graphicsView->setBackgroundBrush(brush);
        graphicsView->setDragMode(QGraphicsView::ScrollHandDrag);

        gridLayoutMain->addWidget(graphicsView, 0, 0, 1, 1);

        horizontalSliderPosition = new JumpSlider(centralWidget);
        horizontalSliderPosition->setObjectName("horizontalSliderPosition");
        horizontalSliderPosition->setPageStep(1);
        horizontalSliderPosition->setOrientation(Qt::Horizontal);

        gridLayoutMain->addWidget(horizontalSliderPosition, 1, 0, 1, 1);

        labelAudioTrack = new ResizeLabel(centralWidget);
        labelAudioTrack->setObjectName("labelAudioTrack");
        labelAudioTrack->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelAudioTrack->sizePolicy().hasHeightForWidth());
        labelAudioTrack->setSizePolicy(sizePolicy);
        labelAudioTrack->setMinimumSize(QSize(0, 32));
        labelAudioTrack->setMaximumSize(QSize(16777215, 32));
        labelAudioTrack->setLineWidth(0);
        labelAudioTrack->setPixmap(QPixmap(QString::fromUtf8(":/IMG/IMG/Histogram.png")));
        labelAudioTrack->setScaledContents(true);

        gridLayoutMain->addWidget(labelAudioTrack, 2, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 1200, 24));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName("menuFile");
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName("menuEdit");
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName("menuHelp");
        menuPlayback = new QMenu(menuBar);
        menuPlayback->setObjectName("menuPlayback");
        menuDemosaicForPlayback = new QMenu(menuPlayback);
        menuDemosaicForPlayback->setObjectName("menuDemosaicForPlayback");
        menuView = new QMenu(menuBar);
        menuView->setObjectName("menuView");
        menuSessionListPreview = new QMenu(menuView);
        menuSessionListPreview->setObjectName("menuSessionListPreview");
        menuPlayback_Elements = new QMenu(menuView);
        menuPlayback_Elements->setObjectName("menuPlayback_Elements");
        menuTheme = new QMenu(menuView);
        menuTheme->setObjectName("menuTheme");
        menuWindow = new QMenu(menuBar);
        menuWindow->setObjectName("menuWindow");
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName("mainToolBar");
        mainToolBar->setMovable(false);
        mainToolBar->setIconSize(QSize(24, 24));
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);
        dockWidgetEdit = new QDockWidget(MainWindow);
        dockWidgetEdit->setObjectName("dockWidgetEdit");
        dockWidgetEdit->setEnabled(true);
        dockWidgetEdit->setMaximumSize(QSize(500, 524287));
        dockWidgetEdit->setFloating(false);
        dockWidgetEdit->setAllowedAreas(Qt::RightDockWidgetArea);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName("dockWidgetContents");
        dockWidgetContents->setMinimumSize(QSize(212, 0));
        dockWidgetContents->setMaximumSize(QSize(16777215, 16777215));
        gridLayout_37 = new QGridLayout(dockWidgetContents);
        gridLayout_37->setSpacing(0);
        gridLayout_37->setContentsMargins(11, 11, 11, 11);
        gridLayout_37->setObjectName("gridLayout_37");
        gridLayout_37->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_32 = new QHBoxLayout();
        horizontalLayout_32->setSpacing(0);
        horizontalLayout_32->setObjectName("horizontalLayout_32");
        labelScope = new ScopesLabel(dockWidgetContents);
        labelScope->setObjectName("labelScope");
        labelScope->setMinimumSize(QSize(212, 0));
        labelScope->setMaximumSize(QSize(16777215, 16777215));
        labelScope->setContextMenuPolicy(Qt::CustomContextMenu);
        labelScope->setLineWidth(0);
        labelScope->setPixmap(QPixmap(QString::fromUtf8(":/IMG/IMG/Histogram.png")));
        labelScope->setScaledContents(true);
        labelScope->setAlignment(Qt::AlignCenter);

        horizontalLayout_32->addWidget(labelScope);


        verticalLayout_2->addLayout(horizontalLayout_32);

        scrollArea = new QScrollArea(dockWidgetContents);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setStyleSheet(QString::fromUtf8("QGroupBox::indicator {\n"
"    width: 13px;\n"
"    height: 13px;\n"
"}\n"
"QGroupBox::indicator:unchecked {\n"
"    image: url(:/darkstyle/icon_branch_closed.png);\n"
"}\n"
"QGroupBox::indicator:checked {\n"
"    image: url(:/darkstyle/icon_branch_open.png);\n"
"}\n"
"QGroupBox::indicator:unchecked:disabled {\n"
"    image: url(:/darkstyle/icon_branch_closed_disabled.png);\n"
"}\n"
"QGroupBox::indicator:checked:disabled {\n"
"    image: url(:/darkstyle/icon_branch_open_disabled.png);\n"
"}"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setFrameShadow(QFrame::Plain);
        scrollArea->setLineWidth(0);
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 269, 5772));
        verticalLayoutScrollArea = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayoutScrollArea->setSpacing(6);
        verticalLayoutScrollArea->setContentsMargins(11, 11, 11, 11);
        verticalLayoutScrollArea->setObjectName("verticalLayoutScrollArea");
        verticalLayoutScrollArea->setContentsMargins(0, 5, 0, 5);
        groupBoxRawCorrection = new QGroupBox(scrollAreaWidgetContents);
        groupBoxRawCorrection->setObjectName("groupBoxRawCorrection");
        groupBoxRawCorrection->setCheckable(true);
        gridLayout_15 = new QGridLayout(groupBoxRawCorrection);
        gridLayout_15->setSpacing(6);
        gridLayout_15->setContentsMargins(11, 11, 11, 11);
        gridLayout_15->setObjectName("gridLayout_15");
        gridLayout_15->setContentsMargins(5, 5, 5, 5);
        frameRawCorrection = new QFrame(groupBoxRawCorrection);
        frameRawCorrection->setObjectName("frameRawCorrection");
        gridLayout_67 = new QGridLayout(frameRawCorrection);
        gridLayout_67->setSpacing(5);
        gridLayout_67->setContentsMargins(11, 11, 11, 11);
        gridLayout_67->setObjectName("gridLayout_67");
        gridLayout_67->setContentsMargins(0, 0, 0, 0);
        checkBoxRawFixEnable = new QCheckBox(frameRawCorrection);
        checkBoxRawFixEnable->setObjectName("checkBoxRawFixEnable");
        QFont font;
        font.setPointSize(10);
        checkBoxRawFixEnable->setFont(font);
        checkBoxRawFixEnable->setChecked(true);

        gridLayout_67->addWidget(checkBoxRawFixEnable, 0, 0, 1, 1);

        line_10 = new QFrame(frameRawCorrection);
        line_10->setObjectName("line_10");
        line_10->setStyleSheet(QString::fromUtf8("background-color: rgb(115, 115, 115);"));
        line_10->setFrameShape(QFrame::Shape::HLine);
        line_10->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_67->addWidget(line_10, 1, 0, 1, 1);

        labelDarkFrameSubtraction = new QLabel(frameRawCorrection);
        labelDarkFrameSubtraction->setObjectName("labelDarkFrameSubtraction");
        labelDarkFrameSubtraction->setFont(font);

        gridLayout_67->addWidget(labelDarkFrameSubtraction, 2, 0, 1, 1);

        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setSpacing(6);
        horizontalLayout_24->setObjectName("horizontalLayout_24");
        toolButtonDarkFrameSubtractionFile = new ColorToolButton(frameRawCorrection);
        toolButtonDarkFrameSubtractionFile->setObjectName("toolButtonDarkFrameSubtractionFile");
        toolButtonDarkFrameSubtractionFile->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(toolButtonDarkFrameSubtractionFile->sizePolicy().hasHeightForWidth());
        toolButtonDarkFrameSubtractionFile->setSizePolicy(sizePolicy1);
        toolButtonDarkFrameSubtractionFile->setMaximumSize(QSize(50, 16777215));
        toolButtonDarkFrameSubtractionFile->setFont(font);
        toolButtonDarkFrameSubtractionFile->setIcon(icon14);
        toolButtonDarkFrameSubtractionFile->setIconSize(QSize(12, 12));
        toolButtonDarkFrameSubtractionFile->setCheckable(false);
        toolButtonDarkFrameSubtractionFile->setChecked(false);
        toolButtonDarkFrameSubtractionFile->setAutoExclusive(false);

        horizontalLayout_24->addWidget(toolButtonDarkFrameSubtractionFile);

        toolButtonDarkFrameSubtraction = new QFrame(frameRawCorrection);
        toolButtonDarkFrameSubtraction->setObjectName("toolButtonDarkFrameSubtraction");
        horizontalLayout_23 = new QHBoxLayout(toolButtonDarkFrameSubtraction);
        horizontalLayout_23->setSpacing(0);
        horizontalLayout_23->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_23->setObjectName("horizontalLayout_23");
        horizontalLayout_23->setContentsMargins(0, 0, 0, 0);
        toolButtonDarkFrameSubtractionOff = new ColorToolButton(toolButtonDarkFrameSubtraction);
        toolButtonDarkFrameSubtractionOff->setObjectName("toolButtonDarkFrameSubtractionOff");
        sizePolicy.setHeightForWidth(toolButtonDarkFrameSubtractionOff->sizePolicy().hasHeightForWidth());
        toolButtonDarkFrameSubtractionOff->setSizePolicy(sizePolicy);
        toolButtonDarkFrameSubtractionOff->setFont(font);
        toolButtonDarkFrameSubtractionOff->setCheckable(true);
        toolButtonDarkFrameSubtractionOff->setChecked(true);
        toolButtonDarkFrameSubtractionOff->setAutoExclusive(true);

        horizontalLayout_23->addWidget(toolButtonDarkFrameSubtractionOff);

        toolButtonDarkFrameSubtractionExt = new ColorToolButton(toolButtonDarkFrameSubtraction);
        toolButtonDarkFrameSubtractionExt->setObjectName("toolButtonDarkFrameSubtractionExt");
        toolButtonDarkFrameSubtractionExt->setEnabled(false);
        sizePolicy.setHeightForWidth(toolButtonDarkFrameSubtractionExt->sizePolicy().hasHeightForWidth());
        toolButtonDarkFrameSubtractionExt->setSizePolicy(sizePolicy);
        toolButtonDarkFrameSubtractionExt->setFont(font);
        toolButtonDarkFrameSubtractionExt->setCheckable(true);
        toolButtonDarkFrameSubtractionExt->setAutoExclusive(true);

        horizontalLayout_23->addWidget(toolButtonDarkFrameSubtractionExt);

        toolButtonDarkFrameSubtractionInt = new ColorToolButton(toolButtonDarkFrameSubtraction);
        toolButtonDarkFrameSubtractionInt->setObjectName("toolButtonDarkFrameSubtractionInt");
        toolButtonDarkFrameSubtractionInt->setEnabled(false);
        sizePolicy.setHeightForWidth(toolButtonDarkFrameSubtractionInt->sizePolicy().hasHeightForWidth());
        toolButtonDarkFrameSubtractionInt->setSizePolicy(sizePolicy);
        toolButtonDarkFrameSubtractionInt->setFont(font);
        toolButtonDarkFrameSubtractionInt->setCheckable(true);
        toolButtonDarkFrameSubtractionInt->setAutoExclusive(true);

        horizontalLayout_23->addWidget(toolButtonDarkFrameSubtractionInt);


        horizontalLayout_24->addWidget(toolButtonDarkFrameSubtraction);


        gridLayout_67->addLayout(horizontalLayout_24, 3, 0, 1, 1);

        lineEditDarkFrameFile = new QLineEdit(frameRawCorrection);
        lineEditDarkFrameFile->setObjectName("lineEditDarkFrameFile");
        lineEditDarkFrameFile->setFont(font);
        lineEditDarkFrameFile->setReadOnly(false);

        gridLayout_67->addWidget(lineEditDarkFrameFile, 4, 0, 1, 1);

        line_7 = new QFrame(frameRawCorrection);
        line_7->setObjectName("line_7");
        line_7->setStyleSheet(QString::fromUtf8("background-color: rgb(115, 115, 115);"));
        line_7->setFrameShape(QFrame::Shape::HLine);
        line_7->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_67->addWidget(line_7, 5, 0, 1, 1);

        FocusPixelsLabel = new QLabel(frameRawCorrection);
        FocusPixelsLabel->setObjectName("FocusPixelsLabel");
        FocusPixelsLabel->setFont(font);

        gridLayout_67->addWidget(FocusPixelsLabel, 6, 0, 1, 1);

        toolButtonFocusDots = new QFrame(frameRawCorrection);
        toolButtonFocusDots->setObjectName("toolButtonFocusDots");
        horizontalLayout_5 = new QHBoxLayout(toolButtonFocusDots);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        toolButtonFocusDotsOff = new ColorToolButton(toolButtonFocusDots);
        toolButtonFocusDotsOff->setObjectName("toolButtonFocusDotsOff");
        sizePolicy.setHeightForWidth(toolButtonFocusDotsOff->sizePolicy().hasHeightForWidth());
        toolButtonFocusDotsOff->setSizePolicy(sizePolicy);
        toolButtonFocusDotsOff->setFont(font);
        toolButtonFocusDotsOff->setCheckable(true);
        toolButtonFocusDotsOff->setChecked(true);
        toolButtonFocusDotsOff->setAutoExclusive(true);

        horizontalLayout_5->addWidget(toolButtonFocusDotsOff);

        toolButtonFocusDotsOn = new ColorToolButton(toolButtonFocusDots);
        toolButtonFocusDotsOn->setObjectName("toolButtonFocusDotsOn");
        sizePolicy.setHeightForWidth(toolButtonFocusDotsOn->sizePolicy().hasHeightForWidth());
        toolButtonFocusDotsOn->setSizePolicy(sizePolicy);
        toolButtonFocusDotsOn->setFont(font);
        toolButtonFocusDotsOn->setCheckable(true);
        toolButtonFocusDotsOn->setAutoExclusive(true);

        horizontalLayout_5->addWidget(toolButtonFocusDotsOn);

        toolButtonFocusDotsCropRec = new ColorToolButton(toolButtonFocusDots);
        toolButtonFocusDotsCropRec->setObjectName("toolButtonFocusDotsCropRec");
        sizePolicy.setHeightForWidth(toolButtonFocusDotsCropRec->sizePolicy().hasHeightForWidth());
        toolButtonFocusDotsCropRec->setSizePolicy(sizePolicy);
        toolButtonFocusDotsCropRec->setFont(font);
        toolButtonFocusDotsCropRec->setCheckable(true);
        toolButtonFocusDotsCropRec->setAutoExclusive(true);

        horizontalLayout_5->addWidget(toolButtonFocusDotsCropRec);


        gridLayout_67->addWidget(toolButtonFocusDots, 7, 0, 1, 1);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(5);
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        FocusPixelsInterpolationMethodLabel = new QLabel(frameRawCorrection);
        FocusPixelsInterpolationMethodLabel->setObjectName("FocusPixelsInterpolationMethodLabel");
        FocusPixelsInterpolationMethodLabel->setFont(font);

        horizontalLayout_12->addWidget(FocusPixelsInterpolationMethodLabel);

        toolButtonFocusDotInterpolation = new QFrame(frameRawCorrection);
        toolButtonFocusDotInterpolation->setObjectName("toolButtonFocusDotInterpolation");
        horizontalLayout_6 = new QHBoxLayout(toolButtonFocusDotInterpolation);
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        toolButtonFocusDotMethod1 = new ColorToolButton(toolButtonFocusDotInterpolation);
        toolButtonFocusDotMethod1->setObjectName("toolButtonFocusDotMethod1");
        sizePolicy.setHeightForWidth(toolButtonFocusDotMethod1->sizePolicy().hasHeightForWidth());
        toolButtonFocusDotMethod1->setSizePolicy(sizePolicy);
        toolButtonFocusDotMethod1->setFont(font);
        toolButtonFocusDotMethod1->setCheckable(true);
        toolButtonFocusDotMethod1->setChecked(true);
        toolButtonFocusDotMethod1->setAutoExclusive(true);

        horizontalLayout_6->addWidget(toolButtonFocusDotMethod1);

        toolButtonFocusDotMethod2 = new ColorToolButton(toolButtonFocusDotInterpolation);
        toolButtonFocusDotMethod2->setObjectName("toolButtonFocusDotMethod2");
        sizePolicy.setHeightForWidth(toolButtonFocusDotMethod2->sizePolicy().hasHeightForWidth());
        toolButtonFocusDotMethod2->setSizePolicy(sizePolicy);
        toolButtonFocusDotMethod2->setFont(font);
        toolButtonFocusDotMethod2->setCheckable(true);
        toolButtonFocusDotMethod2->setAutoExclusive(true);

        horizontalLayout_6->addWidget(toolButtonFocusDotMethod2);

        toolButtonFocusDotMethod3 = new ColorToolButton(toolButtonFocusDotInterpolation);
        toolButtonFocusDotMethod3->setObjectName("toolButtonFocusDotMethod3");
        sizePolicy.setHeightForWidth(toolButtonFocusDotMethod3->sizePolicy().hasHeightForWidth());
        toolButtonFocusDotMethod3->setSizePolicy(sizePolicy);
        toolButtonFocusDotMethod3->setFont(font);
        toolButtonFocusDotMethod3->setCheckable(true);
        toolButtonFocusDotMethod3->setAutoExclusive(true);

        horizontalLayout_6->addWidget(toolButtonFocusDotMethod3);


        horizontalLayout_12->addWidget(toolButtonFocusDotInterpolation);


        gridLayout_67->addLayout(horizontalLayout_12, 8, 0, 1, 1);

        line_3 = new QFrame(frameRawCorrection);
        line_3->setObjectName("line_3");
        line_3->setStyleSheet(QString::fromUtf8("background-color: rgb(115, 115, 115);"));
        line_3->setFrameShape(QFrame::Shape::HLine);
        line_3->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_67->addWidget(line_3, 9, 0, 1, 1);

        horizontalLayout_45 = new QHBoxLayout();
        horizontalLayout_45->setSpacing(6);
        horizontalLayout_45->setObjectName("horizontalLayout_45");
        BadPixelsLabel = new QLabel(frameRawCorrection);
        BadPixelsLabel->setObjectName("BadPixelsLabel");
        BadPixelsLabel->setFont(font);

        horizontalLayout_45->addWidget(BadPixelsLabel);

        horizontalSpacer_62 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_45->addItem(horizontalSpacer_62);


        gridLayout_67->addLayout(horizontalLayout_45, 10, 0, 1, 1);

        toolButtonBadPixels = new QFrame(frameRawCorrection);
        toolButtonBadPixels->setObjectName("toolButtonBadPixels");
        horizontalLayout_7 = new QHBoxLayout(toolButtonBadPixels);
        horizontalLayout_7->setSpacing(0);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        toolButtonBadPixelsOff = new ColorToolButton(toolButtonBadPixels);
        toolButtonBadPixelsOff->setObjectName("toolButtonBadPixelsOff");
        toolButtonBadPixelsOff->setEnabled(true);
        sizePolicy.setHeightForWidth(toolButtonBadPixelsOff->sizePolicy().hasHeightForWidth());
        toolButtonBadPixelsOff->setSizePolicy(sizePolicy);
        toolButtonBadPixelsOff->setFont(font);
        toolButtonBadPixelsOff->setCheckable(true);
        toolButtonBadPixelsOff->setChecked(true);
        toolButtonBadPixelsOff->setAutoExclusive(true);

        horizontalLayout_7->addWidget(toolButtonBadPixelsOff);

        toolButtonBadPixelsOn = new ColorToolButton(toolButtonBadPixels);
        toolButtonBadPixelsOn->setObjectName("toolButtonBadPixelsOn");
        sizePolicy.setHeightForWidth(toolButtonBadPixelsOn->sizePolicy().hasHeightForWidth());
        toolButtonBadPixelsOn->setSizePolicy(sizePolicy);
        toolButtonBadPixelsOn->setFont(font);
        toolButtonBadPixelsOn->setCheckable(true);
        toolButtonBadPixelsOn->setAutoExclusive(true);

        horizontalLayout_7->addWidget(toolButtonBadPixelsOn);

        toolButtonBadPixelsForce = new ColorToolButton(toolButtonBadPixels);
        toolButtonBadPixelsForce->setObjectName("toolButtonBadPixelsForce");
        sizePolicy.setHeightForWidth(toolButtonBadPixelsForce->sizePolicy().hasHeightForWidth());
        toolButtonBadPixelsForce->setSizePolicy(sizePolicy);
        toolButtonBadPixelsForce->setFont(font);
        toolButtonBadPixelsForce->setCheckable(true);
        toolButtonBadPixelsForce->setAutoExclusive(true);

        horizontalLayout_7->addWidget(toolButtonBadPixelsForce);

        toolButtonBadPixelsMap = new ColorToolButton(toolButtonBadPixels);
        toolButtonBadPixelsMap->setObjectName("toolButtonBadPixelsMap");
        sizePolicy.setHeightForWidth(toolButtonBadPixelsMap->sizePolicy().hasHeightForWidth());
        toolButtonBadPixelsMap->setSizePolicy(sizePolicy);
        toolButtonBadPixelsMap->setFont(font);
        toolButtonBadPixelsMap->setCheckable(true);
        toolButtonBadPixelsMap->setAutoExclusive(true);

        horizontalLayout_7->addWidget(toolButtonBadPixelsMap);


        gridLayout_67->addWidget(toolButtonBadPixels, 11, 0, 1, 1);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setSpacing(5);
        horizontalLayout_21->setObjectName("horizontalLayout_21");
        FocusPixelsInterpolationMethodLabel_2 = new QLabel(frameRawCorrection);
        FocusPixelsInterpolationMethodLabel_2->setObjectName("FocusPixelsInterpolationMethodLabel_2");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(FocusPixelsInterpolationMethodLabel_2->sizePolicy().hasHeightForWidth());
        FocusPixelsInterpolationMethodLabel_2->setSizePolicy(sizePolicy2);
        FocusPixelsInterpolationMethodLabel_2->setFont(font);

        horizontalLayout_21->addWidget(FocusPixelsInterpolationMethodLabel_2);

        toolButtonFocusDotInterpolation_2 = new QFrame(frameRawCorrection);
        toolButtonFocusDotInterpolation_2->setObjectName("toolButtonFocusDotInterpolation_2");
        horizontalLayout_22 = new QHBoxLayout(toolButtonFocusDotInterpolation_2);
        horizontalLayout_22->setSpacing(0);
        horizontalLayout_22->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_22->setObjectName("horizontalLayout_22");
        horizontalLayout_22->setContentsMargins(0, 0, 0, 0);
        toolButtonBadPixelsSearchMethodNormal = new ColorToolButton(toolButtonFocusDotInterpolation_2);
        toolButtonBadPixelsSearchMethodNormal->setObjectName("toolButtonBadPixelsSearchMethodNormal");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(toolButtonBadPixelsSearchMethodNormal->sizePolicy().hasHeightForWidth());
        toolButtonBadPixelsSearchMethodNormal->setSizePolicy(sizePolicy3);
        toolButtonBadPixelsSearchMethodNormal->setFont(font);
        toolButtonBadPixelsSearchMethodNormal->setCheckable(true);
        toolButtonBadPixelsSearchMethodNormal->setChecked(true);
        toolButtonBadPixelsSearchMethodNormal->setAutoExclusive(true);

        horizontalLayout_22->addWidget(toolButtonBadPixelsSearchMethodNormal);

        toolButtonBadPixelsSearchMethodAggressive = new ColorToolButton(toolButtonFocusDotInterpolation_2);
        toolButtonBadPixelsSearchMethodAggressive->setObjectName("toolButtonBadPixelsSearchMethodAggressive");
        sizePolicy3.setHeightForWidth(toolButtonBadPixelsSearchMethodAggressive->sizePolicy().hasHeightForWidth());
        toolButtonBadPixelsSearchMethodAggressive->setSizePolicy(sizePolicy3);
        toolButtonBadPixelsSearchMethodAggressive->setFont(font);
        toolButtonBadPixelsSearchMethodAggressive->setCheckable(true);
        toolButtonBadPixelsSearchMethodAggressive->setAutoExclusive(true);

        horizontalLayout_22->addWidget(toolButtonBadPixelsSearchMethodAggressive);

        toolButtonBadPixelsSearchMethodEdit = new ColorToolButton(toolButtonFocusDotInterpolation_2);
        toolButtonBadPixelsSearchMethodEdit->setObjectName("toolButtonBadPixelsSearchMethodEdit");
        toolButtonBadPixelsSearchMethodEdit->setEnabled(false);
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(toolButtonBadPixelsSearchMethodEdit->sizePolicy().hasHeightForWidth());
        toolButtonBadPixelsSearchMethodEdit->setSizePolicy(sizePolicy4);
        toolButtonBadPixelsSearchMethodEdit->setMinimumSize(QSize(0, 0));
        toolButtonBadPixelsSearchMethodEdit->setFont(font);
        QIcon icon34;
        icon34.addFile(QString::fromUtf8(":/RetinaIMG/RetinaIMG/Pencil-icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        toolButtonBadPixelsSearchMethodEdit->setIcon(icon34);
        toolButtonBadPixelsSearchMethodEdit->setIconSize(QSize(12, 12));
        toolButtonBadPixelsSearchMethodEdit->setCheckable(true);

        horizontalLayout_22->addWidget(toolButtonBadPixelsSearchMethodEdit);

        toolButtonBadPixelsCrosshairEnable = new ColorToolButton(toolButtonFocusDotInterpolation_2);
        toolButtonBadPixelsCrosshairEnable->setObjectName("toolButtonBadPixelsCrosshairEnable");
        toolButtonBadPixelsCrosshairEnable->setEnabled(true);
        sizePolicy4.setHeightForWidth(toolButtonBadPixelsCrosshairEnable->sizePolicy().hasHeightForWidth());
        toolButtonBadPixelsCrosshairEnable->setSizePolicy(sizePolicy4);
        toolButtonBadPixelsCrosshairEnable->setMinimumSize(QSize(0, 0));
        toolButtonBadPixelsCrosshairEnable->setFont(font);
        QIcon icon35;
        icon35.addFile(QString::fromUtf8(":/RetinaIMG/RetinaIMG/Crosshair.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        toolButtonBadPixelsCrosshairEnable->setIcon(icon35);
        toolButtonBadPixelsCrosshairEnable->setIconSize(QSize(12, 12));
        toolButtonBadPixelsCrosshairEnable->setCheckable(true);
        toolButtonBadPixelsCrosshairEnable->setChecked(false);

        horizontalLayout_22->addWidget(toolButtonBadPixelsCrosshairEnable);

        toolButtonDeleteBpm = new QToolButton(toolButtonFocusDotInterpolation_2);
        toolButtonDeleteBpm->setObjectName("toolButtonDeleteBpm");
        toolButtonDeleteBpm->setEnabled(false);
        sizePolicy3.setHeightForWidth(toolButtonDeleteBpm->sizePolicy().hasHeightForWidth());
        toolButtonDeleteBpm->setSizePolicy(sizePolicy3);
        toolButtonDeleteBpm->setMinimumSize(QSize(0, 0));
        toolButtonDeleteBpm->setFont(font);
        toolButtonDeleteBpm->setIconSize(QSize(12, 12));

        horizontalLayout_22->addWidget(toolButtonDeleteBpm);


        horizontalLayout_21->addWidget(toolButtonFocusDotInterpolation_2);


        gridLayout_67->addLayout(horizontalLayout_21, 12, 0, 1, 1);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(5);
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        BadPixelsInterpolationMethodLabel = new QLabel(frameRawCorrection);
        BadPixelsInterpolationMethodLabel->setObjectName("BadPixelsInterpolationMethodLabel");
        BadPixelsInterpolationMethodLabel->setFont(font);

        horizontalLayout_13->addWidget(BadPixelsInterpolationMethodLabel);

        toolButtonBadPixelsInterpolation = new QFrame(frameRawCorrection);
        toolButtonBadPixelsInterpolation->setObjectName("toolButtonBadPixelsInterpolation");
        horizontalLayout_8 = new QHBoxLayout(toolButtonBadPixelsInterpolation);
        horizontalLayout_8->setSpacing(0);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        toolButtonBadPixelsMethod1 = new ColorToolButton(toolButtonBadPixelsInterpolation);
        toolButtonBadPixelsMethod1->setObjectName("toolButtonBadPixelsMethod1");
        sizePolicy.setHeightForWidth(toolButtonBadPixelsMethod1->sizePolicy().hasHeightForWidth());
        toolButtonBadPixelsMethod1->setSizePolicy(sizePolicy);
        toolButtonBadPixelsMethod1->setFont(font);
        toolButtonBadPixelsMethod1->setCheckable(true);
        toolButtonBadPixelsMethod1->setChecked(true);
        toolButtonBadPixelsMethod1->setAutoExclusive(true);

        horizontalLayout_8->addWidget(toolButtonBadPixelsMethod1);

        toolButtonBadPixelsMethod2 = new ColorToolButton(toolButtonBadPixelsInterpolation);
        toolButtonBadPixelsMethod2->setObjectName("toolButtonBadPixelsMethod2");
        sizePolicy.setHeightForWidth(toolButtonBadPixelsMethod2->sizePolicy().hasHeightForWidth());
        toolButtonBadPixelsMethod2->setSizePolicy(sizePolicy);
        toolButtonBadPixelsMethod2->setFont(font);
        toolButtonBadPixelsMethod2->setCheckable(true);
        toolButtonBadPixelsMethod2->setAutoExclusive(true);

        horizontalLayout_8->addWidget(toolButtonBadPixelsMethod2);

        toolButtonBadPixelsMethod3 = new ColorToolButton(toolButtonBadPixelsInterpolation);
        toolButtonBadPixelsMethod3->setObjectName("toolButtonBadPixelsMethod3");
        sizePolicy.setHeightForWidth(toolButtonBadPixelsMethod3->sizePolicy().hasHeightForWidth());
        toolButtonBadPixelsMethod3->setSizePolicy(sizePolicy);
        toolButtonBadPixelsMethod3->setFont(font);
        toolButtonBadPixelsMethod3->setCheckable(true);
        toolButtonBadPixelsMethod3->setAutoExclusive(true);

        horizontalLayout_8->addWidget(toolButtonBadPixelsMethod3);


        horizontalLayout_13->addWidget(toolButtonBadPixelsInterpolation);


        gridLayout_67->addLayout(horizontalLayout_13, 13, 0, 1, 1);

        line_4 = new QFrame(frameRawCorrection);
        line_4->setObjectName("line_4");
        line_4->setStyleSheet(QString::fromUtf8("background-color: rgb(115, 115, 115);"));
        line_4->setFrameShape(QFrame::Shape::HLine);
        line_4->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_67->addWidget(line_4, 14, 0, 1, 1);

        ChromaSmoothLabel = new QLabel(frameRawCorrection);
        ChromaSmoothLabel->setObjectName("ChromaSmoothLabel");
        ChromaSmoothLabel->setFont(font);

        gridLayout_67->addWidget(ChromaSmoothLabel, 15, 0, 1, 1);

        toolButtonChroma = new QFrame(frameRawCorrection);
        toolButtonChroma->setObjectName("toolButtonChroma");
        horizontalLayout_9 = new QHBoxLayout(toolButtonChroma);
        horizontalLayout_9->setSpacing(0);
        horizontalLayout_9->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        toolButtonChromaOff = new ColorToolButton(toolButtonChroma);
        toolButtonChromaOff->setObjectName("toolButtonChromaOff");
        sizePolicy.setHeightForWidth(toolButtonChromaOff->sizePolicy().hasHeightForWidth());
        toolButtonChromaOff->setSizePolicy(sizePolicy);
        toolButtonChromaOff->setFont(font);
        toolButtonChromaOff->setCheckable(true);
        toolButtonChromaOff->setChecked(true);
        toolButtonChromaOff->setAutoExclusive(true);

        horizontalLayout_9->addWidget(toolButtonChromaOff);

        toolButtonChroma2x2 = new ColorToolButton(toolButtonChroma);
        toolButtonChroma2x2->setObjectName("toolButtonChroma2x2");
        sizePolicy.setHeightForWidth(toolButtonChroma2x2->sizePolicy().hasHeightForWidth());
        toolButtonChroma2x2->setSizePolicy(sizePolicy);
        toolButtonChroma2x2->setFont(font);
        toolButtonChroma2x2->setCheckable(true);
        toolButtonChroma2x2->setAutoExclusive(true);

        horizontalLayout_9->addWidget(toolButtonChroma2x2);

        toolButtonChroma3x3 = new ColorToolButton(toolButtonChroma);
        toolButtonChroma3x3->setObjectName("toolButtonChroma3x3");
        sizePolicy.setHeightForWidth(toolButtonChroma3x3->sizePolicy().hasHeightForWidth());
        toolButtonChroma3x3->setSizePolicy(sizePolicy);
        toolButtonChroma3x3->setFont(font);
        toolButtonChroma3x3->setCheckable(true);
        toolButtonChroma3x3->setAutoExclusive(true);

        horizontalLayout_9->addWidget(toolButtonChroma3x3);

        toolButtonChroma5x5 = new ColorToolButton(toolButtonChroma);
        toolButtonChroma5x5->setObjectName("toolButtonChroma5x5");
        sizePolicy.setHeightForWidth(toolButtonChroma5x5->sizePolicy().hasHeightForWidth());
        toolButtonChroma5x5->setSizePolicy(sizePolicy);
        toolButtonChroma5x5->setFont(font);
        toolButtonChroma5x5->setCheckable(true);
        toolButtonChroma5x5->setAutoExclusive(true);

        horizontalLayout_9->addWidget(toolButtonChroma5x5);


        gridLayout_67->addWidget(toolButtonChroma, 16, 0, 1, 1);

        line_8 = new QFrame(frameRawCorrection);
        line_8->setObjectName("line_8");
        line_8->setStyleSheet(QString::fromUtf8("background-color: rgb(115, 115, 115);"));
        line_8->setFrameShape(QFrame::Shape::HLine);
        line_8->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_67->addWidget(line_8, 17, 0, 1, 1);

        VerticalStripesLabel = new QLabel(frameRawCorrection);
        VerticalStripesLabel->setObjectName("VerticalStripesLabel");
        VerticalStripesLabel->setFont(font);

        gridLayout_67->addWidget(VerticalStripesLabel, 18, 0, 1, 1);

        toolButtonVerticalStripes = new QFrame(frameRawCorrection);
        toolButtonVerticalStripes->setObjectName("toolButtonVerticalStripes");
        horizontalLayout_11 = new QHBoxLayout(toolButtonVerticalStripes);
        horizontalLayout_11->setSpacing(0);
        horizontalLayout_11->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        toolButtonVerticalStripesOff = new ColorToolButton(toolButtonVerticalStripes);
        toolButtonVerticalStripesOff->setObjectName("toolButtonVerticalStripesOff");
        sizePolicy.setHeightForWidth(toolButtonVerticalStripesOff->sizePolicy().hasHeightForWidth());
        toolButtonVerticalStripesOff->setSizePolicy(sizePolicy);
        toolButtonVerticalStripesOff->setFont(font);
        toolButtonVerticalStripesOff->setCheckable(true);
        toolButtonVerticalStripesOff->setChecked(true);
        toolButtonVerticalStripesOff->setAutoExclusive(true);

        horizontalLayout_11->addWidget(toolButtonVerticalStripesOff);

        toolButtonVerticalStripesNormal = new ColorToolButton(toolButtonVerticalStripes);
        toolButtonVerticalStripesNormal->setObjectName("toolButtonVerticalStripesNormal");
        sizePolicy.setHeightForWidth(toolButtonVerticalStripesNormal->sizePolicy().hasHeightForWidth());
        toolButtonVerticalStripesNormal->setSizePolicy(sizePolicy);
        toolButtonVerticalStripesNormal->setFont(font);
        toolButtonVerticalStripesNormal->setCheckable(true);
        toolButtonVerticalStripesNormal->setAutoExclusive(true);

        horizontalLayout_11->addWidget(toolButtonVerticalStripesNormal);

        toolButtonVerticalStripesForce = new ColorToolButton(toolButtonVerticalStripes);
        toolButtonVerticalStripesForce->setObjectName("toolButtonVerticalStripesForce");
        sizePolicy.setHeightForWidth(toolButtonVerticalStripesForce->sizePolicy().hasHeightForWidth());
        toolButtonVerticalStripesForce->setSizePolicy(sizePolicy);
        toolButtonVerticalStripesForce->setFont(font);
        toolButtonVerticalStripesForce->setCheckable(true);
        toolButtonVerticalStripesForce->setAutoExclusive(true);

        horizontalLayout_11->addWidget(toolButtonVerticalStripesForce);


        gridLayout_67->addWidget(toolButtonVerticalStripes, 19, 0, 1, 1);

        line_9 = new QFrame(frameRawCorrection);
        line_9->setObjectName("line_9");
        line_9->setStyleSheet(QString::fromUtf8("background-color: rgb(115, 115, 115);"));
        line_9->setFrameShape(QFrame::Shape::HLine);
        line_9->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_67->addWidget(line_9, 20, 0, 1, 1);

        horizontalLayout_33 = new QHBoxLayout();
        horizontalLayout_33->setSpacing(6);
        horizontalLayout_33->setObjectName("horizontalLayout_33");
        DualISOLabel = new QLabel(frameRawCorrection);
        DualISOLabel->setObjectName("DualISOLabel");
        sizePolicy3.setHeightForWidth(DualISOLabel->sizePolicy().hasHeightForWidth());
        DualISOLabel->setSizePolicy(sizePolicy3);
        DualISOLabel->setBaseSize(QSize(0, 0));
        DualISOLabel->setFont(font);

        horizontalLayout_33->addWidget(DualISOLabel);

        horizontalSpacer_32 = new QSpacerItem(0, 21, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_33->addItem(horizontalSpacer_32);

        toolButtonDualIsoForce = new ColorToolButton(frameRawCorrection);
        toolButtonDualIsoForce->setObjectName("toolButtonDualIsoForce");
        sizePolicy4.setHeightForWidth(toolButtonDualIsoForce->sizePolicy().hasHeightForWidth());
        toolButtonDualIsoForce->setSizePolicy(sizePolicy4);
        toolButtonDualIsoForce->setFont(font);
        toolButtonDualIsoForce->setCheckable(true);

        horizontalLayout_33->addWidget(toolButtonDualIsoForce);


        gridLayout_67->addLayout(horizontalLayout_33, 21, 0, 1, 1);

        toolButtonDualIso = new QFrame(frameRawCorrection);
        toolButtonDualIso->setObjectName("toolButtonDualIso");
        horizontalLayout = new QHBoxLayout(toolButtonDualIso);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        toolButtonDualIsoOff = new ColorToolButton(toolButtonDualIso);
        toolButtonDualIsoOff->setObjectName("toolButtonDualIsoOff");
        sizePolicy.setHeightForWidth(toolButtonDualIsoOff->sizePolicy().hasHeightForWidth());
        toolButtonDualIsoOff->setSizePolicy(sizePolicy);
        toolButtonDualIsoOff->setFont(font);
        toolButtonDualIsoOff->setCheckable(true);
        toolButtonDualIsoOff->setChecked(true);
        toolButtonDualIsoOff->setAutoExclusive(true);

        horizontalLayout->addWidget(toolButtonDualIsoOff);

        toolButtonDualIsoOn = new ColorToolButton(toolButtonDualIso);
        toolButtonDualIsoOn->setObjectName("toolButtonDualIsoOn");
        sizePolicy.setHeightForWidth(toolButtonDualIsoOn->sizePolicy().hasHeightForWidth());
        toolButtonDualIsoOn->setSizePolicy(sizePolicy);
        toolButtonDualIsoOn->setFont(font);
        toolButtonDualIsoOn->setCheckable(true);
        toolButtonDualIsoOn->setAutoExclusive(true);

        horizontalLayout->addWidget(toolButtonDualIsoOn);

        toolButtonDualIsoPreview = new ColorToolButton(toolButtonDualIso);
        toolButtonDualIsoPreview->setObjectName("toolButtonDualIsoPreview");
        sizePolicy.setHeightForWidth(toolButtonDualIsoPreview->sizePolicy().hasHeightForWidth());
        toolButtonDualIsoPreview->setSizePolicy(sizePolicy);
        toolButtonDualIsoPreview->setFont(font);
        toolButtonDualIsoPreview->setCheckable(true);
        toolButtonDualIsoPreview->setAutoExclusive(true);

        horizontalLayout->addWidget(toolButtonDualIsoPreview);


        gridLayout_67->addWidget(toolButtonDualIso, 22, 0, 1, 1);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        DualISOInterpolationLabel = new QLabel(frameRawCorrection);
        DualISOInterpolationLabel->setObjectName("DualISOInterpolationLabel");
        DualISOInterpolationLabel->setFont(font);

        horizontalLayout_14->addWidget(DualISOInterpolationLabel);

        toolButtonDualIsoInterpolation = new QFrame(frameRawCorrection);
        toolButtonDualIsoInterpolation->setObjectName("toolButtonDualIsoInterpolation");
        horizontalLayout_2 = new QHBoxLayout(toolButtonDualIsoInterpolation);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        toolButtonDualIsoInterpolationAmaze = new ColorToolButton(toolButtonDualIsoInterpolation);
        toolButtonDualIsoInterpolationAmaze->setObjectName("toolButtonDualIsoInterpolationAmaze");
        sizePolicy.setHeightForWidth(toolButtonDualIsoInterpolationAmaze->sizePolicy().hasHeightForWidth());
        toolButtonDualIsoInterpolationAmaze->setSizePolicy(sizePolicy);
        toolButtonDualIsoInterpolationAmaze->setFont(font);
        toolButtonDualIsoInterpolationAmaze->setCheckable(true);
        toolButtonDualIsoInterpolationAmaze->setChecked(true);
        toolButtonDualIsoInterpolationAmaze->setAutoExclusive(true);

        horizontalLayout_2->addWidget(toolButtonDualIsoInterpolationAmaze);

        toolButtonDualIsoInterpolationMean = new ColorToolButton(toolButtonDualIsoInterpolation);
        toolButtonDualIsoInterpolationMean->setObjectName("toolButtonDualIsoInterpolationMean");
        sizePolicy.setHeightForWidth(toolButtonDualIsoInterpolationMean->sizePolicy().hasHeightForWidth());
        toolButtonDualIsoInterpolationMean->setSizePolicy(sizePolicy);
        toolButtonDualIsoInterpolationMean->setFont(font);
        toolButtonDualIsoInterpolationMean->setCheckable(true);
        toolButtonDualIsoInterpolationMean->setAutoExclusive(true);

        horizontalLayout_2->addWidget(toolButtonDualIsoInterpolationMean);


        horizontalLayout_14->addWidget(toolButtonDualIsoInterpolation);


        gridLayout_67->addLayout(horizontalLayout_14, 23, 0, 1, 1);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        DualISOAliasMapLabel = new QLabel(frameRawCorrection);
        DualISOAliasMapLabel->setObjectName("DualISOAliasMapLabel");
        DualISOAliasMapLabel->setFont(font);

        horizontalLayout_15->addWidget(DualISOAliasMapLabel);

        toolButtonDualIsoAliasMap = new QFrame(frameRawCorrection);
        toolButtonDualIsoAliasMap->setObjectName("toolButtonDualIsoAliasMap");
        horizontalLayout_3 = new QHBoxLayout(toolButtonDualIsoAliasMap);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        toolButtonDualIsoAliasMapOff = new ColorToolButton(toolButtonDualIsoAliasMap);
        toolButtonDualIsoAliasMapOff->setObjectName("toolButtonDualIsoAliasMapOff");
        sizePolicy.setHeightForWidth(toolButtonDualIsoAliasMapOff->sizePolicy().hasHeightForWidth());
        toolButtonDualIsoAliasMapOff->setSizePolicy(sizePolicy);
        toolButtonDualIsoAliasMapOff->setFont(font);
        toolButtonDualIsoAliasMapOff->setCheckable(true);
        toolButtonDualIsoAliasMapOff->setAutoExclusive(true);

        horizontalLayout_3->addWidget(toolButtonDualIsoAliasMapOff);

        toolButtonDualIsoAliasMapOn = new ColorToolButton(toolButtonDualIsoAliasMap);
        toolButtonDualIsoAliasMapOn->setObjectName("toolButtonDualIsoAliasMapOn");
        sizePolicy.setHeightForWidth(toolButtonDualIsoAliasMapOn->sizePolicy().hasHeightForWidth());
        toolButtonDualIsoAliasMapOn->setSizePolicy(sizePolicy);
        toolButtonDualIsoAliasMapOn->setFont(font);
        toolButtonDualIsoAliasMapOn->setCheckable(true);
        toolButtonDualIsoAliasMapOn->setChecked(true);
        toolButtonDualIsoAliasMapOn->setAutoExclusive(true);

        horizontalLayout_3->addWidget(toolButtonDualIsoAliasMapOn);


        horizontalLayout_15->addWidget(toolButtonDualIsoAliasMap);


        gridLayout_67->addLayout(horizontalLayout_15, 24, 0, 1, 1);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setObjectName("horizontalLayout_16");
        DualISOFullresBlendingLabel = new QLabel(frameRawCorrection);
        DualISOFullresBlendingLabel->setObjectName("DualISOFullresBlendingLabel");
        DualISOFullresBlendingLabel->setFont(font);

        horizontalLayout_16->addWidget(DualISOFullresBlendingLabel);

        toolButtonDualIsoFullresBlending = new QFrame(frameRawCorrection);
        toolButtonDualIsoFullresBlending->setObjectName("toolButtonDualIsoFullresBlending");
        horizontalLayout_4 = new QHBoxLayout(toolButtonDualIsoFullresBlending);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        toolButtonDualIsoFullresBlendingOff = new ColorToolButton(toolButtonDualIsoFullresBlending);
        toolButtonDualIsoFullresBlendingOff->setObjectName("toolButtonDualIsoFullresBlendingOff");
        sizePolicy.setHeightForWidth(toolButtonDualIsoFullresBlendingOff->sizePolicy().hasHeightForWidth());
        toolButtonDualIsoFullresBlendingOff->setSizePolicy(sizePolicy);
        toolButtonDualIsoFullresBlendingOff->setFont(font);
        toolButtonDualIsoFullresBlendingOff->setCheckable(true);
        toolButtonDualIsoFullresBlendingOff->setAutoExclusive(true);

        horizontalLayout_4->addWidget(toolButtonDualIsoFullresBlendingOff);

        toolButtonDualIsoFullresBlendingOn = new ColorToolButton(toolButtonDualIsoFullresBlending);
        toolButtonDualIsoFullresBlendingOn->setObjectName("toolButtonDualIsoFullresBlendingOn");
        sizePolicy.setHeightForWidth(toolButtonDualIsoFullresBlendingOn->sizePolicy().hasHeightForWidth());
        toolButtonDualIsoFullresBlendingOn->setSizePolicy(sizePolicy);
        toolButtonDualIsoFullresBlendingOn->setFont(font);
        toolButtonDualIsoFullresBlendingOn->setCheckable(true);
        toolButtonDualIsoFullresBlendingOn->setChecked(true);
        toolButtonDualIsoFullresBlendingOn->setAutoExclusive(true);

        horizontalLayout_4->addWidget(toolButtonDualIsoFullresBlendingOn);


        horizontalLayout_16->addWidget(toolButtonDualIsoFullresBlending);


        gridLayout_67->addLayout(horizontalLayout_16, 25, 0, 1, 1);

        line_6 = new QFrame(frameRawCorrection);
        line_6->setObjectName("line_6");
        line_6->setStyleSheet(QString::fromUtf8("background-color: rgb(115, 115, 115);"));
        line_6->setFrameShape(QFrame::Shape::HLine);
        line_6->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_67->addWidget(line_6, 26, 0, 1, 1);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setSpacing(6);
        horizontalLayout_18->setObjectName("horizontalLayout_18");
        horizontalLayout_18->setContentsMargins(-1, -1, -1, 0);
        DeflickerTargetLabel = new QLabel(frameRawCorrection);
        DeflickerTargetLabel->setObjectName("DeflickerTargetLabel");
        DeflickerTargetLabel->setFont(font);

        horizontalLayout_18->addWidget(DeflickerTargetLabel);

        spinBoxDeflickerTarget = new QSpinBox(frameRawCorrection);
        spinBoxDeflickerTarget->setObjectName("spinBoxDeflickerTarget");
        spinBoxDeflickerTarget->setMaximumSize(QSize(90, 16777215));
        spinBoxDeflickerTarget->setFont(font);
        spinBoxDeflickerTarget->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinBoxDeflickerTarget->setMaximum(9999);

        horizontalLayout_18->addWidget(spinBoxDeflickerTarget);


        gridLayout_67->addLayout(horizontalLayout_18, 27, 0, 1, 1);

        line_11 = new QFrame(frameRawCorrection);
        line_11->setObjectName("line_11");
        line_11->setStyleSheet(QString::fromUtf8("background-color: rgb(115, 115, 115);"));
        line_11->setFrameShape(QFrame::Shape::HLine);
        line_11->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_67->addWidget(line_11, 28, 0, 1, 1);

        PatternNoiseLabel = new QLabel(frameRawCorrection);
        PatternNoiseLabel->setObjectName("PatternNoiseLabel");
        PatternNoiseLabel->setFont(font);

        gridLayout_67->addWidget(PatternNoiseLabel, 29, 0, 1, 1);

        toolButtonPatternNoise = new QFrame(frameRawCorrection);
        toolButtonPatternNoise->setObjectName("toolButtonPatternNoise");
        horizontalLayout_10 = new QHBoxLayout(toolButtonPatternNoise);
        horizontalLayout_10->setSpacing(0);
        horizontalLayout_10->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        toolButtonPatternNoiseOff = new ColorToolButton(toolButtonPatternNoise);
        toolButtonPatternNoiseOff->setObjectName("toolButtonPatternNoiseOff");
        sizePolicy.setHeightForWidth(toolButtonPatternNoiseOff->sizePolicy().hasHeightForWidth());
        toolButtonPatternNoiseOff->setSizePolicy(sizePolicy);
        toolButtonPatternNoiseOff->setFont(font);
        toolButtonPatternNoiseOff->setCheckable(true);
        toolButtonPatternNoiseOff->setChecked(true);
        toolButtonPatternNoiseOff->setAutoExclusive(true);

        horizontalLayout_10->addWidget(toolButtonPatternNoiseOff);

        toolButtonPatternNoiseOn = new ColorToolButton(toolButtonPatternNoise);
        toolButtonPatternNoiseOn->setObjectName("toolButtonPatternNoiseOn");
        sizePolicy.setHeightForWidth(toolButtonPatternNoiseOn->sizePolicy().hasHeightForWidth());
        toolButtonPatternNoiseOn->setSizePolicy(sizePolicy);
        toolButtonPatternNoiseOn->setFont(font);
        toolButtonPatternNoiseOn->setCheckable(true);
        toolButtonPatternNoiseOn->setAutoExclusive(true);

        horizontalLayout_10->addWidget(toolButtonPatternNoiseOn);


        gridLayout_67->addWidget(toolButtonPatternNoise, 30, 0, 1, 1);

        line_16 = new QFrame(frameRawCorrection);
        line_16->setObjectName("line_16");
        line_16->setStyleSheet(QString::fromUtf8("background-color: rgb(115, 115, 115);"));
        line_16->setFrameShape(QFrame::Shape::HLine);
        line_16->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_67->addWidget(line_16, 31, 0, 1, 1);

        gridLayout_32 = new QGridLayout();
        gridLayout_32->setSpacing(6);
        gridLayout_32->setObjectName("gridLayout_32");
        gridLayout_32->setHorizontalSpacing(5);
        gridLayout_32->setVerticalSpacing(0);
        RawBlackLabel = new QLabel(frameRawCorrection);
        RawBlackLabel->setObjectName("RawBlackLabel");
        RawBlackLabel->setFont(font);

        gridLayout_32->addWidget(RawBlackLabel, 0, 0, 1, 1);

        horizontalSpacer_27 = new QSpacerItem(40, 20, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        gridLayout_32->addItem(horizontalSpacer_27, 0, 2, 1, 1);

        label_RawBlackVal = new DoubleClickLabel(frameRawCorrection);
        label_RawBlackVal->setObjectName("label_RawBlackVal");
        label_RawBlackVal->setFont(font);
        label_RawBlackVal->setContextMenuPolicy(Qt::CustomContextMenu);
        label_RawBlackVal->setLayoutDirection(Qt::RightToLeft);
        label_RawBlackVal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_32->addWidget(label_RawBlackVal, 0, 3, 1, 1);

        horizontalSliderRawBlack = new NoScrollSlider(frameRawCorrection);
        horizontalSliderRawBlack->setObjectName("horizontalSliderRawBlack");
        sizePolicy3.setHeightForWidth(horizontalSliderRawBlack->sizePolicy().hasHeightForWidth());
        horizontalSliderRawBlack->setSizePolicy(sizePolicy3);
        horizontalSliderRawBlack->setMinimumSize(QSize(0, 0));
        horizontalSliderRawBlack->setMaximumSize(QSize(16777215, 16777215));
        horizontalSliderRawBlack->setMinimum(0);
        horizontalSliderRawBlack->setMaximum(16385);
        horizontalSliderRawBlack->setValue(0);
        horizontalSliderRawBlack->setOrientation(Qt::Horizontal);

        gridLayout_32->addWidget(horizontalSliderRawBlack, 1, 0, 1, 4);

        toolButtonRawBlackAutoCorrect = new QToolButton(frameRawCorrection);
        toolButtonRawBlackAutoCorrect->setObjectName("toolButtonRawBlackAutoCorrect");

        gridLayout_32->addWidget(toolButtonRawBlackAutoCorrect, 0, 1, 1, 1);


        gridLayout_67->addLayout(gridLayout_32, 32, 0, 1, 1);

        gridLayout_31 = new QGridLayout();
        gridLayout_31->setSpacing(0);
        gridLayout_31->setObjectName("gridLayout_31");
        RawWhiteLabel = new QLabel(frameRawCorrection);
        RawWhiteLabel->setObjectName("RawWhiteLabel");
        RawWhiteLabel->setFont(font);

        gridLayout_31->addWidget(RawWhiteLabel, 0, 0, 1, 1);

        horizontalSpacer_26 = new QSpacerItem(40, 20, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        gridLayout_31->addItem(horizontalSpacer_26, 0, 1, 1, 1);

        label_RawWhiteVal = new DoubleClickLabel(frameRawCorrection);
        label_RawWhiteVal->setObjectName("label_RawWhiteVal");
        label_RawWhiteVal->setFont(font);
        label_RawWhiteVal->setContextMenuPolicy(Qt::CustomContextMenu);
        label_RawWhiteVal->setLayoutDirection(Qt::RightToLeft);
        label_RawWhiteVal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_31->addWidget(label_RawWhiteVal, 0, 2, 1, 1);

        horizontalSliderRawWhite = new NoScrollSlider(frameRawCorrection);
        horizontalSliderRawWhite->setObjectName("horizontalSliderRawWhite");
        sizePolicy3.setHeightForWidth(horizontalSliderRawWhite->sizePolicy().hasHeightForWidth());
        horizontalSliderRawWhite->setSizePolicy(sizePolicy3);
        horizontalSliderRawWhite->setMinimumSize(QSize(0, 0));
        horizontalSliderRawWhite->setMaximumSize(QSize(16777215, 16777215));
        horizontalSliderRawWhite->setMinimum(0);
        horizontalSliderRawWhite->setMaximum(16385);
        horizontalSliderRawWhite->setValue(0);
        horizontalSliderRawWhite->setOrientation(Qt::Horizontal);

        gridLayout_31->addWidget(horizontalSliderRawWhite, 1, 0, 1, 3);


        gridLayout_67->addLayout(gridLayout_31, 33, 0, 1, 1);


        gridLayout_15->addWidget(frameRawCorrection, 0, 0, 1, 1);


        verticalLayoutScrollArea->addWidget(groupBoxRawCorrection);

        groupBoxCutInOut = new QGroupBox(scrollAreaWidgetContents);
        groupBoxCutInOut->setObjectName("groupBoxCutInOut");
        groupBoxCutInOut->setCheckable(true);
        gridLayout_19 = new QGridLayout(groupBoxCutInOut);
        gridLayout_19->setSpacing(6);
        gridLayout_19->setContentsMargins(11, 11, 11, 11);
        gridLayout_19->setObjectName("gridLayout_19");
        gridLayout_19->setContentsMargins(5, 5, 5, 5);
        frameCutInOut = new QFrame(groupBoxCutInOut);
        frameCutInOut->setObjectName("frameCutInOut");
        gridLayout_18 = new QGridLayout(frameCutInOut);
        gridLayout_18->setSpacing(6);
        gridLayout_18->setContentsMargins(11, 11, 11, 11);
        gridLayout_18->setObjectName("gridLayout_18");
        gridLayout_18->setHorizontalSpacing(5);
        gridLayout_18->setContentsMargins(0, 0, 0, 0);
        toolButtonCutIn = new QToolButton(frameCutInOut);
        toolButtonCutIn->setObjectName("toolButtonCutIn");
        sizePolicy3.setHeightForWidth(toolButtonCutIn->sizePolicy().hasHeightForWidth());
        toolButtonCutIn->setSizePolicy(sizePolicy3);
        toolButtonCutIn->setMaximumSize(QSize(30, 23));

        gridLayout_18->addWidget(toolButtonCutIn, 0, 0, 1, 1);

        spinBoxCutIn = new NoScrollSpinBox(frameCutInOut);
        spinBoxCutIn->setObjectName("spinBoxCutIn");
        spinBoxCutIn->setFont(font);
        spinBoxCutIn->setFocusPolicy(Qt::ClickFocus);
        spinBoxCutIn->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_18->addWidget(spinBoxCutIn, 0, 1, 1, 1);

        toolButtonCutInDelete = new QToolButton(frameCutInOut);
        toolButtonCutInDelete->setObjectName("toolButtonCutInDelete");
        toolButtonCutInDelete->setMaximumSize(QSize(16777215, 23));
        QIcon icon36;
        icon36.addFile(QString::fromUtf8(":/RetinaIMG/RetinaIMG/Delete-icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        toolButtonCutInDelete->setIcon(icon36);

        gridLayout_18->addWidget(toolButtonCutInDelete, 0, 2, 1, 1);

        toolButtonCutOut = new QToolButton(frameCutInOut);
        toolButtonCutOut->setObjectName("toolButtonCutOut");
        sizePolicy3.setHeightForWidth(toolButtonCutOut->sizePolicy().hasHeightForWidth());
        toolButtonCutOut->setSizePolicy(sizePolicy3);
        toolButtonCutOut->setMaximumSize(QSize(30, 23));

        gridLayout_18->addWidget(toolButtonCutOut, 1, 0, 1, 1);

        spinBoxCutOut = new NoScrollSpinBox(frameCutInOut);
        spinBoxCutOut->setObjectName("spinBoxCutOut");
        spinBoxCutOut->setFont(font);
        spinBoxCutOut->setFocusPolicy(Qt::ClickFocus);
        spinBoxCutOut->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_18->addWidget(spinBoxCutOut, 1, 1, 1, 1);

        toolButtonCutOutDelete = new QToolButton(frameCutInOut);
        toolButtonCutOutDelete->setObjectName("toolButtonCutOutDelete");
        toolButtonCutOutDelete->setMaximumSize(QSize(16777215, 23));
        toolButtonCutOutDelete->setIcon(icon36);

        gridLayout_18->addWidget(toolButtonCutOutDelete, 1, 2, 1, 1);


        gridLayout_19->addWidget(frameCutInOut, 0, 0, 1, 1);


        verticalLayoutScrollArea->addWidget(groupBoxCutInOut);

        groupBoxDebayer = new QGroupBox(scrollAreaWidgetContents);
        groupBoxDebayer->setObjectName("groupBoxDebayer");
        groupBoxDebayer->setCheckable(true);
        gridLayout_39 = new QGridLayout(groupBoxDebayer);
        gridLayout_39->setSpacing(6);
        gridLayout_39->setContentsMargins(11, 11, 11, 11);
        gridLayout_39->setObjectName("gridLayout_39");
        gridLayout_39->setContentsMargins(5, 5, 5, 5);
        frameDebayer = new QFrame(groupBoxDebayer);
        frameDebayer->setObjectName("frameDebayer");
        gridLayout_40 = new QGridLayout(frameDebayer);
        gridLayout_40->setSpacing(6);
        gridLayout_40->setContentsMargins(11, 11, 11, 11);
        gridLayout_40->setObjectName("gridLayout_40");
        gridLayout_40->setHorizontalSpacing(5);
        gridLayout_40->setContentsMargins(0, 0, 0, 0);
        comboBoxDebayer = new NoScrollComboBox(frameDebayer);
        comboBoxDebayer->addItem(QString());
        comboBoxDebayer->addItem(QString());
        comboBoxDebayer->addItem(QString());
        comboBoxDebayer->addItem(QString());
        comboBoxDebayer->addItem(QString());
        comboBoxDebayer->addItem(QString());
        comboBoxDebayer->addItem(QString());
        comboBoxDebayer->addItem(QString());
        comboBoxDebayer->addItem(QString());
        comboBoxDebayer->setObjectName("comboBoxDebayer");
        comboBoxDebayer->setFont(font);

        gridLayout_40->addWidget(comboBoxDebayer, 0, 0, 1, 1);


        gridLayout_39->addWidget(frameDebayer, 0, 0, 1, 1);


        verticalLayoutScrollArea->addWidget(groupBoxDebayer);

        groupBoxProcessing = new QGroupBox(scrollAreaWidgetContents);
        groupBoxProcessing->setObjectName("groupBoxProcessing");
        groupBoxProcessing->setCheckable(true);
        gridLayout_14 = new QGridLayout(groupBoxProcessing);
        gridLayout_14->setSpacing(6);
        gridLayout_14->setContentsMargins(11, 11, 11, 11);
        gridLayout_14->setObjectName("gridLayout_14");
        gridLayout_14->setContentsMargins(5, 5, 5, 5);
        frameProcessing = new QFrame(groupBoxProcessing);
        frameProcessing->setObjectName("frameProcessing");
        verticalLayout_3 = new QVBoxLayout(frameProcessing);
        verticalLayout_3->setSpacing(5);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(0);
        gridLayout_3->setObjectName("gridLayout_3");
        label = new QLabel(frameProcessing);
        label->setObjectName("label");
        label->setFont(font);

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 0, 1, 1, 1);

        label_ExposureVal = new DoubleClickLabel(frameProcessing);
        label_ExposureVal->setObjectName("label_ExposureVal");
        label_ExposureVal->setFont(font);
        label_ExposureVal->setContextMenuPolicy(Qt::CustomContextMenu);
        label_ExposureVal->setLayoutDirection(Qt::RightToLeft);
        label_ExposureVal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_ExposureVal, 0, 2, 1, 1);

        horizontalSliderExposure = new NoScrollSlider(frameProcessing);
        horizontalSliderExposure->setObjectName("horizontalSliderExposure");
        sizePolicy3.setHeightForWidth(horizontalSliderExposure->sizePolicy().hasHeightForWidth());
        horizontalSliderExposure->setSizePolicy(sizePolicy3);
        horizontalSliderExposure->setMinimumSize(QSize(0, 0));
        horizontalSliderExposure->setMaximumSize(QSize(16777215, 16777215));
        horizontalSliderExposure->setMinimum(-400);
        horizontalSliderExposure->setMaximum(400);
        horizontalSliderExposure->setValue(0);
        horizontalSliderExposure->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(horizontalSliderExposure, 1, 0, 1, 3);


        verticalLayout_3->addLayout(gridLayout_3);

        gridLayout_33 = new QGridLayout();
        gridLayout_33->setSpacing(0);
        gridLayout_33->setObjectName("gridLayout_33");
        label_contrast = new QLabel(frameProcessing);
        label_contrast->setObjectName("label_contrast");
        label_contrast->setFont(font);

        gridLayout_33->addWidget(label_contrast, 0, 0, 1, 1);

        horizontalSpacer_28 = new QSpacerItem(40, 20, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        gridLayout_33->addItem(horizontalSpacer_28, 0, 1, 1, 1);

        label_ContrastVal = new DoubleClickLabel(frameProcessing);
        label_ContrastVal->setObjectName("label_ContrastVal");
        label_ContrastVal->setFont(font);
        label_ContrastVal->setLayoutDirection(Qt::RightToLeft);
        label_ContrastVal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_33->addWidget(label_ContrastVal, 0, 2, 1, 1);

        horizontalSliderContrast = new NoScrollSlider(frameProcessing);
        horizontalSliderContrast->setObjectName("horizontalSliderContrast");
        sizePolicy3.setHeightForWidth(horizontalSliderContrast->sizePolicy().hasHeightForWidth());
        horizontalSliderContrast->setSizePolicy(sizePolicy3);
        horizontalSliderContrast->setMinimumSize(QSize(0, 0));
        horizontalSliderContrast->setMaximumSize(QSize(16777215, 16777215));
        horizontalSliderContrast->setMinimum(-100);
        horizontalSliderContrast->setMaximum(100);
        horizontalSliderContrast->setValue(0);
        horizontalSliderContrast->setOrientation(Qt::Horizontal);

        gridLayout_33->addWidget(horizontalSliderContrast, 1, 0, 1, 3);


        verticalLayout_3->addLayout(gridLayout_33);

        gridLayout_68 = new QGridLayout();
        gridLayout_68->setSpacing(0);
        gridLayout_68->setObjectName("gridLayout_68");
        label_pivot = new QLabel(frameProcessing);
        label_pivot->setObjectName("label_pivot");
        label_pivot->setFont(font);

        gridLayout_68->addWidget(label_pivot, 0, 0, 1, 1);

        horizontalSpacer_58 = new QSpacerItem(40, 20, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        gridLayout_68->addItem(horizontalSpacer_58, 0, 1, 1, 1);

        label_PivotVal = new DoubleClickLabel(frameProcessing);
        label_PivotVal->setObjectName("label_PivotVal");
        label_PivotVal->setFont(font);
        label_PivotVal->setLayoutDirection(Qt::RightToLeft);
        label_PivotVal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_68->addWidget(label_PivotVal, 0, 2, 1, 1);

        horizontalSliderPivot = new NoScrollSlider(frameProcessing);
        horizontalSliderPivot->setObjectName("horizontalSliderPivot");
        sizePolicy3.setHeightForWidth(horizontalSliderPivot->sizePolicy().hasHeightForWidth());
        horizontalSliderPivot->setSizePolicy(sizePolicy3);
        horizontalSliderPivot->setMinimumSize(QSize(0, 0));
        horizontalSliderPivot->setMaximumSize(QSize(16777215, 16777215));
        horizontalSliderPivot->setMinimum(0);
        horizontalSliderPivot->setMaximum(100);
        horizontalSliderPivot->setValue(75);
        horizontalSliderPivot->setOrientation(Qt::Horizontal);

        gridLayout_68->addWidget(horizontalSliderPivot, 1, 0, 1, 3);


        verticalLayout_3->addLayout(gridLayout_68);

        line_17 = new QFrame(frameProcessing);
        line_17->setObjectName("line_17");
        line_17->setStyleSheet(QString::fromUtf8("background-color: rgb(115, 115, 115);"));
        line_17->setFrameShape(QFrame::Shape::HLine);
        line_17->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout_3->addWidget(line_17);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setHorizontalSpacing(5);
        gridLayout_4->setVerticalSpacing(0);
        toolButtonWb = new QToolButton(frameProcessing);
        toolButtonWb->setObjectName("toolButtonWb");
        toolButtonWb->setIcon(icon20);
        toolButtonWb->setCheckable(true);

        gridLayout_4->addWidget(toolButtonWb, 0, 1, 1, 1);

        horizontalSliderTemperature = new NoScrollSlider(frameProcessing);
        horizontalSliderTemperature->setObjectName("horizontalSliderTemperature");
        sizePolicy3.setHeightForWidth(horizontalSliderTemperature->sizePolicy().hasHeightForWidth());
        horizontalSliderTemperature->setSizePolicy(sizePolicy3);
        horizontalSliderTemperature->setMinimumSize(QSize(0, 0));
        horizontalSliderTemperature->setMaximumSize(QSize(16777215, 16777215));
        horizontalSliderTemperature->setMinimum(2000);
        horizontalSliderTemperature->setMaximum(10000);
        horizontalSliderTemperature->setValue(6000);
        horizontalSliderTemperature->setOrientation(Qt::Horizontal);

        gridLayout_4->addWidget(horizontalSliderTemperature, 1, 0, 1, 5);

        label_2 = new QLabel(frameProcessing);
        label_2->setObjectName("label_2");
        label_2->setFont(font);

        gridLayout_4->addWidget(label_2, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_2, 0, 3, 1, 1);

        label_TemperatureVal = new DoubleClickLabel(frameProcessing);
        label_TemperatureVal->setObjectName("label_TemperatureVal");
        label_TemperatureVal->setFont(font);
        label_TemperatureVal->setLayoutDirection(Qt::RightToLeft);
        label_TemperatureVal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_TemperatureVal, 0, 4, 1, 1);

        toolButtonWbMode = new QToolButton(frameProcessing);
        toolButtonWbMode->setObjectName("toolButtonWbMode");
        QIcon icon37;
        icon37.addFile(QString::fromUtf8(":/IMG/IMG/Grey-Ball-icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        toolButtonWbMode->setIcon(icon37);

        gridLayout_4->addWidget(toolButtonWbMode, 0, 2, 1, 1);


        verticalLayout_3->addLayout(gridLayout_4);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setSpacing(0);
        gridLayout_5->setObjectName("gridLayout_5");
        label_3 = new QLabel(frameProcessing);
        label_3->setObjectName("label_3");
        label_3->setFont(font);

        gridLayout_5->addWidget(label_3, 0, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_3, 0, 1, 1, 1);

        label_TintVal = new DoubleClickLabel(frameProcessing);
        label_TintVal->setObjectName("label_TintVal");
        label_TintVal->setFont(font);
        label_TintVal->setLayoutDirection(Qt::RightToLeft);
        label_TintVal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(label_TintVal, 0, 2, 1, 1);

        horizontalSliderTint = new NoScrollSlider(frameProcessing);
        horizontalSliderTint->setObjectName("horizontalSliderTint");
        sizePolicy3.setHeightForWidth(horizontalSliderTint->sizePolicy().hasHeightForWidth());
        horizontalSliderTint->setSizePolicy(sizePolicy3);
        horizontalSliderTint->setMinimumSize(QSize(0, 0));
        horizontalSliderTint->setMaximumSize(QSize(16777215, 16777215));
        horizontalSliderTint->setMinimum(-100);
        horizontalSliderTint->setMaximum(100);
        horizontalSliderTint->setValue(0);
        horizontalSliderTint->setOrientation(Qt::Horizontal);

        gridLayout_5->addWidget(horizontalSliderTint, 1, 0, 1, 3);


        verticalLayout_3->addLayout(gridLayout_5);

        line_18 = new QFrame(frameProcessing);
        line_18->setObjectName("line_18");
        line_18->setStyleSheet(QString::fromUtf8("background-color: rgb(115, 115, 115);"));
        line_18->setFrameShape(QFrame::Shape::HLine);
        line_18->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout_3->addWidget(line_18);

        gridLayout_35 = new QGridLayout();
        gridLayout_35->setSpacing(0);
        gridLayout_35->setObjectName("gridLayout_35");
        label_clarity = new QLabel(frameProcessing);
        label_clarity->setObjectName("label_clarity");
        label_clarity->setFont(font);

        gridLayout_35->addWidget(label_clarity, 0, 0, 1, 1);

        horizontalSpacer_30 = new QSpacerItem(40, 20, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        gridLayout_35->addItem(horizontalSpacer_30, 0, 1, 1, 1);

        label_ClarityVal = new DoubleClickLabel(frameProcessing);
        label_ClarityVal->setObjectName("label_ClarityVal");
        label_ClarityVal->setFont(font);
        label_ClarityVal->setLayoutDirection(Qt::RightToLeft);
        label_ClarityVal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_35->addWidget(label_ClarityVal, 0, 2, 1, 1);

        horizontalSliderClarity = new NoScrollSlider(frameProcessing);
        horizontalSliderClarity->setObjectName("horizontalSliderClarity");
        sizePolicy3.setHeightForWidth(horizontalSliderClarity->sizePolicy().hasHeightForWidth());
        horizontalSliderClarity->setSizePolicy(sizePolicy3);
        horizontalSliderClarity->setMinimumSize(QSize(0, 0));
        horizontalSliderClarity->setMaximumSize(QSize(16777215, 16777215));
        horizontalSliderClarity->setMinimum(-100);
        horizontalSliderClarity->setMaximum(100);
        horizontalSliderClarity->setValue(0);
        horizontalSliderClarity->setOrientation(Qt::Horizontal);

        gridLayout_35->addWidget(horizontalSliderClarity, 1, 0, 1, 3);


        verticalLayout_3->addLayout(gridLayout_35);

        gridLayout_34 = new QGridLayout();
        gridLayout_34->setSpacing(0);
        gridLayout_34->setObjectName("gridLayout_34");
        label_vibrance = new QLabel(frameProcessing);
        label_vibrance->setObjectName("label_vibrance");
        label_vibrance->setFont(font);

        gridLayout_34->addWidget(label_vibrance, 0, 0, 1, 1);

        horizontalSpacer_29 = new QSpacerItem(40, 20, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        gridLayout_34->addItem(horizontalSpacer_29, 0, 1, 1, 1);

        label_VibranceVal = new DoubleClickLabel(frameProcessing);
        label_VibranceVal->setObjectName("label_VibranceVal");
        label_VibranceVal->setFont(font);
        label_VibranceVal->setLayoutDirection(Qt::RightToLeft);
        label_VibranceVal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_34->addWidget(label_VibranceVal, 0, 2, 1, 1);

        horizontalSliderVibrance = new NoScrollSlider(frameProcessing);
        horizontalSliderVibrance->setObjectName("horizontalSliderVibrance");
        sizePolicy3.setHeightForWidth(horizontalSliderVibrance->sizePolicy().hasHeightForWidth());
        horizontalSliderVibrance->setSizePolicy(sizePolicy3);
        horizontalSliderVibrance->setMinimumSize(QSize(0, 0));
        horizontalSliderVibrance->setMaximumSize(QSize(16777215, 16777215));
        horizontalSliderVibrance->setMinimum(-100);
        horizontalSliderVibrance->setMaximum(100);
        horizontalSliderVibrance->setValue(0);
        horizontalSliderVibrance->setOrientation(Qt::Horizontal);

        gridLayout_34->addWidget(horizontalSliderVibrance, 1, 0, 1, 3);


        verticalLayout_3->addLayout(gridLayout_34);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setSpacing(0);
        gridLayout_6->setObjectName("gridLayout_6");
        label_saturation = new QLabel(frameProcessing);
        label_saturation->setObjectName("label_saturation");
        label_saturation->setFont(font);

        gridLayout_6->addWidget(label_saturation, 0, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_4, 0, 1, 1, 1);

        label_SaturationVal = new DoubleClickLabel(frameProcessing);
        label_SaturationVal->setObjectName("label_SaturationVal");
        label_SaturationVal->setFont(font);
        label_SaturationVal->setLayoutDirection(Qt::RightToLeft);
        label_SaturationVal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_6->addWidget(label_SaturationVal, 0, 2, 1, 1);

        horizontalSliderSaturation = new NoScrollSlider(frameProcessing);
        horizontalSliderSaturation->setObjectName("horizontalSliderSaturation");
        sizePolicy3.setHeightForWidth(horizontalSliderSaturation->sizePolicy().hasHeightForWidth());
        horizontalSliderSaturation->setSizePolicy(sizePolicy3);
        horizontalSliderSaturation->setMinimumSize(QSize(0, 0));
        horizontalSliderSaturation->setMaximumSize(QSize(16777215, 16777215));
        horizontalSliderSaturation->setMinimum(-100);
        horizontalSliderSaturation->setMaximum(100);
        horizontalSliderSaturation->setValue(0);
        horizontalSliderSaturation->setOrientation(Qt::Horizontal);

        gridLayout_6->addWidget(horizontalSliderSaturation, 1, 0, 1, 3);


        verticalLayout_3->addLayout(gridLayout_6);

        line_2 = new QFrame(frameProcessing);
        line_2->setObjectName("line_2");
        line_2->setStyleSheet(QString::fromUtf8("background-color: rgb(115, 115, 115);"));
        line_2->setFrameShape(QFrame::Shape::HLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout_3->addWidget(line_2);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setSpacing(0);
        gridLayout_7->setObjectName("gridLayout_7");
        label_ds = new QLabel(frameProcessing);
        label_ds->setObjectName("label_ds");
        label_ds->setFont(font);

        gridLayout_7->addWidget(label_ds, 0, 0, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_5, 0, 1, 1, 1);

        label_DsVal = new DoubleClickLabel(frameProcessing);
        label_DsVal->setObjectName("label_DsVal");
        label_DsVal->setFont(font);
        label_DsVal->setLayoutDirection(Qt::RightToLeft);
        label_DsVal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_7->addWidget(label_DsVal, 0, 2, 1, 1);

        horizontalSliderDS = new NoScrollSlider(frameProcessing);
        horizontalSliderDS->setObjectName("horizontalSliderDS");
        sizePolicy3.setHeightForWidth(horizontalSliderDS->sizePolicy().hasHeightForWidth());
        horizontalSliderDS->setSizePolicy(sizePolicy3);
        horizontalSliderDS->setMinimumSize(QSize(0, 0));
        horizontalSliderDS->setMaximumSize(QSize(16777215, 16777215));
        horizontalSliderDS->setMaximum(100);
        horizontalSliderDS->setValue(20);
        horizontalSliderDS->setOrientation(Qt::Horizontal);

        gridLayout_7->addWidget(horizontalSliderDS, 1, 0, 1, 3);


        verticalLayout_3->addLayout(gridLayout_7);

        gridLayout_8 = new QGridLayout();
        gridLayout_8->setSpacing(0);
        gridLayout_8->setObjectName("gridLayout_8");
        label_dr = new QLabel(frameProcessing);
        label_dr->setObjectName("label_dr");
        label_dr->setFont(font);

        gridLayout_8->addWidget(label_dr, 0, 0, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_6, 0, 1, 1, 1);

        label_DrVal = new DoubleClickLabel(frameProcessing);
        label_DrVal->setObjectName("label_DrVal");
        label_DrVal->setFont(font);
        label_DrVal->setLayoutDirection(Qt::RightToLeft);
        label_DrVal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_8->addWidget(label_DrVal, 0, 2, 1, 1);

        horizontalSliderDR = new NoScrollSlider(frameProcessing);
        horizontalSliderDR->setObjectName("horizontalSliderDR");
        sizePolicy3.setHeightForWidth(horizontalSliderDR->sizePolicy().hasHeightForWidth());
        horizontalSliderDR->setSizePolicy(sizePolicy3);
        horizontalSliderDR->setMinimumSize(QSize(0, 0));
        horizontalSliderDR->setMaximumSize(QSize(16777215, 16777215));
        horizontalSliderDR->setMaximum(100);
        horizontalSliderDR->setValue(70);
        horizontalSliderDR->setOrientation(Qt::Horizontal);

        gridLayout_8->addWidget(horizontalSliderDR, 1, 0, 1, 3);


        verticalLayout_3->addLayout(gridLayout_8);

        gridLayout_9 = new QGridLayout();
        gridLayout_9->setSpacing(0);
        gridLayout_9->setObjectName("gridLayout_9");
        label_ls = new QLabel(frameProcessing);
        label_ls->setObjectName("label_ls");
        label_ls->setFont(font);

        gridLayout_9->addWidget(label_ls, 0, 0, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        gridLayout_9->addItem(horizontalSpacer_7, 0, 1, 1, 1);

        label_LsVal = new DoubleClickLabel(frameProcessing);
        label_LsVal->setObjectName("label_LsVal");
        label_LsVal->setFont(font);
        label_LsVal->setLayoutDirection(Qt::RightToLeft);
        label_LsVal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_9->addWidget(label_LsVal, 0, 2, 1, 1);

        horizontalSliderLS = new NoScrollSlider(frameProcessing);
        horizontalSliderLS->setObjectName("horizontalSliderLS");
        sizePolicy3.setHeightForWidth(horizontalSliderLS->sizePolicy().hasHeightForWidth());
        horizontalSliderLS->setSizePolicy(sizePolicy3);
        horizontalSliderLS->setMinimumSize(QSize(0, 0));
        horizontalSliderLS->setMaximumSize(QSize(16777215, 16777215));
        horizontalSliderLS->setMaximum(100);
        horizontalSliderLS->setOrientation(Qt::Horizontal);

        gridLayout_9->addWidget(horizontalSliderLS, 1, 0, 1, 3);


        verticalLayout_3->addLayout(gridLayout_9);

        gridLayout_10 = new QGridLayout();
        gridLayout_10->setSpacing(0);
        gridLayout_10->setObjectName("gridLayout_10");
        label_lr = new QLabel(frameProcessing);
        label_lr->setObjectName("label_lr");
        label_lr->setFont(font);

        gridLayout_10->addWidget(label_lr, 0, 0, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        gridLayout_10->addItem(horizontalSpacer_8, 0, 1, 1, 1);

        label_LrVal = new DoubleClickLabel(frameProcessing);
        label_LrVal->setObjectName("label_LrVal");
        label_LrVal->setFont(font);
        label_LrVal->setLayoutDirection(Qt::RightToLeft);
        label_LrVal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_10->addWidget(label_LrVal, 0, 2, 1, 1);

        horizontalSliderLR = new NoScrollSlider(frameProcessing);
        horizontalSliderLR->setObjectName("horizontalSliderLR");
        sizePolicy3.setHeightForWidth(horizontalSliderLR->sizePolicy().hasHeightForWidth());
        horizontalSliderLR->setSizePolicy(sizePolicy3);
        horizontalSliderLR->setMinimumSize(QSize(0, 0));
        horizontalSliderLR->setMaximumSize(QSize(16777215, 16777215));
        horizontalSliderLR->setMaximum(100);
        horizontalSliderLR->setValue(50);
        horizontalSliderLR->setOrientation(Qt::Horizontal);

        gridLayout_10->addWidget(horizontalSliderLR, 1, 0, 1, 3);


        verticalLayout_3->addLayout(gridLayout_10);

        gridLayout_11 = new QGridLayout();
        gridLayout_11->setSpacing(0);
        gridLayout_11->setObjectName("gridLayout_11");
        label_lighten = new QLabel(frameProcessing);
        label_lighten->setObjectName("label_lighten");
        label_lighten->setFont(font);

        gridLayout_11->addWidget(label_lighten, 0, 0, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        gridLayout_11->addItem(horizontalSpacer_9, 0, 1, 1, 1);

        label_LightenVal = new DoubleClickLabel(frameProcessing);
        label_LightenVal->setObjectName("label_LightenVal");
        label_LightenVal->setFont(font);
        label_LightenVal->setLayoutDirection(Qt::RightToLeft);
        label_LightenVal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_11->addWidget(label_LightenVal, 0, 2, 1, 1);

        horizontalSliderLighten = new NoScrollSlider(frameProcessing);
        horizontalSliderLighten->setObjectName("horizontalSliderLighten");
        sizePolicy3.setHeightForWidth(horizontalSliderLighten->sizePolicy().hasHeightForWidth());
        horizontalSliderLighten->setSizePolicy(sizePolicy3);
        horizontalSliderLighten->setMinimumSize(QSize(0, 0));
        horizontalSliderLighten->setMaximumSize(QSize(16777215, 16777215));
        horizontalSliderLighten->setMaximum(100);
        horizontalSliderLighten->setOrientation(Qt::Horizontal);

        gridLayout_11->addWidget(horizontalSliderLighten, 1, 0, 1, 3);


        verticalLayout_3->addLayout(gridLayout_11);

        line_ShadowsHighlights = new QFrame(frameProcessing);
        line_ShadowsHighlights->setObjectName("line_ShadowsHighlights");
        line_ShadowsHighlights->setStyleSheet(QString::fromUtf8("background-color: rgb(115, 115, 115);"));
        line_ShadowsHighlights->setFrameShape(QFrame::Shape::HLine);
        line_ShadowsHighlights->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout_3->addWidget(line_ShadowsHighlights);

        checkBoxHighLightReconstruction = new QCheckBox(frameProcessing);
        checkBoxHighLightReconstruction->setObjectName("checkBoxHighLightReconstruction");
        checkBoxHighLightReconstruction->setFont(font);

        verticalLayout_3->addWidget(checkBoxHighLightReconstruction);

        gridLayout_Highlights = new QGridLayout();
        gridLayout_Highlights->setSpacing(0);
        gridLayout_Highlights->setObjectName("gridLayout_Highlights");
        label_highlights = new QLabel(frameProcessing);
        label_highlights->setObjectName("label_highlights");
        label_highlights->setFont(font);

        gridLayout_Highlights->addWidget(label_highlights, 1, 0, 1, 2);

        horizontalSliderHighlights = new NoScrollSlider(frameProcessing);
        horizontalSliderHighlights->setObjectName("horizontalSliderHighlights");
        sizePolicy3.setHeightForWidth(horizontalSliderHighlights->sizePolicy().hasHeightForWidth());
        horizontalSliderHighlights->setSizePolicy(sizePolicy3);
        horizontalSliderHighlights->setMinimumSize(QSize(0, 0));
        horizontalSliderHighlights->setMaximumSize(QSize(16777215, 16777215));
        horizontalSliderHighlights->setMinimum(-100);
        horizontalSliderHighlights->setMaximum(100);
        horizontalSliderHighlights->setOrientation(Qt::Horizontal);

        gridLayout_Highlights->addWidget(horizontalSliderHighlights, 2, 0, 1, 4);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        gridLayout_Highlights->addItem(horizontalSpacer_16, 1, 2, 1, 1);

        label_HighlightsVal = new DoubleClickLabel(frameProcessing);
        label_HighlightsVal->setObjectName("label_HighlightsVal");
        label_HighlightsVal->setFont(font);
        label_HighlightsVal->setLayoutDirection(Qt::RightToLeft);
        label_HighlightsVal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_Highlights->addWidget(label_HighlightsVal, 1, 3, 1, 1);


        verticalLayout_3->addLayout(gridLayout_Highlights);

        gridLayout_Shadow = new QGridLayout();
        gridLayout_Shadow->setSpacing(0);
        gridLayout_Shadow->setObjectName("gridLayout_Shadow");
        label_ShadowsVal = new DoubleClickLabel(frameProcessing);
        label_ShadowsVal->setObjectName("label_ShadowsVal");
        label_ShadowsVal->setFont(font);
        label_ShadowsVal->setLayoutDirection(Qt::RightToLeft);
        label_ShadowsVal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_Shadow->addWidget(label_ShadowsVal, 0, 3, 1, 1);

        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        gridLayout_Shadow->addItem(horizontalSpacer_17, 0, 2, 1, 1);

        label_shadows = new QLabel(frameProcessing);
        label_shadows->setObjectName("label_shadows");
        label_shadows->setFont(font);

        gridLayout_Shadow->addWidget(label_shadows, 0, 0, 1, 2);

        horizontalSliderShadows = new NoScrollSlider(frameProcessing);
        horizontalSliderShadows->setObjectName("horizontalSliderShadows");
        sizePolicy3.setHeightForWidth(horizontalSliderShadows->sizePolicy().hasHeightForWidth());
        horizontalSliderShadows->setSizePolicy(sizePolicy3);
        horizontalSliderShadows->setMinimumSize(QSize(0, 0));
        horizontalSliderShadows->setMaximumSize(QSize(16777215, 16777215));
        horizontalSliderShadows->setMinimum(-100);
        horizontalSliderShadows->setMaximum(100);
        horizontalSliderShadows->setOrientation(Qt::Horizontal);

        gridLayout_Shadow->addWidget(horizontalSliderShadows, 1, 0, 1, 4);


        verticalLayout_3->addLayout(gridLayout_Shadow);

        line = new QFrame(frameProcessing);
        line->setObjectName("line");
        line->setStyleSheet(QString::fromUtf8("background-color: rgb(115, 115, 115);"));
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout_3->addWidget(line);

        horizontalLayout_37 = new QHBoxLayout();
        horizontalLayout_37->setSpacing(0);
        horizontalLayout_37->setObjectName("horizontalLayout_37");
        label_gradationcurves = new QLabel(frameProcessing);
        label_gradationcurves->setObjectName("label_gradationcurves");
        label_gradationcurves->setFont(font);

        horizontalLayout_37->addWidget(label_gradationcurves);

        horizontalSpacer_40 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_37->addItem(horizontalSpacer_40);

        toolButtonGCurvesResetOne = new QToolButton(frameProcessing);
        toolButtonGCurvesResetOne->setObjectName("toolButtonGCurvesResetOne");
        sizePolicy.setHeightForWidth(toolButtonGCurvesResetOne->sizePolicy().hasHeightForWidth());
        toolButtonGCurvesResetOne->setSizePolicy(sizePolicy);
        QIcon icon38;
        icon38.addFile(QString::fromUtf8(":/RetinaIMG/RetinaIMG/Reload-icon-2.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        toolButtonGCurvesResetOne->setIcon(icon38);
        toolButtonGCurvesResetOne->setIconSize(QSize(12, 12));

        horizontalLayout_37->addWidget(toolButtonGCurvesResetOne);

        toolButtonGCurvesReset = new QToolButton(frameProcessing);
        toolButtonGCurvesReset->setObjectName("toolButtonGCurvesReset");
        sizePolicy.setHeightForWidth(toolButtonGCurvesReset->sizePolicy().hasHeightForWidth());
        toolButtonGCurvesReset->setSizePolicy(sizePolicy);
        toolButtonGCurvesReset->setFont(font);
        QIcon icon39;
        icon39.addFile(QString::fromUtf8(":/RetinaIMG/RetinaIMG/Reload-icon-1.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        toolButtonGCurvesReset->setIcon(icon39);
        toolButtonGCurvesReset->setIconSize(QSize(12, 12));

        horizontalLayout_37->addWidget(toolButtonGCurvesReset);


        verticalLayout_3->addLayout(horizontalLayout_37);

        horizontalLayout_35 = new QHBoxLayout();
        horizontalLayout_35->setSpacing(6);
        horizontalLayout_35->setObjectName("horizontalLayout_35");
        labelCurves = new Curves(frameProcessing);
        labelCurves->setObjectName("labelCurves");
        labelCurves->setScaledContents(true);
        labelCurves->setAlignment(Qt::AlignCenter);

        horizontalLayout_35->addWidget(labelCurves);


        verticalLayout_3->addLayout(horizontalLayout_35);

        toolButtonGCurves = new QFrame(frameProcessing);
        toolButtonGCurves->setObjectName("toolButtonGCurves");
        horizontalLayout_34 = new QHBoxLayout(toolButtonGCurves);
        horizontalLayout_34->setSpacing(0);
        horizontalLayout_34->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_34->setObjectName("horizontalLayout_34");
        horizontalLayout_34->setContentsMargins(0, 0, 0, 0);
        toolButtonGCurvesY = new ColorToolButton(toolButtonGCurves);
        toolButtonGCurvesY->setObjectName("toolButtonGCurvesY");
        sizePolicy.setHeightForWidth(toolButtonGCurvesY->sizePolicy().hasHeightForWidth());
        toolButtonGCurvesY->setSizePolicy(sizePolicy);
        toolButtonGCurvesY->setFont(font);
        toolButtonGCurvesY->setCheckable(true);
        toolButtonGCurvesY->setChecked(true);
        toolButtonGCurvesY->setAutoExclusive(true);

        horizontalLayout_34->addWidget(toolButtonGCurvesY);

        toolButtonGCurvesR = new ColorToolButton(toolButtonGCurves);
        toolButtonGCurvesR->setObjectName("toolButtonGCurvesR");
        sizePolicy.setHeightForWidth(toolButtonGCurvesR->sizePolicy().hasHeightForWidth());
        toolButtonGCurvesR->setSizePolicy(sizePolicy);
        toolButtonGCurvesR->setFont(font);
        toolButtonGCurvesR->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        toolButtonGCurvesR->setCheckable(true);
        toolButtonGCurvesR->setAutoExclusive(true);

        horizontalLayout_34->addWidget(toolButtonGCurvesR);

        toolButtonGCurvesG = new ColorToolButton(toolButtonGCurves);
        toolButtonGCurvesG->setObjectName("toolButtonGCurvesG");
        sizePolicy.setHeightForWidth(toolButtonGCurvesG->sizePolicy().hasHeightForWidth());
        toolButtonGCurvesG->setSizePolicy(sizePolicy);
        toolButtonGCurvesG->setFont(font);
        toolButtonGCurvesG->setStyleSheet(QString::fromUtf8("color: rgb(0, 255, 0);"));
        toolButtonGCurvesG->setCheckable(true);
        toolButtonGCurvesG->setAutoExclusive(true);

        horizontalLayout_34->addWidget(toolButtonGCurvesG);

        toolButtonGCurvesB = new ColorToolButton(toolButtonGCurves);
        toolButtonGCurvesB->setObjectName("toolButtonGCurvesB");
        sizePolicy.setHeightForWidth(toolButtonGCurvesB->sizePolicy().hasHeightForWidth());
        toolButtonGCurvesB->setSizePolicy(sizePolicy);
        toolButtonGCurvesB->setFont(font);
        toolButtonGCurvesB->setStyleSheet(QString::fromUtf8("color: rgb(48, 152, 255);"));
        toolButtonGCurvesB->setCheckable(true);
        toolButtonGCurvesB->setAutoExclusive(true);

        horizontalLayout_34->addWidget(toolButtonGCurvesB);

        horizontalSpacer_35 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_34->addItem(horizontalSpacer_35);


        verticalLayout_3->addWidget(toolButtonGCurves);


        gridLayout_14->addWidget(frameProcessing, 0, 0, 1, 1);


        verticalLayoutScrollArea->addWidget(groupBoxProcessing);

        groupBoxProfiles = new QGroupBox(scrollAreaWidgetContents);
        groupBoxProfiles->setObjectName("groupBoxProfiles");
        groupBoxProfiles->setCheckable(true);
        gridLayout_63 = new QGridLayout(groupBoxProfiles);
        gridLayout_63->setSpacing(6);
        gridLayout_63->setContentsMargins(11, 11, 11, 11);
        gridLayout_63->setObjectName("gridLayout_63");
        gridLayout_63->setContentsMargins(5, 5, 5, 5);
        frameProfiles = new QFrame(groupBoxProfiles);
        frameProfiles->setObjectName("frameProfiles");
        gridLayout_62 = new QGridLayout(frameProfiles);
        gridLayout_62->setSpacing(5);
        gridLayout_62->setContentsMargins(11, 11, 11, 11);
        gridLayout_62->setObjectName("gridLayout_62");
        gridLayout_62->setContentsMargins(0, 0, 0, 0);
        label_TransferFunction = new QLabel(frameProfiles);
        label_TransferFunction->setObjectName("label_TransferFunction");
        label_TransferFunction->setFont(font);

        gridLayout_62->addWidget(label_TransferFunction, 8, 0, 1, 1);

        checkBoxCreativeAdjustments = new QCheckBox(frameProfiles);
        checkBoxCreativeAdjustments->setObjectName("checkBoxCreativeAdjustments");
        checkBoxCreativeAdjustments->setEnabled(true);
        checkBoxCreativeAdjustments->setFont(font);
        checkBoxCreativeAdjustments->setLayoutDirection(Qt::LeftToRight);

        gridLayout_62->addWidget(checkBoxCreativeAdjustments, 10, 0, 1, 1);

        label_TonemappingFunction = new QLabel(frameProfiles);
        label_TonemappingFunction->setObjectName("label_TonemappingFunction");
        label_TonemappingFunction->setFont(font);

        gridLayout_62->addWidget(label_TonemappingFunction, 3, 0, 1, 1);

        label_Gamut = new QLabel(frameProfiles);
        label_Gamut->setObjectName("label_Gamut");
        label_Gamut->setFont(font);

        gridLayout_62->addWidget(label_Gamut, 5, 0, 1, 1);

        comboBoxProfile = new NoScrollComboBox(frameProfiles);
        comboBoxProfile->addItem(QString());
        comboBoxProfile->addItem(QString());
        comboBoxProfile->addItem(QString());
        comboBoxProfile->addItem(QString());
        comboBoxProfile->addItem(QString());
        comboBoxProfile->addItem(QString());
        comboBoxProfile->addItem(QString());
        comboBoxProfile->addItem(QString());
        comboBoxProfile->addItem(QString());
        comboBoxProfile->addItem(QString());
        comboBoxProfile->addItem(QString());
        comboBoxProfile->addItem(QString());
        comboBoxProfile->addItem(QString());
        comboBoxProfile->addItem(QString());
        comboBoxProfile->setObjectName("comboBoxProfile");
        comboBoxProfile->setMinimumSize(QSize(0, 0));
        comboBoxProfile->setFont(font);

        gridLayout_62->addWidget(comboBoxProfile, 1, 0, 1, 1);

        comboBoxProcessingGamut = new NoScrollComboBox(frameProfiles);
        comboBoxProcessingGamut->addItem(QString());
        comboBoxProcessingGamut->addItem(QString());
        comboBoxProcessingGamut->addItem(QString());
        comboBoxProcessingGamut->addItem(QString());
        comboBoxProcessingGamut->addItem(QString());
        comboBoxProcessingGamut->addItem(QString());
        comboBoxProcessingGamut->addItem(QString());
        comboBoxProcessingGamut->addItem(QString());
        comboBoxProcessingGamut->addItem(QString());
        comboBoxProcessingGamut->addItem(QString());
        comboBoxProcessingGamut->addItem(QString());
        comboBoxProcessingGamut->addItem(QString());
        comboBoxProcessingGamut->setObjectName("comboBoxProcessingGamut");
        comboBoxProcessingGamut->setMinimumSize(QSize(0, 0));
        comboBoxProcessingGamut->setFont(font);

        gridLayout_62->addWidget(comboBoxProcessingGamut, 6, 0, 1, 1);

        gridLayout_64 = new QGridLayout();
        gridLayout_64->setSpacing(0);
        gridLayout_64->setObjectName("gridLayout_64");
        label_GammaText = new QLabel(frameProfiles);
        label_GammaText->setObjectName("label_GammaText");
        label_GammaText->setFont(font);

        gridLayout_64->addWidget(label_GammaText, 0, 0, 1, 1);

        horizontalSpacer_Gamma = new QSpacerItem(40, 20, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        gridLayout_64->addItem(horizontalSpacer_Gamma, 0, 1, 1, 1);

        label_GammaVal = new DoubleClickLabel(frameProfiles);
        label_GammaVal->setObjectName("label_GammaVal");
        label_GammaVal->setFont(font);
        label_GammaVal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_64->addWidget(label_GammaVal, 0, 2, 1, 1);

        horizontalSliderGamma = new NoScrollSlider(frameProfiles);
        horizontalSliderGamma->setObjectName("horizontalSliderGamma");
        sizePolicy3.setHeightForWidth(horizontalSliderGamma->sizePolicy().hasHeightForWidth());
        horizontalSliderGamma->setSizePolicy(sizePolicy3);
        horizontalSliderGamma->setMaximumSize(QSize(16777215, 16777215));
        horizontalSliderGamma->setMinimum(1);
        horizontalSliderGamma->setMaximum(400);
        horizontalSliderGamma->setValue(100);
        horizontalSliderGamma->setSliderPosition(100);
        horizontalSliderGamma->setOrientation(Qt::Horizontal);

        gridLayout_64->addWidget(horizontalSliderGamma, 1, 0, 1, 3);


        gridLayout_62->addLayout(gridLayout_64, 7, 0, 1, 1);

        line_27 = new QFrame(frameProfiles);
        line_27->setObjectName("line_27");
        line_27->setStyleSheet(QString::fromUtf8("background-color: rgb(115, 115, 115);"));
        line_27->setFrameShape(QFrame::Shape::HLine);
        line_27->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_62->addWidget(line_27, 2, 0, 1, 1);

        label_39 = new QLabel(frameProfiles);
        label_39->setObjectName("label_39");
        label_39->setFont(font);

        gridLayout_62->addWidget(label_39, 12, 0, 1, 1);

        comboBoxUseCameraMatrix = new NoScrollComboBox(frameProfiles);
        comboBoxUseCameraMatrix->addItem(QString());
        comboBoxUseCameraMatrix->addItem(QString());
        comboBoxUseCameraMatrix->addItem(QString());
        comboBoxUseCameraMatrix->setObjectName("comboBoxUseCameraMatrix");
        comboBoxUseCameraMatrix->setFont(font);

        gridLayout_62->addWidget(comboBoxUseCameraMatrix, 13, 0, 1, 1);

        checkBoxExrMode = new QCheckBox(frameProfiles);
        checkBoxExrMode->setObjectName("checkBoxExrMode");
        checkBoxExrMode->setFont(font);

        gridLayout_62->addWidget(checkBoxExrMode, 14, 0, 1, 1);

        lineEditTransferFunction = new QLineEdit(frameProfiles);
        lineEditTransferFunction->setObjectName("lineEditTransferFunction");
        lineEditTransferFunction->setFont(font);

        gridLayout_62->addWidget(lineEditTransferFunction, 9, 0, 1, 1);

        comboBoxTonemapFct = new NoScrollComboBox(frameProfiles);
        comboBoxTonemapFct->addItem(QString());
        comboBoxTonemapFct->addItem(QString());
        comboBoxTonemapFct->addItem(QString());
        comboBoxTonemapFct->addItem(QString());
        comboBoxTonemapFct->addItem(QString());
        comboBoxTonemapFct->addItem(QString());
        comboBoxTonemapFct->addItem(QString());
        comboBoxTonemapFct->addItem(QString());
        comboBoxTonemapFct->addItem(QString());
        comboBoxTonemapFct->addItem(QString());
        comboBoxTonemapFct->addItem(QString());
        comboBoxTonemapFct->setObjectName("comboBoxTonemapFct");
        comboBoxTonemapFct->setMinimumSize(QSize(0, 0));
        comboBoxTonemapFct->setFont(font);

        gridLayout_62->addWidget(comboBoxTonemapFct, 4, 0, 1, 1);

        line_20 = new QFrame(frameProfiles);
        line_20->setObjectName("line_20");
        line_20->setStyleSheet(QString::fromUtf8("background-color: rgb(115, 115, 115);"));
        line_20->setFrameShape(QFrame::Shape::HLine);
        line_20->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_62->addWidget(line_20, 11, 0, 1, 1);

        label_ProcessingProfile = new QLabel(frameProfiles);
        label_ProcessingProfile->setObjectName("label_ProcessingProfile");
        label_ProcessingProfile->setFont(font);

        gridLayout_62->addWidget(label_ProcessingProfile, 0, 0, 1, 1);

        checkBoxAgX = new QCheckBox(frameProfiles);
        checkBoxAgX->setObjectName("checkBoxAgX");
        checkBoxAgX->setFont(font);

        gridLayout_62->addWidget(checkBoxAgX, 15, 0, 1, 1);


        gridLayout_63->addWidget(frameProfiles, 0, 0, 1, 1);


        verticalLayoutScrollArea->addWidget(groupBoxProfiles);

        groupBoxDetails = new QGroupBox(scrollAreaWidgetContents);
        groupBoxDetails->setObjectName("groupBoxDetails");
        groupBoxDetails->setCheckable(true);
        gridLayout = new QGridLayout(groupBoxDetails);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(5, 5, 5, 5);
        frameDetails = new QFrame(groupBoxDetails);
        frameDetails->setObjectName("frameDetails");
        verticalLayout_4 = new QVBoxLayout(frameDetails);
        verticalLayout_4->setSpacing(5);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        checkBoxChromaSeparation = new QCheckBox(frameDetails);
        checkBoxChromaSeparation->setObjectName("checkBoxChromaSeparation");
        checkBoxChromaSeparation->setFont(font);

        verticalLayout_4->addWidget(checkBoxChromaSeparation);

        gridLayout_12 = new QGridLayout();
        gridLayout_12->setSpacing(0);
        gridLayout_12->setObjectName("gridLayout_12");
        label_10 = new QLabel(frameDetails);
        label_10->setObjectName("label_10");
        label_10->setFont(font);

        gridLayout_12->addWidget(label_10, 0, 0, 1, 1);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        gridLayout_12->addItem(horizontalSpacer_10, 0, 1, 1, 1);

        label_Sharpen = new DoubleClickLabel(frameDetails);
        label_Sharpen->setObjectName("label_Sharpen");
        label_Sharpen->setFont(font);
        label_Sharpen->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_12->addWidget(label_Sharpen, 0, 2, 1, 1);

        horizontalSliderSharpen = new NoScrollSlider(frameDetails);
        horizontalSliderSharpen->setObjectName("horizontalSliderSharpen");
        sizePolicy3.setHeightForWidth(horizontalSliderSharpen->sizePolicy().hasHeightForWidth());
        horizontalSliderSharpen->setSizePolicy(sizePolicy3);
        horizontalSliderSharpen->setMaximumSize(QSize(16777215, 16777215));
        horizontalSliderSharpen->setMaximum(100);
        horizontalSliderSharpen->setValue(0);
        horizontalSliderSharpen->setSliderPosition(0);
        horizontalSliderSharpen->setOrientation(Qt::Horizontal);

        gridLayout_12->addWidget(horizontalSliderSharpen, 1, 0, 1, 3);


        verticalLayout_4->addLayout(gridLayout_12);

        gridLayout_61 = new QGridLayout();
        gridLayout_61->setSpacing(0);
        gridLayout_61->setObjectName("gridLayout_61");
        label_ShMaskingText = new QLabel(frameDetails);
        label_ShMaskingText->setObjectName("label_ShMaskingText");
        label_ShMaskingText->setFont(font);

        gridLayout_61->addWidget(label_ShMaskingText, 0, 0, 1, 1);

        horizontalSpacer_57 = new QSpacerItem(40, 20, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        gridLayout_61->addItem(horizontalSpacer_57, 0, 1, 1, 1);

        label_ShMasking = new DoubleClickLabel(frameDetails);
        label_ShMasking->setObjectName("label_ShMasking");
        label_ShMasking->setFont(font);
        label_ShMasking->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_61->addWidget(label_ShMasking, 0, 2, 1, 1);

        horizontalSliderShMasking = new NoScrollSlider(frameDetails);
        horizontalSliderShMasking->setObjectName("horizontalSliderShMasking");
        sizePolicy3.setHeightForWidth(horizontalSliderShMasking->sizePolicy().hasHeightForWidth());
        horizontalSliderShMasking->setSizePolicy(sizePolicy3);
        horizontalSliderShMasking->setMaximumSize(QSize(16777215, 16777215));
        horizontalSliderShMasking->setMaximum(100);
        horizontalSliderShMasking->setValue(0);
        horizontalSliderShMasking->setSliderPosition(0);
        horizontalSliderShMasking->setOrientation(Qt::Horizontal);

        gridLayout_61->addWidget(horizontalSliderShMasking, 1, 0, 1, 3);


        verticalLayout_4->addLayout(gridLayout_61);

        gridLayout_13 = new QGridLayout();
        gridLayout_13->setSpacing(0);
        gridLayout_13->setObjectName("gridLayout_13");
        label_ChromaBlur = new DoubleClickLabel(frameDetails);
        label_ChromaBlur->setObjectName("label_ChromaBlur");
        label_ChromaBlur->setEnabled(false);
        label_ChromaBlur->setFont(font);
        label_ChromaBlur->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_13->addWidget(label_ChromaBlur, 0, 2, 1, 1);

        horizontalSliderChromaBlur = new NoScrollSlider(frameDetails);
        horizontalSliderChromaBlur->setObjectName("horizontalSliderChromaBlur");
        horizontalSliderChromaBlur->setEnabled(false);
        sizePolicy3.setHeightForWidth(horizontalSliderChromaBlur->sizePolicy().hasHeightForWidth());
        horizontalSliderChromaBlur->setSizePolicy(sizePolicy3);
        horizontalSliderChromaBlur->setMaximumSize(QSize(16777215, 16777215));
        horizontalSliderChromaBlur->setMaximum(10);
        horizontalSliderChromaBlur->setPageStep(1);
        horizontalSliderChromaBlur->setOrientation(Qt::Horizontal);

        gridLayout_13->addWidget(horizontalSliderChromaBlur, 1, 0, 1, 3);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        gridLayout_13->addItem(horizontalSpacer_11, 0, 1, 1, 1);

        label_ChromaBlurText = new QLabel(frameDetails);
        label_ChromaBlurText->setObjectName("label_ChromaBlurText");
        label_ChromaBlurText->setEnabled(false);
        label_ChromaBlurText->setFont(font);

        gridLayout_13->addWidget(label_ChromaBlurText, 0, 0, 1, 1);


        verticalLayout_4->addLayout(gridLayout_13);

        line_19 = new QFrame(frameDetails);
        line_19->setObjectName("line_19");
        line_19->setStyleSheet(QString::fromUtf8("background-color: rgb(115, 115, 115);"));
        line_19->setFrameShape(QFrame::Shape::HLine);
        line_19->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout_4->addWidget(line_19);

        horizontalLayout_31 = new QHBoxLayout();
        horizontalLayout_31->setSpacing(6);
        horizontalLayout_31->setObjectName("horizontalLayout_31");
        label_32 = new QLabel(frameDetails);
        label_32->setObjectName("label_32");
        label_32->setFont(font);

        horizontalLayout_31->addWidget(label_32);

        comboBoxDenoiseWindow = new NoScrollComboBox(frameDetails);
        comboBoxDenoiseWindow->addItem(QString());
        comboBoxDenoiseWindow->addItem(QString());
        comboBoxDenoiseWindow->addItem(QString());
        comboBoxDenoiseWindow->addItem(QString());
        comboBoxDenoiseWindow->addItem(QString());
        comboBoxDenoiseWindow->addItem(QString());
        comboBoxDenoiseWindow->setObjectName("comboBoxDenoiseWindow");
        comboBoxDenoiseWindow->setFont(font);

        horizontalLayout_31->addWidget(comboBoxDenoiseWindow);


        verticalLayout_4->addLayout(horizontalLayout_31);

        gridLayout_36 = new QGridLayout();
        gridLayout_36->setSpacing(0);
        gridLayout_36->setObjectName("gridLayout_36");
        label_31 = new QLabel(frameDetails);
        label_31->setObjectName("label_31");
        label_31->setFont(font);

        gridLayout_36->addWidget(label_31, 0, 0, 1, 1);

        horizontalSpacer_31 = new QSpacerItem(40, 20, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        gridLayout_36->addItem(horizontalSpacer_31, 0, 1, 1, 1);

        label_DenoiseStrength = new DoubleClickLabel(frameDetails);
        label_DenoiseStrength->setObjectName("label_DenoiseStrength");
        label_DenoiseStrength->setFont(font);
        label_DenoiseStrength->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_36->addWidget(label_DenoiseStrength, 0, 2, 1, 1);

        horizontalSliderDenoiseStrength = new NoScrollSlider(frameDetails);
        horizontalSliderDenoiseStrength->setObjectName("horizontalSliderDenoiseStrength");
        sizePolicy3.setHeightForWidth(horizontalSliderDenoiseStrength->sizePolicy().hasHeightForWidth());
        horizontalSliderDenoiseStrength->setSizePolicy(sizePolicy3);
        horizontalSliderDenoiseStrength->setMaximumSize(QSize(16777215, 16777215));
        horizontalSliderDenoiseStrength->setMaximum(100);
        horizontalSliderDenoiseStrength->setValue(0);
        horizontalSliderDenoiseStrength->setSliderPosition(0);
        horizontalSliderDenoiseStrength->setOrientation(Qt::Horizontal);

        gridLayout_36->addWidget(horizontalSliderDenoiseStrength, 1, 0, 1, 3);


        verticalLayout_4->addLayout(gridLayout_36);

        line_21 = new QFrame(frameDetails);
        line_21->setObjectName("line_21");
        line_21->setStyleSheet(QString::fromUtf8("background-color: rgb(115, 115, 115);"));
        line_21->setFrameShape(QFrame::Shape::HLine);
        line_21->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout_4->addWidget(line_21);

        gridLayout_50 = new QGridLayout();
        gridLayout_50->setSpacing(0);
        gridLayout_50->setObjectName("gridLayout_50");
        horizontalSpacer_46 = new QSpacerItem(40, 20, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        gridLayout_50->addItem(horizontalSpacer_46, 0, 1, 1, 1);

        label_RbfDenoiseLuma = new DoubleClickLabel(frameDetails);
        label_RbfDenoiseLuma->setObjectName("label_RbfDenoiseLuma");
        label_RbfDenoiseLuma->setFont(font);
        label_RbfDenoiseLuma->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_50->addWidget(label_RbfDenoiseLuma, 0, 2, 1, 1);

        label_35 = new QLabel(frameDetails);
        label_35->setObjectName("label_35");
        label_35->setFont(font);

        gridLayout_50->addWidget(label_35, 0, 0, 1, 1);

        horizontalSliderRbfDenoiseLuma = new NoScrollSlider(frameDetails);
        horizontalSliderRbfDenoiseLuma->setObjectName("horizontalSliderRbfDenoiseLuma");
        sizePolicy3.setHeightForWidth(horizontalSliderRbfDenoiseLuma->sizePolicy().hasHeightForWidth());
        horizontalSliderRbfDenoiseLuma->setSizePolicy(sizePolicy3);
        horizontalSliderRbfDenoiseLuma->setMaximumSize(QSize(16777215, 16777215));
        horizontalSliderRbfDenoiseLuma->setMaximum(100);
        horizontalSliderRbfDenoiseLuma->setValue(0);
        horizontalSliderRbfDenoiseLuma->setSliderPosition(0);
        horizontalSliderRbfDenoiseLuma->setOrientation(Qt::Horizontal);

        gridLayout_50->addWidget(horizontalSliderRbfDenoiseLuma, 1, 0, 1, 3);


        verticalLayout_4->addLayout(gridLayout_50);

        gridLayout_49 = new QGridLayout();
        gridLayout_49->setSpacing(0);
        gridLayout_49->setObjectName("gridLayout_49");
        label_34 = new QLabel(frameDetails);
        label_34->setObjectName("label_34");
        label_34->setFont(font);

        gridLayout_49->addWidget(label_34, 0, 0, 1, 1);

        label_RbfDenoiseChroma = new DoubleClickLabel(frameDetails);
        label_RbfDenoiseChroma->setObjectName("label_RbfDenoiseChroma");
        label_RbfDenoiseChroma->setFont(font);
        label_RbfDenoiseChroma->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_49->addWidget(label_RbfDenoiseChroma, 0, 2, 1, 1);

        horizontalSliderRbfDenoiseChroma = new NoScrollSlider(frameDetails);
        horizontalSliderRbfDenoiseChroma->setObjectName("horizontalSliderRbfDenoiseChroma");
        sizePolicy3.setHeightForWidth(horizontalSliderRbfDenoiseChroma->sizePolicy().hasHeightForWidth());
        horizontalSliderRbfDenoiseChroma->setSizePolicy(sizePolicy3);
        horizontalSliderRbfDenoiseChroma->setMaximumSize(QSize(16777215, 16777215));
        horizontalSliderRbfDenoiseChroma->setMaximum(100);
        horizontalSliderRbfDenoiseChroma->setValue(0);
        horizontalSliderRbfDenoiseChroma->setSliderPosition(0);
        horizontalSliderRbfDenoiseChroma->setOrientation(Qt::Horizontal);

        gridLayout_49->addWidget(horizontalSliderRbfDenoiseChroma, 1, 0, 1, 3);

        horizontalSpacer_44 = new QSpacerItem(40, 20, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        gridLayout_49->addItem(horizontalSpacer_44, 0, 1, 1, 1);


        verticalLayout_4->addLayout(gridLayout_49);

        gridLayout_51 = new QGridLayout();
        gridLayout_51->setSpacing(0);
        gridLayout_51->setObjectName("gridLayout_51");
        label_RbfDenoiseRange = new DoubleClickLabel(frameDetails);
        label_RbfDenoiseRange->setObjectName("label_RbfDenoiseRange");
        label_RbfDenoiseRange->setFont(font);
        label_RbfDenoiseRange->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_51->addWidget(label_RbfDenoiseRange, 0, 2, 1, 1);

        label_36 = new QLabel(frameDetails);
        label_36->setObjectName("label_36");
        label_36->setFont(font);

        gridLayout_51->addWidget(label_36, 0, 0, 1, 1);

        horizontalSliderRbfDenoiseRange = new NoScrollSlider(frameDetails);
        horizontalSliderRbfDenoiseRange->setObjectName("horizontalSliderRbfDenoiseRange");
        sizePolicy3.setHeightForWidth(horizontalSliderRbfDenoiseRange->sizePolicy().hasHeightForWidth());
        horizontalSliderRbfDenoiseRange->setSizePolicy(sizePolicy3);
        horizontalSliderRbfDenoiseRange->setMaximumSize(QSize(16777215, 16777215));
        horizontalSliderRbfDenoiseRange->setMaximum(100);
        horizontalSliderRbfDenoiseRange->setValue(40);
        horizontalSliderRbfDenoiseRange->setSliderPosition(40);
        horizontalSliderRbfDenoiseRange->setOrientation(Qt::Horizontal);

        gridLayout_51->addWidget(horizontalSliderRbfDenoiseRange, 1, 0, 1, 3);

        horizontalSpacer_47 = new QSpacerItem(40, 20, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        gridLayout_51->addItem(horizontalSpacer_47, 0, 1, 1, 1);


        verticalLayout_4->addLayout(gridLayout_51);

        line_24 = new QFrame(frameDetails);
        line_24->setObjectName("line_24");
        line_24->setStyleSheet(QString::fromUtf8("background-color: rgb(115, 115, 115);"));
        line_24->setFrameShape(QFrame::Shape::HLine);
        line_24->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout_4->addWidget(line_24);

        gridLayout_52 = new QGridLayout();
        gridLayout_52->setSpacing(0);
        gridLayout_52->setObjectName("gridLayout_52");
        label_37 = new QLabel(frameDetails);
        label_37->setObjectName("label_37");
        label_37->setFont(font);

        gridLayout_52->addWidget(label_37, 0, 0, 1, 1);

        label_GrainStrength = new DoubleClickLabel(frameDetails);
        label_GrainStrength->setObjectName("label_GrainStrength");
        label_GrainStrength->setFont(font);
        label_GrainStrength->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_52->addWidget(label_GrainStrength, 0, 2, 1, 1);

        horizontalSliderGrainStrength = new NoScrollSlider(frameDetails);
        horizontalSliderGrainStrength->setObjectName("horizontalSliderGrainStrength");
        sizePolicy3.setHeightForWidth(horizontalSliderGrainStrength->sizePolicy().hasHeightForWidth());
        horizontalSliderGrainStrength->setSizePolicy(sizePolicy3);
        horizontalSliderGrainStrength->setMaximumSize(QSize(16777215, 16777215));
        horizontalSliderGrainStrength->setMaximum(100);
        horizontalSliderGrainStrength->setValue(0);
        horizontalSliderGrainStrength->setSliderPosition(0);
        horizontalSliderGrainStrength->setOrientation(Qt::Horizontal);

        gridLayout_52->addWidget(horizontalSliderGrainStrength, 1, 0, 1, 3);

        horizontalSpacer_48 = new QSpacerItem(40, 20, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        gridLayout_52->addItem(horizontalSpacer_48, 0, 1, 1, 1);


        verticalLayout_4->addLayout(gridLayout_52);

        gridLayout_69 = new QGridLayout();
        gridLayout_69->setSpacing(0);
        gridLayout_69->setObjectName("gridLayout_69");
        label_40 = new QLabel(frameDetails);
        label_40->setObjectName("label_40");
        label_40->setFont(font);

        gridLayout_69->addWidget(label_40, 0, 0, 1, 1);

        label_GrainLumaWeight = new DoubleClickLabel(frameDetails);
        label_GrainLumaWeight->setObjectName("label_GrainLumaWeight");
        label_GrainLumaWeight->setFont(font);
        label_GrainLumaWeight->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_69->addWidget(label_GrainLumaWeight, 0, 2, 1, 1);

        horizontalSliderGrainLumaWeight = new NoScrollSlider(frameDetails);
        horizontalSliderGrainLumaWeight->setObjectName("horizontalSliderGrainLumaWeight");
        sizePolicy3.setHeightForWidth(horizontalSliderGrainLumaWeight->sizePolicy().hasHeightForWidth());
        horizontalSliderGrainLumaWeight->setSizePolicy(sizePolicy3);
        horizontalSliderGrainLumaWeight->setMaximumSize(QSize(16777215, 16777215));
        horizontalSliderGrainLumaWeight->setMaximum(100);
        horizontalSliderGrainLumaWeight->setValue(0);
        horizontalSliderGrainLumaWeight->setSliderPosition(0);
        horizontalSliderGrainLumaWeight->setOrientation(Qt::Horizontal);

        gridLayout_69->addWidget(horizontalSliderGrainLumaWeight, 1, 0, 1, 3);

        horizontalSpacer_63 = new QSpacerItem(40, 20, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        gridLayout_69->addItem(horizontalSpacer_63, 0, 1, 1, 1);


        verticalLayout_4->addLayout(gridLayout_69);


        gridLayout->addWidget(frameDetails, 0, 0, 1, 1);


        verticalLayoutScrollArea->addWidget(groupBoxDetails);

        groupBoxHsl = new QGroupBox(scrollAreaWidgetContents);
        groupBoxHsl->setObjectName("groupBoxHsl");
        groupBoxHsl->setCheckable(true);
        gridLayout_42 = new QGridLayout(groupBoxHsl);
        gridLayout_42->setSpacing(6);
        gridLayout_42->setContentsMargins(11, 11, 11, 11);
        gridLayout_42->setObjectName("gridLayout_42");
        gridLayout_42->setContentsMargins(5, 5, 5, 5);
        frameHsl = new QFrame(groupBoxHsl);
        frameHsl->setObjectName("frameHsl");
        frameHsl->setFrameShape(QFrame::NoFrame);
        frameHsl->setFrameShadow(QFrame::Plain);
        verticalLayout_5 = new QVBoxLayout(frameHsl);
        verticalLayout_5->setSpacing(5);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_41 = new QHBoxLayout();
        horizontalLayout_41->setSpacing(0);
        horizontalLayout_41->setObjectName("horizontalLayout_41");
        label_hueVsHue = new QLabel(frameHsl);
        label_hueVsHue->setObjectName("label_hueVsHue");
        label_hueVsHue->setFont(font);

        horizontalLayout_41->addWidget(label_hueVsHue);

        horizontalSpacer_45 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_41->addItem(horizontalSpacer_45);

        toolButtonHueVsHueResetDefaultPoints = new QToolButton(frameHsl);
        toolButtonHueVsHueResetDefaultPoints->setObjectName("toolButtonHueVsHueResetDefaultPoints");
        sizePolicy.setHeightForWidth(toolButtonHueVsHueResetDefaultPoints->sizePolicy().hasHeightForWidth());
        toolButtonHueVsHueResetDefaultPoints->setSizePolicy(sizePolicy);
        QIcon icon40;
        icon40.addFile(QString::fromUtf8(":/RetinaIMG/RetinaIMG/Point-icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        toolButtonHueVsHueResetDefaultPoints->setIcon(icon40);
        toolButtonHueVsHueResetDefaultPoints->setIconSize(QSize(12, 12));

        horizontalLayout_41->addWidget(toolButtonHueVsHueResetDefaultPoints);

        toolButtonHueVsHueReset = new QToolButton(frameHsl);
        toolButtonHueVsHueReset->setObjectName("toolButtonHueVsHueReset");
        sizePolicy.setHeightForWidth(toolButtonHueVsHueReset->sizePolicy().hasHeightForWidth());
        toolButtonHueVsHueReset->setSizePolicy(sizePolicy);
        toolButtonHueVsHueReset->setIcon(icon38);
        toolButtonHueVsHueReset->setIconSize(QSize(12, 12));

        horizontalLayout_41->addWidget(toolButtonHueVsHueReset);


        verticalLayout_5->addLayout(horizontalLayout_41);

        horizontalLayout_42 = new QHBoxLayout();
        horizontalLayout_42->setSpacing(6);
        horizontalLayout_42->setObjectName("horizontalLayout_42");
        labelHueVsHue = new HueVsDiagram(frameHsl);
        labelHueVsHue->setObjectName("labelHueVsHue");
        labelHueVsHue->setAlignment(Qt::AlignCenter);

        horizontalLayout_42->addWidget(labelHueVsHue);


        verticalLayout_5->addLayout(horizontalLayout_42);

        line_23 = new QFrame(frameHsl);
        line_23->setObjectName("line_23");
        line_23->setStyleSheet(QString::fromUtf8("background-color: rgb(115, 115, 115);"));
        line_23->setFrameShape(QFrame::Shape::HLine);
        line_23->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout_5->addWidget(line_23);

        horizontalLayout_38 = new QHBoxLayout();
        horizontalLayout_38->setSpacing(0);
        horizontalLayout_38->setObjectName("horizontalLayout_38");
        label_hueVsSat = new QLabel(frameHsl);
        label_hueVsSat->setObjectName("label_hueVsSat");
        label_hueVsSat->setFont(font);

        horizontalLayout_38->addWidget(label_hueVsSat);

        horizontalSpacer_41 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_38->addItem(horizontalSpacer_41);

        toolButtonHueVsSatResetDefaultPoints = new QToolButton(frameHsl);
        toolButtonHueVsSatResetDefaultPoints->setObjectName("toolButtonHueVsSatResetDefaultPoints");
        sizePolicy.setHeightForWidth(toolButtonHueVsSatResetDefaultPoints->sizePolicy().hasHeightForWidth());
        toolButtonHueVsSatResetDefaultPoints->setSizePolicy(sizePolicy);
        toolButtonHueVsSatResetDefaultPoints->setIcon(icon40);
        toolButtonHueVsSatResetDefaultPoints->setIconSize(QSize(12, 12));

        horizontalLayout_38->addWidget(toolButtonHueVsSatResetDefaultPoints);

        toolButtonHueVsSatReset = new QToolButton(frameHsl);
        toolButtonHueVsSatReset->setObjectName("toolButtonHueVsSatReset");
        sizePolicy.setHeightForWidth(toolButtonHueVsSatReset->sizePolicy().hasHeightForWidth());
        toolButtonHueVsSatReset->setSizePolicy(sizePolicy);
        toolButtonHueVsSatReset->setIcon(icon38);
        toolButtonHueVsSatReset->setIconSize(QSize(12, 12));

        horizontalLayout_38->addWidget(toolButtonHueVsSatReset);


        verticalLayout_5->addLayout(horizontalLayout_38);

        horizontalLayout_36 = new QHBoxLayout();
        horizontalLayout_36->setSpacing(6);
        horizontalLayout_36->setObjectName("horizontalLayout_36");
        labelHueVsSat = new HueVsDiagram(frameHsl);
        labelHueVsSat->setObjectName("labelHueVsSat");
        labelHueVsSat->setAlignment(Qt::AlignCenter);

        horizontalLayout_36->addWidget(labelHueVsSat);


        verticalLayout_5->addLayout(horizontalLayout_36);

        line_22 = new QFrame(frameHsl);
        line_22->setObjectName("line_22");
        line_22->setStyleSheet(QString::fromUtf8("background-color: rgb(115, 115, 115);"));
        line_22->setFrameShape(QFrame::Shape::HLine);
        line_22->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout_5->addWidget(line_22);

        horizontalLayout_39 = new QHBoxLayout();
        horizontalLayout_39->setSpacing(0);
        horizontalLayout_39->setObjectName("horizontalLayout_39");
        label_hueVsLuma = new QLabel(frameHsl);
        label_hueVsLuma->setObjectName("label_hueVsLuma");
        label_hueVsLuma->setFont(font);

        horizontalLayout_39->addWidget(label_hueVsLuma);

        horizontalSpacer_42 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_39->addItem(horizontalSpacer_42);

        toolButtonHueVsLumaResetDefaultPoints = new QToolButton(frameHsl);
        toolButtonHueVsLumaResetDefaultPoints->setObjectName("toolButtonHueVsLumaResetDefaultPoints");
        sizePolicy.setHeightForWidth(toolButtonHueVsLumaResetDefaultPoints->sizePolicy().hasHeightForWidth());
        toolButtonHueVsLumaResetDefaultPoints->setSizePolicy(sizePolicy);
        toolButtonHueVsLumaResetDefaultPoints->setIcon(icon40);
        toolButtonHueVsLumaResetDefaultPoints->setIconSize(QSize(12, 12));

        horizontalLayout_39->addWidget(toolButtonHueVsLumaResetDefaultPoints);

        toolButtonHueVsLumaReset = new QToolButton(frameHsl);
        toolButtonHueVsLumaReset->setObjectName("toolButtonHueVsLumaReset");
        sizePolicy.setHeightForWidth(toolButtonHueVsLumaReset->sizePolicy().hasHeightForWidth());
        toolButtonHueVsLumaReset->setSizePolicy(sizePolicy);
        toolButtonHueVsLumaReset->setIcon(icon38);
        toolButtonHueVsLumaReset->setIconSize(QSize(12, 12));

        horizontalLayout_39->addWidget(toolButtonHueVsLumaReset);


        verticalLayout_5->addLayout(horizontalLayout_39);

        horizontalLayout_40 = new QHBoxLayout();
        horizontalLayout_40->setSpacing(6);
        horizontalLayout_40->setObjectName("horizontalLayout_40");
        labelHueVsLuma = new HueVsDiagram(frameHsl);
        labelHueVsLuma->setObjectName("labelHueVsLuma");
        labelHueVsLuma->setAlignment(Qt::AlignCenter);

        horizontalLayout_40->addWidget(labelHueVsLuma);


        verticalLayout_5->addLayout(horizontalLayout_40);

        line_28 = new QFrame(frameHsl);
        line_28->setObjectName("line_28");
        line_28->setStyleSheet(QString::fromUtf8("background-color: rgb(115, 115, 115);"));
        line_28->setFrameShape(QFrame::Shape::HLine);
        line_28->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout_5->addWidget(line_28);

        horizontalLayout_43 = new QHBoxLayout();
        horizontalLayout_43->setSpacing(0);
        horizontalLayout_43->setObjectName("horizontalLayout_43");
        label_lumaVsSat = new QLabel(frameHsl);
        label_lumaVsSat->setObjectName("label_lumaVsSat");
        label_lumaVsSat->setFont(font);

        horizontalLayout_43->addWidget(label_lumaVsSat);

        horizontalSpacer_59 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_43->addItem(horizontalSpacer_59);

        toolButtonLumaVsSatReset = new QToolButton(frameHsl);
        toolButtonLumaVsSatReset->setObjectName("toolButtonLumaVsSatReset");
        sizePolicy.setHeightForWidth(toolButtonLumaVsSatReset->sizePolicy().hasHeightForWidth());
        toolButtonLumaVsSatReset->setSizePolicy(sizePolicy);
        toolButtonLumaVsSatReset->setIcon(icon38);
        toolButtonLumaVsSatReset->setIconSize(QSize(12, 12));

        horizontalLayout_43->addWidget(toolButtonLumaVsSatReset);


        verticalLayout_5->addLayout(horizontalLayout_43);

        horizontalLayout_44 = new QHBoxLayout();
        horizontalLayout_44->setSpacing(6);
        horizontalLayout_44->setObjectName("horizontalLayout_44");
        labelLumaVsSat = new HueVsDiagram(frameHsl);
        labelLumaVsSat->setObjectName("labelLumaVsSat");
        labelLumaVsSat->setAlignment(Qt::AlignCenter);

        horizontalLayout_44->addWidget(labelLumaVsSat);


        verticalLayout_5->addLayout(horizontalLayout_44);


        gridLayout_42->addWidget(frameHsl, 0, 0, 1, 1);


        verticalLayoutScrollArea->addWidget(groupBoxHsl);

        groupBoxToning = new QGroupBox(scrollAreaWidgetContents);
        groupBoxToning->setObjectName("groupBoxToning");
        groupBoxToning->setCheckable(true);
        gridLayout_43 = new QGridLayout(groupBoxToning);
        gridLayout_43->setSpacing(6);
        gridLayout_43->setContentsMargins(11, 11, 11, 11);
        gridLayout_43->setObjectName("gridLayout_43");
        gridLayout_43->setContentsMargins(5, 5, 5, 5);
        frameToning = new QFrame(groupBoxToning);
        frameToning->setObjectName("frameToning");
        verticalLayout_10 = new QVBoxLayout(frameToning);
        verticalLayout_10->setSpacing(5);
        verticalLayout_10->setContentsMargins(11, 11, 11, 11);
        verticalLayout_10->setObjectName("verticalLayout_10");
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        gridLayout_44 = new QGridLayout();
        gridLayout_44->setSpacing(0);
        gridLayout_44->setObjectName("gridLayout_44");
        label_ToningColor = new QLabel(frameToning);
        label_ToningColor->setObjectName("label_ToningColor");
        label_ToningColor->setFont(font);
        label_ToningColor->setScaledContents(false);
        label_ToningColor->setAlignment(Qt::AlignCenter);

        gridLayout_44->addWidget(label_ToningColor, 0, 2, 1, 1);

        label_ToneVal = new DoubleClickLabel(frameToning);
        label_ToneVal->setObjectName("label_ToneVal");
        label_ToneVal->setFont(font);
        label_ToneVal->setContextMenuPolicy(Qt::CustomContextMenu);
        label_ToneVal->setLayoutDirection(Qt::RightToLeft);
        label_ToneVal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_44->addWidget(label_ToneVal, 0, 4, 1, 1);

        horizontalSliderTone = new NoScrollSlider(frameToning);
        horizontalSliderTone->setObjectName("horizontalSliderTone");
        sizePolicy3.setHeightForWidth(horizontalSliderTone->sizePolicy().hasHeightForWidth());
        horizontalSliderTone->setSizePolicy(sizePolicy3);
        horizontalSliderTone->setMinimumSize(QSize(0, 0));
        horizontalSliderTone->setMaximumSize(QSize(16777215, 16777215));
        horizontalSliderTone->setMinimum(0);
        horizontalSliderTone->setMaximum(255);
        horizontalSliderTone->setValue(0);
        horizontalSliderTone->setOrientation(Qt::Horizontal);

        gridLayout_44->addWidget(horizontalSliderTone, 1, 0, 1, 5);

        horizontalSpacer_36 = new QSpacerItem(40, 20, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        gridLayout_44->addItem(horizontalSpacer_36, 0, 3, 1, 1);

        label_ToneText = new QLabel(frameToning);
        label_ToneText->setObjectName("label_ToneText");
        label_ToneText->setFont(font);

        gridLayout_44->addWidget(label_ToneText, 0, 0, 1, 1);

        horizontalSpacer_38 = new QSpacerItem(40, 20, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        gridLayout_44->addItem(horizontalSpacer_38, 0, 1, 1, 1);


        verticalLayout_10->addLayout(gridLayout_44);

        gridLayout_45 = new QGridLayout();
        gridLayout_45->setSpacing(0);
        gridLayout_45->setObjectName("gridLayout_45");
        label_ToningStrengthText = new QLabel(frameToning);
        label_ToningStrengthText->setObjectName("label_ToningStrengthText");
        label_ToningStrengthText->setFont(font);

        gridLayout_45->addWidget(label_ToningStrengthText, 0, 0, 1, 1);

        horizontalSpacer_37 = new QSpacerItem(40, 20, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        gridLayout_45->addItem(horizontalSpacer_37, 0, 1, 1, 1);

        label_ToningStrengthVal = new DoubleClickLabel(frameToning);
        label_ToningStrengthVal->setObjectName("label_ToningStrengthVal");
        label_ToningStrengthVal->setFont(font);
        label_ToningStrengthVal->setContextMenuPolicy(Qt::CustomContextMenu);
        label_ToningStrengthVal->setLayoutDirection(Qt::RightToLeft);
        label_ToningStrengthVal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_45->addWidget(label_ToningStrengthVal, 0, 2, 1, 1);

        horizontalSliderToningStrength = new NoScrollSlider(frameToning);
        horizontalSliderToningStrength->setObjectName("horizontalSliderToningStrength");
        sizePolicy3.setHeightForWidth(horizontalSliderToningStrength->sizePolicy().hasHeightForWidth());
        horizontalSliderToningStrength->setSizePolicy(sizePolicy3);
        horizontalSliderToningStrength->setMinimumSize(QSize(0, 0));
        horizontalSliderToningStrength->setMaximumSize(QSize(16777215, 16777215));
        horizontalSliderToningStrength->setMinimum(0);
        horizontalSliderToningStrength->setMaximum(100);
        horizontalSliderToningStrength->setValue(0);
        horizontalSliderToningStrength->setOrientation(Qt::Horizontal);

        gridLayout_45->addWidget(horizontalSliderToningStrength, 1, 0, 1, 3);


        verticalLayout_10->addLayout(gridLayout_45);


        gridLayout_43->addWidget(frameToning, 0, 0, 1, 1);


        verticalLayoutScrollArea->addWidget(groupBoxToning);

        groupBoxColorWheels = new QGroupBox(scrollAreaWidgetContents);
        groupBoxColorWheels->setObjectName("groupBoxColorWheels");
        groupBoxColorWheels->setCheckable(true);
        gridLayout_30 = new QGridLayout(groupBoxColorWheels);
        gridLayout_30->setSpacing(6);
        gridLayout_30->setContentsMargins(11, 11, 11, 11);
        gridLayout_30->setObjectName("gridLayout_30");
        gridLayout_30->setContentsMargins(5, 5, 5, 5);
        frameColorWheels = new QFrame(groupBoxColorWheels);
        frameColorWheels->setObjectName("frameColorWheels");
        verticalLayout_9 = new QVBoxLayout(frameColorWheels);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName("verticalLayout_9");
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(frameColorWheels);
        label_9->setObjectName("label_9");
        label_9->setFont(font);

        verticalLayout_9->addWidget(label_9);

        horizontalLayout_28 = new QHBoxLayout();
        horizontalLayout_28->setSpacing(6);
        horizontalLayout_28->setObjectName("horizontalLayout_28");
        horizontalSpacer_18 = new QSpacerItem(28, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_28->addItem(horizontalSpacer_18);

        labelColorWheelMaster = new ColorWheel(frameColorWheels);
        labelColorWheelMaster->setObjectName("labelColorWheelMaster");
        sizePolicy.setHeightForWidth(labelColorWheelMaster->sizePolicy().hasHeightForWidth());
        labelColorWheelMaster->setSizePolicy(sizePolicy);
        labelColorWheelMaster->setMinimumSize(QSize(150, 175));
        labelColorWheelMaster->setMaximumSize(QSize(150, 175));
        labelColorWheelMaster->setAlignment(Qt::AlignCenter);

        horizontalLayout_28->addWidget(labelColorWheelMaster);

        horizontalSpacer_19 = new QSpacerItem(28, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_28->addItem(horizontalSpacer_19);


        verticalLayout_9->addLayout(horizontalLayout_28);

        gridLayout_26 = new QGridLayout();
        gridLayout_26->setSpacing(6);
        gridLayout_26->setObjectName("gridLayout_26");
        label_16 = new QLabel(frameColorWheels);
        label_16->setObjectName("label_16");
        label_16->setFont(font);
        label_16->setAlignment(Qt::AlignCenter);

        gridLayout_26->addWidget(label_16, 0, 0, 1, 1);

        label_15 = new QLabel(frameColorWheels);
        label_15->setObjectName("label_15");
        label_15->setFont(font);
        label_15->setAlignment(Qt::AlignCenter);

        gridLayout_26->addWidget(label_15, 0, 1, 1, 1);

        label_17 = new QLabel(frameColorWheels);
        label_17->setObjectName("label_17");
        label_17->setFont(font);
        label_17->setAlignment(Qt::AlignCenter);

        gridLayout_26->addWidget(label_17, 0, 2, 1, 1);

        label_18 = new QLabel(frameColorWheels);
        label_18->setObjectName("label_18");
        label_18->setFont(font);
        label_18->setAlignment(Qt::AlignCenter);

        gridLayout_26->addWidget(label_18, 0, 3, 1, 1);

        labelYmaster = new QLabel(frameColorWheels);
        labelYmaster->setObjectName("labelYmaster");
        labelYmaster->setFont(font);
        labelYmaster->setAlignment(Qt::AlignCenter);

        gridLayout_26->addWidget(labelYmaster, 1, 0, 1, 1);

        labelRmaster_2 = new QLabel(frameColorWheels);
        labelRmaster_2->setObjectName("labelRmaster_2");
        labelRmaster_2->setFont(font);
        labelRmaster_2->setAlignment(Qt::AlignCenter);

        gridLayout_26->addWidget(labelRmaster_2, 1, 1, 1, 1);

        labelGmaster = new QLabel(frameColorWheels);
        labelGmaster->setObjectName("labelGmaster");
        labelGmaster->setFont(font);
        labelGmaster->setAlignment(Qt::AlignCenter);

        gridLayout_26->addWidget(labelGmaster, 1, 2, 1, 1);

        labelBmaster = new QLabel(frameColorWheels);
        labelBmaster->setObjectName("labelBmaster");
        labelBmaster->setFont(font);
        labelBmaster->setAlignment(Qt::AlignCenter);

        gridLayout_26->addWidget(labelBmaster, 1, 3, 1, 1);


        verticalLayout_9->addLayout(gridLayout_26);

        line_13 = new QFrame(frameColorWheels);
        line_13->setObjectName("line_13");
        line_13->setStyleSheet(QString::fromUtf8("background-color: rgb(115, 115, 115);"));
        line_13->setFrameShape(QFrame::Shape::HLine);
        line_13->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout_9->addWidget(line_13);

        label_13 = new QLabel(frameColorWheels);
        label_13->setObjectName("label_13");
        label_13->setFont(font);

        verticalLayout_9->addWidget(label_13);

        horizontalLayout_27 = new QHBoxLayout();
        horizontalLayout_27->setSpacing(6);
        horizontalLayout_27->setObjectName("horizontalLayout_27");
        horizontalSpacer_21 = new QSpacerItem(28, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_27->addItem(horizontalSpacer_21);

        labelColorWheelShadows = new ColorWheel(frameColorWheels);
        labelColorWheelShadows->setObjectName("labelColorWheelShadows");
        QSizePolicy sizePolicy5(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(labelColorWheelShadows->sizePolicy().hasHeightForWidth());
        labelColorWheelShadows->setSizePolicy(sizePolicy5);
        labelColorWheelShadows->setMinimumSize(QSize(150, 175));
        labelColorWheelShadows->setMaximumSize(QSize(150, 175));
        labelColorWheelShadows->setAlignment(Qt::AlignCenter);

        horizontalLayout_27->addWidget(labelColorWheelShadows);

        horizontalSpacer_20 = new QSpacerItem(28, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_27->addItem(horizontalSpacer_20);


        verticalLayout_9->addLayout(horizontalLayout_27);

        gridLayout_27 = new QGridLayout();
        gridLayout_27->setSpacing(6);
        gridLayout_27->setObjectName("gridLayout_27");
        label_19 = new QLabel(frameColorWheels);
        label_19->setObjectName("label_19");
        label_19->setFont(font);
        label_19->setAlignment(Qt::AlignCenter);

        gridLayout_27->addWidget(label_19, 0, 0, 1, 1);

        label_20 = new QLabel(frameColorWheels);
        label_20->setObjectName("label_20");
        label_20->setFont(font);
        label_20->setAlignment(Qt::AlignCenter);

        gridLayout_27->addWidget(label_20, 0, 1, 1, 1);

        label_21 = new QLabel(frameColorWheels);
        label_21->setObjectName("label_21");
        label_21->setFont(font);
        label_21->setAlignment(Qt::AlignCenter);

        gridLayout_27->addWidget(label_21, 0, 2, 1, 1);

        label_22 = new QLabel(frameColorWheels);
        label_22->setObjectName("label_22");
        label_22->setFont(font);
        label_22->setAlignment(Qt::AlignCenter);

        gridLayout_27->addWidget(label_22, 0, 3, 1, 1);

        labelYshadows = new QLabel(frameColorWheels);
        labelYshadows->setObjectName("labelYshadows");
        labelYshadows->setFont(font);
        labelYshadows->setAlignment(Qt::AlignCenter);

        gridLayout_27->addWidget(labelYshadows, 1, 0, 1, 1);

        labelRshadows = new QLabel(frameColorWheels);
        labelRshadows->setObjectName("labelRshadows");
        labelRshadows->setFont(font);
        labelRshadows->setAlignment(Qt::AlignCenter);

        gridLayout_27->addWidget(labelRshadows, 1, 1, 1, 1);

        labelGshadows = new QLabel(frameColorWheels);
        labelGshadows->setObjectName("labelGshadows");
        labelGshadows->setFont(font);
        labelGshadows->setAlignment(Qt::AlignCenter);

        gridLayout_27->addWidget(labelGshadows, 1, 2, 1, 1);

        labelBshadows = new QLabel(frameColorWheels);
        labelBshadows->setObjectName("labelBshadows");
        labelBshadows->setFont(font);
        labelBshadows->setAlignment(Qt::AlignCenter);

        gridLayout_27->addWidget(labelBshadows, 1, 3, 1, 1);


        verticalLayout_9->addLayout(gridLayout_27);

        line_14 = new QFrame(frameColorWheels);
        line_14->setObjectName("line_14");
        line_14->setStyleSheet(QString::fromUtf8("background-color: rgb(115, 115, 115);"));
        line_14->setFrameShape(QFrame::Shape::HLine);
        line_14->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout_9->addWidget(line_14);

        label_14 = new QLabel(frameColorWheels);
        label_14->setObjectName("label_14");
        label_14->setFont(font);

        verticalLayout_9->addWidget(label_14);

        horizontalLayout_26 = new QHBoxLayout();
        horizontalLayout_26->setSpacing(6);
        horizontalLayout_26->setObjectName("horizontalLayout_26");
        horizontalSpacer_23 = new QSpacerItem(28, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_26->addItem(horizontalSpacer_23);

        labelColorWheelMidtones = new ColorWheel(frameColorWheels);
        labelColorWheelMidtones->setObjectName("labelColorWheelMidtones");
        sizePolicy5.setHeightForWidth(labelColorWheelMidtones->sizePolicy().hasHeightForWidth());
        labelColorWheelMidtones->setSizePolicy(sizePolicy5);
        labelColorWheelMidtones->setMinimumSize(QSize(150, 175));
        labelColorWheelMidtones->setMaximumSize(QSize(150, 175));
        labelColorWheelMidtones->setAlignment(Qt::AlignCenter);

        horizontalLayout_26->addWidget(labelColorWheelMidtones);

        horizontalSpacer_22 = new QSpacerItem(28, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_26->addItem(horizontalSpacer_22);


        verticalLayout_9->addLayout(horizontalLayout_26);

        gridLayout_28 = new QGridLayout();
        gridLayout_28->setSpacing(6);
        gridLayout_28->setObjectName("gridLayout_28");
        label_23 = new QLabel(frameColorWheels);
        label_23->setObjectName("label_23");
        label_23->setFont(font);
        label_23->setAlignment(Qt::AlignCenter);

        gridLayout_28->addWidget(label_23, 0, 0, 1, 1);

        label_24 = new QLabel(frameColorWheels);
        label_24->setObjectName("label_24");
        label_24->setFont(font);
        label_24->setAlignment(Qt::AlignCenter);

        gridLayout_28->addWidget(label_24, 0, 1, 1, 1);

        label_25 = new QLabel(frameColorWheels);
        label_25->setObjectName("label_25");
        label_25->setFont(font);
        label_25->setAlignment(Qt::AlignCenter);

        gridLayout_28->addWidget(label_25, 0, 2, 1, 1);

        label_26 = new QLabel(frameColorWheels);
        label_26->setObjectName("label_26");
        label_26->setFont(font);
        label_26->setAlignment(Qt::AlignCenter);

        gridLayout_28->addWidget(label_26, 0, 3, 1, 1);

        labelYmids = new QLabel(frameColorWheels);
        labelYmids->setObjectName("labelYmids");
        labelYmids->setFont(font);
        labelYmids->setAlignment(Qt::AlignCenter);

        gridLayout_28->addWidget(labelYmids, 1, 0, 1, 1);

        labelRmids = new QLabel(frameColorWheels);
        labelRmids->setObjectName("labelRmids");
        labelRmids->setFont(font);
        labelRmids->setAlignment(Qt::AlignCenter);

        gridLayout_28->addWidget(labelRmids, 1, 1, 1, 1);

        labelGmids = new QLabel(frameColorWheels);
        labelGmids->setObjectName("labelGmids");
        labelGmids->setFont(font);
        labelGmids->setAlignment(Qt::AlignCenter);

        gridLayout_28->addWidget(labelGmids, 1, 2, 1, 1);

        labelBmids = new QLabel(frameColorWheels);
        labelBmids->setObjectName("labelBmids");
        labelBmids->setFont(font);
        labelBmids->setAlignment(Qt::AlignCenter);

        gridLayout_28->addWidget(labelBmids, 1, 3, 1, 1);


        verticalLayout_9->addLayout(gridLayout_28);

        line_15 = new QFrame(frameColorWheels);
        line_15->setObjectName("line_15");
        line_15->setStyleSheet(QString::fromUtf8("background-color: rgb(115, 115, 115);"));
        line_15->setFrameShape(QFrame::Shape::HLine);
        line_15->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout_9->addWidget(line_15);

        label_12 = new QLabel(frameColorWheels);
        label_12->setObjectName("label_12");
        label_12->setFont(font);

        verticalLayout_9->addWidget(label_12);

        horizontalLayout_25 = new QHBoxLayout();
        horizontalLayout_25->setSpacing(6);
        horizontalLayout_25->setObjectName("horizontalLayout_25");
        horizontalSpacer_25 = new QSpacerItem(28, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_25->addItem(horizontalSpacer_25);

        labelColorWheelHighlights = new ColorWheel(frameColorWheels);
        labelColorWheelHighlights->setObjectName("labelColorWheelHighlights");
        sizePolicy5.setHeightForWidth(labelColorWheelHighlights->sizePolicy().hasHeightForWidth());
        labelColorWheelHighlights->setSizePolicy(sizePolicy5);
        labelColorWheelHighlights->setMinimumSize(QSize(150, 175));
        labelColorWheelHighlights->setMaximumSize(QSize(150, 175));
        labelColorWheelHighlights->setAlignment(Qt::AlignCenter);

        horizontalLayout_25->addWidget(labelColorWheelHighlights);

        horizontalSpacer_24 = new QSpacerItem(28, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_25->addItem(horizontalSpacer_24);


        verticalLayout_9->addLayout(horizontalLayout_25);

        gridLayout_29 = new QGridLayout();
        gridLayout_29->setSpacing(6);
        gridLayout_29->setObjectName("gridLayout_29");
        label_27 = new QLabel(frameColorWheels);
        label_27->setObjectName("label_27");
        label_27->setFont(font);
        label_27->setAlignment(Qt::AlignCenter);

        gridLayout_29->addWidget(label_27, 0, 0, 1, 1);

        label_28 = new QLabel(frameColorWheels);
        label_28->setObjectName("label_28");
        label_28->setFont(font);
        label_28->setAlignment(Qt::AlignCenter);

        gridLayout_29->addWidget(label_28, 0, 1, 1, 1);

        label_29 = new QLabel(frameColorWheels);
        label_29->setObjectName("label_29");
        label_29->setFont(font);
        label_29->setAlignment(Qt::AlignCenter);

        gridLayout_29->addWidget(label_29, 0, 2, 1, 1);

        label_30 = new QLabel(frameColorWheels);
        label_30->setObjectName("label_30");
        label_30->setFont(font);
        label_30->setAlignment(Qt::AlignCenter);

        gridLayout_29->addWidget(label_30, 0, 3, 1, 1);

        labelYhighlights = new QLabel(frameColorWheels);
        labelYhighlights->setObjectName("labelYhighlights");
        labelYhighlights->setFont(font);
        labelYhighlights->setAlignment(Qt::AlignCenter);

        gridLayout_29->addWidget(labelYhighlights, 1, 0, 1, 1);

        labelRhighlights = new QLabel(frameColorWheels);
        labelRhighlights->setObjectName("labelRhighlights");
        labelRhighlights->setFont(font);
        labelRhighlights->setAlignment(Qt::AlignCenter);

        gridLayout_29->addWidget(labelRhighlights, 1, 1, 1, 1);

        labelGhighlights = new QLabel(frameColorWheels);
        labelGhighlights->setObjectName("labelGhighlights");
        labelGhighlights->setFont(font);
        labelGhighlights->setAlignment(Qt::AlignCenter);

        gridLayout_29->addWidget(labelGhighlights, 1, 2, 1, 1);

        labelBhighlights = new QLabel(frameColorWheels);
        labelBhighlights->setObjectName("labelBhighlights");
        labelBhighlights->setFont(font);
        labelBhighlights->setAlignment(Qt::AlignCenter);

        gridLayout_29->addWidget(labelBhighlights, 1, 3, 1, 1);


        verticalLayout_9->addLayout(gridLayout_29);


        gridLayout_30->addWidget(frameColorWheels, 0, 0, 1, 1);


        verticalLayoutScrollArea->addWidget(groupBoxColorWheels);

        groupBoxLinearGradient = new QGroupBox(scrollAreaWidgetContents);
        groupBoxLinearGradient->setObjectName("groupBoxLinearGradient");
        groupBoxLinearGradient->setCheckable(true);
        gridLayout_17 = new QGridLayout(groupBoxLinearGradient);
        gridLayout_17->setSpacing(5);
        gridLayout_17->setContentsMargins(11, 11, 11, 11);
        gridLayout_17->setObjectName("gridLayout_17");
        gridLayout_17->setContentsMargins(5, 5, 5, 5);
        frameGradient = new QFrame(groupBoxLinearGradient);
        frameGradient->setObjectName("frameGradient");
        verticalLayout_6 = new QVBoxLayout(frameGradient);
        verticalLayout_6->setSpacing(5);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setSpacing(6);
        horizontalLayout_20->setObjectName("horizontalLayout_20");
        checkBoxGradientEnable = new QCheckBox(frameGradient);
        checkBoxGradientEnable->setObjectName("checkBoxGradientEnable");
        checkBoxGradientEnable->setFont(font);

        horizontalLayout_20->addWidget(checkBoxGradientEnable);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_20->addItem(horizontalSpacer_14);

        toolButtonGradientPaint = new QToolButton(frameGradient);
        toolButtonGradientPaint->setObjectName("toolButtonGradientPaint");
        toolButtonGradientPaint->setIcon(icon34);
        toolButtonGradientPaint->setCheckable(true);

        horizontalLayout_20->addWidget(toolButtonGradientPaint);


        verticalLayout_6->addLayout(horizontalLayout_20);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setSpacing(6);
        horizontalLayout_17->setObjectName("horizontalLayout_17");
        label_4 = new QLabel(frameGradient);
        label_4->setObjectName("label_4");
        label_4->setFont(font);

        horizontalLayout_17->addWidget(label_4);

        spinBoxGradientX = new NoScrollSpinBox(frameGradient);
        spinBoxGradientX->setObjectName("spinBoxGradientX");
        sizePolicy3.setHeightForWidth(spinBoxGradientX->sizePolicy().hasHeightForWidth());
        spinBoxGradientX->setSizePolicy(sizePolicy3);
        spinBoxGradientX->setFont(font);
        spinBoxGradientX->setFocusPolicy(Qt::ClickFocus);
        spinBoxGradientX->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinBoxGradientX->setMinimum(-1000);

        horizontalLayout_17->addWidget(spinBoxGradientX);

        label_5 = new QLabel(frameGradient);
        label_5->setObjectName("label_5");
        label_5->setFont(font);

        horizontalLayout_17->addWidget(label_5);

        spinBoxGradientY = new NoScrollSpinBox(frameGradient);
        spinBoxGradientY->setObjectName("spinBoxGradientY");
        sizePolicy3.setHeightForWidth(spinBoxGradientY->sizePolicy().hasHeightForWidth());
        spinBoxGradientY->setSizePolicy(sizePolicy3);
        spinBoxGradientY->setFont(font);
        spinBoxGradientY->setFocusPolicy(Qt::ClickFocus);
        spinBoxGradientY->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinBoxGradientY->setMinimum(-1000);

        horizontalLayout_17->addWidget(spinBoxGradientY);


        verticalLayout_6->addLayout(horizontalLayout_17);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setSpacing(6);
        horizontalLayout_19->setObjectName("horizontalLayout_19");
        dialGradientAngle = new QDial(frameGradient);
        dialGradientAngle->setObjectName("dialGradientAngle");
        sizePolicy5.setHeightForWidth(dialGradientAngle->sizePolicy().hasHeightForWidth());
        dialGradientAngle->setSizePolicy(sizePolicy5);
        dialGradientAngle->setMinimumSize(QSize(30, 30));
        dialGradientAngle->setMaximumSize(QSize(30, 30));
        dialGradientAngle->setMinimum(-1799);
        dialGradientAngle->setMaximum(1800);
        dialGradientAngle->setWrapping(true);
        dialGradientAngle->setNotchTarget(100.000000000000000);
        dialGradientAngle->setNotchesVisible(true);

        horizontalLayout_19->addWidget(dialGradientAngle);

        labelGradientAngle = new DoubleClickLabel(frameGradient);
        labelGradientAngle->setObjectName("labelGradientAngle");
        labelGradientAngle->setFont(font);

        horizontalLayout_19->addWidget(labelGradientAngle);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_19->addItem(horizontalSpacer_13);

        label_6 = new QLabel(frameGradient);
        label_6->setObjectName("label_6");
        label_6->setFont(font);

        horizontalLayout_19->addWidget(label_6);

        spinBoxGradientLength = new NoScrollSpinBox(frameGradient);
        spinBoxGradientLength->setObjectName("spinBoxGradientLength");
        sizePolicy3.setHeightForWidth(spinBoxGradientLength->sizePolicy().hasHeightForWidth());
        spinBoxGradientLength->setSizePolicy(sizePolicy3);
        spinBoxGradientLength->setFont(font);
        spinBoxGradientLength->setFocusPolicy(Qt::ClickFocus);
        spinBoxGradientLength->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinBoxGradientLength->setMinimum(1);
        spinBoxGradientLength->setMaximum(9999);

        horizontalLayout_19->addWidget(spinBoxGradientLength);


        verticalLayout_6->addLayout(horizontalLayout_19);

        line_5 = new QFrame(frameGradient);
        line_5->setObjectName("line_5");
        line_5->setStyleSheet(QString::fromUtf8("background-color: rgb(115, 115, 115);"));
        line_5->setFrameShape(QFrame::Shape::HLine);
        line_5->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout_6->addWidget(line_5);

        gridLayout_16 = new QGridLayout();
        gridLayout_16->setSpacing(0);
        gridLayout_16->setObjectName("gridLayout_16");
        gridLayout_16->setContentsMargins(-1, 0, -1, -1);
        label_11 = new QLabel(frameGradient);
        label_11->setObjectName("label_11");
        label_11->setFont(font);

        gridLayout_16->addWidget(label_11, 0, 0, 1, 1);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        gridLayout_16->addItem(horizontalSpacer_12, 0, 1, 1, 1);

        label_ExposureGradient = new DoubleClickLabel(frameGradient);
        label_ExposureGradient->setObjectName("label_ExposureGradient");
        label_ExposureGradient->setFont(font);
        label_ExposureGradient->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_16->addWidget(label_ExposureGradient, 0, 2, 1, 1);

        horizontalSliderExposureGradient = new NoScrollSlider(frameGradient);
        horizontalSliderExposureGradient->setObjectName("horizontalSliderExposureGradient");
        sizePolicy3.setHeightForWidth(horizontalSliderExposureGradient->sizePolicy().hasHeightForWidth());
        horizontalSliderExposureGradient->setSizePolicy(sizePolicy3);
        horizontalSliderExposureGradient->setMaximumSize(QSize(16777215, 16777215));
        horizontalSliderExposureGradient->setMinimum(-400);
        horizontalSliderExposureGradient->setMaximum(400);
        horizontalSliderExposureGradient->setValue(0);
        horizontalSliderExposureGradient->setSliderPosition(0);
        horizontalSliderExposureGradient->setOrientation(Qt::Horizontal);

        gridLayout_16->addWidget(horizontalSliderExposureGradient, 1, 0, 1, 3);


        verticalLayout_6->addLayout(gridLayout_16);


        gridLayout_17->addWidget(frameGradient, 0, 0, 1, 1);

        gridLayout_38 = new QGridLayout();
        gridLayout_38->setSpacing(0);
        gridLayout_38->setObjectName("gridLayout_38");
        label_contrast_gradient = new QLabel(groupBoxLinearGradient);
        label_contrast_gradient->setObjectName("label_contrast_gradient");
        label_contrast_gradient->setFont(font);

        gridLayout_38->addWidget(label_contrast_gradient, 0, 0, 1, 1);

        horizontalSpacer_33 = new QSpacerItem(40, 20, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        gridLayout_38->addItem(horizontalSpacer_33, 0, 1, 1, 1);

        label_ContrastGradientVal = new DoubleClickLabel(groupBoxLinearGradient);
        label_ContrastGradientVal->setObjectName("label_ContrastGradientVal");
        label_ContrastGradientVal->setFont(font);
        label_ContrastGradientVal->setLayoutDirection(Qt::RightToLeft);
        label_ContrastGradientVal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_38->addWidget(label_ContrastGradientVal, 0, 2, 1, 1);

        horizontalSliderContrastGradient = new NoScrollSlider(groupBoxLinearGradient);
        horizontalSliderContrastGradient->setObjectName("horizontalSliderContrastGradient");
        sizePolicy3.setHeightForWidth(horizontalSliderContrastGradient->sizePolicy().hasHeightForWidth());
        horizontalSliderContrastGradient->setSizePolicy(sizePolicy3);
        horizontalSliderContrastGradient->setMinimumSize(QSize(0, 0));
        horizontalSliderContrastGradient->setMaximumSize(QSize(16777215, 16777215));
        horizontalSliderContrastGradient->setMinimum(-100);
        horizontalSliderContrastGradient->setMaximum(100);
        horizontalSliderContrastGradient->setValue(0);
        horizontalSliderContrastGradient->setOrientation(Qt::Horizontal);

        gridLayout_38->addWidget(horizontalSliderContrastGradient, 1, 0, 1, 3);


        gridLayout_17->addLayout(gridLayout_38, 1, 0, 1, 1);


        verticalLayoutScrollArea->addWidget(groupBoxLinearGradient);

        groupBoxLut = new QGroupBox(scrollAreaWidgetContents);
        groupBoxLut->setObjectName("groupBoxLut");
        groupBoxLut->setCheckable(true);
        gridLayout_24 = new QGridLayout(groupBoxLut);
        gridLayout_24->setSpacing(6);
        gridLayout_24->setContentsMargins(11, 11, 11, 11);
        gridLayout_24->setObjectName("gridLayout_24");
        gridLayout_24->setContentsMargins(5, 5, 5, 5);
        frameLut = new QFrame(groupBoxLut);
        frameLut->setObjectName("frameLut");
        gridLayout_25 = new QGridLayout(frameLut);
        gridLayout_25->setSpacing(5);
        gridLayout_25->setContentsMargins(11, 11, 11, 11);
        gridLayout_25->setObjectName("gridLayout_25");
        gridLayout_25->setContentsMargins(0, 0, 0, 0);
        gridLayout_41 = new QGridLayout();
        gridLayout_41->setSpacing(0);
        gridLayout_41->setObjectName("gridLayout_41");
        label_LutStrengthText = new QLabel(frameLut);
        label_LutStrengthText->setObjectName("label_LutStrengthText");
        label_LutStrengthText->setFont(font);

        gridLayout_41->addWidget(label_LutStrengthText, 0, 0, 1, 1);

        horizontalSpacer_34 = new QSpacerItem(40, 20, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        gridLayout_41->addItem(horizontalSpacer_34, 0, 1, 1, 1);

        label_LutStrengthVal = new DoubleClickLabel(frameLut);
        label_LutStrengthVal->setObjectName("label_LutStrengthVal");
        label_LutStrengthVal->setFont(font);
        label_LutStrengthVal->setContextMenuPolicy(Qt::CustomContextMenu);
        label_LutStrengthVal->setLayoutDirection(Qt::RightToLeft);
        label_LutStrengthVal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_41->addWidget(label_LutStrengthVal, 0, 2, 1, 1);

        horizontalSliderLutStrength = new NoScrollSlider(frameLut);
        horizontalSliderLutStrength->setObjectName("horizontalSliderLutStrength");
        sizePolicy3.setHeightForWidth(horizontalSliderLutStrength->sizePolicy().hasHeightForWidth());
        horizontalSliderLutStrength->setSizePolicy(sizePolicy3);
        horizontalSliderLutStrength->setMinimumSize(QSize(0, 0));
        horizontalSliderLutStrength->setMaximumSize(QSize(16777215, 16777215));
        horizontalSliderLutStrength->setMinimum(0);
        horizontalSliderLutStrength->setMaximum(100);
        horizontalSliderLutStrength->setValue(100);
        horizontalSliderLutStrength->setOrientation(Qt::Horizontal);

        gridLayout_41->addWidget(horizontalSliderLutStrength, 1, 0, 1, 3);


        gridLayout_25->addLayout(gridLayout_41, 2, 0, 1, 1);

        checkBoxLutEnable = new QCheckBox(frameLut);
        checkBoxLutEnable->setObjectName("checkBoxLutEnable");
        checkBoxLutEnable->setFont(font);

        gridLayout_25->addWidget(checkBoxLutEnable, 0, 0, 1, 1);

        horizontalLayout_30 = new QHBoxLayout();
        horizontalLayout_30->setSpacing(3);
        horizontalLayout_30->setObjectName("horizontalLayout_30");
        toolButtonLoadLut = new QToolButton(frameLut);
        toolButtonLoadLut->setObjectName("toolButtonLoadLut");
        toolButtonLoadLut->setEnabled(false);
        sizePolicy.setHeightForWidth(toolButtonLoadLut->sizePolicy().hasHeightForWidth());
        toolButtonLoadLut->setSizePolicy(sizePolicy);
        toolButtonLoadLut->setIcon(icon14);
        toolButtonLoadLut->setIconSize(QSize(12, 12));

        horizontalLayout_30->addWidget(toolButtonLoadLut);

        lineEditLutName = new QLineEdit(frameLut);
        lineEditLutName->setObjectName("lineEditLutName");
        lineEditLutName->setEnabled(false);
        sizePolicy3.setHeightForWidth(lineEditLutName->sizePolicy().hasHeightForWidth());
        lineEditLutName->setSizePolicy(sizePolicy3);
        lineEditLutName->setFont(font);
        lineEditLutName->setReadOnly(true);

        horizontalLayout_30->addWidget(lineEditLutName);

        horizontalLayout_46 = new QHBoxLayout();
        horizontalLayout_46->setSpacing(1);
        horizontalLayout_46->setObjectName("horizontalLayout_46");
        toolButtonPrevLut = new QToolButton(frameLut);
        toolButtonPrevLut->setObjectName("toolButtonPrevLut");
        toolButtonPrevLut->setEnabled(false);
        sizePolicy.setHeightForWidth(toolButtonPrevLut->sizePolicy().hasHeightForWidth());
        toolButtonPrevLut->setSizePolicy(sizePolicy);
        QIcon icon41;
        icon41.addFile(QString::fromUtf8(":/RetinaIMG/RetinaIMG/previous.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        toolButtonPrevLut->setIcon(icon41);
        toolButtonPrevLut->setIconSize(QSize(6, 12));

        horizontalLayout_46->addWidget(toolButtonPrevLut);

        toolButtonNextLut = new QToolButton(frameLut);
        toolButtonNextLut->setObjectName("toolButtonNextLut");
        toolButtonNextLut->setEnabled(false);
        sizePolicy.setHeightForWidth(toolButtonNextLut->sizePolicy().hasHeightForWidth());
        toolButtonNextLut->setSizePolicy(sizePolicy);
        QIcon icon42;
        icon42.addFile(QString::fromUtf8(":/RetinaIMG/RetinaIMG/next.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        toolButtonNextLut->setIcon(icon42);
        toolButtonNextLut->setIconSize(QSize(6, 12));
        toolButtonNextLut->setCheckable(false);
        toolButtonNextLut->setChecked(false);
        toolButtonNextLut->setAutoRepeat(false);

        horizontalLayout_46->addWidget(toolButtonNextLut);


        horizontalLayout_30->addLayout(horizontalLayout_46);


        gridLayout_25->addLayout(horizontalLayout_30, 1, 0, 1, 1);


        gridLayout_24->addWidget(frameLut, 0, 0, 1, 1);


        verticalLayoutScrollArea->addWidget(groupBoxLut);

        groupBoxFilter = new QGroupBox(scrollAreaWidgetContents);
        groupBoxFilter->setObjectName("groupBoxFilter");
        groupBoxFilter->setCheckable(true);
        gridLayout_23 = new QGridLayout(groupBoxFilter);
        gridLayout_23->setSpacing(6);
        gridLayout_23->setContentsMargins(11, 11, 11, 11);
        gridLayout_23->setObjectName("gridLayout_23");
        gridLayout_23->setContentsMargins(5, 5, 5, 5);
        frameFilter = new QFrame(groupBoxFilter);
        frameFilter->setObjectName("frameFilter");
        verticalLayout_8 = new QVBoxLayout(frameFilter);
        verticalLayout_8->setSpacing(5);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName("verticalLayout_8");
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        checkBoxFilterEnable = new QCheckBox(frameFilter);
        checkBoxFilterEnable->setObjectName("checkBoxFilterEnable");
        checkBoxFilterEnable->setFont(font);

        verticalLayout_8->addWidget(checkBoxFilterEnable);

        comboBoxFilterName = new NoScrollComboBox(frameFilter);
        comboBoxFilterName->addItem(QString());
        comboBoxFilterName->addItem(QString());
        comboBoxFilterName->addItem(QString());
        comboBoxFilterName->addItem(QString());
        comboBoxFilterName->addItem(QString());
        comboBoxFilterName->addItem(QString());
        comboBoxFilterName->addItem(QString());
        comboBoxFilterName->addItem(QString());
        comboBoxFilterName->addItem(QString());
        comboBoxFilterName->setObjectName("comboBoxFilterName");
        comboBoxFilterName->setEnabled(true);
        comboBoxFilterName->setFont(font);

        verticalLayout_8->addWidget(comboBoxFilterName);

        gridLayout_22 = new QGridLayout();
        gridLayout_22->setSpacing(0);
        gridLayout_22->setObjectName("gridLayout_22");
        label_FilterStrengthText = new QLabel(frameFilter);
        label_FilterStrengthText->setObjectName("label_FilterStrengthText");
        label_FilterStrengthText->setFont(font);

        gridLayout_22->addWidget(label_FilterStrengthText, 0, 0, 1, 1);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        gridLayout_22->addItem(horizontalSpacer_15, 0, 1, 1, 1);

        label_FilterStrengthVal = new DoubleClickLabel(frameFilter);
        label_FilterStrengthVal->setObjectName("label_FilterStrengthVal");
        label_FilterStrengthVal->setFont(font);
        label_FilterStrengthVal->setContextMenuPolicy(Qt::CustomContextMenu);
        label_FilterStrengthVal->setLayoutDirection(Qt::RightToLeft);
        label_FilterStrengthVal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_22->addWidget(label_FilterStrengthVal, 0, 2, 1, 1);

        horizontalSliderFilterStrength = new NoScrollSlider(frameFilter);
        horizontalSliderFilterStrength->setObjectName("horizontalSliderFilterStrength");
        sizePolicy3.setHeightForWidth(horizontalSliderFilterStrength->sizePolicy().hasHeightForWidth());
        horizontalSliderFilterStrength->setSizePolicy(sizePolicy3);
        horizontalSliderFilterStrength->setMinimumSize(QSize(0, 0));
        horizontalSliderFilterStrength->setMaximumSize(QSize(16777215, 16777215));
        horizontalSliderFilterStrength->setMinimum(0);
        horizontalSliderFilterStrength->setMaximum(100);
        horizontalSliderFilterStrength->setValue(100);
        horizontalSliderFilterStrength->setOrientation(Qt::Horizontal);

        gridLayout_22->addWidget(horizontalSliderFilterStrength, 1, 0, 1, 3);


        verticalLayout_8->addLayout(gridLayout_22);


        gridLayout_23->addWidget(frameFilter, 0, 0, 1, 1);


        verticalLayoutScrollArea->addWidget(groupBoxFilter);

        groupBoxVignette = new QGroupBox(scrollAreaWidgetContents);
        groupBoxVignette->setObjectName("groupBoxVignette");
        groupBoxVignette->setCheckable(true);
        gridLayout_46 = new QGridLayout(groupBoxVignette);
        gridLayout_46->setSpacing(6);
        gridLayout_46->setContentsMargins(11, 11, 11, 11);
        gridLayout_46->setObjectName("gridLayout_46");
        gridLayout_46->setContentsMargins(5, 5, 5, 5);
        frameVignette = new QFrame(groupBoxVignette);
        frameVignette->setObjectName("frameVignette");
        verticalLayout_11 = new QVBoxLayout(frameVignette);
        verticalLayout_11->setSpacing(5);
        verticalLayout_11->setContentsMargins(11, 11, 11, 11);
        verticalLayout_11->setObjectName("verticalLayout_11");
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        gridLayout_47 = new QGridLayout();
        gridLayout_47->setSpacing(0);
        gridLayout_47->setObjectName("gridLayout_47");
        label_VignetteStrengthText = new QLabel(frameVignette);
        label_VignetteStrengthText->setObjectName("label_VignetteStrengthText");
        label_VignetteStrengthText->setFont(font);

        gridLayout_47->addWidget(label_VignetteStrengthText, 0, 0, 1, 1);

        horizontalSpacer_39 = new QSpacerItem(40, 20, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        gridLayout_47->addItem(horizontalSpacer_39, 0, 1, 1, 1);

        label_VignetteStrengthVal = new DoubleClickLabel(frameVignette);
        label_VignetteStrengthVal->setObjectName("label_VignetteStrengthVal");
        label_VignetteStrengthVal->setFont(font);
        label_VignetteStrengthVal->setContextMenuPolicy(Qt::CustomContextMenu);
        label_VignetteStrengthVal->setLayoutDirection(Qt::RightToLeft);
        label_VignetteStrengthVal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_47->addWidget(label_VignetteStrengthVal, 0, 2, 1, 1);

        horizontalSliderVignetteStrength = new NoScrollSlider(frameVignette);
        horizontalSliderVignetteStrength->setObjectName("horizontalSliderVignetteStrength");
        sizePolicy3.setHeightForWidth(horizontalSliderVignetteStrength->sizePolicy().hasHeightForWidth());
        horizontalSliderVignetteStrength->setSizePolicy(sizePolicy3);
        horizontalSliderVignetteStrength->setMinimumSize(QSize(0, 0));
        horizontalSliderVignetteStrength->setMaximumSize(QSize(16777215, 16777215));
        horizontalSliderVignetteStrength->setMinimum(-100);
        horizontalSliderVignetteStrength->setMaximum(100);
        horizontalSliderVignetteStrength->setValue(0);
        horizontalSliderVignetteStrength->setOrientation(Qt::Horizontal);

        gridLayout_47->addWidget(horizontalSliderVignetteStrength, 1, 0, 1, 3);


        verticalLayout_11->addLayout(gridLayout_47);

        gridLayout_48 = new QGridLayout();
        gridLayout_48->setSpacing(0);
        gridLayout_48->setObjectName("gridLayout_48");
        horizontalSpacer_43 = new QSpacerItem(40, 20, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        gridLayout_48->addItem(horizontalSpacer_43, 0, 1, 1, 1);

        horizontalSliderVignetteRadius = new NoScrollSlider(frameVignette);
        horizontalSliderVignetteRadius->setObjectName("horizontalSliderVignetteRadius");
        sizePolicy3.setHeightForWidth(horizontalSliderVignetteRadius->sizePolicy().hasHeightForWidth());
        horizontalSliderVignetteRadius->setSizePolicy(sizePolicy3);
        horizontalSliderVignetteRadius->setMinimumSize(QSize(0, 0));
        horizontalSliderVignetteRadius->setMaximumSize(QSize(16777215, 16777215));
        horizontalSliderVignetteRadius->setMinimum(0);
        horizontalSliderVignetteRadius->setMaximum(100);
        horizontalSliderVignetteRadius->setValue(20);
        horizontalSliderVignetteRadius->setOrientation(Qt::Horizontal);

        gridLayout_48->addWidget(horizontalSliderVignetteRadius, 1, 0, 1, 3);

        label_VignetteRadiusVal = new DoubleClickLabel(frameVignette);
        label_VignetteRadiusVal->setObjectName("label_VignetteRadiusVal");
        label_VignetteRadiusVal->setFont(font);
        label_VignetteRadiusVal->setContextMenuPolicy(Qt::CustomContextMenu);
        label_VignetteRadiusVal->setLayoutDirection(Qt::RightToLeft);
        label_VignetteRadiusVal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_48->addWidget(label_VignetteRadiusVal, 0, 2, 1, 1);

        label_VignetteRadiusText = new QLabel(frameVignette);
        label_VignetteRadiusText->setObjectName("label_VignetteRadiusText");
        label_VignetteRadiusText->setFont(font);

        gridLayout_48->addWidget(label_VignetteRadiusText, 0, 0, 1, 1);


        verticalLayout_11->addLayout(gridLayout_48);

        gridLayout_60 = new QGridLayout();
        gridLayout_60->setSpacing(0);
        gridLayout_60->setObjectName("gridLayout_60");
        horizontalSpacer_56 = new QSpacerItem(40, 20, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        gridLayout_60->addItem(horizontalSpacer_56, 0, 1, 1, 1);

        horizontalSliderVignetteShape = new NoScrollSlider(frameVignette);
        horizontalSliderVignetteShape->setObjectName("horizontalSliderVignetteShape");
        sizePolicy3.setHeightForWidth(horizontalSliderVignetteShape->sizePolicy().hasHeightForWidth());
        horizontalSliderVignetteShape->setSizePolicy(sizePolicy3);
        horizontalSliderVignetteShape->setMinimumSize(QSize(0, 0));
        horizontalSliderVignetteShape->setMaximumSize(QSize(16777215, 16777215));
        horizontalSliderVignetteShape->setMinimum(0);
        horizontalSliderVignetteShape->setMaximum(100);
        horizontalSliderVignetteShape->setValue(0);
        horizontalSliderVignetteShape->setOrientation(Qt::Horizontal);

        gridLayout_60->addWidget(horizontalSliderVignetteShape, 1, 0, 1, 3);

        label_VignetteShapeVal = new DoubleClickLabel(frameVignette);
        label_VignetteShapeVal->setObjectName("label_VignetteShapeVal");
        label_VignetteShapeVal->setFont(font);
        label_VignetteShapeVal->setContextMenuPolicy(Qt::CustomContextMenu);
        label_VignetteShapeVal->setLayoutDirection(Qt::RightToLeft);
        label_VignetteShapeVal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_60->addWidget(label_VignetteShapeVal, 0, 2, 1, 1);

        label_VignetteShapeText = new QLabel(frameVignette);
        label_VignetteShapeText->setObjectName("label_VignetteShapeText");
        label_VignetteShapeText->setFont(font);

        gridLayout_60->addWidget(label_VignetteShapeText, 0, 0, 1, 1);


        verticalLayout_11->addLayout(gridLayout_60);

        line_26 = new QFrame(frameVignette);
        line_26->setObjectName("line_26");
        line_26->setStyleSheet(QString::fromUtf8("background-color: rgb(115, 115, 115);"));
        line_26->setFrameShape(QFrame::Shape::HLine);
        line_26->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout_11->addWidget(line_26);

        gridLayout_59 = new QGridLayout();
        gridLayout_59->setSpacing(0);
        gridLayout_59->setObjectName("gridLayout_59");
        horizontalSpacer_55 = new QSpacerItem(40, 20, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        gridLayout_59->addItem(horizontalSpacer_55, 0, 1, 1, 1);

        label_CaRedVal = new DoubleClickLabel(frameVignette);
        label_CaRedVal->setObjectName("label_CaRedVal");
        label_CaRedVal->setFont(font);
        label_CaRedVal->setContextMenuPolicy(Qt::CustomContextMenu);
        label_CaRedVal->setLayoutDirection(Qt::RightToLeft);
        label_CaRedVal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_59->addWidget(label_CaRedVal, 0, 2, 1, 1);

        horizontalSliderCaRed = new NoScrollSlider(frameVignette);
        horizontalSliderCaRed->setObjectName("horizontalSliderCaRed");
        sizePolicy3.setHeightForWidth(horizontalSliderCaRed->sizePolicy().hasHeightForWidth());
        horizontalSliderCaRed->setSizePolicy(sizePolicy3);
        horizontalSliderCaRed->setMinimumSize(QSize(0, 0));
        horizontalSliderCaRed->setMaximumSize(QSize(16777215, 16777215));
        horizontalSliderCaRed->setMinimum(-50);
        horizontalSliderCaRed->setMaximum(50);
        horizontalSliderCaRed->setValue(0);
        horizontalSliderCaRed->setOrientation(Qt::Horizontal);

        gridLayout_59->addWidget(horizontalSliderCaRed, 1, 0, 1, 3);

        label_CaRedText = new QLabel(frameVignette);
        label_CaRedText->setObjectName("label_CaRedText");
        label_CaRedText->setFont(font);

        gridLayout_59->addWidget(label_CaRedText, 0, 0, 1, 1);


        verticalLayout_11->addLayout(gridLayout_59);

        gridLayout_58 = new QGridLayout();
        gridLayout_58->setSpacing(0);
        gridLayout_58->setObjectName("gridLayout_58");
        label_CaBlueText = new QLabel(frameVignette);
        label_CaBlueText->setObjectName("label_CaBlueText");
        label_CaBlueText->setFont(font);

        gridLayout_58->addWidget(label_CaBlueText, 0, 0, 1, 1);

        horizontalSpacer_54 = new QSpacerItem(40, 20, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        gridLayout_58->addItem(horizontalSpacer_54, 0, 1, 1, 1);

        label_CaBlueVal = new DoubleClickLabel(frameVignette);
        label_CaBlueVal->setObjectName("label_CaBlueVal");
        label_CaBlueVal->setFont(font);
        label_CaBlueVal->setContextMenuPolicy(Qt::CustomContextMenu);
        label_CaBlueVal->setLayoutDirection(Qt::RightToLeft);
        label_CaBlueVal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_58->addWidget(label_CaBlueVal, 0, 2, 1, 1);

        horizontalSliderCaBlue = new NoScrollSlider(frameVignette);
        horizontalSliderCaBlue->setObjectName("horizontalSliderCaBlue");
        sizePolicy3.setHeightForWidth(horizontalSliderCaBlue->sizePolicy().hasHeightForWidth());
        horizontalSliderCaBlue->setSizePolicy(sizePolicy3);
        horizontalSliderCaBlue->setMinimumSize(QSize(0, 0));
        horizontalSliderCaBlue->setMaximumSize(QSize(16777215, 16777215));
        horizontalSliderCaBlue->setMinimum(-50);
        horizontalSliderCaBlue->setMaximum(50);
        horizontalSliderCaBlue->setValue(0);
        horizontalSliderCaBlue->setOrientation(Qt::Horizontal);

        gridLayout_58->addWidget(horizontalSliderCaBlue, 1, 0, 1, 3);


        verticalLayout_11->addLayout(gridLayout_58);

        line_29 = new QFrame(frameVignette);
        line_29->setObjectName("line_29");
        line_29->setStyleSheet(QString::fromUtf8("background-color: rgb(115, 115, 115);"));
        line_29->setFrameShape(QFrame::Shape::HLine);
        line_29->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout_11->addWidget(line_29);

        gridLayout_65 = new QGridLayout();
        gridLayout_65->setSpacing(0);
        gridLayout_65->setObjectName("gridLayout_65");
        label_CaDesaturateText = new QLabel(frameVignette);
        label_CaDesaturateText->setObjectName("label_CaDesaturateText");
        label_CaDesaturateText->setFont(font);

        gridLayout_65->addWidget(label_CaDesaturateText, 0, 0, 1, 1);

        horizontalSpacer_60 = new QSpacerItem(40, 20, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        gridLayout_65->addItem(horizontalSpacer_60, 0, 1, 1, 1);

        label_CaDesaturateVal = new DoubleClickLabel(frameVignette);
        label_CaDesaturateVal->setObjectName("label_CaDesaturateVal");
        label_CaDesaturateVal->setFont(font);
        label_CaDesaturateVal->setContextMenuPolicy(Qt::CustomContextMenu);
        label_CaDesaturateVal->setLayoutDirection(Qt::RightToLeft);
        label_CaDesaturateVal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_65->addWidget(label_CaDesaturateVal, 0, 2, 1, 1);

        horizontalSliderCaDesaturate = new NoScrollSlider(frameVignette);
        horizontalSliderCaDesaturate->setObjectName("horizontalSliderCaDesaturate");
        sizePolicy3.setHeightForWidth(horizontalSliderCaDesaturate->sizePolicy().hasHeightForWidth());
        horizontalSliderCaDesaturate->setSizePolicy(sizePolicy3);
        horizontalSliderCaDesaturate->setMinimumSize(QSize(0, 0));
        horizontalSliderCaDesaturate->setMaximumSize(QSize(16777215, 16777215));
        horizontalSliderCaDesaturate->setMinimum(0);
        horizontalSliderCaDesaturate->setMaximum(100);
        horizontalSliderCaDesaturate->setValue(0);
        horizontalSliderCaDesaturate->setOrientation(Qt::Horizontal);

        gridLayout_65->addWidget(horizontalSliderCaDesaturate, 1, 0, 1, 3);


        verticalLayout_11->addLayout(gridLayout_65);

        gridLayout_66 = new QGridLayout();
        gridLayout_66->setSpacing(0);
        gridLayout_66->setObjectName("gridLayout_66");
        label_CaRadiusText = new QLabel(frameVignette);
        label_CaRadiusText->setObjectName("label_CaRadiusText");
        label_CaRadiusText->setFont(font);

        gridLayout_66->addWidget(label_CaRadiusText, 0, 0, 1, 1);

        horizontalSpacer_61 = new QSpacerItem(40, 20, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        gridLayout_66->addItem(horizontalSpacer_61, 0, 1, 1, 1);

        label_CaRadiusVal = new DoubleClickLabel(frameVignette);
        label_CaRadiusVal->setObjectName("label_CaRadiusVal");
        label_CaRadiusVal->setFont(font);
        label_CaRadiusVal->setContextMenuPolicy(Qt::CustomContextMenu);
        label_CaRadiusVal->setLayoutDirection(Qt::RightToLeft);
        label_CaRadiusVal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_66->addWidget(label_CaRadiusVal, 0, 2, 1, 1);

        horizontalSliderCaRadius = new NoScrollSlider(frameVignette);
        horizontalSliderCaRadius->setObjectName("horizontalSliderCaRadius");
        sizePolicy3.setHeightForWidth(horizontalSliderCaRadius->sizePolicy().hasHeightForWidth());
        horizontalSliderCaRadius->setSizePolicy(sizePolicy3);
        horizontalSliderCaRadius->setMinimumSize(QSize(0, 0));
        horizontalSliderCaRadius->setMaximumSize(QSize(16777215, 16777215));
        horizontalSliderCaRadius->setMinimum(1);
        horizontalSliderCaRadius->setMaximum(20);
        horizontalSliderCaRadius->setValue(1);
        horizontalSliderCaRadius->setOrientation(Qt::Horizontal);

        gridLayout_66->addWidget(horizontalSliderCaRadius, 1, 0, 1, 3);


        verticalLayout_11->addLayout(gridLayout_66);


        gridLayout_46->addWidget(frameVignette, 0, 0, 1, 1);


        verticalLayoutScrollArea->addWidget(groupBoxVignette);

        groupBoxTransformation = new QGroupBox(scrollAreaWidgetContents);
        groupBoxTransformation->setObjectName("groupBoxTransformation");
        groupBoxTransformation->setCheckable(true);
        gridLayout_20 = new QGridLayout(groupBoxTransformation);
        gridLayout_20->setSpacing(6);
        gridLayout_20->setContentsMargins(11, 11, 11, 11);
        gridLayout_20->setObjectName("gridLayout_20");
        gridLayout_20->setContentsMargins(5, 5, 5, 5);
        frameAspectRatio = new QFrame(groupBoxTransformation);
        frameAspectRatio->setObjectName("frameAspectRatio");
        verticalLayout_7 = new QVBoxLayout(frameAspectRatio);
        verticalLayout_7->setSpacing(5);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        gridLayout_21 = new QGridLayout();
        gridLayout_21->setSpacing(6);
        gridLayout_21->setObjectName("gridLayout_21");
        gridLayout_54 = new QGridLayout();
        gridLayout_54->setSpacing(0);
        gridLayout_54->setObjectName("gridLayout_54");
        horizontalSliderVidstabShakiness = new NoScrollSlider(frameAspectRatio);
        horizontalSliderVidstabShakiness->setObjectName("horizontalSliderVidstabShakiness");
        sizePolicy3.setHeightForWidth(horizontalSliderVidstabShakiness->sizePolicy().hasHeightForWidth());
        horizontalSliderVidstabShakiness->setSizePolicy(sizePolicy3);
        horizontalSliderVidstabShakiness->setMinimumSize(QSize(0, 0));
        horizontalSliderVidstabShakiness->setMaximumSize(QSize(16777215, 16777215));
        horizontalSliderVidstabShakiness->setMinimum(1);
        horizontalSliderVidstabShakiness->setMaximum(10);
        horizontalSliderVidstabShakiness->setValue(10);
        horizontalSliderVidstabShakiness->setOrientation(Qt::Horizontal);

        gridLayout_54->addWidget(horizontalSliderVidstabShakiness, 1, 0, 1, 3);

        horizontalSpacer_50 = new QSpacerItem(40, 20, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        gridLayout_54->addItem(horizontalSpacer_50, 0, 1, 1, 1);

        label_VidstabShakinessText = new QLabel(frameAspectRatio);
        label_VidstabShakinessText->setObjectName("label_VidstabShakinessText");
        label_VidstabShakinessText->setFont(font);

        gridLayout_54->addWidget(label_VidstabShakinessText, 0, 0, 1, 1);

        label_VidstabShakinessVal = new DoubleClickLabel(frameAspectRatio);
        label_VidstabShakinessVal->setObjectName("label_VidstabShakinessVal");
        label_VidstabShakinessVal->setFont(font);
        label_VidstabShakinessVal->setContextMenuPolicy(Qt::CustomContextMenu);
        label_VidstabShakinessVal->setLayoutDirection(Qt::RightToLeft);
        label_VidstabShakinessVal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_54->addWidget(label_VidstabShakinessVal, 0, 2, 1, 1);


        gridLayout_21->addLayout(gridLayout_54, 10, 0, 1, 2);

        label_7 = new QLabel(frameAspectRatio);
        label_7->setObjectName("label_7");
        sizePolicy2.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy2);
        label_7->setFont(font);

        gridLayout_21->addWidget(label_7, 1, 0, 1, 1);

        label_33 = new QLabel(frameAspectRatio);
        label_33->setObjectName("label_33");
        label_33->setEnabled(false);
        label_33->setFont(font);
        label_33->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_21->addWidget(label_33, 2, 0, 1, 1);

        gridLayout_53 = new QGridLayout();
        gridLayout_53->setSpacing(0);
        gridLayout_53->setObjectName("gridLayout_53");
        label_VidstabStepsizeVal = new DoubleClickLabel(frameAspectRatio);
        label_VidstabStepsizeVal->setObjectName("label_VidstabStepsizeVal");
        label_VidstabStepsizeVal->setFont(font);
        label_VidstabStepsizeVal->setContextMenuPolicy(Qt::CustomContextMenu);
        label_VidstabStepsizeVal->setLayoutDirection(Qt::RightToLeft);
        label_VidstabStepsizeVal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_53->addWidget(label_VidstabStepsizeVal, 0, 2, 1, 1);

        horizontalSliderVidstabStepsize = new NoScrollSlider(frameAspectRatio);
        horizontalSliderVidstabStepsize->setObjectName("horizontalSliderVidstabStepsize");
        sizePolicy3.setHeightForWidth(horizontalSliderVidstabStepsize->sizePolicy().hasHeightForWidth());
        horizontalSliderVidstabStepsize->setSizePolicy(sizePolicy3);
        horizontalSliderVidstabStepsize->setMinimumSize(QSize(0, 0));
        horizontalSliderVidstabStepsize->setMaximumSize(QSize(16777215, 16777215));
        horizontalSliderVidstabStepsize->setMinimum(1);
        horizontalSliderVidstabStepsize->setMaximum(32);
        horizontalSliderVidstabStepsize->setValue(32);
        horizontalSliderVidstabStepsize->setOrientation(Qt::Horizontal);

        gridLayout_53->addWidget(horizontalSliderVidstabStepsize, 1, 0, 1, 3);

        horizontalSpacer_49 = new QSpacerItem(40, 20, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        gridLayout_53->addItem(horizontalSpacer_49, 0, 1, 1, 1);

        label_VidstabStepsizeText = new QLabel(frameAspectRatio);
        label_VidstabStepsizeText->setObjectName("label_VidstabStepsizeText");
        label_VidstabStepsizeText->setFont(font);

        gridLayout_53->addWidget(label_VidstabStepsizeText, 0, 0, 1, 1);


        gridLayout_21->addLayout(gridLayout_53, 9, 0, 1, 2);

        comboBoxHStretch = new NoScrollComboBox(frameAspectRatio);
        comboBoxHStretch->addItem(QString());
        comboBoxHStretch->addItem(QString());
        comboBoxHStretch->addItem(QString());
        comboBoxHStretch->addItem(QString());
        comboBoxHStretch->addItem(QString());
        comboBoxHStretch->addItem(QString());
        comboBoxHStretch->addItem(QString());
        comboBoxHStretch->addItem(QString());
        comboBoxHStretch->setObjectName("comboBoxHStretch");
        QSizePolicy sizePolicy6(QSizePolicy::Policy::Ignored, QSizePolicy::Policy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(comboBoxHStretch->sizePolicy().hasHeightForWidth());
        comboBoxHStretch->setSizePolicy(sizePolicy6);
        comboBoxHStretch->setFont(font);

        gridLayout_21->addWidget(comboBoxHStretch, 0, 1, 1, 1);

        gridLayout_57 = new QGridLayout();
        gridLayout_57->setSpacing(0);
        gridLayout_57->setObjectName("gridLayout_57");
        label_VidstabSmoothingText = new QLabel(frameAspectRatio);
        label_VidstabSmoothingText->setObjectName("label_VidstabSmoothingText");
        label_VidstabSmoothingText->setFont(font);

        gridLayout_57->addWidget(label_VidstabSmoothingText, 0, 0, 1, 1);

        horizontalSliderVidstabSmoothing = new NoScrollSlider(frameAspectRatio);
        horizontalSliderVidstabSmoothing->setObjectName("horizontalSliderVidstabSmoothing");
        sizePolicy3.setHeightForWidth(horizontalSliderVidstabSmoothing->sizePolicy().hasHeightForWidth());
        horizontalSliderVidstabSmoothing->setSizePolicy(sizePolicy3);
        horizontalSliderVidstabSmoothing->setMinimumSize(QSize(0, 0));
        horizontalSliderVidstabSmoothing->setMaximumSize(QSize(16777215, 16777215));
        horizontalSliderVidstabSmoothing->setMinimum(1);
        horizontalSliderVidstabSmoothing->setMaximum(50);
        horizontalSliderVidstabSmoothing->setValue(10);
        horizontalSliderVidstabSmoothing->setOrientation(Qt::Horizontal);

        gridLayout_57->addWidget(horizontalSliderVidstabSmoothing, 1, 0, 1, 3);

        horizontalSpacer_53 = new QSpacerItem(40, 20, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        gridLayout_57->addItem(horizontalSpacer_53, 0, 1, 1, 1);

        label_VidstabSmoothingVal = new DoubleClickLabel(frameAspectRatio);
        label_VidstabSmoothingVal->setObjectName("label_VidstabSmoothingVal");
        label_VidstabSmoothingVal->setFont(font);
        label_VidstabSmoothingVal->setContextMenuPolicy(Qt::CustomContextMenu);
        label_VidstabSmoothingVal->setLayoutDirection(Qt::RightToLeft);
        label_VidstabSmoothingVal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_57->addWidget(label_VidstabSmoothingVal, 0, 2, 1, 1);


        gridLayout_21->addLayout(gridLayout_57, 13, 0, 1, 2);

        label_8 = new QLabel(frameAspectRatio);
        label_8->setObjectName("label_8");
        label_8->setFont(font);

        gridLayout_21->addWidget(label_8, 0, 0, 1, 1);

        gridLayout_55 = new QGridLayout();
        gridLayout_55->setSpacing(0);
        gridLayout_55->setObjectName("gridLayout_55");
        label_VidstabAccuracyVal = new DoubleClickLabel(frameAspectRatio);
        label_VidstabAccuracyVal->setObjectName("label_VidstabAccuracyVal");
        label_VidstabAccuracyVal->setFont(font);
        label_VidstabAccuracyVal->setContextMenuPolicy(Qt::CustomContextMenu);
        label_VidstabAccuracyVal->setLayoutDirection(Qt::RightToLeft);
        label_VidstabAccuracyVal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_55->addWidget(label_VidstabAccuracyVal, 0, 2, 1, 1);

        horizontalSliderVidstabAccuracy = new NoScrollSlider(frameAspectRatio);
        horizontalSliderVidstabAccuracy->setObjectName("horizontalSliderVidstabAccuracy");
        sizePolicy3.setHeightForWidth(horizontalSliderVidstabAccuracy->sizePolicy().hasHeightForWidth());
        horizontalSliderVidstabAccuracy->setSizePolicy(sizePolicy3);
        horizontalSliderVidstabAccuracy->setMinimumSize(QSize(0, 0));
        horizontalSliderVidstabAccuracy->setMaximumSize(QSize(16777215, 16777215));
        horizontalSliderVidstabAccuracy->setMinimum(1);
        horizontalSliderVidstabAccuracy->setMaximum(15);
        horizontalSliderVidstabAccuracy->setValue(10);
        horizontalSliderVidstabAccuracy->setOrientation(Qt::Horizontal);

        gridLayout_55->addWidget(horizontalSliderVidstabAccuracy, 1, 0, 1, 3);

        horizontalSpacer_51 = new QSpacerItem(40, 20, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        gridLayout_55->addItem(horizontalSpacer_51, 0, 1, 1, 1);

        label_VidstabAccuracyText = new QLabel(frameAspectRatio);
        label_VidstabAccuracyText->setObjectName("label_VidstabAccuracyText");
        label_VidstabAccuracyText->setFont(font);

        gridLayout_55->addWidget(label_VidstabAccuracyText, 0, 0, 1, 1);


        gridLayout_21->addLayout(gridLayout_55, 11, 0, 1, 2);

        line_12 = new QFrame(frameAspectRatio);
        line_12->setObjectName("line_12");
        line_12->setStyleSheet(QString::fromUtf8("background-color: rgb(115, 115, 115);"));
        line_12->setFrameShape(QFrame::Shape::HLine);
        line_12->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_21->addWidget(line_12, 4, 0, 1, 2);

        toolButtonUpsideDown = new QFrame(frameAspectRatio);
        toolButtonUpsideDown->setObjectName("toolButtonUpsideDown");
        horizontalLayout_29 = new QHBoxLayout(toolButtonUpsideDown);
        horizontalLayout_29->setSpacing(0);
        horizontalLayout_29->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_29->setObjectName("horizontalLayout_29");
        horizontalLayout_29->setContentsMargins(0, 0, 0, 0);
        toolButtonUpsideDownOff = new ColorToolButton(toolButtonUpsideDown);
        toolButtonUpsideDownOff->setObjectName("toolButtonUpsideDownOff");
        sizePolicy.setHeightForWidth(toolButtonUpsideDownOff->sizePolicy().hasHeightForWidth());
        toolButtonUpsideDownOff->setSizePolicy(sizePolicy);
        toolButtonUpsideDownOff->setFont(font);
        toolButtonUpsideDownOff->setCheckable(true);
        toolButtonUpsideDownOff->setChecked(true);
        toolButtonUpsideDownOff->setAutoExclusive(true);

        horizontalLayout_29->addWidget(toolButtonUpsideDownOff);

        toolButtonUpsideDownOn = new ColorToolButton(toolButtonUpsideDown);
        toolButtonUpsideDownOn->setObjectName("toolButtonUpsideDownOn");
        sizePolicy.setHeightForWidth(toolButtonUpsideDownOn->sizePolicy().hasHeightForWidth());
        toolButtonUpsideDownOn->setSizePolicy(sizePolicy);
        toolButtonUpsideDownOn->setFont(font);
        toolButtonUpsideDownOn->setCheckable(true);
        toolButtonUpsideDownOn->setAutoExclusive(true);

        horizontalLayout_29->addWidget(toolButtonUpsideDownOn);


        gridLayout_21->addWidget(toolButtonUpsideDown, 5, 1, 1, 1);

        checkBoxVidstabEnable = new QCheckBox(frameAspectRatio);
        checkBoxVidstabEnable->setObjectName("checkBoxVidstabEnable");
        checkBoxVidstabEnable->setFont(font);

        gridLayout_21->addWidget(checkBoxVidstabEnable, 7, 0, 2, 2);

        comboBoxVStretch = new NoScrollComboBox(frameAspectRatio);
        comboBoxVStretch->addItem(QString());
        comboBoxVStretch->addItem(QString());
        comboBoxVStretch->addItem(QString());
        comboBoxVStretch->addItem(QString());
        comboBoxVStretch->setObjectName("comboBoxVStretch");
        sizePolicy6.setHeightForWidth(comboBoxVStretch->sizePolicy().hasHeightForWidth());
        comboBoxVStretch->setSizePolicy(sizePolicy6);
        comboBoxVStretch->setFont(font);
        comboBoxVStretch->setLayoutDirection(Qt::LeftToRight);
        comboBoxVStretch->setSizeAdjustPolicy(QComboBox::AdjustToContentsOnFirstShow);

        gridLayout_21->addWidget(comboBoxVStretch, 1, 1, 1, 1);

        UpsideDownLabel = new QLabel(frameAspectRatio);
        UpsideDownLabel->setObjectName("UpsideDownLabel");
        UpsideDownLabel->setFont(font);

        gridLayout_21->addWidget(UpsideDownLabel, 5, 0, 1, 1);

        label_resResolution = new QLabel(frameAspectRatio);
        label_resResolution->setObjectName("label_resResolution");
        label_resResolution->setEnabled(false);
        QFont font1;
        font1.setPointSize(10);
        font1.setItalic(true);
        label_resResolution->setFont(font1);

        gridLayout_21->addWidget(label_resResolution, 2, 1, 1, 1);

        gridLayout_56 = new QGridLayout();
        gridLayout_56->setSpacing(0);
        gridLayout_56->setObjectName("gridLayout_56");
        label_VidstabZoomVal = new DoubleClickLabel(frameAspectRatio);
        label_VidstabZoomVal->setObjectName("label_VidstabZoomVal");
        label_VidstabZoomVal->setFont(font);
        label_VidstabZoomVal->setContextMenuPolicy(Qt::CustomContextMenu);
        label_VidstabZoomVal->setLayoutDirection(Qt::RightToLeft);
        label_VidstabZoomVal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_56->addWidget(label_VidstabZoomVal, 0, 2, 1, 1);

        horizontalSliderVidstabZoom = new NoScrollSlider(frameAspectRatio);
        horizontalSliderVidstabZoom->setObjectName("horizontalSliderVidstabZoom");
        sizePolicy3.setHeightForWidth(horizontalSliderVidstabZoom->sizePolicy().hasHeightForWidth());
        horizontalSliderVidstabZoom->setSizePolicy(sizePolicy3);
        horizontalSliderVidstabZoom->setMinimumSize(QSize(0, 0));
        horizontalSliderVidstabZoom->setMaximumSize(QSize(16777215, 16777215));
        horizontalSliderVidstabZoom->setMinimum(-10);
        horizontalSliderVidstabZoom->setMaximum(10);
        horizontalSliderVidstabZoom->setValue(0);
        horizontalSliderVidstabZoom->setOrientation(Qt::Horizontal);

        gridLayout_56->addWidget(horizontalSliderVidstabZoom, 1, 0, 1, 3);

        horizontalSpacer_52 = new QSpacerItem(40, 20, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        gridLayout_56->addItem(horizontalSpacer_52, 0, 1, 1, 1);

        label_VidstabZoomText = new QLabel(frameAspectRatio);
        label_VidstabZoomText->setObjectName("label_VidstabZoomText");
        label_VidstabZoomText->setFont(font);

        gridLayout_56->addWidget(label_VidstabZoomText, 0, 0, 1, 1);


        gridLayout_21->addLayout(gridLayout_56, 12, 0, 1, 2);

        line_25 = new QFrame(frameAspectRatio);
        line_25->setObjectName("line_25");
        line_25->setStyleSheet(QString::fromUtf8("background-color: rgb(115, 115, 115);"));
        line_25->setFrameShape(QFrame::Shape::HLine);
        line_25->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_21->addWidget(line_25, 6, 0, 1, 2);

        checkBoxVidstabTripod = new QCheckBox(frameAspectRatio);
        checkBoxVidstabTripod->setObjectName("checkBoxVidstabTripod");
        checkBoxVidstabTripod->setFont(font);

        gridLayout_21->addWidget(checkBoxVidstabTripod, 14, 0, 1, 2);


        verticalLayout_7->addLayout(gridLayout_21);


        gridLayout_20->addWidget(frameAspectRatio, 0, 0, 1, 1);


        verticalLayoutScrollArea->addWidget(groupBoxTransformation);

        verticalSpacer = new QSpacerItem(20, 146, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayoutScrollArea->addItem(verticalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_2->addWidget(scrollArea);


        gridLayout_37->addLayout(verticalLayout_2, 0, 0, 1, 1);

        dockWidgetEdit->setWidget(dockWidgetContents);
        MainWindow->addDockWidget(Qt::DockWidgetArea::RightDockWidgetArea, dockWidgetEdit);
        dockWidgetSession = new QDockWidget(MainWindow);
        dockWidgetSession->setObjectName("dockWidgetSession");
        sizePolicy2.setHeightForWidth(dockWidgetSession->sizePolicy().hasHeightForWidth());
        dockWidgetSession->setSizePolicy(sizePolicy2);
        dockWidgetSession->setMinimumSize(QSize(170, 198));
        dockWidgetSession->setMaximumSize(QSize(524287, 524287));
        dockWidgetSession->setFeatures(QDockWidget::DockWidgetClosable);
        dockWidgetSession->setAllowedAreas(Qt::BottomDockWidgetArea|Qt::LeftDockWidgetArea);
        dockWidgetContents_2 = new QWidget();
        dockWidgetContents_2->setObjectName("dockWidgetContents_2");
        verticalLayout = new QVBoxLayout(dockWidgetContents_2);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        listViewSession = new QListView(dockWidgetContents_2);
        listViewSession->setObjectName("listViewSession");
        listViewSession->setContextMenuPolicy(Qt::CustomContextMenu);
        listViewSession->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listViewSession->setAlternatingRowColors(true);
        listViewSession->setSelectionMode(QAbstractItemView::ExtendedSelection);
        listViewSession->setMovement(QListView::Static);
        listViewSession->setFlow(QListView::TopToBottom);
        listViewSession->setProperty("isWrapping", QVariant(false));
        listViewSession->setViewMode(QListView::ListMode);

        verticalLayout->addWidget(listViewSession);

        tableViewSession = new QTableView(dockWidgetContents_2);
        tableViewSession->setObjectName("tableViewSession");
        tableViewSession->setContextMenuPolicy(Qt::CustomContextMenu);
        tableViewSession->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        tableViewSession->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableViewSession->setAlternatingRowColors(true);
        tableViewSession->setSelectionMode(QAbstractItemView::ExtendedSelection);
        tableViewSession->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableViewSession->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableViewSession->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(tableViewSession);

        dockWidgetSession->setWidget(dockWidgetContents_2);
        MainWindow->addDockWidget(Qt::DockWidgetArea::LeftDockWidgetArea, dockWidgetSession);
        QWidget::setTabOrder(listViewSession, graphicsView);
        QWidget::setTabOrder(graphicsView, horizontalSliderPosition);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuPlayback->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menuWindow->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionNewSession);
        menuFile->addAction(actionOpenSession);
        menuFile->addAction(actionFastOpen);
        menuFile->addAction(actionSaveSession);
        menuFile->addAction(actionSaveAsSession);
        menuFile->addAction(actionSaveSessionMetadata);
        menuFile->addSeparator();
        menuFile->addAction(actionCreateMappFiles);
        menuFile->addAction(actionCreateAllMappFilesNow);
        menuFile->addSeparator();
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionTranscodeAndImport);
        menuFile->addAction(actionFcpxmlImportAssistant);
        menuFile->addAction(actionFcpxmlSelectionAssistant);
        menuFile->addAction(actionClip_Information);
        menuFile->addAction(actionExport);
        menuFile->addAction(actionExportCurrentFrame);
        menuFile->addSeparator();
        menuFile->addAction(actionExportSettings);
        menuFile->addSeparator();
        menuFile->addAction(actionShowInFinder);
        menuFile->addAction(actionOpenWithExternalApplication);
        menuFile->addAction(actionSelectExternalApplication);
        menuFile->addSeparator();
        menuFile->addAction(actionQuit);
        menuEdit->addAction(actionCopyRecept);
        menuEdit->addAction(actionPasteReceipt);
        menuEdit->addAction(actionExportReceipt);
        menuEdit->addAction(actionImportReceipt);
        menuEdit->addAction(actionResetReceipt);
        menuEdit->addSeparator();
        menuEdit->addAction(actionUseDefaultReceipt);
        menuEdit->addSeparator();
        menuEdit->addAction(actionSelectAllClips);
        menuEdit->addAction(actionDeleteSelectedClips);
        menuEdit->addSeparator();
        menuEdit->addAction(actionWhiteBalancePicker);
        menuEdit->addSeparator();
        menuEdit->addAction(actionMarkRed);
        menuEdit->addAction(actionMarkYellow);
        menuEdit->addAction(actionMarkGreen);
        menuEdit->addAction(actionUnmark);
        menuHelp->addAction(actionAbout);
        menuHelp->addAction(actionAboutQt);
        menuHelp->addSeparator();
        menuHelp->addAction(actionCheckForUpdates);
        menuHelp->addAction(actionAutoCheckForUpdates);
        menuHelp->addSeparator();
        menuHelp->addAction(actionHelp);
        menuPlayback->addAction(actionGoto_First_Frame);
        menuPlayback->addAction(actionPreviousFrame);
        menuPlayback->addAction(actionPlay);
        menuPlayback->addAction(actionNextFrame);
        menuPlayback->addAction(actionLoop);
        menuPlayback->addSeparator();
        menuPlayback->addAction(actionPrevious_Clip);
        menuPlayback->addAction(actionNext_Clip);
        menuPlayback->addSeparator();
        menuPlayback->addAction(actionAudioOutput);
        menuPlayback->addSeparator();
        menuPlayback->addAction(actionDropFrameMode);
        menuPlayback->addAction(actionPlaybackPosition);
        menuPlayback->addAction(menuDemosaicForPlayback->menuAction());
        menuPlayback->addAction(actionBetterResizer);
        menuPlayback->addAction(actionViewerBackgroundColor);
        menuPlayback->addSeparator();
        menuPlayback->addAction(actionZoomFit);
        menuPlayback->addAction(actionZoom100);
        menuPlayback->addAction(actionFullscreen);
        menuDemosaicForPlayback->addAction(actionUseNoneDebayer);
        menuDemosaicForPlayback->addAction(actionUseSimpleDebayer);
        menuDemosaicForPlayback->addAction(actionUseBilinear);
        menuDemosaicForPlayback->addAction(actionUseLmmseDebayer);
        menuDemosaicForPlayback->addAction(actionUseIgvDebayer);
        menuDemosaicForPlayback->addAction(actionAlwaysUseAMaZE);
        menuDemosaicForPlayback->addAction(actionUseAhdDebayer);
        menuDemosaicForPlayback->addAction(actionUseRcdDebayer);
        menuDemosaicForPlayback->addAction(actionUseDcbDebayer);
        menuDemosaicForPlayback->addAction(actionCaching);
        menuDemosaicForPlayback->addAction(actionDontSwitchDebayerForPlayback);
        menuView->addAction(actionShowSessionArea);
        menuView->addAction(actionShowEditArea);
        menuView->addAction(actionShowAudioTrack);
        menuView->addSeparator();
        menuView->addAction(menuSessionListPreview->menuAction());
        menuView->addAction(menuPlayback_Elements->menuAction());
        menuView->addSeparator();
        menuView->addAction(actionShowHistogram);
        menuView->addAction(actionShowWaveFormMonitor);
        menuView->addAction(actionShowParade);
        menuView->addAction(actionShowVectorScope);
        menuView->addAction(actionShowZebras);
        menuView->addAction(actionShowInstalledFocusPixelMaps);
        menuView->addAction(actionShowInstalledBadPixelMaps);
        menuView->addSeparator();
        menuView->addAction(menuTheme->menuAction());
        menuView->addSeparator();
        menuView->addAction(actionAskForSavingOnQuit);
        menuView->addAction(actionNotificationExportFinished);
        menuView->addSeparator();
        menuView->addAction(actionShowRedClips);
        menuView->addAction(actionShowYellowClips);
        menuView->addAction(actionShowGreenClips);
        menuView->addAction(actionShowUnmarkedClips);
        menuSessionListPreview->addAction(actionPreviewDisabled);
        menuSessionListPreview->addAction(actionPreviewList);
        menuSessionListPreview->addAction(actionPreviewPicture);
        menuSessionListPreview->addAction(actionPreviewPictureBottom);
        menuSessionListPreview->addAction(actionPreviewTableModeBottom);
        menuPlayback_Elements->addAction(actionTimecodePositionMiddle);
        menuPlayback_Elements->addAction(actionTimecodePositionRight);
        menuPlayback_Elements->addSeparator();
        menuPlayback_Elements->addAction(actionToggleTimecodeDisplay);
        menuTheme->addAction(actionDarkThemeStandard);
        menuTheme->addAction(actionDarkThemeModern);
        menuWindow->addAction(actionMinimize);
        menuWindow->addAction(actionMaximize);
        mainToolBar->addAction(actionNewSession);
        mainToolBar->addAction(actionOpenSession);
        mainToolBar->addAction(actionSaveSession);
        mainToolBar->addAction(actionOpen);
        mainToolBar->addAction(actionExport);
        mainToolBar->addAction(actionExportSettings);
        mainToolBar->addAction(actionCopyRecept);
        mainToolBar->addAction(actionPasteReceipt);
        mainToolBar->addAction(actionClip_Information);
        mainToolBar->addAction(actionGoto_First_Frame);
        mainToolBar->addAction(actionPreviousFrame);
        mainToolBar->addAction(actionPlay);
        mainToolBar->addAction(actionNextFrame);
        mainToolBar->addAction(actionLoop);

        retranslateUi(MainWindow);
        QObject::connect(actionShowSessionArea, &QAction::toggled, dockWidgetSession, &QDockWidget::setVisible);
        QObject::connect(actionShowEditArea, &QAction::toggled, dockWidgetEdit, &QDockWidget::setVisible);
        QObject::connect(actionQuit, &QAction::triggered, MainWindow, qOverload<>(&QMainWindow::close));
        QObject::connect(actionMinimize, &QAction::triggered, MainWindow, qOverload<>(&QMainWindow::showMinimized));
        QObject::connect(actionMaximize, &QAction::triggered, MainWindow, qOverload<>(&QMainWindow::showMaximized));
        QObject::connect(actionDropFrameMode, &QAction::toggled, actionAudioOutput, &QAction::setEnabled);
        QObject::connect(toolButtonFocusDotsOff, SIGNAL(toggled(bool)), MainWindow, SLOT(toolButtonFocusPixelsChanged()));
        QObject::connect(toolButtonFocusDotsOn, SIGNAL(toggled(bool)), MainWindow, SLOT(toolButtonFocusPixelsChanged()));
        QObject::connect(toolButtonFocusDotsCropRec, SIGNAL(toggled(bool)), MainWindow, SLOT(toolButtonFocusPixelsChanged()));
        QObject::connect(toolButtonFocusDotMethod1, SIGNAL(toggled(bool)), MainWindow, SLOT(toolButtonFocusPixelsIntMethodChanged()));
        QObject::connect(toolButtonFocusDotMethod2, SIGNAL(toggled(bool)), MainWindow, SLOT(toolButtonFocusPixelsIntMethodChanged()));
        QObject::connect(toolButtonBadPixelsOff, SIGNAL(toggled(bool)), MainWindow, SLOT(toolButtonBadPixelsChanged()));
        QObject::connect(toolButtonBadPixelsOn, SIGNAL(toggled(bool)), MainWindow, SLOT(toolButtonBadPixelsChanged()));
        QObject::connect(toolButtonBadPixelsForce, SIGNAL(toggled(bool)), MainWindow, SLOT(toolButtonBadPixelsChanged()));
        QObject::connect(toolButtonBadPixelsMethod1, SIGNAL(toggled(bool)), MainWindow, SLOT(toolButtonBadPixelsIntMethodChanged()));
        QObject::connect(toolButtonBadPixelsMethod2, SIGNAL(toggled(bool)), MainWindow, SLOT(toolButtonBadPixelsIntMethodChanged()));
        QObject::connect(toolButtonChromaOff, SIGNAL(toggled(bool)), MainWindow, SLOT(toolButtonChromaSmoothChanged()));
        QObject::connect(toolButtonChroma2x2, SIGNAL(toggled(bool)), MainWindow, SLOT(toolButtonChromaSmoothChanged()));
        QObject::connect(toolButtonChroma3x3, SIGNAL(toggled(bool)), MainWindow, SLOT(toolButtonChromaSmoothChanged()));
        QObject::connect(toolButtonChroma5x5, SIGNAL(toggled(bool)), MainWindow, SLOT(toolButtonChromaSmoothChanged()));
        QObject::connect(toolButtonPatternNoiseOff, SIGNAL(toggled(bool)), MainWindow, SLOT(toolButtonPatternNoiseChanged()));
        QObject::connect(toolButtonPatternNoiseOn, SIGNAL(toggled(bool)), MainWindow, SLOT(toolButtonPatternNoiseChanged()));
        QObject::connect(toolButtonVerticalStripesOff, SIGNAL(toggled(bool)), MainWindow, SLOT(toolButtonVerticalStripesChanged()));
        QObject::connect(toolButtonVerticalStripesNormal, SIGNAL(toggled(bool)), MainWindow, SLOT(toolButtonVerticalStripesChanged()));
        QObject::connect(toolButtonVerticalStripesForce, SIGNAL(toggled(bool)), MainWindow, SLOT(toolButtonVerticalStripesChanged()));
        QObject::connect(toolButtonDualIsoOff, SIGNAL(toggled(bool)), MainWindow, SLOT(toolButtonDualIsoChanged()));
        QObject::connect(toolButtonDualIsoOn, SIGNAL(toggled(bool)), MainWindow, SLOT(toolButtonDualIsoChanged()));
        QObject::connect(toolButtonDualIsoPreview, SIGNAL(toggled(bool)), MainWindow, SLOT(toolButtonDualIsoChanged()));
        QObject::connect(toolButtonDualIsoInterpolationAmaze, SIGNAL(toggled(bool)), MainWindow, SLOT(toolButtonDualIsoInterpolationChanged()));
        QObject::connect(toolButtonDualIsoInterpolationMean, SIGNAL(toggled(bool)), MainWindow, SLOT(toolButtonDualIsoInterpolationChanged()));
        QObject::connect(toolButtonDualIsoAliasMapOff, SIGNAL(toggled(bool)), MainWindow, SLOT(toolButtonDualIsoAliasMapChanged()));
        QObject::connect(toolButtonDualIsoAliasMapOn, SIGNAL(toggled(bool)), MainWindow, SLOT(toolButtonDualIsoAliasMapChanged()));
        QObject::connect(toolButtonDualIsoFullresBlendingOff, SIGNAL(toggled(bool)), MainWindow, SLOT(toolButtonDualIsoFullresBlendingChanged()));
        QObject::connect(toolButtonDualIsoFullresBlendingOn, SIGNAL(toggled(bool)), MainWindow, SLOT(toolButtonDualIsoFullresBlendingChanged()));
        QObject::connect(actionWhiteBalancePicker, &QAction::toggled, toolButtonWb, &QToolButton::setChecked);
        QObject::connect(toolButtonWb, &QToolButton::clicked, actionWhiteBalancePicker, &QAction::setChecked);
        QObject::connect(toolButtonBadPixelsSearchMethodNormal, SIGNAL(toggled(bool)), MainWindow, SLOT(toolButtonBadPixelsSearchMethodChanged()));
        QObject::connect(toolButtonBadPixelsSearchMethodAggressive, SIGNAL(toggled(bool)), MainWindow, SLOT(toolButtonBadPixelsSearchMethodChanged()));
        QObject::connect(toolButtonDarkFrameSubtractionOff, SIGNAL(toggled(bool)), MainWindow, SLOT(toolButtonDarkFrameSubtractionChanged(bool)));
        QObject::connect(toolButtonDarkFrameSubtractionInt, SIGNAL(toggled(bool)), MainWindow, SLOT(toolButtonDarkFrameSubtractionChanged(bool)));
        QObject::connect(toolButtonDarkFrameSubtractionExt, SIGNAL(toggled(bool)), MainWindow, SLOT(toolButtonDarkFrameSubtractionChanged(bool)));
        QObject::connect(toolButtonUpsideDownOff, SIGNAL(toggled(bool)), MainWindow, SLOT(toolButtonUpsideDownChanged()));
        QObject::connect(toolButtonUpsideDownOn, SIGNAL(toggled(bool)), MainWindow, SLOT(toolButtonUpsideDownChanged()));
        QObject::connect(toolButtonGCurvesY, SIGNAL(toggled(bool)), MainWindow, SLOT(toolButtonGCurvesChanged()));
        QObject::connect(toolButtonGCurvesR, SIGNAL(toggled(bool)), MainWindow, SLOT(toolButtonGCurvesChanged()));
        QObject::connect(toolButtonGCurvesG, SIGNAL(toggled(bool)), MainWindow, SLOT(toolButtonGCurvesChanged()));
        QObject::connect(toolButtonGCurvesB, SIGNAL(toggled(bool)), MainWindow, SLOT(toolButtonGCurvesChanged()));
        QObject::connect(toolButtonFocusDotMethod3, SIGNAL(toggled(bool)), MainWindow, SLOT(toolButtonFocusPixelsIntMethodChanged()));
        QObject::connect(toolButtonBadPixelsMethod3, SIGNAL(toggled(bool)), MainWindow, SLOT(toolButtonBadPixelsIntMethodChanged()));
        QObject::connect(toolButtonBadPixelsMap, SIGNAL(toggled(bool)), MainWindow, SLOT(toolButtonBadPixelsChanged()));

        comboBoxDebayer->setCurrentIndex(5);
        comboBoxUseCameraMatrix->setCurrentIndex(1);
        comboBoxDenoiseWindow->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MLV App", nullptr));
        actionOpen->setText(QCoreApplication::translate("MainWindow", "Import MLV", nullptr));
#if QT_CONFIG(tooltip)
        actionOpen->setToolTip(QCoreApplication::translate("MainWindow", "Import a MLV file to the session...", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionOpen->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+I", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCopyRecept->setText(QCoreApplication::translate("MainWindow", "Copy Receipt", nullptr));
#if QT_CONFIG(tooltip)
        actionCopyRecept->setToolTip(QCoreApplication::translate("MainWindow", "Copy the receipt to clipboard", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionCopyRecept->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPasteReceipt->setText(QCoreApplication::translate("MainWindow", "Paste Receipt", nullptr));
#if QT_CONFIG(tooltip)
        actionPasteReceipt->setToolTip(QCoreApplication::translate("MainWindow", "Paste the receipt from clipboard", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionPasteReceipt->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        actionQuit->setText(QCoreApplication::translate("MainWindow", "Quit", nullptr));
#if QT_CONFIG(shortcut)
        actionQuit->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAbout->setText(QCoreApplication::translate("MainWindow", "About...", nullptr));
        actionExport->setText(QCoreApplication::translate("MainWindow", "Export Selected Clips", nullptr));
#if QT_CONFIG(tooltip)
        actionExport->setToolTip(QCoreApplication::translate("MainWindow", "Export selected clips", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionExport->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+E", nullptr));
#endif // QT_CONFIG(shortcut)
        actionClip_Information->setText(QCoreApplication::translate("MainWindow", "Clip Information", nullptr));
#if QT_CONFIG(tooltip)
        actionClip_Information->setToolTip(QCoreApplication::translate("MainWindow", "Show clip information...", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionClip_Information->setShortcut(QCoreApplication::translate("MainWindow", "I", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPlay->setText(QCoreApplication::translate("MainWindow", "Play", nullptr));
#if QT_CONFIG(tooltip)
        actionPlay->setToolTip(QCoreApplication::translate("MainWindow", "Play clip...", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionPlay->setShortcut(QCoreApplication::translate("MainWindow", "Space", nullptr));
#endif // QT_CONFIG(shortcut)
        actionGoto_First_Frame->setText(QCoreApplication::translate("MainWindow", "Goto First Frame", nullptr));
#if QT_CONFIG(tooltip)
        actionGoto_First_Frame->setToolTip(QCoreApplication::translate("MainWindow", "Jump to first frame...", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionGoto_First_Frame->setShortcut(QCoreApplication::translate("MainWindow", "X", nullptr));
#endif // QT_CONFIG(shortcut)
        actionLoop->setText(QCoreApplication::translate("MainWindow", "Loop", nullptr));
#if QT_CONFIG(tooltip)
        actionLoop->setToolTip(QCoreApplication::translate("MainWindow", "Never ending playback", nullptr));
#endif // QT_CONFIG(tooltip)
        actionDropFrameMode->setText(QCoreApplication::translate("MainWindow", "Drop Frame Mode", nullptr));
        actionZoomFit->setText(QCoreApplication::translate("MainWindow", "Zoom: fit", nullptr));
#if QT_CONFIG(shortcut)
        actionZoomFit->setShortcut(QCoreApplication::translate("MainWindow", "F", nullptr));
#endif // QT_CONFIG(shortcut)
        actionZoom100->setText(QCoreApplication::translate("MainWindow", "Zoom: 100%", nullptr));
#if QT_CONFIG(shortcut)
        actionZoom100->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+0", nullptr));
#endif // QT_CONFIG(shortcut)
        actionShowHistogram->setText(QCoreApplication::translate("MainWindow", "Show Histogram", nullptr));
#if QT_CONFIG(shortcut)
        actionShowHistogram->setShortcut(QCoreApplication::translate("MainWindow", "H", nullptr));
#endif // QT_CONFIG(shortcut)
        actionShowWaveFormMonitor->setText(QCoreApplication::translate("MainWindow", "Show Waveform Monitor", nullptr));
#if QT_CONFIG(tooltip)
        actionShowWaveFormMonitor->setToolTip(QCoreApplication::translate("MainWindow", "Show Waveform Monitor", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionShowWaveFormMonitor->setShortcut(QCoreApplication::translate("MainWindow", "W", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAlwaysUseAMaZE->setText(QCoreApplication::translate("MainWindow", "AMaZE", nullptr));
        actionExportSettings->setText(QCoreApplication::translate("MainWindow", "Export Settings", nullptr));
#if QT_CONFIG(tooltip)
        actionExportSettings->setToolTip(QCoreApplication::translate("MainWindow", "Export Settings", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionExportSettings->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+,", nullptr));
#endif // QT_CONFIG(shortcut)
        actionShowSessionArea->setText(QCoreApplication::translate("MainWindow", "Show Session Area", nullptr));
#if QT_CONFIG(shortcut)
        actionShowSessionArea->setShortcut(QCoreApplication::translate("MainWindow", "S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionShowEditArea->setText(QCoreApplication::translate("MainWindow", "Show Edit Area", nullptr));
#if QT_CONFIG(shortcut)
        actionShowEditArea->setShortcut(QCoreApplication::translate("MainWindow", "E", nullptr));
#endif // QT_CONFIG(shortcut)
        actionResetReceipt->setText(QCoreApplication::translate("MainWindow", "Reset Receipt", nullptr));
#if QT_CONFIG(tooltip)
        actionResetReceipt->setToolTip(QCoreApplication::translate("MainWindow", "Reset Receipt", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionResetReceipt->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Alt+R", nullptr));
#endif // QT_CONFIG(shortcut)
        actionNewSession->setText(QCoreApplication::translate("MainWindow", "New Session", nullptr));
#if QT_CONFIG(shortcut)
        actionNewSession->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionOpenSession->setText(QCoreApplication::translate("MainWindow", "Open Session", nullptr));
#if QT_CONFIG(shortcut)
        actionOpenSession->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSaveSession->setText(QCoreApplication::translate("MainWindow", "Save Session", nullptr));
#if QT_CONFIG(shortcut)
        actionSaveSession->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionFullscreen->setText(QCoreApplication::translate("MainWindow", "Fullscreen", nullptr));
#if QT_CONFIG(shortcut)
        actionFullscreen->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+F", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCaching->setText(QCoreApplication::translate("MainWindow", "AMaZE Cached", nullptr));
        actionShowAudioTrack->setText(QCoreApplication::translate("MainWindow", "Show Audio Track", nullptr));
#if QT_CONFIG(shortcut)
        actionShowAudioTrack->setShortcut(QCoreApplication::translate("MainWindow", "A", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMinimize->setText(QCoreApplication::translate("MainWindow", "Minimize", nullptr));
#if QT_CONFIG(shortcut)
        actionMinimize->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+M", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMaximize->setText(QCoreApplication::translate("MainWindow", "Maximize", nullptr));
        actionAudioOutput->setText(QCoreApplication::translate("MainWindow", "Audio Output", nullptr));
#if QT_CONFIG(tooltip)
        actionAudioOutput->setToolTip(QCoreApplication::translate("MainWindow", "Audio Output on Playback", nullptr));
#endif // QT_CONFIG(tooltip)
        actionShowZebras->setText(QCoreApplication::translate("MainWindow", "Show Zebras", nullptr));
#if QT_CONFIG(shortcut)
        actionShowZebras->setShortcut(QCoreApplication::translate("MainWindow", "Z", nullptr));
#endif // QT_CONFIG(shortcut)
        actionNextFrame->setText(QCoreApplication::translate("MainWindow", "Next Frame", nullptr));
#if QT_CONFIG(shortcut)
        actionNextFrame->setShortcut(QCoreApplication::translate("MainWindow", ".", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPreviousFrame->setText(QCoreApplication::translate("MainWindow", "Previous Frame", nullptr));
#if QT_CONFIG(shortcut)
        actionPreviousFrame->setShortcut(QCoreApplication::translate("MainWindow", ",", nullptr));
#endif // QT_CONFIG(shortcut)
        actionShowParade->setText(QCoreApplication::translate("MainWindow", "Show Parade", nullptr));
#if QT_CONFIG(shortcut)
        actionShowParade->setShortcut(QCoreApplication::translate("MainWindow", "P", nullptr));
#endif // QT_CONFIG(shortcut)
        actionWhiteBalancePicker->setText(QCoreApplication::translate("MainWindow", "White Balance Picker", nullptr));
#if QT_CONFIG(shortcut)
        actionWhiteBalancePicker->setShortcut(QCoreApplication::translate("MainWindow", "B", nullptr));
#endif // QT_CONFIG(shortcut)
        actionExportCurrentFrame->setText(QCoreApplication::translate("MainWindow", "Export Current Frame", nullptr));
#if QT_CONFIG(tooltip)
        actionExportCurrentFrame->setToolTip(QCoreApplication::translate("MainWindow", "Export current frame...", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionExportCurrentFrame->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+E", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAboutQt->setText(QCoreApplication::translate("MainWindow", "About Qt", nullptr));
        actionExportReceipt->setText(QCoreApplication::translate("MainWindow", "Export Receipt", nullptr));
#if QT_CONFIG(tooltip)
        actionExportReceipt->setToolTip(QCoreApplication::translate("MainWindow", "Export Receipt to File", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionExportReceipt->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Alt+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionImportReceipt->setText(QCoreApplication::translate("MainWindow", "Import Receipt", nullptr));
#if QT_CONFIG(tooltip)
        actionImportReceipt->setToolTip(QCoreApplication::translate("MainWindow", "Import Receipt from File", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionImportReceipt->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Alt+V", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPreviewDisabled->setText(QCoreApplication::translate("MainWindow", "Disabled", nullptr));
        actionPreviewList->setText(QCoreApplication::translate("MainWindow", "List Mode", nullptr));
        actionPreviewPicture->setText(QCoreApplication::translate("MainWindow", "Picture Mode Left", nullptr));
        actionUseBilinear->setText(QCoreApplication::translate("MainWindow", "Bilinear", nullptr));
        actionCreateMappFiles->setText(QCoreApplication::translate("MainWindow", "Create MAPP Files", nullptr));
        actionNext_Clip->setText(QCoreApplication::translate("MainWindow", "Next Clip", nullptr));
#if QT_CONFIG(shortcut)
        actionNext_Clip->setShortcut(QCoreApplication::translate("MainWindow", "K", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPrevious_Clip->setText(QCoreApplication::translate("MainWindow", "Previous Clip", nullptr));
#if QT_CONFIG(shortcut)
        actionPrevious_Clip->setShortcut(QCoreApplication::translate("MainWindow", "J", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSelectAllClips->setText(QCoreApplication::translate("MainWindow", "Select All Clips", nullptr));
#if QT_CONFIG(shortcut)
        actionSelectAllClips->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+A", nullptr));
#endif // QT_CONFIG(shortcut)
        actionDeleteSelectedClips->setText(QCoreApplication::translate("MainWindow", "Delete Selected Clip(s)", nullptr));
#if QT_CONFIG(shortcut)
        actionDeleteSelectedClips->setShortcut(QCoreApplication::translate("MainWindow", "Del", nullptr));
#endif // QT_CONFIG(shortcut)
        actionShowVectorScope->setText(QCoreApplication::translate("MainWindow", "Show Vector Scope", nullptr));
#if QT_CONFIG(shortcut)
        actionShowVectorScope->setShortcut(QCoreApplication::translate("MainWindow", "V", nullptr));
#endif // QT_CONFIG(shortcut)
        actionTimecodePositionRight->setText(QCoreApplication::translate("MainWindow", "Playback Elements Position Right", nullptr));
#if QT_CONFIG(tooltip)
        actionTimecodePositionRight->setToolTip(QCoreApplication::translate("MainWindow", "Move the timecode label and playback control to the right.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionTimecodePositionMiddle->setText(QCoreApplication::translate("MainWindow", "Playback Elements Position Middle", nullptr));
#if QT_CONFIG(tooltip)
        actionTimecodePositionMiddle->setToolTip(QCoreApplication::translate("MainWindow", "Move timecode label between icons.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSaveAsSession->setText(QCoreApplication::translate("MainWindow", "Save Session as...", nullptr));
#if QT_CONFIG(tooltip)
        actionSaveAsSession->setToolTip(QCoreApplication::translate("MainWindow", "Save Session as...", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionSaveAsSession->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionToggleTimecodeDisplay->setText(QCoreApplication::translate("MainWindow", "Toggle Timecode Display", nullptr));
#if QT_CONFIG(shortcut)
        actionToggleTimecodeDisplay->setShortcut(QCoreApplication::translate("MainWindow", "T", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCheckForUpdates->setText(QCoreApplication::translate("MainWindow", "Check for Updates", nullptr));
        actionAutoCheckForUpdates->setText(QCoreApplication::translate("MainWindow", "Auto Check for Updates", nullptr));
#if QT_CONFIG(tooltip)
        actionAutoCheckForUpdates->setToolTip(QCoreApplication::translate("MainWindow", "Auto Check for Updates on Startup", nullptr));
#endif // QT_CONFIG(tooltip)
        actionUseNoneDebayer->setText(QCoreApplication::translate("MainWindow", "None (monochrome)", nullptr));
        actionUseSimpleDebayer->setText(QCoreApplication::translate("MainWindow", "Simple", nullptr));
        actionUseLmmseDebayer->setText(QCoreApplication::translate("MainWindow", "LMMSE", nullptr));
        actionUseIgvDebayer->setText(QCoreApplication::translate("MainWindow", "IGV", nullptr));
        actionFcpxmlImportAssistant->setText(QCoreApplication::translate("MainWindow", "FCPXML Import Assistant", nullptr));
#if QT_CONFIG(tooltip)
        actionFcpxmlImportAssistant->setToolTip(QCoreApplication::translate("MainWindow", "Import MLV files to session, which were used in FCPXML project", nullptr));
#endif // QT_CONFIG(tooltip)
        actionHelp->setText(QCoreApplication::translate("MainWindow", "Help", nullptr));
        actionFcpxmlSelectionAssistant->setText(QCoreApplication::translate("MainWindow", "FCPXML Selection Assistant", nullptr));
#if QT_CONFIG(tooltip)
        actionFcpxmlSelectionAssistant->setToolTip(QCoreApplication::translate("MainWindow", "Select clips in session in dependency to clips which were used in FCPXML project", nullptr));
#endif // QT_CONFIG(tooltip)
        actionPlaybackPosition->setText(QCoreApplication::translate("MainWindow", "Remember Playback Position", nullptr));
        actionPreviewPictureBottom->setText(QCoreApplication::translate("MainWindow", "Picture Mode Bottom", nullptr));
        actionShowInFinder->setText(QCoreApplication::translate("MainWindow", "Reveal in Finder", nullptr));
#if QT_CONFIG(tooltip)
        actionShowInFinder->setToolTip(QCoreApplication::translate("MainWindow", "Reveal selected file in Finder", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionShowInFinder->setShortcut(QCoreApplication::translate("MainWindow", "Alt+R", nullptr));
#endif // QT_CONFIG(shortcut)
        actionOpenWithExternalApplication->setText(QCoreApplication::translate("MainWindow", "Open with External Application", nullptr));
#if QT_CONFIG(tooltip)
        actionOpenWithExternalApplication->setToolTip(QCoreApplication::translate("MainWindow", "Open selected clip with external application", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionOpenWithExternalApplication->setShortcut(QCoreApplication::translate("MainWindow", "Alt+A", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSelectExternalApplication->setText(QCoreApplication::translate("MainWindow", "Select External Application", nullptr));
#if QT_CONFIG(tooltip)
        actionSelectExternalApplication->setToolTip(QCoreApplication::translate("MainWindow", "Select external application", nullptr));
#endif // QT_CONFIG(tooltip)
        actionAskForSavingOnQuit->setText(QCoreApplication::translate("MainWindow", "Ask for Saving on Quit", nullptr));
        actionDarktheme->setText(QCoreApplication::translate("MainWindow", "Darktheme", nullptr));
        actionDarkThemeStandard->setText(QCoreApplication::translate("MainWindow", "DarkTheme Standard", nullptr));
        actionDarkThemeModern->setText(QCoreApplication::translate("MainWindow", "DarkTheme Modern", nullptr));
        actionCreateAllMappFilesNow->setText(QCoreApplication::translate("MainWindow", "Create All MAPP Files Now", nullptr));
#if QT_CONFIG(tooltip)
        actionCreateAllMappFilesNow->setToolTip(QCoreApplication::translate("MainWindow", "Create All MAPP Files Now", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionCreateAllMappFilesNow->setShortcut(QCoreApplication::translate("MainWindow", "Alt+M", nullptr));
#endif // QT_CONFIG(shortcut)
        actionBetterResizer->setText(QCoreApplication::translate("MainWindow", "Better Resizer for Viewer", nullptr));
        actionShowInstalledFocusPixelMaps->setText(QCoreApplication::translate("MainWindow", "Show Installed Focus Pixel Maps", nullptr));
        actionUseAhdDebayer->setText(QCoreApplication::translate("MainWindow", "AHD", nullptr));
        actionDontSwitchDebayerForPlayback->setText(QCoreApplication::translate("MainWindow", "Don't Switch Debayer for Playback", nullptr));
        actionTranscodeAndImport->setText(QCoreApplication::translate("MainWindow", "Transcode and Import", nullptr));
        actionShowInstalledBadPixelMaps->setText(QCoreApplication::translate("MainWindow", "Show Installed Bad Pixel Maps", nullptr));
        actionUseDefaultReceipt->setText(QCoreApplication::translate("MainWindow", "Use Default Receipt", nullptr));
        actionMarkRed->setText(QCoreApplication::translate("MainWindow", "Mark Clip Red", nullptr));
#if QT_CONFIG(tooltip)
        actionMarkRed->setToolTip(QCoreApplication::translate("MainWindow", "Mark Clip Red", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionMarkRed->setShortcut(QCoreApplication::translate("MainWindow", "1", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMarkYellow->setText(QCoreApplication::translate("MainWindow", "Mark Clip Yellow", nullptr));
#if QT_CONFIG(tooltip)
        actionMarkYellow->setToolTip(QCoreApplication::translate("MainWindow", "Mark Clip Yellow", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionMarkYellow->setShortcut(QCoreApplication::translate("MainWindow", "2", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMarkGreen->setText(QCoreApplication::translate("MainWindow", "Mark Clip Green", nullptr));
#if QT_CONFIG(tooltip)
        actionMarkGreen->setToolTip(QCoreApplication::translate("MainWindow", "Mark Clip Green", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionMarkGreen->setShortcut(QCoreApplication::translate("MainWindow", "3", nullptr));
#endif // QT_CONFIG(shortcut)
        actionUnmark->setText(QCoreApplication::translate("MainWindow", "Unmark Clip", nullptr));
#if QT_CONFIG(tooltip)
        actionUnmark->setToolTip(QCoreApplication::translate("MainWindow", "Unmark Clip", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionUnmark->setShortcut(QCoreApplication::translate("MainWindow", "0", nullptr));
#endif // QT_CONFIG(shortcut)
        actionShowRedClips->setText(QCoreApplication::translate("MainWindow", "Show Red Clips", nullptr));
#if QT_CONFIG(shortcut)
        actionShowRedClips->setShortcut(QCoreApplication::translate("MainWindow", "Alt+1", nullptr));
#endif // QT_CONFIG(shortcut)
        actionShowGreenClips->setText(QCoreApplication::translate("MainWindow", "Show Green Clips", nullptr));
#if QT_CONFIG(shortcut)
        actionShowGreenClips->setShortcut(QCoreApplication::translate("MainWindow", "Alt+3", nullptr));
#endif // QT_CONFIG(shortcut)
        actionShowYellowClips->setText(QCoreApplication::translate("MainWindow", "Show Yellow Clips", nullptr));
#if QT_CONFIG(shortcut)
        actionShowYellowClips->setShortcut(QCoreApplication::translate("MainWindow", "Alt+2", nullptr));
#endif // QT_CONFIG(shortcut)
        actionShowUnmarkedClips->setText(QCoreApplication::translate("MainWindow", "Show Unmarked Clips", nullptr));
#if QT_CONFIG(shortcut)
        actionShowUnmarkedClips->setShortcut(QCoreApplication::translate("MainWindow", "Alt+0", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPreviewTableModeBottom->setText(QCoreApplication::translate("MainWindow", "Table Mode Bottom", nullptr));
        actionUseRcdDebayer->setText(QCoreApplication::translate("MainWindow", "RCD", nullptr));
#if QT_CONFIG(tooltip)
        actionUseRcdDebayer->setToolTip(QCoreApplication::translate("MainWindow", "RCD", nullptr));
#endif // QT_CONFIG(tooltip)
        actionUseDcbDebayer->setText(QCoreApplication::translate("MainWindow", "DCB", nullptr));
        actionViewerBackgroundColor->setText(QCoreApplication::translate("MainWindow", "Viewer Background Color", nullptr));
        actionSaveSessionMetadata->setText(QCoreApplication::translate("MainWindow", "Save Session Metadata", nullptr));
        actionFastOpen->setText(QCoreApplication::translate("MainWindow", "Fast Open and Import", nullptr));
#if QT_CONFIG(tooltip)
        actionFastOpen->setToolTip(QCoreApplication::translate("MainWindow", "If checked, clips are imported with reduced metadata on first read.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionNotificationExportFinished->setText(QCoreApplication::translate("MainWindow", "Notification on Export Finished", nullptr));
        labelAudioTrack->setText(QString());
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "Help", nullptr));
        menuPlayback->setTitle(QCoreApplication::translate("MainWindow", "Playback", nullptr));
        menuDemosaicForPlayback->setTitle(QCoreApplication::translate("MainWindow", "Debayer for Playback", nullptr));
        menuView->setTitle(QCoreApplication::translate("MainWindow", "View", nullptr));
        menuSessionListPreview->setTitle(QCoreApplication::translate("MainWindow", "Session List Preview", nullptr));
        menuPlayback_Elements->setTitle(QCoreApplication::translate("MainWindow", "Playback Elements", nullptr));
        menuTheme->setTitle(QCoreApplication::translate("MainWindow", "Theme", nullptr));
        menuWindow->setTitle(QCoreApplication::translate("MainWindow", "Window", nullptr));
        dockWidgetEdit->setWindowTitle(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        labelScope->setText(QString());
        groupBoxRawCorrection->setTitle(QCoreApplication::translate("MainWindow", "RAW Correction", nullptr));
        checkBoxRawFixEnable->setText(QCoreApplication::translate("MainWindow", "Enable RAW Correction", nullptr));
        labelDarkFrameSubtraction->setText(QCoreApplication::translate("MainWindow", "Darkframe Subtraction", nullptr));
        toolButtonDarkFrameSubtractionFile->setText(QCoreApplication::translate("MainWindow", "Select File...", nullptr));
        toolButtonDarkFrameSubtractionOff->setText(QCoreApplication::translate("MainWindow", "Off", nullptr));
        toolButtonDarkFrameSubtractionExt->setText(QCoreApplication::translate("MainWindow", "Ext", nullptr));
        toolButtonDarkFrameSubtractionInt->setText(QCoreApplication::translate("MainWindow", "Int", nullptr));
        lineEditDarkFrameFile->setText(QCoreApplication::translate("MainWindow", "No file selected", nullptr));
        FocusPixelsLabel->setText(QCoreApplication::translate("MainWindow", "Fix Focus Dots", nullptr));
        toolButtonFocusDotsOff->setText(QCoreApplication::translate("MainWindow", "Off", nullptr));
        toolButtonFocusDotsOn->setText(QCoreApplication::translate("MainWindow", "On", nullptr));
        toolButtonFocusDotsCropRec->setText(QCoreApplication::translate("MainWindow", "CropRec", nullptr));
        FocusPixelsInterpolationMethodLabel->setText(QCoreApplication::translate("MainWindow", "Interpolation Method", nullptr));
        toolButtonFocusDotMethod1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        toolButtonFocusDotMethod2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        toolButtonFocusDotMethod3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        BadPixelsLabel->setText(QCoreApplication::translate("MainWindow", "Fix Bad Pixels ", nullptr));
        toolButtonBadPixelsOff->setText(QCoreApplication::translate("MainWindow", "Off", nullptr));
        toolButtonBadPixelsOn->setText(QCoreApplication::translate("MainWindow", "Auto", nullptr));
        toolButtonBadPixelsForce->setText(QCoreApplication::translate("MainWindow", "Force", nullptr));
#if QT_CONFIG(tooltip)
        toolButtonBadPixelsMap->setToolTip(QCoreApplication::translate("MainWindow", "Use Bad Pixel Map", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButtonBadPixelsMap->setText(QCoreApplication::translate("MainWindow", "Map", nullptr));
        FocusPixelsInterpolationMethodLabel_2->setText(QCoreApplication::translate("MainWindow", "Search Method", nullptr));
        toolButtonBadPixelsSearchMethodNormal->setText(QCoreApplication::translate("MainWindow", "Norm", nullptr));
        toolButtonBadPixelsSearchMethodAggressive->setText(QCoreApplication::translate("MainWindow", "Aggr", nullptr));
#if QT_CONFIG(tooltip)
        toolButtonBadPixelsSearchMethodEdit->setToolTip(QCoreApplication::translate("MainWindow", "Select Bad Pixels", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButtonBadPixelsSearchMethodEdit->setText(QString());
#if QT_CONFIG(shortcut)
        toolButtonBadPixelsSearchMethodEdit->setShortcut(QCoreApplication::translate("MainWindow", "M", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        toolButtonBadPixelsCrosshairEnable->setToolTip(QCoreApplication::translate("MainWindow", "Mark Bad Pixel with Cross", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButtonBadPixelsCrosshairEnable->setText(QString());
#if QT_CONFIG(tooltip)
        toolButtonDeleteBpm->setToolTip(QCoreApplication::translate("MainWindow", "Delete Current Bad Pixel Map", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButtonDeleteBpm->setText(QCoreApplication::translate("MainWindow", "Del", nullptr));
        BadPixelsInterpolationMethodLabel->setText(QCoreApplication::translate("MainWindow", "Interpolation Method", nullptr));
        toolButtonBadPixelsMethod1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        toolButtonBadPixelsMethod2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        toolButtonBadPixelsMethod3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        ChromaSmoothLabel->setText(QCoreApplication::translate("MainWindow", "Chroma Smooth", nullptr));
        toolButtonChromaOff->setText(QCoreApplication::translate("MainWindow", "Off", nullptr));
        toolButtonChroma2x2->setText(QCoreApplication::translate("MainWindow", "2x2", nullptr));
        toolButtonChroma3x3->setText(QCoreApplication::translate("MainWindow", "3x3", nullptr));
        toolButtonChroma5x5->setText(QCoreApplication::translate("MainWindow", "5x5", nullptr));
        VerticalStripesLabel->setText(QCoreApplication::translate("MainWindow", "Vertical Stripes", nullptr));
        toolButtonVerticalStripesOff->setText(QCoreApplication::translate("MainWindow", "Off", nullptr));
        toolButtonVerticalStripesNormal->setText(QCoreApplication::translate("MainWindow", "Normal", nullptr));
        toolButtonVerticalStripesForce->setText(QCoreApplication::translate("MainWindow", "Force", nullptr));
        DualISOLabel->setText(QCoreApplication::translate("MainWindow", "Dual ISO", nullptr));
        toolButtonDualIsoForce->setText(QCoreApplication::translate("MainWindow", "Force", nullptr));
        toolButtonDualIsoOff->setText(QCoreApplication::translate("MainWindow", "Off", nullptr));
        toolButtonDualIsoOn->setText(QCoreApplication::translate("MainWindow", "On", nullptr));
        toolButtonDualIsoPreview->setText(QCoreApplication::translate("MainWindow", "Preview", nullptr));
        DualISOInterpolationLabel->setText(QCoreApplication::translate("MainWindow", "Interpolation", nullptr));
        toolButtonDualIsoInterpolationAmaze->setText(QCoreApplication::translate("MainWindow", "AMaZE", nullptr));
        toolButtonDualIsoInterpolationMean->setText(QCoreApplication::translate("MainWindow", "Mean", nullptr));
        DualISOAliasMapLabel->setText(QCoreApplication::translate("MainWindow", "Alias Map", nullptr));
        toolButtonDualIsoAliasMapOff->setText(QCoreApplication::translate("MainWindow", "Off", nullptr));
        toolButtonDualIsoAliasMapOn->setText(QCoreApplication::translate("MainWindow", "On", nullptr));
        DualISOFullresBlendingLabel->setText(QCoreApplication::translate("MainWindow", "Fullres Blending", nullptr));
        toolButtonDualIsoFullresBlendingOff->setText(QCoreApplication::translate("MainWindow", "Off", nullptr));
        toolButtonDualIsoFullresBlendingOn->setText(QCoreApplication::translate("MainWindow", "On", nullptr));
        DeflickerTargetLabel->setText(QCoreApplication::translate("MainWindow", "Deflicker Target", nullptr));
        PatternNoiseLabel->setText(QCoreApplication::translate("MainWindow", "Pattern Noise", nullptr));
        toolButtonPatternNoiseOff->setText(QCoreApplication::translate("MainWindow", "Off", nullptr));
        toolButtonPatternNoiseOn->setText(QCoreApplication::translate("MainWindow", "On", nullptr));
        RawBlackLabel->setText(QCoreApplication::translate("MainWindow", "RAW Black Level", nullptr));
        label_RawBlackVal->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        toolButtonRawBlackAutoCorrect->setText(QCoreApplication::translate("MainWindow", "Repair", nullptr));
        RawWhiteLabel->setText(QCoreApplication::translate("MainWindow", "RAW White Level", nullptr));
        label_RawWhiteVal->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        groupBoxCutInOut->setTitle(QCoreApplication::translate("MainWindow", "Cut In && Cut Out", nullptr));
        toolButtonCutIn->setText(QCoreApplication::translate("MainWindow", "In", nullptr));
#if QT_CONFIG(shortcut)
        toolButtonCutIn->setShortcut(QCoreApplication::translate("MainWindow", "Shift+I", nullptr));
#endif // QT_CONFIG(shortcut)
        toolButtonCutInDelete->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        toolButtonCutOut->setText(QCoreApplication::translate("MainWindow", "Out", nullptr));
#if QT_CONFIG(shortcut)
        toolButtonCutOut->setShortcut(QCoreApplication::translate("MainWindow", "Shift+O", nullptr));
#endif // QT_CONFIG(shortcut)
        toolButtonCutOutDelete->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        groupBoxDebayer->setTitle(QCoreApplication::translate("MainWindow", "Debayer Algorithm", nullptr));
        comboBoxDebayer->setItemText(0, QCoreApplication::translate("MainWindow", "None", nullptr));
        comboBoxDebayer->setItemText(1, QCoreApplication::translate("MainWindow", "Simple", nullptr));
        comboBoxDebayer->setItemText(2, QCoreApplication::translate("MainWindow", "Bilinear", nullptr));
        comboBoxDebayer->setItemText(3, QCoreApplication::translate("MainWindow", "LMMSE", nullptr));
        comboBoxDebayer->setItemText(4, QCoreApplication::translate("MainWindow", "IGV", nullptr));
        comboBoxDebayer->setItemText(5, QCoreApplication::translate("MainWindow", "AMaZE", nullptr));
        comboBoxDebayer->setItemText(6, QCoreApplication::translate("MainWindow", "AHD", nullptr));
        comboBoxDebayer->setItemText(7, QCoreApplication::translate("MainWindow", "RCD", nullptr));
        comboBoxDebayer->setItemText(8, QCoreApplication::translate("MainWindow", "DCB", nullptr));

        comboBoxDebayer->setCurrentText(QCoreApplication::translate("MainWindow", "AMaZE", nullptr));
        groupBoxProcessing->setTitle(QCoreApplication::translate("MainWindow", "Processing", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Exposure", nullptr));
        label_ExposureVal->setText(QCoreApplication::translate("MainWindow", "0.00", nullptr));
        label_contrast->setText(QCoreApplication::translate("MainWindow", "Contrast", nullptr));
        label_ContrastVal->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_pivot->setText(QCoreApplication::translate("MainWindow", "Pivot", nullptr));
        label_PivotVal->setText(QCoreApplication::translate("MainWindow", "0.75", nullptr));
#if QT_CONFIG(tooltip)
        toolButtonWb->setToolTip(QCoreApplication::translate("MainWindow", "White Balance Picker   B", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButtonWb->setText(QCoreApplication::translate("MainWindow", "White Balance Picker", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Temperature", nullptr));
        label_TemperatureVal->setText(QCoreApplication::translate("MainWindow", "6000 K", nullptr));
        toolButtonWbMode->setText(QString());
        label_3->setText(QCoreApplication::translate("MainWindow", "Tint", nullptr));
        label_TintVal->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_clarity->setText(QCoreApplication::translate("MainWindow", "Clarity", nullptr));
        label_ClarityVal->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_vibrance->setText(QCoreApplication::translate("MainWindow", "Vibrance", nullptr));
        label_VibranceVal->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_saturation->setText(QCoreApplication::translate("MainWindow", "Saturation", nullptr));
        label_SaturationVal->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_ds->setText(QCoreApplication::translate("MainWindow", "Dark Strength", nullptr));
        label_DsVal->setText(QCoreApplication::translate("MainWindow", "20", nullptr));
        label_dr->setText(QCoreApplication::translate("MainWindow", "Dark Range", nullptr));
        label_DrVal->setText(QCoreApplication::translate("MainWindow", "70", nullptr));
        label_ls->setText(QCoreApplication::translate("MainWindow", "Light Strength", nullptr));
        label_LsVal->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_lr->setText(QCoreApplication::translate("MainWindow", "Light Range", nullptr));
        label_LrVal->setText(QCoreApplication::translate("MainWindow", "50", nullptr));
        label_lighten->setText(QCoreApplication::translate("MainWindow", "Lighten", nullptr));
        label_LightenVal->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        checkBoxHighLightReconstruction->setText(QCoreApplication::translate("MainWindow", "Highlight Reconstruction", nullptr));
        label_highlights->setText(QCoreApplication::translate("MainWindow", "Highlights", nullptr));
        label_HighlightsVal->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_ShadowsVal->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_shadows->setText(QCoreApplication::translate("MainWindow", "Shadows", nullptr));
        label_gradationcurves->setText(QCoreApplication::translate("MainWindow", "Gradation Curves", nullptr));
#if QT_CONFIG(tooltip)
        toolButtonGCurvesResetOne->setToolTip(QCoreApplication::translate("MainWindow", "Reset current curve", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButtonGCurvesResetOne->setText(QString());
#if QT_CONFIG(tooltip)
        toolButtonGCurvesReset->setToolTip(QCoreApplication::translate("MainWindow", "Reset all curves", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButtonGCurvesReset->setText(QString());
        labelCurves->setText(QCoreApplication::translate("MainWindow", "Place holder for curves", nullptr));
        toolButtonGCurvesY->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        toolButtonGCurvesR->setText(QCoreApplication::translate("MainWindow", "R", nullptr));
        toolButtonGCurvesG->setText(QCoreApplication::translate("MainWindow", "G", nullptr));
        toolButtonGCurvesB->setText(QCoreApplication::translate("MainWindow", "B", nullptr));
        groupBoxProfiles->setTitle(QCoreApplication::translate("MainWindow", "Profiles", nullptr));
        label_TransferFunction->setText(QCoreApplication::translate("MainWindow", "Transfer Function", nullptr));
#if QT_CONFIG(tooltip)
        checkBoxCreativeAdjustments->setToolTip(QCoreApplication::translate("MainWindow", "Warning: Having creative adjustments and log profile enabled may not give logarithmic output!", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBoxCreativeAdjustments->setText(QCoreApplication::translate("MainWindow", "Allow Creative Adjustments", nullptr));
        label_TonemappingFunction->setText(QCoreApplication::translate("MainWindow", "Tonemapping Function", nullptr));
        label_Gamut->setText(QCoreApplication::translate("MainWindow", "Processing Gamut", nullptr));
        comboBoxProfile->setItemText(0, QCoreApplication::translate("MainWindow", "Select Preset...", nullptr));
        comboBoxProfile->setItemText(1, QCoreApplication::translate("MainWindow", "Standard", nullptr));
        comboBoxProfile->setItemText(2, QCoreApplication::translate("MainWindow", "Tonemapped", nullptr));
        comboBoxProfile->setItemText(3, QCoreApplication::translate("MainWindow", "Film", nullptr));
        comboBoxProfile->setItemText(4, QCoreApplication::translate("MainWindow", "Alexa Log-C", nullptr));
        comboBoxProfile->setItemText(5, QCoreApplication::translate("MainWindow", "Cineon Log", nullptr));
        comboBoxProfile->setItemText(6, QCoreApplication::translate("MainWindow", "Sony S-Log3", nullptr));
        comboBoxProfile->setItemText(7, QCoreApplication::translate("MainWindow", "Linear", nullptr));
        comboBoxProfile->setItemText(8, QCoreApplication::translate("MainWindow", "sRGB", nullptr));
        comboBoxProfile->setItemText(9, QCoreApplication::translate("MainWindow", "Rec. 709", nullptr));
        comboBoxProfile->setItemText(10, QCoreApplication::translate("MainWindow", "Davinci WG/Intermediate", nullptr));
        comboBoxProfile->setItemText(11, QCoreApplication::translate("MainWindow", "Fuji F-Log", nullptr));
        comboBoxProfile->setItemText(12, QCoreApplication::translate("MainWindow", "Canon Log", nullptr));
        comboBoxProfile->setItemText(13, QCoreApplication::translate("MainWindow", "Panasonic V-Log", nullptr));

        comboBoxProfile->setCurrentText(QCoreApplication::translate("MainWindow", "Select Preset...", nullptr));
        comboBoxProcessingGamut->setItemText(0, QCoreApplication::translate("MainWindow", "Rec. 709", nullptr));
        comboBoxProcessingGamut->setItemText(1, QCoreApplication::translate("MainWindow", "Rec. 2020", nullptr));
        comboBoxProcessingGamut->setItemText(2, QCoreApplication::translate("MainWindow", "ACES AP0", nullptr));
        comboBoxProcessingGamut->setItemText(3, QCoreApplication::translate("MainWindow", "Adobe RGB", nullptr));
        comboBoxProcessingGamut->setItemText(4, QCoreApplication::translate("MainWindow", "Pro Photo RGB", nullptr));
        comboBoxProcessingGamut->setItemText(5, QCoreApplication::translate("MainWindow", "XYZ", nullptr));
        comboBoxProcessingGamut->setItemText(6, QCoreApplication::translate("MainWindow", "Alexa Wide Gamut RGB", nullptr));
        comboBoxProcessingGamut->setItemText(7, QCoreApplication::translate("MainWindow", "Sony S Gamut 3", nullptr));
        comboBoxProcessingGamut->setItemText(8, QCoreApplication::translate("MainWindow", "Davinci Wide Gamut", nullptr));
        comboBoxProcessingGamut->setItemText(9, QCoreApplication::translate("MainWindow", "ACES AP1", nullptr));
        comboBoxProcessingGamut->setItemText(10, QCoreApplication::translate("MainWindow", "Canon Cinema", nullptr));
        comboBoxProcessingGamut->setItemText(11, QCoreApplication::translate("MainWindow", "Panasonic V-Gamut", nullptr));

        comboBoxProcessingGamut->setCurrentText(QCoreApplication::translate("MainWindow", "Rec. 709", nullptr));
        label_GammaText->setText(QCoreApplication::translate("MainWindow", "Gamma", nullptr));
        label_GammaVal->setText(QCoreApplication::translate("MainWindow", "1.00", nullptr));
        label_39->setText(QCoreApplication::translate("MainWindow", "Camera Matrix", nullptr));
        comboBoxUseCameraMatrix->setItemText(0, QCoreApplication::translate("MainWindow", "Don't Use Camera Matrix", nullptr));
        comboBoxUseCameraMatrix->setItemText(1, QCoreApplication::translate("MainWindow", "Use Camera Matrix", nullptr));
        comboBoxUseCameraMatrix->setItemText(2, QCoreApplication::translate("MainWindow", "Uncolorscience Fix", nullptr));

        checkBoxExrMode->setText(QCoreApplication::translate("MainWindow", "Cyan Highlight Fix", nullptr));
        comboBoxTonemapFct->setItemText(0, QCoreApplication::translate("MainWindow", "None", nullptr));
        comboBoxTonemapFct->setItemText(1, QCoreApplication::translate("MainWindow", "Reinhard", nullptr));
        comboBoxTonemapFct->setItemText(2, QCoreApplication::translate("MainWindow", "Tangent", nullptr));
        comboBoxTonemapFct->setItemText(3, QCoreApplication::translate("MainWindow", "Alexa Log C", nullptr));
        comboBoxTonemapFct->setItemText(4, QCoreApplication::translate("MainWindow", "Cineon Log", nullptr));
        comboBoxTonemapFct->setItemText(5, QCoreApplication::translate("MainWindow", "Sony S Log", nullptr));
        comboBoxTonemapFct->setItemText(6, QCoreApplication::translate("MainWindow", "sRGB", nullptr));
        comboBoxTonemapFct->setItemText(7, QCoreApplication::translate("MainWindow", "Rec. 709", nullptr));
        comboBoxTonemapFct->setItemText(8, QCoreApplication::translate("MainWindow", "HLG", nullptr));
        comboBoxTonemapFct->setItemText(9, QCoreApplication::translate("MainWindow", "Davinci Intermediate", nullptr));
        comboBoxTonemapFct->setItemText(10, QCoreApplication::translate("MainWindow", "Reinhard 3/5", nullptr));

        comboBoxTonemapFct->setCurrentText(QCoreApplication::translate("MainWindow", "None", nullptr));
        label_ProcessingProfile->setText(QCoreApplication::translate("MainWindow", "Profile Preset", nullptr));
        checkBoxAgX->setText(QCoreApplication::translate("MainWindow", "AgX", nullptr));
        groupBoxDetails->setTitle(QCoreApplication::translate("MainWindow", "Details", nullptr));
#if QT_CONFIG(tooltip)
        checkBoxChromaSeparation->setToolTip(QCoreApplication::translate("MainWindow", "Chroma Separation (YCbCR)", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBoxChromaSeparation->setText(QCoreApplication::translate("MainWindow", "Chroma Separation", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Sharpen", nullptr));
        label_Sharpen->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_ShMaskingText->setText(QCoreApplication::translate("MainWindow", "Masking", nullptr));
        label_ShMasking->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_ChromaBlur->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_ChromaBlurText->setText(QCoreApplication::translate("MainWindow", "Chroma Blur Radius", nullptr));
        label_32->setText(QCoreApplication::translate("MainWindow", "Median Denoise Window", nullptr));
        comboBoxDenoiseWindow->setItemText(0, QCoreApplication::translate("MainWindow", "2x2", nullptr));
        comboBoxDenoiseWindow->setItemText(1, QCoreApplication::translate("MainWindow", "3x3", nullptr));
        comboBoxDenoiseWindow->setItemText(2, QCoreApplication::translate("MainWindow", "4x4", nullptr));
        comboBoxDenoiseWindow->setItemText(3, QCoreApplication::translate("MainWindow", "5x5", nullptr));
        comboBoxDenoiseWindow->setItemText(4, QCoreApplication::translate("MainWindow", "6x6", nullptr));
        comboBoxDenoiseWindow->setItemText(5, QCoreApplication::translate("MainWindow", "7x7", nullptr));

        label_31->setText(QCoreApplication::translate("MainWindow", "Median Denoise Strength", nullptr));
        label_DenoiseStrength->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_RbfDenoiseLuma->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
#if QT_CONFIG(tooltip)
        label_35->setToolTip(QCoreApplication::translate("MainWindow", "Recursive bilateral filtering", nullptr));
#endif // QT_CONFIG(tooltip)
        label_35->setText(QCoreApplication::translate("MainWindow", "RBF Denoise Luminance", nullptr));
#if QT_CONFIG(tooltip)
        label_34->setToolTip(QCoreApplication::translate("MainWindow", "Recursive bilateral filtering", nullptr));
#endif // QT_CONFIG(tooltip)
        label_34->setText(QCoreApplication::translate("MainWindow", "RBF Denoise Chroma", nullptr));
        label_RbfDenoiseChroma->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_RbfDenoiseRange->setText(QCoreApplication::translate("MainWindow", "40", nullptr));
#if QT_CONFIG(tooltip)
        label_36->setToolTip(QCoreApplication::translate("MainWindow", "Recursive bilateral filtering", nullptr));
#endif // QT_CONFIG(tooltip)
        label_36->setText(QCoreApplication::translate("MainWindow", "RBF Denoise Range", nullptr));
        label_37->setText(QCoreApplication::translate("MainWindow", "Grain Strength", nullptr));
        label_GrainStrength->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_40->setText(QCoreApplication::translate("MainWindow", "Grain Luma Weight", nullptr));
        label_GrainLumaWeight->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        groupBoxHsl->setTitle(QCoreApplication::translate("MainWindow", "HSL", nullptr));
        label_hueVsHue->setText(QCoreApplication::translate("MainWindow", "Hue vs. Hue", nullptr));
#if QT_CONFIG(tooltip)
        toolButtonHueVsHueResetDefaultPoints->setToolTip(QCoreApplication::translate("MainWindow", "Reset current curve with default points", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButtonHueVsHueResetDefaultPoints->setText(QString());
#if QT_CONFIG(tooltip)
        toolButtonHueVsHueReset->setToolTip(QCoreApplication::translate("MainWindow", "Reset current curve", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButtonHueVsHueReset->setText(QString());
        labelHueVsHue->setText(QCoreApplication::translate("MainWindow", "Place holder for curves", nullptr));
        label_hueVsSat->setText(QCoreApplication::translate("MainWindow", "Hue vs. Saturation", nullptr));
#if QT_CONFIG(tooltip)
        toolButtonHueVsSatResetDefaultPoints->setToolTip(QCoreApplication::translate("MainWindow", "Reset current curve with default points", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButtonHueVsSatResetDefaultPoints->setText(QString());
#if QT_CONFIG(tooltip)
        toolButtonHueVsSatReset->setToolTip(QCoreApplication::translate("MainWindow", "Reset current curve", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButtonHueVsSatReset->setText(QString());
        labelHueVsSat->setText(QCoreApplication::translate("MainWindow", "Place holder for curves", nullptr));
        label_hueVsLuma->setText(QCoreApplication::translate("MainWindow", "Hue vs. Luminance", nullptr));
#if QT_CONFIG(tooltip)
        toolButtonHueVsLumaResetDefaultPoints->setToolTip(QCoreApplication::translate("MainWindow", "Reset current curve with default points", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButtonHueVsLumaResetDefaultPoints->setText(QString());
#if QT_CONFIG(tooltip)
        toolButtonHueVsLumaReset->setToolTip(QCoreApplication::translate("MainWindow", "Reset current curve", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButtonHueVsLumaReset->setText(QString());
        labelHueVsLuma->setText(QCoreApplication::translate("MainWindow", "Place holder for curves", nullptr));
        label_lumaVsSat->setText(QCoreApplication::translate("MainWindow", "Luminance vs. Saturation", nullptr));
#if QT_CONFIG(tooltip)
        toolButtonLumaVsSatReset->setToolTip(QCoreApplication::translate("MainWindow", "Reset current curve", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButtonLumaVsSatReset->setText(QString());
        labelLumaVsSat->setText(QCoreApplication::translate("MainWindow", "Place holder for curves", nullptr));
        groupBoxToning->setTitle(QCoreApplication::translate("MainWindow", "Toning", nullptr));
        label_ToningColor->setText(QCoreApplication::translate("MainWindow", "Color", nullptr));
        label_ToneVal->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_ToneText->setText(QCoreApplication::translate("MainWindow", "Hue", nullptr));
        label_ToningStrengthText->setText(QCoreApplication::translate("MainWindow", "Strength", nullptr));
        label_ToningStrengthVal->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        groupBoxColorWheels->setTitle(QCoreApplication::translate("MainWindow", "Color Wheels", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Master", nullptr));
        labelColorWheelMaster->setText(QCoreApplication::translate("MainWindow", "ColorWheel", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "R", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "G", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "B", nullptr));
        labelYmaster->setText(QCoreApplication::translate("MainWindow", "0.00", nullptr));
        labelRmaster_2->setText(QCoreApplication::translate("MainWindow", "0.00", nullptr));
        labelGmaster->setText(QCoreApplication::translate("MainWindow", "0.00", nullptr));
        labelBmaster->setText(QCoreApplication::translate("MainWindow", "0.00", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Shadows", nullptr));
        labelColorWheelShadows->setText(QCoreApplication::translate("MainWindow", "ColorWheel", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "R", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "G", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "B", nullptr));
        labelYshadows->setText(QCoreApplication::translate("MainWindow", "0.00", nullptr));
        labelRshadows->setText(QCoreApplication::translate("MainWindow", "0.00", nullptr));
        labelGshadows->setText(QCoreApplication::translate("MainWindow", "0.00", nullptr));
        labelBshadows->setText(QCoreApplication::translate("MainWindow", "0.00", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Midtones", nullptr));
        labelColorWheelMidtones->setText(QCoreApplication::translate("MainWindow", "ColorWheel", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", "R", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindow", "G", nullptr));
        label_26->setText(QCoreApplication::translate("MainWindow", "B", nullptr));
        labelYmids->setText(QCoreApplication::translate("MainWindow", "0.00", nullptr));
        labelRmids->setText(QCoreApplication::translate("MainWindow", "0.00", nullptr));
        labelGmids->setText(QCoreApplication::translate("MainWindow", "0.00", nullptr));
        labelBmids->setText(QCoreApplication::translate("MainWindow", "0.00", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Highlights", nullptr));
        labelColorWheelHighlights->setText(QCoreApplication::translate("MainWindow", "ColorWheel", nullptr));
        label_27->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        label_28->setText(QCoreApplication::translate("MainWindow", "R", nullptr));
        label_29->setText(QCoreApplication::translate("MainWindow", "G", nullptr));
        label_30->setText(QCoreApplication::translate("MainWindow", "B", nullptr));
        labelYhighlights->setText(QCoreApplication::translate("MainWindow", "0.00", nullptr));
        labelRhighlights->setText(QCoreApplication::translate("MainWindow", "0.00", nullptr));
        labelGhighlights->setText(QCoreApplication::translate("MainWindow", "0.00", nullptr));
        labelBhighlights->setText(QCoreApplication::translate("MainWindow", "0.00", nullptr));
        groupBoxLinearGradient->setTitle(QCoreApplication::translate("MainWindow", "Linear Gradient", nullptr));
        checkBoxGradientEnable->setText(QCoreApplication::translate("MainWindow", "Enable", nullptr));
        toolButtonGradientPaint->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        labelGradientAngle->setText(QCoreApplication::translate("MainWindow", "0.0\302\260", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Length", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Exposure", nullptr));
        label_ExposureGradient->setText(QCoreApplication::translate("MainWindow", "0.00", nullptr));
        label_contrast_gradient->setText(QCoreApplication::translate("MainWindow", "Contrast", nullptr));
        label_ContrastGradientVal->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        groupBoxLut->setTitle(QCoreApplication::translate("MainWindow", "LUT", nullptr));
        label_LutStrengthText->setText(QCoreApplication::translate("MainWindow", "Strength", nullptr));
        label_LutStrengthVal->setText(QCoreApplication::translate("MainWindow", "100", nullptr));
        checkBoxLutEnable->setText(QCoreApplication::translate("MainWindow", "Enable LUT", nullptr));
        toolButtonLoadLut->setText(QCoreApplication::translate("MainWindow", "Load LUT", nullptr));
        toolButtonPrevLut->setText(QCoreApplication::translate("MainWindow", "Previous LUT", nullptr));
        toolButtonNextLut->setText(QCoreApplication::translate("MainWindow", "Next LUT", nullptr));
        groupBoxFilter->setTitle(QCoreApplication::translate("MainWindow", "Filter", nullptr));
        checkBoxFilterEnable->setText(QCoreApplication::translate("MainWindow", "Enable Filter", nullptr));
        comboBoxFilterName->setItemText(0, QCoreApplication::translate("MainWindow", "Film \"FJ\"", nullptr));
        comboBoxFilterName->setItemText(1, QCoreApplication::translate("MainWindow", "Film \"Vis3\"", nullptr));
        comboBoxFilterName->setItemText(2, QCoreApplication::translate("MainWindow", "Film \"P400\"", nullptr));
        comboBoxFilterName->setItemText(3, QCoreApplication::translate("MainWindow", "Film \"E100\"", nullptr));
        comboBoxFilterName->setItemText(4, QCoreApplication::translate("MainWindow", "Toy Camera", nullptr));
        comboBoxFilterName->setItemText(5, QCoreApplication::translate("MainWindow", "Sepia Tone", nullptr));
        comboBoxFilterName->setItemText(6, QCoreApplication::translate("MainWindow", "Cinematic 1", nullptr));
        comboBoxFilterName->setItemText(7, QCoreApplication::translate("MainWindow", "Cinematic 2", nullptr));
        comboBoxFilterName->setItemText(8, QCoreApplication::translate("MainWindow", "Cinematic 3", nullptr));

        label_FilterStrengthText->setText(QCoreApplication::translate("MainWindow", "Strength", nullptr));
        label_FilterStrengthVal->setText(QCoreApplication::translate("MainWindow", "100", nullptr));
        groupBoxVignette->setTitle(QCoreApplication::translate("MainWindow", "Lens Correction", nullptr));
        label_VignetteStrengthText->setText(QCoreApplication::translate("MainWindow", "Vignette Strength", nullptr));
        label_VignetteStrengthVal->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_VignetteRadiusVal->setText(QCoreApplication::translate("MainWindow", "20", nullptr));
        label_VignetteRadiusText->setText(QCoreApplication::translate("MainWindow", "Vignette Radius", nullptr));
        label_VignetteShapeVal->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_VignetteShapeText->setText(QCoreApplication::translate("MainWindow", "Vignette Shape", nullptr));
        label_CaRedVal->setText(QCoreApplication::translate("MainWindow", "0.0", nullptr));
        label_CaRedText->setText(QCoreApplication::translate("MainWindow", "CA Correction Red", nullptr));
        label_CaBlueText->setText(QCoreApplication::translate("MainWindow", "CA Correction Blue", nullptr));
        label_CaBlueVal->setText(QCoreApplication::translate("MainWindow", "0.0", nullptr));
        label_CaDesaturateText->setText(QCoreApplication::translate("MainWindow", "CA Desaturate Threshold", nullptr));
        label_CaDesaturateVal->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_CaRadiusText->setText(QCoreApplication::translate("MainWindow", "CA Radius", nullptr));
        label_CaRadiusVal->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        groupBoxTransformation->setTitle(QCoreApplication::translate("MainWindow", "Transformation", nullptr));
        label_VidstabShakinessText->setText(QCoreApplication::translate("MainWindow", "Shakiness", nullptr));
        label_VidstabShakinessVal->setText(QCoreApplication::translate("MainWindow", "10", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Height Stretch", nullptr));
        label_33->setText(QCoreApplication::translate("MainWindow", "\342\206\222", nullptr));
        label_VidstabStepsizeVal->setText(QCoreApplication::translate("MainWindow", "32", nullptr));
        label_VidstabStepsizeText->setText(QCoreApplication::translate("MainWindow", "Stepsize", nullptr));
        comboBoxHStretch->setItemText(0, QCoreApplication::translate("MainWindow", "1.0x", nullptr));
        comboBoxHStretch->setItemText(1, QCoreApplication::translate("MainWindow", "1.25x", nullptr));
        comboBoxHStretch->setItemText(2, QCoreApplication::translate("MainWindow", "1.33x", nullptr));
        comboBoxHStretch->setItemText(3, QCoreApplication::translate("MainWindow", "1.5x", nullptr));
        comboBoxHStretch->setItemText(4, QCoreApplication::translate("MainWindow", "1.67x", nullptr));
        comboBoxHStretch->setItemText(5, QCoreApplication::translate("MainWindow", "1.75x", nullptr));
        comboBoxHStretch->setItemText(6, QCoreApplication::translate("MainWindow", "1.8x", nullptr));
        comboBoxHStretch->setItemText(7, QCoreApplication::translate("MainWindow", "2.0x", nullptr));

        label_VidstabSmoothingText->setText(QCoreApplication::translate("MainWindow", "Smoothing", nullptr));
        label_VidstabSmoothingVal->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Width Stretch", nullptr));
        label_VidstabAccuracyVal->setText(QCoreApplication::translate("MainWindow", "10", nullptr));
        label_VidstabAccuracyText->setText(QCoreApplication::translate("MainWindow", "Accuracy", nullptr));
        toolButtonUpsideDownOff->setText(QCoreApplication::translate("MainWindow", "Off", nullptr));
        toolButtonUpsideDownOn->setText(QCoreApplication::translate("MainWindow", "On", nullptr));
#if QT_CONFIG(tooltip)
        checkBoxVidstabEnable->setToolTip(QCoreApplication::translate("MainWindow", "Visible only after ffmpeg H.264 export!", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBoxVidstabEnable->setText(QCoreApplication::translate("MainWindow", "Enable FFmpeg vid.stab", nullptr));
        comboBoxVStretch->setItemText(0, QCoreApplication::translate("MainWindow", "1.0x", nullptr));
        comboBoxVStretch->setItemText(1, QCoreApplication::translate("MainWindow", "1.67x", nullptr));
        comboBoxVStretch->setItemText(2, QCoreApplication::translate("MainWindow", "3.0x", nullptr));
        comboBoxVStretch->setItemText(3, QCoreApplication::translate("MainWindow", "0.33x", nullptr));

        UpsideDownLabel->setText(QCoreApplication::translate("MainWindow", "Upside Down", nullptr));
        label_resResolution->setText(QCoreApplication::translate("MainWindow", "0 x 0 pixels", nullptr));
        label_VidstabZoomVal->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_VidstabZoomText->setText(QCoreApplication::translate("MainWindow", "Zoom", nullptr));
        checkBoxVidstabTripod->setText(QCoreApplication::translate("MainWindow", "Tripod Mode", nullptr));
        dockWidgetSession->setWindowTitle(QCoreApplication::translate("MainWindow", "Session", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
