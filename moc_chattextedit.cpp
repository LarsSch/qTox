/****************************************************************************
** Meta object code from reading C++ file 'chattextedit.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/widget/tool/chattextedit.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'chattextedit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ChatTextEdit_t {
    QByteArrayData data[5];
    char stringdata0[49];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ChatTextEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ChatTextEdit_t qt_meta_stringdata_ChatTextEdit = {
    {
QT_MOC_LITERAL(0, 0, 12), // "ChatTextEdit"
QT_MOC_LITERAL(1, 13, 12), // "enterPressed"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 10), // "tabPressed"
QT_MOC_LITERAL(4, 38, 10) // "keyPressed"

    },
    "ChatTextEdit\0enterPressed\0\0tabPressed\0"
    "keyPressed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ChatTextEdit[] = {

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
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,
       4,    0,   31,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ChatTextEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ChatTextEdit *_t = static_cast<ChatTextEdit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->enterPressed(); break;
        case 1: _t->tabPressed(); break;
        case 2: _t->keyPressed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ChatTextEdit::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ChatTextEdit::enterPressed)) {
                *result = 0;
            }
        }
        {
            typedef void (ChatTextEdit::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ChatTextEdit::tabPressed)) {
                *result = 1;
            }
        }
        {
            typedef void (ChatTextEdit::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ChatTextEdit::keyPressed)) {
                *result = 2;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject ChatTextEdit::staticMetaObject = {
    { &QTextEdit::staticMetaObject, qt_meta_stringdata_ChatTextEdit.data,
      qt_meta_data_ChatTextEdit,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ChatTextEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ChatTextEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ChatTextEdit.stringdata0))
        return static_cast<void*>(const_cast< ChatTextEdit*>(this));
    return QTextEdit::qt_metacast(_clname);
}

int ChatTextEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTextEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void ChatTextEdit::enterPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void ChatTextEdit::tabPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void ChatTextEdit::keyPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
