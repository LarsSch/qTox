/****************************************************************************
** Meta object code from reading C++ file 'croppinglabel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/widget/tool/croppinglabel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'croppinglabel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CroppingLabel_t {
    QByteArrayData data[8];
    char stringdata0[93];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CroppingLabel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CroppingLabel_t qt_meta_stringdata_CroppingLabel = {
    {
QT_MOC_LITERAL(0, 0, 13), // "CroppingLabel"
QT_MOC_LITERAL(1, 14, 12), // "editFinished"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 7), // "newText"
QT_MOC_LITERAL(4, 36, 11), // "editRemoved"
QT_MOC_LITERAL(5, 48, 7), // "clicked"
QT_MOC_LITERAL(6, 56, 20), // "minimizeMaximumWidth"
QT_MOC_LITERAL(7, 77, 15) // "editingFinished"

    },
    "CroppingLabel\0editFinished\0\0newText\0"
    "editRemoved\0clicked\0minimizeMaximumWidth\0"
    "editingFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CroppingLabel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    0,   42,    2, 0x06 /* Public */,
       5,    0,   43,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   44,    2, 0x0a /* Public */,
       7,    0,   45,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CroppingLabel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CroppingLabel *_t = static_cast<CroppingLabel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->editFinished((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->editRemoved(); break;
        case 2: _t->clicked(); break;
        case 3: _t->minimizeMaximumWidth(); break;
        case 4: _t->editingFinished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CroppingLabel::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CroppingLabel::editFinished)) {
                *result = 0;
            }
        }
        {
            typedef void (CroppingLabel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CroppingLabel::editRemoved)) {
                *result = 1;
            }
        }
        {
            typedef void (CroppingLabel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CroppingLabel::clicked)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject CroppingLabel::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_CroppingLabel.data,
      qt_meta_data_CroppingLabel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CroppingLabel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CroppingLabel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CroppingLabel.stringdata0))
        return static_cast<void*>(const_cast< CroppingLabel*>(this));
    return QLabel::qt_metacast(_clname);
}

int CroppingLabel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void CroppingLabel::editFinished(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CroppingLabel::editRemoved()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void CroppingLabel::clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
