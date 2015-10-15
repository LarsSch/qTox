/****************************************************************************
** Meta object code from reading C++ file 'profileform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/widget/form/profileform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'profileform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ClickableTE_t {
    QByteArrayData data[3];
    char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ClickableTE_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ClickableTE_t qt_meta_stringdata_ClickableTE = {
    {
QT_MOC_LITERAL(0, 0, 11), // "ClickableTE"
QT_MOC_LITERAL(1, 12, 7), // "clicked"
QT_MOC_LITERAL(2, 20, 0) // ""

    },
    "ClickableTE\0clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ClickableTE[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void ClickableTE::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ClickableTE *_t = static_cast<ClickableTE *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ClickableTE::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ClickableTE::clicked)) {
                *result = 0;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject ClickableTE::staticMetaObject = {
    { &QLineEdit::staticMetaObject, qt_meta_stringdata_ClickableTE.data,
      qt_meta_data_ClickableTE,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ClickableTE::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ClickableTE::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ClickableTE.stringdata0))
        return static_cast<void*>(const_cast< ClickableTE*>(this));
    return QLineEdit::qt_metacast(_clname);
}

int ClickableTE::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLineEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void ClickableTE::clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
struct qt_meta_stringdata_ProfileForm_t {
    QByteArrayData data[20];
    char stringdata0[290];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ProfileForm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ProfileForm_t qt_meta_stringdata_ProfileForm = {
    {
QT_MOC_LITERAL(0, 0, 11), // "ProfileForm"
QT_MOC_LITERAL(1, 12, 15), // "userNameChanged"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 20), // "statusMessageChanged"
QT_MOC_LITERAL(4, 50, 18), // "onSelfAvatarLoaded"
QT_MOC_LITERAL(5, 69, 3), // "pic"
QT_MOC_LITERAL(6, 73, 8), // "setToxId"
QT_MOC_LITERAL(7, 82, 2), // "id"
QT_MOC_LITERAL(8, 85, 13), // "copyIdClicked"
QT_MOC_LITERAL(9, 99, 15), // "onAvatarClicked"
QT_MOC_LITERAL(10, 115, 16), // "onUserNameEdited"
QT_MOC_LITERAL(11, 132, 21), // "onStatusMessageEdited"
QT_MOC_LITERAL(12, 154, 15), // "onRenameClicked"
QT_MOC_LITERAL(13, 170, 15), // "onExportClicked"
QT_MOC_LITERAL(14, 186, 15), // "onDeleteClicked"
QT_MOC_LITERAL(15, 202, 15), // "onLogoutClicked"
QT_MOC_LITERAL(16, 218, 15), // "onCopyQrClicked"
QT_MOC_LITERAL(17, 234, 15), // "onSaveQrClicked"
QT_MOC_LITERAL(18, 250, 19), // "onDeletePassClicked"
QT_MOC_LITERAL(19, 270, 19) // "onChangePassClicked"

    },
    "ProfileForm\0userNameChanged\0\0"
    "statusMessageChanged\0onSelfAvatarLoaded\0"
    "pic\0setToxId\0id\0copyIdClicked\0"
    "onAvatarClicked\0onUserNameEdited\0"
    "onStatusMessageEdited\0onRenameClicked\0"
    "onExportClicked\0onDeleteClicked\0"
    "onLogoutClicked\0onCopyQrClicked\0"
    "onSaveQrClicked\0onDeletePassClicked\0"
    "onChangePassClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ProfileForm[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   94,    2, 0x06 /* Public */,
       3,    1,   97,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,  100,    2, 0x0a /* Public */,
       6,    1,  103,    2, 0x08 /* Private */,
       8,    0,  106,    2, 0x08 /* Private */,
       9,    0,  107,    2, 0x08 /* Private */,
      10,    0,  108,    2, 0x08 /* Private */,
      11,    0,  109,    2, 0x08 /* Private */,
      12,    0,  110,    2, 0x08 /* Private */,
      13,    0,  111,    2, 0x08 /* Private */,
      14,    0,  112,    2, 0x08 /* Private */,
      15,    0,  113,    2, 0x08 /* Private */,
      16,    0,  114,    2, 0x08 /* Private */,
      17,    0,  115,    2, 0x08 /* Private */,
      18,    0,  116,    2, 0x08 /* Private */,
      19,    0,  117,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QPixmap,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ProfileForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ProfileForm *_t = static_cast<ProfileForm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->userNameChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->statusMessageChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->onSelfAvatarLoaded((*reinterpret_cast< const QPixmap(*)>(_a[1]))); break;
        case 3: _t->setToxId((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->copyIdClicked(); break;
        case 5: _t->onAvatarClicked(); break;
        case 6: _t->onUserNameEdited(); break;
        case 7: _t->onStatusMessageEdited(); break;
        case 8: _t->onRenameClicked(); break;
        case 9: _t->onExportClicked(); break;
        case 10: _t->onDeleteClicked(); break;
        case 11: _t->onLogoutClicked(); break;
        case 12: _t->onCopyQrClicked(); break;
        case 13: _t->onSaveQrClicked(); break;
        case 14: _t->onDeletePassClicked(); break;
        case 15: _t->onChangePassClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ProfileForm::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ProfileForm::userNameChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (ProfileForm::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ProfileForm::statusMessageChanged)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject ProfileForm::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ProfileForm.data,
      qt_meta_data_ProfileForm,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ProfileForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ProfileForm::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ProfileForm.stringdata0))
        return static_cast<void*>(const_cast< ProfileForm*>(this));
    return QWidget::qt_metacast(_clname);
}

int ProfileForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void ProfileForm::userNameChanged(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ProfileForm::statusMessageChanged(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
