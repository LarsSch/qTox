/****************************************************************************
** Meta object code from reading C++ file 'widget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/widget/widget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Widget_t {
    QByteArrayData data[105];
    char stringdata0[1514];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Widget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Widget_t qt_meta_stringdata_Widget = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Widget"
QT_MOC_LITERAL(1, 7, 21), // "friendRequestAccepted"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 6), // "userId"
QT_MOC_LITERAL(4, 37, 15), // "friendRequested"
QT_MOC_LITERAL(5, 53, 13), // "friendAddress"
QT_MOC_LITERAL(6, 67, 7), // "message"
QT_MOC_LITERAL(7, 75, 9), // "statusSet"
QT_MOC_LITERAL(8, 85, 6), // "Status"
QT_MOC_LITERAL(9, 92, 6), // "status"
QT_MOC_LITERAL(10, 99, 14), // "statusSelected"
QT_MOC_LITERAL(11, 114, 15), // "usernameChanged"
QT_MOC_LITERAL(12, 130, 8), // "username"
QT_MOC_LITERAL(13, 139, 20), // "statusMessageChanged"
QT_MOC_LITERAL(14, 160, 13), // "statusMessage"
QT_MOC_LITERAL(15, 174, 7), // "resized"
QT_MOC_LITERAL(16, 182, 17), // "onSettingsClicked"
QT_MOC_LITERAL(17, 200, 14), // "setWindowTitle"
QT_MOC_LITERAL(18, 215, 5), // "title"
QT_MOC_LITERAL(19, 221, 9), // "forceShow"
QT_MOC_LITERAL(20, 231, 11), // "onConnected"
QT_MOC_LITERAL(21, 243, 14), // "onDisconnected"
QT_MOC_LITERAL(22, 258, 11), // "onStatusSet"
QT_MOC_LITERAL(23, 270, 19), // "onFailedToStartCore"
QT_MOC_LITERAL(24, 290, 14), // "onBadProxyCore"
QT_MOC_LITERAL(25, 305, 18), // "onSelfAvatarLoaded"
QT_MOC_LITERAL(26, 324, 3), // "pic"
QT_MOC_LITERAL(27, 328, 11), // "setUsername"
QT_MOC_LITERAL(28, 340, 16), // "setStatusMessage"
QT_MOC_LITERAL(29, 357, 9), // "addFriend"
QT_MOC_LITERAL(30, 367, 8), // "friendId"
QT_MOC_LITERAL(31, 376, 15), // "addFriendFailed"
QT_MOC_LITERAL(32, 392, 9), // "errorInfo"
QT_MOC_LITERAL(33, 402, 19), // "onFriendshipChanged"
QT_MOC_LITERAL(34, 422, 21), // "onFriendStatusChanged"
QT_MOC_LITERAL(35, 444, 28), // "onFriendStatusMessageChanged"
QT_MOC_LITERAL(36, 473, 23), // "onFriendUsernameChanged"
QT_MOC_LITERAL(37, 497, 22), // "onFriendDisplayChanged"
QT_MOC_LITERAL(38, 520, 13), // "FriendWidget*"
QT_MOC_LITERAL(39, 534, 12), // "friendWidget"
QT_MOC_LITERAL(40, 547, 1), // "s"
QT_MOC_LITERAL(41, 549, 23), // "onFriendMessageReceived"
QT_MOC_LITERAL(42, 573, 8), // "isAction"
QT_MOC_LITERAL(43, 582, 23), // "onFriendRequestReceived"
QT_MOC_LITERAL(44, 606, 20), // "updateFriendActivity"
QT_MOC_LITERAL(45, 627, 7), // "Friend*"
QT_MOC_LITERAL(46, 635, 4), // "frnd"
QT_MOC_LITERAL(47, 640, 19), // "onMessageSendResult"
QT_MOC_LITERAL(48, 660, 8), // "uint32_t"
QT_MOC_LITERAL(49, 669, 9), // "messageId"
QT_MOC_LITERAL(50, 679, 17), // "onReceiptRecieved"
QT_MOC_LITERAL(51, 697, 7), // "receipt"
QT_MOC_LITERAL(52, 705, 19), // "onEmptyGroupCreated"
QT_MOC_LITERAL(53, 725, 7), // "groupId"
QT_MOC_LITERAL(54, 733, 21), // "onGroupInviteReceived"
QT_MOC_LITERAL(55, 755, 7), // "int32_t"
QT_MOC_LITERAL(56, 763, 7), // "uint8_t"
QT_MOC_LITERAL(57, 771, 4), // "type"
QT_MOC_LITERAL(58, 776, 6), // "invite"
QT_MOC_LITERAL(59, 783, 22), // "onGroupMessageReceived"
QT_MOC_LITERAL(60, 806, 11), // "groupnumber"
QT_MOC_LITERAL(61, 818, 10), // "peernumber"
QT_MOC_LITERAL(62, 829, 22), // "onGroupNamelistChanged"
QT_MOC_LITERAL(63, 852, 6), // "change"
QT_MOC_LITERAL(64, 859, 19), // "onGroupTitleChanged"
QT_MOC_LITERAL(65, 879, 6), // "author"
QT_MOC_LITERAL(66, 886, 23), // "onGroupPeerAudioPlaying"
QT_MOC_LITERAL(67, 910, 17), // "onGroupSendResult"
QT_MOC_LITERAL(68, 928, 6), // "result"
QT_MOC_LITERAL(69, 935, 12), // "playRingtone"
QT_MOC_LITERAL(70, 948, 21), // "onFriendTypingChanged"
QT_MOC_LITERAL(71, 970, 8), // "isTyping"
QT_MOC_LITERAL(72, 979, 11), // "nextContact"
QT_MOC_LITERAL(73, 991, 15), // "previousContact"
QT_MOC_LITERAL(74, 1007, 12), // "onAddClicked"
QT_MOC_LITERAL(75, 1020, 14), // "onGroupClicked"
QT_MOC_LITERAL(76, 1035, 17), // "onTransferClicked"
QT_MOC_LITERAL(77, 1053, 11), // "showProfile"
QT_MOC_LITERAL(78, 1065, 17), // "onUsernameChanged"
QT_MOC_LITERAL(79, 1083, 11), // "newUsername"
QT_MOC_LITERAL(80, 1095, 11), // "oldUsername"
QT_MOC_LITERAL(81, 1107, 22), // "onStatusMessageChanged"
QT_MOC_LITERAL(82, 1130, 16), // "newStatusMessage"
QT_MOC_LITERAL(83, 1147, 23), // "onChatroomWidgetClicked"
QT_MOC_LITERAL(84, 1171, 22), // "GenericChatroomWidget*"
QT_MOC_LITERAL(85, 1194, 12), // "removeFriend"
QT_MOC_LITERAL(86, 1207, 23), // "copyFriendIdToClipboard"
QT_MOC_LITERAL(87, 1231, 11), // "removeGroup"
QT_MOC_LITERAL(88, 1243, 15), // "setStatusOnline"
QT_MOC_LITERAL(89, 1259, 13), // "setStatusAway"
QT_MOC_LITERAL(90, 1273, 13), // "setStatusBusy"
QT_MOC_LITERAL(91, 1287, 11), // "onIconClick"
QT_MOC_LITERAL(92, 1299, 33), // "QSystemTrayIcon::ActivationRe..."
QT_MOC_LITERAL(93, 1333, 15), // "onUserAwayCheck"
QT_MOC_LITERAL(94, 1349, 15), // "onEventIconTick"
QT_MOC_LITERAL(95, 1365, 19), // "onTryCreateTrayIcon"
QT_MOC_LITERAL(96, 1385, 19), // "onSetShowSystemTray"
QT_MOC_LITERAL(97, 1405, 8), // "newValue"
QT_MOC_LITERAL(98, 1414, 15), // "onSplitterMoved"
QT_MOC_LITERAL(99, 1430, 3), // "pos"
QT_MOC_LITERAL(100, 1434, 5), // "index"
QT_MOC_LITERAL(101, 1440, 18), // "processOfflineMsgs"
QT_MOC_LITERAL(102, 1459, 21), // "friendListContextMenu"
QT_MOC_LITERAL(103, 1481, 15), // "bringAllToFront"
QT_MOC_LITERAL(104, 1497, 16) // "toggleFullscreen"

    },
    "Widget\0friendRequestAccepted\0\0userId\0"
    "friendRequested\0friendAddress\0message\0"
    "statusSet\0Status\0status\0statusSelected\0"
    "usernameChanged\0username\0statusMessageChanged\0"
    "statusMessage\0resized\0onSettingsClicked\0"
    "setWindowTitle\0title\0forceShow\0"
    "onConnected\0onDisconnected\0onStatusSet\0"
    "onFailedToStartCore\0onBadProxyCore\0"
    "onSelfAvatarLoaded\0pic\0setUsername\0"
    "setStatusMessage\0addFriend\0friendId\0"
    "addFriendFailed\0errorInfo\0onFriendshipChanged\0"
    "onFriendStatusChanged\0"
    "onFriendStatusMessageChanged\0"
    "onFriendUsernameChanged\0onFriendDisplayChanged\0"
    "FriendWidget*\0friendWidget\0s\0"
    "onFriendMessageReceived\0isAction\0"
    "onFriendRequestReceived\0updateFriendActivity\0"
    "Friend*\0frnd\0onMessageSendResult\0"
    "uint32_t\0messageId\0onReceiptRecieved\0"
    "receipt\0onEmptyGroupCreated\0groupId\0"
    "onGroupInviteReceived\0int32_t\0uint8_t\0"
    "type\0invite\0onGroupMessageReceived\0"
    "groupnumber\0peernumber\0onGroupNamelistChanged\0"
    "change\0onGroupTitleChanged\0author\0"
    "onGroupPeerAudioPlaying\0onGroupSendResult\0"
    "result\0playRingtone\0onFriendTypingChanged\0"
    "isTyping\0nextContact\0previousContact\0"
    "onAddClicked\0onGroupClicked\0"
    "onTransferClicked\0showProfile\0"
    "onUsernameChanged\0newUsername\0oldUsername\0"
    "onStatusMessageChanged\0newStatusMessage\0"
    "onChatroomWidgetClicked\0GenericChatroomWidget*\0"
    "removeFriend\0copyFriendIdToClipboard\0"
    "removeGroup\0setStatusOnline\0setStatusAway\0"
    "setStatusBusy\0onIconClick\0"
    "QSystemTrayIcon::ActivationReason\0"
    "onUserAwayCheck\0onEventIconTick\0"
    "onTryCreateTrayIcon\0onSetShowSystemTray\0"
    "newValue\0onSplitterMoved\0pos\0index\0"
    "processOfflineMsgs\0friendListContextMenu\0"
    "bringAllToFront\0toggleFullscreen"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Widget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      65,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  339,    2, 0x06 /* Public */,
       4,    2,  342,    2, 0x06 /* Public */,
       7,    1,  347,    2, 0x06 /* Public */,
      10,    1,  350,    2, 0x06 /* Public */,
      11,    1,  353,    2, 0x06 /* Public */,
      13,    1,  356,    2, 0x06 /* Public */,
      15,    0,  359,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      16,    0,  360,    2, 0x0a /* Public */,
      17,    1,  361,    2, 0x0a /* Public */,
      19,    0,  364,    2, 0x0a /* Public */,
      20,    0,  365,    2, 0x0a /* Public */,
      21,    0,  366,    2, 0x0a /* Public */,
      22,    1,  367,    2, 0x0a /* Public */,
      23,    0,  370,    2, 0x0a /* Public */,
      24,    0,  371,    2, 0x0a /* Public */,
      25,    1,  372,    2, 0x0a /* Public */,
      27,    1,  375,    2, 0x0a /* Public */,
      28,    1,  378,    2, 0x0a /* Public */,
      29,    2,  381,    2, 0x0a /* Public */,
      31,    2,  386,    2, 0x0a /* Public */,
      31,    1,  391,    2, 0x2a /* Public | MethodCloned */,
      33,    1,  394,    2, 0x0a /* Public */,
      34,    2,  397,    2, 0x0a /* Public */,
      35,    2,  402,    2, 0x0a /* Public */,
      36,    2,  407,    2, 0x0a /* Public */,
      37,    2,  412,    2, 0x0a /* Public */,
      41,    3,  417,    2, 0x0a /* Public */,
      43,    2,  424,    2, 0x0a /* Public */,
      44,    1,  429,    2, 0x0a /* Public */,
      47,    3,  432,    2, 0x0a /* Public */,
      50,    2,  439,    2, 0x0a /* Public */,
      52,    1,  444,    2, 0x0a /* Public */,
      54,    3,  447,    2, 0x0a /* Public */,
      59,    4,  454,    2, 0x0a /* Public */,
      62,    3,  463,    2, 0x0a /* Public */,
      64,    3,  470,    2, 0x0a /* Public */,
      66,    2,  477,    2, 0x0a /* Public */,
      67,    3,  482,    2, 0x0a /* Public */,
      69,    0,  489,    2, 0x0a /* Public */,
      70,    2,  490,    2, 0x0a /* Public */,
      72,    0,  495,    2, 0x0a /* Public */,
      73,    0,  496,    2, 0x0a /* Public */,
      74,    0,  497,    2, 0x08 /* Private */,
      75,    0,  498,    2, 0x08 /* Private */,
      76,    0,  499,    2, 0x08 /* Private */,
      77,    0,  500,    2, 0x08 /* Private */,
      78,    2,  501,    2, 0x08 /* Private */,
      81,    1,  506,    2, 0x08 /* Private */,
      83,    1,  509,    2, 0x08 /* Private */,
      85,    1,  512,    2, 0x08 /* Private */,
      86,    1,  515,    2, 0x08 /* Private */,
      87,    1,  518,    2, 0x08 /* Private */,
      88,    0,  521,    2, 0x08 /* Private */,
      89,    0,  522,    2, 0x08 /* Private */,
      90,    0,  523,    2, 0x08 /* Private */,
      91,    1,  524,    2, 0x08 /* Private */,
      93,    0,  527,    2, 0x08 /* Private */,
      94,    0,  528,    2, 0x08 /* Private */,
      95,    0,  529,    2, 0x08 /* Private */,
      96,    1,  530,    2, 0x08 /* Private */,
      98,    2,  533,    2, 0x08 /* Private */,
     101,    0,  538,    2, 0x08 /* Private */,
     102,    1,  539,    2, 0x08 /* Private */,
     103,    0,  542,    2, 0x08 /* Private */,
     104,    0,  543,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    5,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPixmap,   26,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   30,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,   32,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int,   30,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 8,   30,    9,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   30,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   30,   12,
    QMetaType::Void, 0x80000000 | 38, 0x80000000 | 8,   39,   40,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::Bool,   30,    6,   42,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    6,
    QMetaType::Void, 0x80000000 | 45,   46,
    QMetaType::Void, 0x80000000 | 48, QMetaType::QString, QMetaType::Int,   30,    6,   49,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   30,   51,
    QMetaType::Void, QMetaType::Int,   53,
    QMetaType::Void, 0x80000000 | 55, 0x80000000 | 56, QMetaType::QByteArray,   30,   57,   58,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::Bool,   60,   61,    6,   42,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, 0x80000000 | 56,   60,   61,   63,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString,   60,   65,   18,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   60,   61,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::Int,   53,    6,   68,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   30,   71,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   79,   80,
    QMetaType::Void, QMetaType::QString,   82,
    QMetaType::Void, 0x80000000 | 84,    2,
    QMetaType::Void, QMetaType::Int,   30,
    QMetaType::Void, QMetaType::Int,   30,
    QMetaType::Void, QMetaType::Int,   53,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 92,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   97,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   99,  100,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   99,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Widget *_t = static_cast<Widget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->friendRequestAccepted((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->friendRequested((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->statusSet((*reinterpret_cast< Status(*)>(_a[1]))); break;
        case 3: _t->statusSelected((*reinterpret_cast< Status(*)>(_a[1]))); break;
        case 4: _t->usernameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->statusMessageChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->resized(); break;
        case 7: _t->onSettingsClicked(); break;
        case 8: _t->setWindowTitle((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->forceShow(); break;
        case 10: _t->onConnected(); break;
        case 11: _t->onDisconnected(); break;
        case 12: _t->onStatusSet((*reinterpret_cast< Status(*)>(_a[1]))); break;
        case 13: _t->onFailedToStartCore(); break;
        case 14: _t->onBadProxyCore(); break;
        case 15: _t->onSelfAvatarLoaded((*reinterpret_cast< const QPixmap(*)>(_a[1]))); break;
        case 16: _t->setUsername((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 17: _t->setStatusMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 18: _t->addFriend((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 19: _t->addFriendFailed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 20: _t->addFriendFailed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 21: _t->onFriendshipChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 22: _t->onFriendStatusChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Status(*)>(_a[2]))); break;
        case 23: _t->onFriendStatusMessageChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 24: _t->onFriendUsernameChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 25: _t->onFriendDisplayChanged((*reinterpret_cast< FriendWidget*(*)>(_a[1])),(*reinterpret_cast< Status(*)>(_a[2]))); break;
        case 26: _t->onFriendMessageReceived((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 27: _t->onFriendRequestReceived((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 28: _t->updateFriendActivity((*reinterpret_cast< Friend*(*)>(_a[1]))); break;
        case 29: _t->onMessageSendResult((*reinterpret_cast< uint32_t(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 30: _t->onReceiptRecieved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 31: _t->onEmptyGroupCreated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 32: _t->onGroupInviteReceived((*reinterpret_cast< int32_t(*)>(_a[1])),(*reinterpret_cast< uint8_t(*)>(_a[2])),(*reinterpret_cast< QByteArray(*)>(_a[3]))); break;
        case 33: _t->onGroupMessageReceived((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 34: _t->onGroupNamelistChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< uint8_t(*)>(_a[3]))); break;
        case 35: _t->onGroupTitleChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 36: _t->onGroupPeerAudioPlaying((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 37: _t->onGroupSendResult((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 38: _t->playRingtone(); break;
        case 39: _t->onFriendTypingChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 40: _t->nextContact(); break;
        case 41: _t->previousContact(); break;
        case 42: _t->onAddClicked(); break;
        case 43: _t->onGroupClicked(); break;
        case 44: _t->onTransferClicked(); break;
        case 45: _t->showProfile(); break;
        case 46: _t->onUsernameChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 47: _t->onStatusMessageChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 48: _t->onChatroomWidgetClicked((*reinterpret_cast< GenericChatroomWidget*(*)>(_a[1]))); break;
        case 49: _t->removeFriend((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 50: _t->copyFriendIdToClipboard((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 51: _t->removeGroup((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 52: _t->setStatusOnline(); break;
        case 53: _t->setStatusAway(); break;
        case 54: _t->setStatusBusy(); break;
        case 55: _t->onIconClick((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        case 56: _t->onUserAwayCheck(); break;
        case 57: _t->onEventIconTick(); break;
        case 58: _t->onTryCreateTrayIcon(); break;
        case 59: _t->onSetShowSystemTray((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 60: _t->onSplitterMoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 61: _t->processOfflineMsgs(); break;
        case 62: _t->friendListContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 63: _t->bringAllToFront(); break;
        case 64: _t->toggleFullscreen(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Widget::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Widget::friendRequestAccepted)) {
                *result = 0;
            }
        }
        {
            typedef void (Widget::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Widget::friendRequested)) {
                *result = 1;
            }
        }
        {
            typedef void (Widget::*_t)(Status );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Widget::statusSet)) {
                *result = 2;
            }
        }
        {
            typedef void (Widget::*_t)(Status );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Widget::statusSelected)) {
                *result = 3;
            }
        }
        {
            typedef void (Widget::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Widget::usernameChanged)) {
                *result = 4;
            }
        }
        {
            typedef void (Widget::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Widget::statusMessageChanged)) {
                *result = 5;
            }
        }
        {
            typedef void (Widget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Widget::resized)) {
                *result = 6;
            }
        }
    }
}

const QMetaObject Widget::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Widget.data,
      qt_meta_data_Widget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Widget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Widget.stringdata0))
        return static_cast<void*>(const_cast< Widget*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 65)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 65;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 65)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 65;
    }
    return _id;
}

// SIGNAL 0
void Widget::friendRequestAccepted(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Widget::friendRequested(const QString & _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Widget::statusSet(Status _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Widget::statusSelected(Status _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Widget::usernameChanged(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Widget::statusMessageChanged(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Widget::resized()
{
    QMetaObject::activate(this, &staticMetaObject, 6, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
