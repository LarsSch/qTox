/****************************************************************************
** Meta object code from reading C++ file 'privacyform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/widget/form/settings/privacyform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'privacyform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PrivacyForm_t {
    QByteArrayData data[9];
    char stringdata0[137];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PrivacyForm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PrivacyForm_t qt_meta_stringdata_PrivacyForm = {
    {
QT_MOC_LITERAL(0, 0, 11), // "PrivacyForm"
QT_MOC_LITERAL(1, 12, 22), // "onEnableLoggingUpdated"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 34), // "onTypingNotificationEnabledUp..."
QT_MOC_LITERAL(4, 71, 9), // "setNospam"
QT_MOC_LITERAL(5, 81, 20), // "generateRandomNospam"
QT_MOC_LITERAL(6, 102, 12), // "onNospamEdit"
QT_MOC_LITERAL(7, 115, 9), // "showEvent"
QT_MOC_LITERAL(8, 125, 11) // "QShowEvent*"

    },
    "PrivacyForm\0onEnableLoggingUpdated\0\0"
    "onTypingNotificationEnabledUpdated\0"
    "setNospam\0generateRandomNospam\0"
    "onNospamEdit\0showEvent\0QShowEvent*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PrivacyForm[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    1,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    2,

       0        // eod
};

void PrivacyForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PrivacyForm *_t = static_cast<PrivacyForm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onEnableLoggingUpdated(); break;
        case 1: _t->onTypingNotificationEnabledUpdated(); break;
        case 2: _t->setNospam(); break;
        case 3: _t->generateRandomNospam(); break;
        case 4: _t->onNospamEdit(); break;
        case 5: _t->showEvent((*reinterpret_cast< QShowEvent*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject PrivacyForm::staticMetaObject = {
    { &GenericForm::staticMetaObject, qt_meta_stringdata_PrivacyForm.data,
      qt_meta_data_PrivacyForm,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PrivacyForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PrivacyForm::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PrivacyForm.stringdata0))
        return static_cast<void*>(const_cast< PrivacyForm*>(this));
    return GenericForm::qt_metacast(_clname);
}

int PrivacyForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = GenericForm::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
