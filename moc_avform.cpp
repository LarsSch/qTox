/****************************************************************************
** Meta object code from reading C++ file 'avform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/widget/form/settings/avform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'avform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AVForm_t {
    QByteArrayData data[20];
    char stringdata0[307];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AVForm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AVForm_t qt_meta_stringdata_AVForm = {
    {
QT_MOC_LITERAL(0, 0, 6), // "AVForm"
QT_MOC_LITERAL(1, 7, 41), // "on_videoModescomboBox_current..."
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 5), // "index"
QT_MOC_LITERAL(4, 56, 14), // "onInDevChanged"
QT_MOC_LITERAL(5, 71, 16), // "deviceDescriptor"
QT_MOC_LITERAL(6, 88, 15), // "onOutDevChanged"
QT_MOC_LITERAL(7, 104, 20), // "onFilterAudioToggled"
QT_MOC_LITERAL(8, 125, 11), // "filterAudio"
QT_MOC_LITERAL(9, 137, 30), // "on_playbackSlider_valueChanged"
QT_MOC_LITERAL(10, 168, 5), // "value"
QT_MOC_LITERAL(11, 174, 32), // "on_microphoneSlider_valueChanged"
QT_MOC_LITERAL(12, 207, 17), // "onVideoDevChanged"
QT_MOC_LITERAL(13, 225, 20), // "onResProbingFinished"
QT_MOC_LITERAL(14, 246, 12), // "QList<QSize>"
QT_MOC_LITERAL(15, 259, 3), // "res"
QT_MOC_LITERAL(16, 263, 9), // "hideEvent"
QT_MOC_LITERAL(17, 273, 11), // "QHideEvent*"
QT_MOC_LITERAL(18, 285, 9), // "showEvent"
QT_MOC_LITERAL(19, 295, 11) // "QShowEvent*"

    },
    "AVForm\0on_videoModescomboBox_currentIndexChanged\0"
    "\0index\0onInDevChanged\0deviceDescriptor\0"
    "onOutDevChanged\0onFilterAudioToggled\0"
    "filterAudio\0on_playbackSlider_valueChanged\0"
    "value\0on_microphoneSlider_valueChanged\0"
    "onVideoDevChanged\0onResProbingFinished\0"
    "QList<QSize>\0res\0hideEvent\0QHideEvent*\0"
    "showEvent\0QShowEvent*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AVForm[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x08 /* Private */,
       4,    1,   67,    2, 0x08 /* Private */,
       6,    1,   70,    2, 0x08 /* Private */,
       7,    1,   73,    2, 0x08 /* Private */,
       9,    1,   76,    2, 0x08 /* Private */,
      11,    1,   79,    2, 0x08 /* Private */,
      12,    1,   82,    2, 0x08 /* Private */,
      13,    1,   85,    2, 0x08 /* Private */,
      16,    1,   88,    2, 0x08 /* Private */,
      18,    1,   91,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 17,    2,
    QMetaType::Void, 0x80000000 | 19,    2,

       0        // eod
};

void AVForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AVForm *_t = static_cast<AVForm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_videoModescomboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->onInDevChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->onOutDevChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->onFilterAudioToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->on_playbackSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_microphoneSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->onVideoDevChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->onResProbingFinished((*reinterpret_cast< QList<QSize>(*)>(_a[1]))); break;
        case 8: _t->hideEvent((*reinterpret_cast< QHideEvent*(*)>(_a[1]))); break;
        case 9: _t->showEvent((*reinterpret_cast< QShowEvent*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QSize> >(); break;
            }
            break;
        }
    }
}

const QMetaObject AVForm::staticMetaObject = {
    { &GenericForm::staticMetaObject, qt_meta_stringdata_AVForm.data,
      qt_meta_data_AVForm,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AVForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AVForm::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AVForm.stringdata0))
        return static_cast<void*>(const_cast< AVForm*>(this));
    return GenericForm::qt_metacast(_clname);
}

int AVForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = GenericForm::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
