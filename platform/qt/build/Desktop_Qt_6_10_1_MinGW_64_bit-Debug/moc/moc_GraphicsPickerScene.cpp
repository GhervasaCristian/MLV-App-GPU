/****************************************************************************
** Meta object code from reading C++ file 'GraphicsPickerScene.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../GraphicsPickerScene.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GraphicsPickerScene.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN19GraphicsPickerSceneE_t {};
} // unnamed namespace

template <> constexpr inline auto GraphicsPickerScene::qt_create_metaobjectdata<qt_meta_tag_ZN19GraphicsPickerSceneE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "GraphicsPickerScene",
        "wbPicked",
        "",
        "x",
        "y",
        "bpPicked",
        "gradientAnchor",
        "gradientFinalPos",
        "finished",
        "filesDropped",
        "list"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'wbPicked'
        QtMocHelpers::SignalData<void(int, int)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 3 }, { QMetaType::Int, 4 },
        }}),
        // Signal 'bpPicked'
        QtMocHelpers::SignalData<void(int, int)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 3 }, { QMetaType::Int, 4 },
        }}),
        // Signal 'gradientAnchor'
        QtMocHelpers::SignalData<void(int, int)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 3 }, { QMetaType::Int, 4 },
        }}),
        // Signal 'gradientFinalPos'
        QtMocHelpers::SignalData<void(int, int, bool)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 3 }, { QMetaType::Int, 4 }, { QMetaType::Bool, 8 },
        }}),
        // Signal 'filesDropped'
        QtMocHelpers::SignalData<void(QStringList)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QStringList, 10 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<GraphicsPickerScene, qt_meta_tag_ZN19GraphicsPickerSceneE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject GraphicsPickerScene::staticMetaObject = { {
    QMetaObject::SuperData::link<QGraphicsScene::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19GraphicsPickerSceneE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19GraphicsPickerSceneE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN19GraphicsPickerSceneE_t>.metaTypes,
    nullptr
} };

void GraphicsPickerScene::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<GraphicsPickerScene *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->wbPicked((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 1: _t->bpPicked((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 2: _t->gradientAnchor((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 3: _t->gradientFinalPos((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[3]))); break;
        case 4: _t->filesDropped((*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (GraphicsPickerScene::*)(int , int )>(_a, &GraphicsPickerScene::wbPicked, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (GraphicsPickerScene::*)(int , int )>(_a, &GraphicsPickerScene::bpPicked, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (GraphicsPickerScene::*)(int , int )>(_a, &GraphicsPickerScene::gradientAnchor, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (GraphicsPickerScene::*)(int , int , bool )>(_a, &GraphicsPickerScene::gradientFinalPos, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (GraphicsPickerScene::*)(QStringList )>(_a, &GraphicsPickerScene::filesDropped, 4))
            return;
    }
}

const QMetaObject *GraphicsPickerScene::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GraphicsPickerScene::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19GraphicsPickerSceneE_t>.strings))
        return static_cast<void*>(this);
    return QGraphicsScene::qt_metacast(_clname);
}

int GraphicsPickerScene::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsScene::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void GraphicsPickerScene::wbPicked(int _t1, int _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}

// SIGNAL 1
void GraphicsPickerScene::bpPicked(int _t1, int _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1, _t2);
}

// SIGNAL 2
void GraphicsPickerScene::gradientAnchor(int _t1, int _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1, _t2);
}

// SIGNAL 3
void GraphicsPickerScene::gradientFinalPos(int _t1, int _t2, bool _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1, _t2, _t3);
}

// SIGNAL 4
void GraphicsPickerScene::filesDropped(QStringList _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}
QT_WARNING_POP
