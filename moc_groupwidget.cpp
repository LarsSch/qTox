/****************************************************************************
** Meta object code from reading C++ file 'groupwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/widget/groupwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'groupwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_GroupWidget_t {
    QByteArrayData data[9];
    char stringdata0[96];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GroupWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GroupWidget_t qt_meta_stringdata_GroupWidget = {
    {
QT_MOC_LITERAL(0, 0, 11), // "GroupWidget"
QT_MOC_LITERAL(1, 12, 18), // "groupWidgetClicked"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 12), // "GroupWidget*"
QT_MOC_LITERAL(4, 45, 6), // "widget"
QT_MOC_LITERAL(5, 52, 15), // "renameRequested"
QT_MOC_LITERAL(6, 68, 7), // "newName"
QT_MOC_LITERAL(7, 76, 11), // "removeGroup"
QT_MOC_LITERAL(8, 88, 7) // "groupId"

    },
    "GroupWidget\0groupWidgetClicked\0\0"
    "GroupWidget*\0widget\0renameRequested\0"
    "newName\0removeGroup\0groupId"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GroupWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       5,    2,   32,    2, 0x06 /* Public */,
       7,    1,   37,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    4,    6,
    QMetaType::Void, QMetaType::Int,    8,

       0        // eod
};

void GroupWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GroupWidget *_t = static_cast<GroupWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->groupWidgetClicked((*reinterpret_cast< GroupWidget*(*)>(_a[1]))); break;
        case 1: _t->renameRequested((*reinterpret_cast< GroupWidget*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->removeGroup((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< GroupWidget* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< GroupWidget* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (GroupWidget::*_t)(GroupWidget * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GroupWidget::groupWidgetClicked)) {
                *result = 0;
            }
        }
        {
            typedef void (GroupWidget::*_t)(GroupWidget * , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GroupWidget::renameRequested)) {
                *result = 1;
            }
        }
        {
            typedef void (GroupWidget::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GroupWidget::removeGroup)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject GroupWidget::staticMetaObject = {
    { &GenericChatroomWidget::staticMetaObject, qt_meta_stringdata_GroupWidget.data,
      qt_meta_data_GroupWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *GroupWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GroupWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_GroupWidget.stringdata0))
        return static_cast<void*>(const_cast< GroupWidget*>(this));
    return GenericChatroomWidget::qt_metacast(_clname);
}

int GroupWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = GenericChatroomWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void GroupWidget::groupWidgetClicked(GroupWidget * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GroupWidget::renameRequested(GroupWidget * _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GroupWidget::removeGroup(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
