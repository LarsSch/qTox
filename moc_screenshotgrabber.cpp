/****************************************************************************
** Meta object code from reading C++ file 'screenshotgrabber.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/widget/tool/screenshotgrabber.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'screenshotgrabber.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ScreenshotGrabber_t {
    QByteArrayData data[7];
    char stringdata0[76];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ScreenshotGrabber_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ScreenshotGrabber_t qt_meta_stringdata_ScreenshotGrabber = {
    {
QT_MOC_LITERAL(0, 0, 17), // "ScreenshotGrabber"
QT_MOC_LITERAL(1, 18, 15), // "screenshotTaken"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 6), // "pixmap"
QT_MOC_LITERAL(4, 42, 8), // "rejected"
QT_MOC_LITERAL(5, 51, 11), // "showGrabber"
QT_MOC_LITERAL(6, 63, 12) // "acceptRegion"

    },
    "ScreenshotGrabber\0screenshotTaken\0\0"
    "pixmap\0rejected\0showGrabber\0acceptRegion"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ScreenshotGrabber[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    0,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   38,    2, 0x0a /* Public */,
       6,    0,   39,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QPixmap,    3,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ScreenshotGrabber::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ScreenshotGrabber *_t = static_cast<ScreenshotGrabber *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->screenshotTaken((*reinterpret_cast< const QPixmap(*)>(_a[1]))); break;
        case 1: _t->rejected(); break;
        case 2: _t->showGrabber(); break;
        case 3: _t->acceptRegion(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ScreenshotGrabber::*_t)(const QPixmap & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ScreenshotGrabber::screenshotTaken)) {
                *result = 0;
            }
        }
        {
            typedef void (ScreenshotGrabber::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ScreenshotGrabber::rejected)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject ScreenshotGrabber::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ScreenshotGrabber.data,
      qt_meta_data_ScreenshotGrabber,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ScreenshotGrabber::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScreenshotGrabber::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ScreenshotGrabber.stringdata0))
        return static_cast<void*>(const_cast< ScreenshotGrabber*>(this));
    return QWidget::qt_metacast(_clname);
}

int ScreenshotGrabber::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void ScreenshotGrabber::screenshotTaken(const QPixmap & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ScreenshotGrabber::rejected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
