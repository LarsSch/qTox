/****************************************************************************
** Meta object code from reading C++ file 'genericchatform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/widget/form/genericchatform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'genericchatform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_GenericChatForm_t {
    QByteArrayData data[18];
    char stringdata0[248];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GenericChatForm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GenericChatForm_t qt_meta_stringdata_GenericChatForm = {
    {
QT_MOC_LITERAL(0, 0, 15), // "GenericChatForm"
QT_MOC_LITERAL(1, 16, 11), // "sendMessage"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 8), // "uint32_t"
QT_MOC_LITERAL(4, 38, 10), // "sendAction"
QT_MOC_LITERAL(5, 49, 15), // "chatAreaCleared"
QT_MOC_LITERAL(6, 65, 10), // "focusInput"
QT_MOC_LITERAL(7, 76, 26), // "onChatContextMenuRequested"
QT_MOC_LITERAL(8, 103, 3), // "pos"
QT_MOC_LITERAL(9, 107, 20), // "onEmoteButtonClicked"
QT_MOC_LITERAL(10, 128, 22), // "onEmoteInsertRequested"
QT_MOC_LITERAL(11, 151, 3), // "str"
QT_MOC_LITERAL(12, 155, 16), // "onSaveLogClicked"
QT_MOC_LITERAL(13, 172, 16), // "onCopyLogClicked"
QT_MOC_LITERAL(14, 189, 13), // "clearChatArea"
QT_MOC_LITERAL(15, 203, 18), // "onSelectAllClicked"
QT_MOC_LITERAL(16, 222, 12), // "showFileMenu"
QT_MOC_LITERAL(17, 235, 12) // "hideFileMenu"

    },
    "GenericChatForm\0sendMessage\0\0uint32_t\0"
    "sendAction\0chatAreaCleared\0focusInput\0"
    "onChatContextMenuRequested\0pos\0"
    "onEmoteButtonClicked\0onEmoteInsertRequested\0"
    "str\0onSaveLogClicked\0onCopyLogClicked\0"
    "clearChatArea\0onSelectAllClicked\0"
    "showFileMenu\0hideFileMenu"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GenericChatForm[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   84,    2, 0x06 /* Public */,
       4,    2,   89,    2, 0x06 /* Public */,
       5,    0,   94,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   95,    2, 0x0a /* Public */,
       7,    1,   96,    2, 0x09 /* Protected */,
       9,    0,   99,    2, 0x09 /* Protected */,
      10,    1,  100,    2, 0x09 /* Protected */,
      12,    0,  103,    2, 0x09 /* Protected */,
      13,    0,  104,    2, 0x09 /* Protected */,
      14,    1,  105,    2, 0x09 /* Protected */,
      14,    0,  108,    2, 0x09 /* Protected */,
      15,    0,  109,    2, 0x09 /* Protected */,
      16,    0,  110,    2, 0x09 /* Protected */,
      17,    0,  111,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    2,    2,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    2,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void GenericChatForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GenericChatForm *_t = static_cast<GenericChatForm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendMessage((*reinterpret_cast< uint32_t(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->sendAction((*reinterpret_cast< uint32_t(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->chatAreaCleared(); break;
        case 3: _t->focusInput(); break;
        case 4: _t->onChatContextMenuRequested((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 5: _t->onEmoteButtonClicked(); break;
        case 6: _t->onEmoteInsertRequested((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->onSaveLogClicked(); break;
        case 8: _t->onCopyLogClicked(); break;
        case 9: _t->clearChatArea((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->clearChatArea(); break;
        case 11: _t->onSelectAllClicked(); break;
        case 12: _t->showFileMenu(); break;
        case 13: _t->hideFileMenu(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (GenericChatForm::*_t)(uint32_t , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GenericChatForm::sendMessage)) {
                *result = 0;
            }
        }
        {
            typedef void (GenericChatForm::*_t)(uint32_t , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GenericChatForm::sendAction)) {
                *result = 1;
            }
        }
        {
            typedef void (GenericChatForm::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GenericChatForm::chatAreaCleared)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject GenericChatForm::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_GenericChatForm.data,
      qt_meta_data_GenericChatForm,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *GenericChatForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GenericChatForm::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_GenericChatForm.stringdata0))
        return static_cast<void*>(const_cast< GenericChatForm*>(this));
    return QWidget::qt_metacast(_clname);
}

int GenericChatForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void GenericChatForm::sendMessage(uint32_t _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GenericChatForm::sendAction(uint32_t _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GenericChatForm::chatAreaCleared()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
