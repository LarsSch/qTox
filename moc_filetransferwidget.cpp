/****************************************************************************
** Meta object code from reading C++ file 'filetransferwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/chatlog/content/filetransferwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'filetransferwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_FileTransferWidget_t {
    QByteArrayData data[16];
    char stringdata0[284];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FileTransferWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FileTransferWidget_t qt_meta_stringdata_FileTransferWidget = {
    {
QT_MOC_LITERAL(0, 0, 18), // "FileTransferWidget"
QT_MOC_LITERAL(1, 19, 18), // "onFileTransferInfo"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 7), // "ToxFile"
QT_MOC_LITERAL(4, 47, 4), // "file"
QT_MOC_LITERAL(5, 52, 22), // "onFileTransferAccepted"
QT_MOC_LITERAL(6, 75, 23), // "onFileTransferCancelled"
QT_MOC_LITERAL(7, 99, 20), // "onFileTransferPaused"
QT_MOC_LITERAL(8, 120, 21), // "onFileTransferResumed"
QT_MOC_LITERAL(9, 142, 22), // "onFileTransferFinished"
QT_MOC_LITERAL(10, 165, 32), // "fileTransferRemotePausedUnpaused"
QT_MOC_LITERAL(11, 198, 6), // "paused"
QT_MOC_LITERAL(12, 205, 26), // "fileTransferBrokenUnbroken"
QT_MOC_LITERAL(13, 232, 6), // "broken"
QT_MOC_LITERAL(14, 239, 20), // "on_topButton_clicked"
QT_MOC_LITERAL(15, 260, 23) // "on_bottomButton_clicked"

    },
    "FileTransferWidget\0onFileTransferInfo\0"
    "\0ToxFile\0file\0onFileTransferAccepted\0"
    "onFileTransferCancelled\0onFileTransferPaused\0"
    "onFileTransferResumed\0onFileTransferFinished\0"
    "fileTransferRemotePausedUnpaused\0"
    "paused\0fileTransferBrokenUnbroken\0"
    "broken\0on_topButton_clicked\0"
    "on_bottomButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FileTransferWidget[] = {

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
       1,    1,   64,    2, 0x09 /* Protected */,
       5,    1,   67,    2, 0x09 /* Protected */,
       6,    1,   70,    2, 0x09 /* Protected */,
       7,    1,   73,    2, 0x09 /* Protected */,
       8,    1,   76,    2, 0x09 /* Protected */,
       9,    1,   79,    2, 0x09 /* Protected */,
      10,    2,   82,    2, 0x09 /* Protected */,
      12,    2,   87,    2, 0x09 /* Protected */,
      14,    0,   92,    2, 0x08 /* Private */,
      15,    0,   93,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    4,   11,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    4,   13,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FileTransferWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FileTransferWidget *_t = static_cast<FileTransferWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onFileTransferInfo((*reinterpret_cast< ToxFile(*)>(_a[1]))); break;
        case 1: _t->onFileTransferAccepted((*reinterpret_cast< ToxFile(*)>(_a[1]))); break;
        case 2: _t->onFileTransferCancelled((*reinterpret_cast< ToxFile(*)>(_a[1]))); break;
        case 3: _t->onFileTransferPaused((*reinterpret_cast< ToxFile(*)>(_a[1]))); break;
        case 4: _t->onFileTransferResumed((*reinterpret_cast< ToxFile(*)>(_a[1]))); break;
        case 5: _t->onFileTransferFinished((*reinterpret_cast< ToxFile(*)>(_a[1]))); break;
        case 6: _t->fileTransferRemotePausedUnpaused((*reinterpret_cast< ToxFile(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 7: _t->fileTransferBrokenUnbroken((*reinterpret_cast< ToxFile(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 8: _t->on_topButton_clicked(); break;
        case 9: _t->on_bottomButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject FileTransferWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_FileTransferWidget.data,
      qt_meta_data_FileTransferWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FileTransferWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FileTransferWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FileTransferWidget.stringdata0))
        return static_cast<void*>(const_cast< FileTransferWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int FileTransferWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
