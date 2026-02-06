/****************************************************************************
** Meta object code from reading C++ file 'ExportSettingsDialog.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../ExportSettingsDialog.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ExportSettingsDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN20ExportSettingsDialogE_t {};
} // unnamed namespace

template <> constexpr inline auto ExportSettingsDialog::qt_create_metaobjectdata<qt_meta_tag_ZN20ExportSettingsDialogE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ExportSettingsDialog",
        "on_pushButtonClose_clicked",
        "",
        "on_comboBoxCodec_currentIndexChanged",
        "index",
        "on_checkBoxFpsOverride_toggled",
        "checked",
        "on_checkBoxResize_toggled",
        "on_comboBoxOption_currentTextChanged",
        "arg1",
        "on_toolButtonLockHeight_toggled",
        "on_comboBoxPostExportScript_currentTextChanged",
        "on_checkBoxHdrBlending_toggled",
        "on_comboBoxSmoothing_currentIndexChanged",
        "on_toolButtonAddPreset_clicked",
        "on_toolButtonDeletePreset_clicked",
        "on_listWidget_itemChanged",
        "QListWidgetItem*",
        "item",
        "on_listWidget_itemClicked",
        "on_listWidget_currentItemChanged",
        "current",
        "previous"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'on_pushButtonClose_clicked'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_comboBoxCodec_currentIndexChanged'
        QtMocHelpers::SlotData<void(int)>(3, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 4 },
        }}),
        // Slot 'on_checkBoxFpsOverride_toggled'
        QtMocHelpers::SlotData<void(bool)>(5, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 6 },
        }}),
        // Slot 'on_checkBoxResize_toggled'
        QtMocHelpers::SlotData<void(bool)>(7, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 6 },
        }}),
        // Slot 'on_comboBoxOption_currentTextChanged'
        QtMocHelpers::SlotData<void(const QString &)>(8, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 9 },
        }}),
        // Slot 'on_toolButtonLockHeight_toggled'
        QtMocHelpers::SlotData<void(bool)>(10, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 6 },
        }}),
        // Slot 'on_comboBoxPostExportScript_currentTextChanged'
        QtMocHelpers::SlotData<void(const QString &)>(11, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 9 },
        }}),
        // Slot 'on_checkBoxHdrBlending_toggled'
        QtMocHelpers::SlotData<void(bool)>(12, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 6 },
        }}),
        // Slot 'on_comboBoxSmoothing_currentIndexChanged'
        QtMocHelpers::SlotData<void(int)>(13, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 4 },
        }}),
        // Slot 'on_toolButtonAddPreset_clicked'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_toolButtonDeletePreset_clicked'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_listWidget_itemChanged'
        QtMocHelpers::SlotData<void(QListWidgetItem *)>(16, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 17, 18 },
        }}),
        // Slot 'on_listWidget_itemClicked'
        QtMocHelpers::SlotData<void(QListWidgetItem *)>(19, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 17, 18 },
        }}),
        // Slot 'on_listWidget_currentItemChanged'
        QtMocHelpers::SlotData<void(QListWidgetItem *, QListWidgetItem *)>(20, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 17, 21 }, { 0x80000000 | 17, 22 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ExportSettingsDialog, qt_meta_tag_ZN20ExportSettingsDialogE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ExportSettingsDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN20ExportSettingsDialogE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN20ExportSettingsDialogE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN20ExportSettingsDialogE_t>.metaTypes,
    nullptr
} };

void ExportSettingsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ExportSettingsDialog *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->on_pushButtonClose_clicked(); break;
        case 1: _t->on_comboBoxCodec_currentIndexChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->on_checkBoxFpsOverride_toggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->on_checkBoxResize_toggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->on_comboBoxOption_currentTextChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->on_toolButtonLockHeight_toggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->on_comboBoxPostExportScript_currentTextChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 7: _t->on_checkBoxHdrBlending_toggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->on_comboBoxSmoothing_currentIndexChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->on_toolButtonAddPreset_clicked(); break;
        case 10: _t->on_toolButtonDeletePreset_clicked(); break;
        case 11: _t->on_listWidget_itemChanged((*reinterpret_cast<std::add_pointer_t<QListWidgetItem*>>(_a[1]))); break;
        case 12: _t->on_listWidget_itemClicked((*reinterpret_cast<std::add_pointer_t<QListWidgetItem*>>(_a[1]))); break;
        case 13: _t->on_listWidget_currentItemChanged((*reinterpret_cast<std::add_pointer_t<QListWidgetItem*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QListWidgetItem*>>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject *ExportSettingsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ExportSettingsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN20ExportSettingsDialogE_t>.strings))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ExportSettingsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
