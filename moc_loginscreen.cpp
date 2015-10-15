/****************************************************************************
** Meta object code from reading C++ file 'loginscreen.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/widget/loginscreen.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'loginscreen.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_LoginScreen_t {
    QByteArrayData data[11];
    char stringdata0[154];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LoginScreen_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LoginScreen_t qt_meta_stringdata_LoginScreen = {
    {
QT_MOC_LITERAL(0, 0, 11), // "LoginScreen"
QT_MOC_LITERAL(1, 12, 18), // "onAutoLoginToggled"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 5), // "state"
QT_MOC_LITERAL(4, 38, 23), // "onLoginUsernameSelected"
QT_MOC_LITERAL(5, 62, 4), // "name"
QT_MOC_LITERAL(6, 67, 16), // "onPasswordEdited"
QT_MOC_LITERAL(7, 84, 23), // "onNewProfilePageClicked"
QT_MOC_LITERAL(8, 108, 18), // "onLoginPageClicked"
QT_MOC_LITERAL(9, 127, 18), // "onCreateNewProfile"
QT_MOC_LITERAL(10, 146, 7) // "onLogin"

    },
    "LoginScreen\0onAutoLoginToggled\0\0state\0"
    "onLoginUsernameSelected\0name\0"
    "onPasswordEdited\0onNewProfilePageClicked\0"
    "onLoginPageClicked\0onCreateNewProfile\0"
    "onLogin"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LoginScreen[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x08 /* Private */,
       4,    1,   52,    2, 0x08 /* Private */,
       6,    0,   55,    2, 0x08 /* Private */,
       7,    0,   56,    2, 0x08 /* Private */,
       8,    0,   57,    2, 0x08 /* Private */,
       9,    0,   58,    2, 0x08 /* Private */,
      10,    0,   59,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void LoginScreen::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LoginScreen *_t = static_cast<LoginScreen *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onAutoLoginToggled((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->onLoginUsernameSelected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->onPasswordEdited(); break;
        case 3: _t->onNewProfilePageClicked(); break;
        case 4: _t->onLoginPageClicked(); break;
        case 5: _t->onCreateNewProfile(); break;
        case 6: _t->onLogin(); break;
        default: ;
        }
    }
}

const QMetaObject LoginScreen::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_LoginScreen.data,
      qt_meta_data_LoginScreen,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *LoginScreen::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LoginScreen::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_LoginScreen.stringdata0))
        return static_cast<void*>(const_cast< LoginScreen*>(this));
    return QWidget::qt_metacast(_clname);
}

int LoginScreen::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
