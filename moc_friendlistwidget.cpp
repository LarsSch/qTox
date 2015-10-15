/****************************************************************************
** Meta object code from reading C++ file 'friendlistwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/widget/friendlistwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'friendlistwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_FriendListWidget_t {
    QByteArrayData data[19];
    char stringdata0[211];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FriendListWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FriendListWidget_t qt_meta_stringdata_FriendListWidget = {
    {
QT_MOC_LITERAL(0, 0, 16), // "FriendListWidget"
QT_MOC_LITERAL(1, 17, 16), // "onCompactChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 7), // "compact"
QT_MOC_LITERAL(4, 43, 17), // "renameGroupWidget"
QT_MOC_LITERAL(5, 61, 12), // "GroupWidget*"
QT_MOC_LITERAL(6, 74, 11), // "groupWidget"
QT_MOC_LITERAL(7, 86, 7), // "newName"
QT_MOC_LITERAL(8, 94, 18), // "renameCircleWidget"
QT_MOC_LITERAL(9, 113, 13), // "CircleWidget*"
QT_MOC_LITERAL(10, 127, 12), // "circleWidget"
QT_MOC_LITERAL(11, 140, 26), // "onGroupchatPositionChanged"
QT_MOC_LITERAL(12, 167, 3), // "top"
QT_MOC_LITERAL(13, 171, 10), // "moveWidget"
QT_MOC_LITERAL(14, 182, 13), // "FriendWidget*"
QT_MOC_LITERAL(15, 196, 1), // "w"
QT_MOC_LITERAL(16, 198, 6), // "Status"
QT_MOC_LITERAL(17, 205, 1), // "s"
QT_MOC_LITERAL(18, 207, 3) // "add"

    },
    "FriendListWidget\0onCompactChanged\0\0"
    "compact\0renameGroupWidget\0GroupWidget*\0"
    "groupWidget\0newName\0renameCircleWidget\0"
    "CircleWidget*\0circleWidget\0"
    "onGroupchatPositionChanged\0top\0"
    "moveWidget\0FriendWidget*\0w\0Status\0s\0"
    "add"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FriendListWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    2,   47,    2, 0x0a /* Public */,
       8,    2,   52,    2, 0x0a /* Public */,
      11,    1,   57,    2, 0x0a /* Public */,
      13,    3,   60,    2, 0x0a /* Public */,
      13,    2,   67,    2, 0x2a /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5, QMetaType::QString,    6,    7,
    QMetaType::Void, 0x80000000 | 9, QMetaType::QString,   10,    7,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, 0x80000000 | 14, 0x80000000 | 16, QMetaType::Bool,   15,   17,   18,
    QMetaType::Void, 0x80000000 | 14, 0x80000000 | 16,   15,   17,

       0        // eod
};

void FriendListWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FriendListWidget *_t = static_cast<FriendListWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onCompactChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->renameGroupWidget((*reinterpret_cast< GroupWidget*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->renameCircleWidget((*reinterpret_cast< CircleWidget*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->onGroupchatPositionChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->moveWidget((*reinterpret_cast< FriendWidget*(*)>(_a[1])),(*reinterpret_cast< Status(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 5: _t->moveWidget((*reinterpret_cast< FriendWidget*(*)>(_a[1])),(*reinterpret_cast< Status(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (FriendListWidget::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FriendListWidget::onCompactChanged)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject FriendListWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_FriendListWidget.data,
      qt_meta_data_FriendListWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FriendListWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FriendListWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FriendListWidget.stringdata0))
        return static_cast<void*>(const_cast< FriendListWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int FriendListWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void FriendListWidget::onCompactChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
