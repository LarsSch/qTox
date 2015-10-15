/****************************************************************************
** Meta object code from reading C++ file 'chatform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/widget/form/chatform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'chatform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ChatForm_t {
    QByteArrayData data[57];
    char stringdata0[737];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ChatForm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ChatForm_t qt_meta_stringdata_ChatForm = {
    {
QT_MOC_LITERAL(0, 0, 8), // "ChatForm"
QT_MOC_LITERAL(1, 9, 8), // "sendFile"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 8), // "uint32_t"
QT_MOC_LITERAL(4, 28, 8), // "friendId"
QT_MOC_LITERAL(5, 37, 9), // "startCall"
QT_MOC_LITERAL(6, 47, 8), // "FriendId"
QT_MOC_LITERAL(7, 56, 5), // "video"
QT_MOC_LITERAL(8, 62, 10), // "answerCall"
QT_MOC_LITERAL(9, 73, 6), // "callId"
QT_MOC_LITERAL(10, 80, 10), // "hangupCall"
QT_MOC_LITERAL(11, 91, 10), // "cancelCall"
QT_MOC_LITERAL(12, 102, 10), // "rejectCall"
QT_MOC_LITERAL(13, 113, 13), // "micMuteToggle"
QT_MOC_LITERAL(14, 127, 13), // "volMuteToggle"
QT_MOC_LITERAL(15, 141, 12), // "aliasChanged"
QT_MOC_LITERAL(16, 154, 5), // "alias"
QT_MOC_LITERAL(17, 160, 13), // "startFileSend"
QT_MOC_LITERAL(18, 174, 7), // "ToxFile"
QT_MOC_LITERAL(19, 182, 4), // "file"
QT_MOC_LITERAL(20, 187, 17), // "onFileRecvRequest"
QT_MOC_LITERAL(21, 205, 10), // "onAvInvite"
QT_MOC_LITERAL(22, 216, 6), // "CallId"
QT_MOC_LITERAL(23, 223, 9), // "onAvStart"
QT_MOC_LITERAL(24, 233, 10), // "onAvCancel"
QT_MOC_LITERAL(25, 244, 7), // "onAvEnd"
QT_MOC_LITERAL(26, 252, 11), // "onAvRinging"
QT_MOC_LITERAL(27, 264, 12), // "onAvStarting"
QT_MOC_LITERAL(28, 277, 10), // "onAvEnding"
QT_MOC_LITERAL(29, 288, 18), // "onAvRequestTimeout"
QT_MOC_LITERAL(30, 307, 15), // "onAvPeerTimeout"
QT_MOC_LITERAL(31, 323, 15), // "onAvMediaChange"
QT_MOC_LITERAL(32, 339, 14), // "onAvCallFailed"
QT_MOC_LITERAL(33, 354, 12), // "onAvRejected"
QT_MOC_LITERAL(34, 367, 15), // "onMicMuteToggle"
QT_MOC_LITERAL(35, 383, 15), // "onVolMuteToggle"
QT_MOC_LITERAL(36, 399, 14), // "onAvatarChange"
QT_MOC_LITERAL(37, 414, 3), // "pic"
QT_MOC_LITERAL(38, 418, 15), // "onAvatarRemoved"
QT_MOC_LITERAL(39, 434, 15), // "onSendTriggered"
QT_MOC_LITERAL(40, 450, 17), // "onTextEditChanged"
QT_MOC_LITERAL(41, 468, 15), // "onAttachClicked"
QT_MOC_LITERAL(42, 484, 15), // "onCallTriggered"
QT_MOC_LITERAL(43, 500, 20), // "onVideoCallTriggered"
QT_MOC_LITERAL(44, 521, 21), // "onAnswerCallTriggered"
QT_MOC_LITERAL(45, 543, 21), // "onHangupCallTriggered"
QT_MOC_LITERAL(46, 565, 21), // "onCancelCallTriggered"
QT_MOC_LITERAL(47, 587, 21), // "onRejectCallTriggered"
QT_MOC_LITERAL(48, 609, 16), // "onFileSendFailed"
QT_MOC_LITERAL(49, 626, 5), // "fname"
QT_MOC_LITERAL(50, 632, 13), // "onLoadHistory"
QT_MOC_LITERAL(51, 646, 12), // "onUpdateTime"
QT_MOC_LITERAL(52, 659, 19), // "onEnableCallButtons"
QT_MOC_LITERAL(53, 679, 19), // "onScreenshotClicked"
QT_MOC_LITERAL(54, 699, 17), // "onScreenshotTaken"
QT_MOC_LITERAL(55, 717, 6), // "pixmap"
QT_MOC_LITERAL(56, 724, 12) // "doScreenshot"

    },
    "ChatForm\0sendFile\0\0uint32_t\0friendId\0"
    "startCall\0FriendId\0video\0answerCall\0"
    "callId\0hangupCall\0cancelCall\0rejectCall\0"
    "micMuteToggle\0volMuteToggle\0aliasChanged\0"
    "alias\0startFileSend\0ToxFile\0file\0"
    "onFileRecvRequest\0onAvInvite\0CallId\0"
    "onAvStart\0onAvCancel\0onAvEnd\0onAvRinging\0"
    "onAvStarting\0onAvEnding\0onAvRequestTimeout\0"
    "onAvPeerTimeout\0onAvMediaChange\0"
    "onAvCallFailed\0onAvRejected\0onMicMuteToggle\0"
    "onVolMuteToggle\0onAvatarChange\0pic\0"
    "onAvatarRemoved\0onSendTriggered\0"
    "onTextEditChanged\0onAttachClicked\0"
    "onCallTriggered\0onVideoCallTriggered\0"
    "onAnswerCallTriggered\0onHangupCallTriggered\0"
    "onCancelCallTriggered\0onRejectCallTriggered\0"
    "onFileSendFailed\0fname\0onLoadHistory\0"
    "onUpdateTime\0onEnableCallButtons\0"
    "onScreenshotClicked\0onScreenshotTaken\0"
    "pixmap\0doScreenshot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ChatForm[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      43,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,  229,    2, 0x06 /* Public */,
       5,    2,  238,    2, 0x06 /* Public */,
       8,    1,  243,    2, 0x06 /* Public */,
      10,    1,  246,    2, 0x06 /* Public */,
      11,    2,  249,    2, 0x06 /* Public */,
      12,    1,  254,    2, 0x06 /* Public */,
      13,    1,  257,    2, 0x06 /* Public */,
      14,    1,  260,    2, 0x06 /* Public */,
      15,    1,  263,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      17,    1,  266,    2, 0x0a /* Public */,
      20,    1,  269,    2, 0x0a /* Public */,
      21,    3,  272,    2, 0x0a /* Public */,
      23,    3,  279,    2, 0x0a /* Public */,
      24,    2,  286,    2, 0x0a /* Public */,
      25,    2,  291,    2, 0x0a /* Public */,
      26,    3,  296,    2, 0x0a /* Public */,
      27,    3,  303,    2, 0x0a /* Public */,
      28,    2,  310,    2, 0x0a /* Public */,
      29,    2,  315,    2, 0x0a /* Public */,
      30,    2,  320,    2, 0x0a /* Public */,
      31,    3,  325,    2, 0x0a /* Public */,
      32,    1,  332,    2, 0x0a /* Public */,
      33,    2,  335,    2, 0x0a /* Public */,
      34,    0,  340,    2, 0x0a /* Public */,
      35,    0,  341,    2, 0x0a /* Public */,
      36,    2,  342,    2, 0x0a /* Public */,
      38,    1,  347,    2, 0x0a /* Public */,
      39,    0,  350,    2, 0x08 /* Private */,
      40,    0,  351,    2, 0x08 /* Private */,
      41,    0,  352,    2, 0x08 /* Private */,
      42,    0,  353,    2, 0x08 /* Private */,
      43,    0,  354,    2, 0x08 /* Private */,
      44,    0,  355,    2, 0x08 /* Private */,
      45,    0,  356,    2, 0x08 /* Private */,
      46,    0,  357,    2, 0x08 /* Private */,
      47,    0,  358,    2, 0x08 /* Private */,
      48,    2,  359,    2, 0x08 /* Private */,
      50,    0,  364,    2, 0x08 /* Private */,
      51,    0,  365,    2, 0x08 /* Private */,
      52,    0,  366,    2, 0x08 /* Private */,
      53,    0,  367,    2, 0x08 /* Private */,
      54,    1,  368,    2, 0x08 /* Private */,
      56,    0,  371,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString, QMetaType::QString, QMetaType::LongLong,    4,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    6,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 3,    9,    6,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::QString,   16,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Bool,    6,   22,    7,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Bool,    6,   22,    7,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    6,   22,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    6,   22,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Bool,    6,   22,    7,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Bool,    6,   22,    7,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    6,   22,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    6,   22,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    6,   22,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Bool,    6,   22,    7,
    QMetaType::Void, 0x80000000 | 3,    6,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    6,   22,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QPixmap,    6,   37,
    QMetaType::Void, 0x80000000 | 3,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    6,   49,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPixmap,   55,
    QMetaType::Void,

       0        // eod
};

void ChatForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ChatForm *_t = static_cast<ChatForm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendFile((*reinterpret_cast< uint32_t(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< long long(*)>(_a[4]))); break;
        case 1: _t->startCall((*reinterpret_cast< uint32_t(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->answerCall((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->hangupCall((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->cancelCall((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< uint32_t(*)>(_a[2]))); break;
        case 5: _t->rejectCall((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->micMuteToggle((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->volMuteToggle((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->aliasChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->startFileSend((*reinterpret_cast< ToxFile(*)>(_a[1]))); break;
        case 10: _t->onFileRecvRequest((*reinterpret_cast< ToxFile(*)>(_a[1]))); break;
        case 11: _t->onAvInvite((*reinterpret_cast< uint32_t(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 12: _t->onAvStart((*reinterpret_cast< uint32_t(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 13: _t->onAvCancel((*reinterpret_cast< uint32_t(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 14: _t->onAvEnd((*reinterpret_cast< uint32_t(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 15: _t->onAvRinging((*reinterpret_cast< uint32_t(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 16: _t->onAvStarting((*reinterpret_cast< uint32_t(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 17: _t->onAvEnding((*reinterpret_cast< uint32_t(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 18: _t->onAvRequestTimeout((*reinterpret_cast< uint32_t(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 19: _t->onAvPeerTimeout((*reinterpret_cast< uint32_t(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 20: _t->onAvMediaChange((*reinterpret_cast< uint32_t(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 21: _t->onAvCallFailed((*reinterpret_cast< uint32_t(*)>(_a[1]))); break;
        case 22: _t->onAvRejected((*reinterpret_cast< uint32_t(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 23: _t->onMicMuteToggle(); break;
        case 24: _t->onVolMuteToggle(); break;
        case 25: _t->onAvatarChange((*reinterpret_cast< uint32_t(*)>(_a[1])),(*reinterpret_cast< const QPixmap(*)>(_a[2]))); break;
        case 26: _t->onAvatarRemoved((*reinterpret_cast< uint32_t(*)>(_a[1]))); break;
        case 27: _t->onSendTriggered(); break;
        case 28: _t->onTextEditChanged(); break;
        case 29: _t->onAttachClicked(); break;
        case 30: _t->onCallTriggered(); break;
        case 31: _t->onVideoCallTriggered(); break;
        case 32: _t->onAnswerCallTriggered(); break;
        case 33: _t->onHangupCallTriggered(); break;
        case 34: _t->onCancelCallTriggered(); break;
        case 35: _t->onRejectCallTriggered(); break;
        case 36: _t->onFileSendFailed((*reinterpret_cast< uint32_t(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 37: _t->onLoadHistory(); break;
        case 38: _t->onUpdateTime(); break;
        case 39: _t->onEnableCallButtons(); break;
        case 40: _t->onScreenshotClicked(); break;
        case 41: _t->onScreenshotTaken((*reinterpret_cast< const QPixmap(*)>(_a[1]))); break;
        case 42: _t->doScreenshot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ChatForm::*_t)(uint32_t , QString , QString , long long );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ChatForm::sendFile)) {
                *result = 0;
            }
        }
        {
            typedef void (ChatForm::*_t)(uint32_t , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ChatForm::startCall)) {
                *result = 1;
            }
        }
        {
            typedef void (ChatForm::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ChatForm::answerCall)) {
                *result = 2;
            }
        }
        {
            typedef void (ChatForm::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ChatForm::hangupCall)) {
                *result = 3;
            }
        }
        {
            typedef void (ChatForm::*_t)(int , uint32_t );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ChatForm::cancelCall)) {
                *result = 4;
            }
        }
        {
            typedef void (ChatForm::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ChatForm::rejectCall)) {
                *result = 5;
            }
        }
        {
            typedef void (ChatForm::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ChatForm::micMuteToggle)) {
                *result = 6;
            }
        }
        {
            typedef void (ChatForm::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ChatForm::volMuteToggle)) {
                *result = 7;
            }
        }
        {
            typedef void (ChatForm::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ChatForm::aliasChanged)) {
                *result = 8;
            }
        }
    }
}

const QMetaObject ChatForm::staticMetaObject = {
    { &GenericChatForm::staticMetaObject, qt_meta_stringdata_ChatForm.data,
      qt_meta_data_ChatForm,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ChatForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ChatForm::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ChatForm.stringdata0))
        return static_cast<void*>(const_cast< ChatForm*>(this));
    return GenericChatForm::qt_metacast(_clname);
}

int ChatForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = GenericChatForm::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 43)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 43;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 43)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 43;
    }
    return _id;
}

// SIGNAL 0
void ChatForm::sendFile(uint32_t _t1, QString _t2, QString _t3, long long _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ChatForm::startCall(uint32_t _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ChatForm::answerCall(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ChatForm::hangupCall(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ChatForm::cancelCall(int _t1, uint32_t _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ChatForm::rejectCall(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void ChatForm::micMuteToggle(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void ChatForm::volMuteToggle(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void ChatForm::aliasChanged(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_END_MOC_NAMESPACE
