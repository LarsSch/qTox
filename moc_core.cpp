/****************************************************************************
** Meta object code from reading C++ file 'core.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/core/core.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'core.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Core_t {
    QByteArrayData data[161];
    char stringdata0[2141];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Core_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Core_t qt_meta_stringdata_Core = {
    {
QT_MOC_LITERAL(0, 0, 4), // "Core"
QT_MOC_LITERAL(1, 5, 9), // "connected"
QT_MOC_LITERAL(2, 15, 0), // ""
QT_MOC_LITERAL(3, 16, 12), // "disconnected"
QT_MOC_LITERAL(4, 29, 21), // "friendRequestReceived"
QT_MOC_LITERAL(5, 51, 6), // "userId"
QT_MOC_LITERAL(6, 58, 7), // "message"
QT_MOC_LITERAL(7, 66, 21), // "friendMessageReceived"
QT_MOC_LITERAL(8, 88, 8), // "uint32_t"
QT_MOC_LITERAL(9, 97, 8), // "friendId"
QT_MOC_LITERAL(10, 106, 8), // "isAction"
QT_MOC_LITERAL(11, 115, 11), // "friendAdded"
QT_MOC_LITERAL(12, 127, 17), // "friendshipChanged"
QT_MOC_LITERAL(13, 145, 19), // "friendStatusChanged"
QT_MOC_LITERAL(14, 165, 6), // "Status"
QT_MOC_LITERAL(15, 172, 6), // "status"
QT_MOC_LITERAL(16, 179, 26), // "friendStatusMessageChanged"
QT_MOC_LITERAL(17, 206, 21), // "friendUsernameChanged"
QT_MOC_LITERAL(18, 228, 8), // "username"
QT_MOC_LITERAL(19, 237, 19), // "friendTypingChanged"
QT_MOC_LITERAL(20, 257, 8), // "isTyping"
QT_MOC_LITERAL(21, 266, 19), // "friendAvatarChanged"
QT_MOC_LITERAL(22, 286, 3), // "pic"
QT_MOC_LITERAL(23, 290, 19), // "friendAvatarRemoved"
QT_MOC_LITERAL(24, 310, 13), // "friendRemoved"
QT_MOC_LITERAL(25, 324, 21), // "friendLastSeenChanged"
QT_MOC_LITERAL(26, 346, 8), // "dateTime"
QT_MOC_LITERAL(27, 355, 17), // "emptyGroupCreated"
QT_MOC_LITERAL(28, 373, 11), // "groupnumber"
QT_MOC_LITERAL(29, 385, 19), // "groupInviteReceived"
QT_MOC_LITERAL(30, 405, 7), // "uint8_t"
QT_MOC_LITERAL(31, 413, 4), // "type"
QT_MOC_LITERAL(32, 418, 9), // "publicKey"
QT_MOC_LITERAL(33, 428, 20), // "groupMessageReceived"
QT_MOC_LITERAL(34, 449, 10), // "peernumber"
QT_MOC_LITERAL(35, 460, 20), // "groupNamelistChanged"
QT_MOC_LITERAL(36, 481, 6), // "change"
QT_MOC_LITERAL(37, 488, 17), // "groupTitleChanged"
QT_MOC_LITERAL(38, 506, 6), // "author"
QT_MOC_LITERAL(39, 513, 5), // "title"
QT_MOC_LITERAL(40, 519, 21), // "groupPeerAudioPlaying"
QT_MOC_LITERAL(41, 541, 11), // "usernameSet"
QT_MOC_LITERAL(42, 553, 16), // "statusMessageSet"
QT_MOC_LITERAL(43, 570, 9), // "statusSet"
QT_MOC_LITERAL(44, 580, 5), // "idSet"
QT_MOC_LITERAL(45, 586, 2), // "id"
QT_MOC_LITERAL(46, 589, 17), // "selfAvatarChanged"
QT_MOC_LITERAL(47, 607, 17), // "messageSentResult"
QT_MOC_LITERAL(48, 625, 9), // "messageId"
QT_MOC_LITERAL(49, 635, 15), // "groupSentResult"
QT_MOC_LITERAL(50, 651, 7), // "groupId"
QT_MOC_LITERAL(51, 659, 6), // "result"
QT_MOC_LITERAL(52, 666, 16), // "actionSentResult"
QT_MOC_LITERAL(53, 683, 6), // "action"
QT_MOC_LITERAL(54, 690, 7), // "success"
QT_MOC_LITERAL(55, 698, 15), // "receiptRecieved"
QT_MOC_LITERAL(56, 714, 7), // "friedId"
QT_MOC_LITERAL(57, 722, 7), // "receipt"
QT_MOC_LITERAL(58, 730, 17), // "failedToAddFriend"
QT_MOC_LITERAL(59, 748, 9), // "errorInfo"
QT_MOC_LITERAL(60, 758, 20), // "failedToRemoveFriend"
QT_MOC_LITERAL(61, 779, 19), // "failedToSetUsername"
QT_MOC_LITERAL(62, 799, 24), // "failedToSetStatusMessage"
QT_MOC_LITERAL(63, 824, 17), // "failedToSetStatus"
QT_MOC_LITERAL(64, 842, 17), // "failedToSetTyping"
QT_MOC_LITERAL(65, 860, 6), // "typing"
QT_MOC_LITERAL(66, 867, 13), // "failedToStart"
QT_MOC_LITERAL(67, 881, 8), // "badProxy"
QT_MOC_LITERAL(68, 890, 15), // "fileSendStarted"
QT_MOC_LITERAL(69, 906, 7), // "ToxFile"
QT_MOC_LITERAL(70, 914, 4), // "file"
QT_MOC_LITERAL(71, 919, 20), // "fileReceiveRequested"
QT_MOC_LITERAL(72, 940, 20), // "fileTransferAccepted"
QT_MOC_LITERAL(73, 961, 21), // "fileTransferCancelled"
QT_MOC_LITERAL(74, 983, 20), // "fileTransferFinished"
QT_MOC_LITERAL(75, 1004, 18), // "fileUploadFinished"
QT_MOC_LITERAL(76, 1023, 4), // "path"
QT_MOC_LITERAL(77, 1028, 20), // "fileDownloadFinished"
QT_MOC_LITERAL(78, 1049, 18), // "fileTransferPaused"
QT_MOC_LITERAL(79, 1068, 16), // "fileTransferInfo"
QT_MOC_LITERAL(80, 1085, 32), // "fileTransferRemotePausedUnpaused"
QT_MOC_LITERAL(81, 1118, 6), // "paused"
QT_MOC_LITERAL(82, 1125, 26), // "fileTransferBrokenUnbroken"
QT_MOC_LITERAL(83, 1152, 6), // "broken"
QT_MOC_LITERAL(84, 1159, 14), // "fileSendFailed"
QT_MOC_LITERAL(85, 1174, 5), // "fname"
QT_MOC_LITERAL(86, 1180, 8), // "avInvite"
QT_MOC_LITERAL(87, 1189, 9), // "callIndex"
QT_MOC_LITERAL(88, 1199, 5), // "video"
QT_MOC_LITERAL(89, 1205, 7), // "avStart"
QT_MOC_LITERAL(90, 1213, 8), // "avCancel"
QT_MOC_LITERAL(91, 1222, 5), // "avEnd"
QT_MOC_LITERAL(92, 1228, 9), // "avRinging"
QT_MOC_LITERAL(93, 1238, 10), // "avStarting"
QT_MOC_LITERAL(94, 1249, 8), // "avEnding"
QT_MOC_LITERAL(95, 1258, 16), // "avRequestTimeout"
QT_MOC_LITERAL(96, 1275, 13), // "avPeerTimeout"
QT_MOC_LITERAL(97, 1289, 13), // "avMediaChange"
QT_MOC_LITERAL(98, 1303, 12), // "videoEnabled"
QT_MOC_LITERAL(99, 1316, 12), // "avCallFailed"
QT_MOC_LITERAL(100, 1329, 10), // "avRejected"
QT_MOC_LITERAL(101, 1340, 18), // "videoFrameReceived"
QT_MOC_LITERAL(102, 1359, 10), // "vpx_image*"
QT_MOC_LITERAL(103, 1370, 5), // "frame"
QT_MOC_LITERAL(104, 1376, 5), // "start"
QT_MOC_LITERAL(105, 1382, 5), // "reset"
QT_MOC_LITERAL(106, 1388, 7), // "process"
QT_MOC_LITERAL(107, 1396, 12), // "bootstrapDht"
QT_MOC_LITERAL(108, 1409, 14), // "getToxSaveData"
QT_MOC_LITERAL(109, 1424, 19), // "acceptFriendRequest"
QT_MOC_LITERAL(110, 1444, 17), // "requestFriendship"
QT_MOC_LITERAL(111, 1462, 13), // "friendAddress"
QT_MOC_LITERAL(112, 1476, 17), // "groupInviteFriend"
QT_MOC_LITERAL(113, 1494, 11), // "createGroup"
QT_MOC_LITERAL(114, 1506, 12), // "removeFriend"
QT_MOC_LITERAL(115, 1519, 4), // "fake"
QT_MOC_LITERAL(116, 1524, 11), // "removeGroup"
QT_MOC_LITERAL(117, 1536, 9), // "setStatus"
QT_MOC_LITERAL(118, 1546, 11), // "setUsername"
QT_MOC_LITERAL(119, 1558, 16), // "setStatusMessage"
QT_MOC_LITERAL(120, 1575, 9), // "setAvatar"
QT_MOC_LITERAL(121, 1585, 4), // "data"
QT_MOC_LITERAL(122, 1590, 11), // "sendMessage"
QT_MOC_LITERAL(123, 1602, 16), // "sendGroupMessage"
QT_MOC_LITERAL(124, 1619, 15), // "sendGroupAction"
QT_MOC_LITERAL(125, 1635, 16), // "changeGroupTitle"
QT_MOC_LITERAL(126, 1652, 10), // "sendAction"
QT_MOC_LITERAL(127, 1663, 10), // "sendTyping"
QT_MOC_LITERAL(128, 1674, 8), // "sendFile"
QT_MOC_LITERAL(129, 1683, 8), // "Filename"
QT_MOC_LITERAL(130, 1692, 8), // "FilePath"
QT_MOC_LITERAL(131, 1701, 8), // "filesize"
QT_MOC_LITERAL(132, 1710, 14), // "sendAvatarFile"
QT_MOC_LITERAL(133, 1725, 14), // "cancelFileSend"
QT_MOC_LITERAL(134, 1740, 7), // "fileNum"
QT_MOC_LITERAL(135, 1748, 14), // "cancelFileRecv"
QT_MOC_LITERAL(136, 1763, 21), // "rejectFileRecvRequest"
QT_MOC_LITERAL(137, 1785, 21), // "acceptFileRecvRequest"
QT_MOC_LITERAL(138, 1807, 19), // "pauseResumeFileSend"
QT_MOC_LITERAL(139, 1827, 19), // "pauseResumeFileRecv"
QT_MOC_LITERAL(140, 1847, 10), // "answerCall"
QT_MOC_LITERAL(141, 1858, 6), // "callId"
QT_MOC_LITERAL(142, 1865, 10), // "rejectCall"
QT_MOC_LITERAL(143, 1876, 10), // "hangupCall"
QT_MOC_LITERAL(144, 1887, 9), // "startCall"
QT_MOC_LITERAL(145, 1897, 10), // "cancelCall"
QT_MOC_LITERAL(146, 1908, 13), // "micMuteToggle"
QT_MOC_LITERAL(147, 1922, 13), // "volMuteToggle"
QT_MOC_LITERAL(148, 1936, 9), // "setNospam"
QT_MOC_LITERAL(149, 1946, 6), // "nospam"
QT_MOC_LITERAL(150, 1953, 16), // "isGroupAvEnabled"
QT_MOC_LITERAL(151, 1970, 13), // "joinGroupCall"
QT_MOC_LITERAL(152, 1984, 14), // "leaveGroupCall"
QT_MOC_LITERAL(153, 1999, 19), // "disableGroupCallMic"
QT_MOC_LITERAL(154, 2019, 19), // "disableGroupCallVol"
QT_MOC_LITERAL(155, 2039, 18), // "enableGroupCallMic"
QT_MOC_LITERAL(156, 2058, 18), // "enableGroupCallVol"
QT_MOC_LITERAL(157, 2077, 21), // "isGroupCallMicEnabled"
QT_MOC_LITERAL(158, 2099, 21), // "isGroupCallVolEnabled"
QT_MOC_LITERAL(159, 2121, 10), // "killTimers"
QT_MOC_LITERAL(160, 2132, 8) // "onlyStop"

    },
    "Core\0connected\0\0disconnected\0"
    "friendRequestReceived\0userId\0message\0"
    "friendMessageReceived\0uint32_t\0friendId\0"
    "isAction\0friendAdded\0friendshipChanged\0"
    "friendStatusChanged\0Status\0status\0"
    "friendStatusMessageChanged\0"
    "friendUsernameChanged\0username\0"
    "friendTypingChanged\0isTyping\0"
    "friendAvatarChanged\0pic\0friendAvatarRemoved\0"
    "friendRemoved\0friendLastSeenChanged\0"
    "dateTime\0emptyGroupCreated\0groupnumber\0"
    "groupInviteReceived\0uint8_t\0type\0"
    "publicKey\0groupMessageReceived\0"
    "peernumber\0groupNamelistChanged\0change\0"
    "groupTitleChanged\0author\0title\0"
    "groupPeerAudioPlaying\0usernameSet\0"
    "statusMessageSet\0statusSet\0idSet\0id\0"
    "selfAvatarChanged\0messageSentResult\0"
    "messageId\0groupSentResult\0groupId\0"
    "result\0actionSentResult\0action\0success\0"
    "receiptRecieved\0friedId\0receipt\0"
    "failedToAddFriend\0errorInfo\0"
    "failedToRemoveFriend\0failedToSetUsername\0"
    "failedToSetStatusMessage\0failedToSetStatus\0"
    "failedToSetTyping\0typing\0failedToStart\0"
    "badProxy\0fileSendStarted\0ToxFile\0file\0"
    "fileReceiveRequested\0fileTransferAccepted\0"
    "fileTransferCancelled\0fileTransferFinished\0"
    "fileUploadFinished\0path\0fileDownloadFinished\0"
    "fileTransferPaused\0fileTransferInfo\0"
    "fileTransferRemotePausedUnpaused\0"
    "paused\0fileTransferBrokenUnbroken\0"
    "broken\0fileSendFailed\0fname\0avInvite\0"
    "callIndex\0video\0avStart\0avCancel\0avEnd\0"
    "avRinging\0avStarting\0avEnding\0"
    "avRequestTimeout\0avPeerTimeout\0"
    "avMediaChange\0videoEnabled\0avCallFailed\0"
    "avRejected\0videoFrameReceived\0vpx_image*\0"
    "frame\0start\0reset\0process\0bootstrapDht\0"
    "getToxSaveData\0acceptFriendRequest\0"
    "requestFriendship\0friendAddress\0"
    "groupInviteFriend\0createGroup\0"
    "removeFriend\0fake\0removeGroup\0setStatus\0"
    "setUsername\0setStatusMessage\0setAvatar\0"
    "data\0sendMessage\0sendGroupMessage\0"
    "sendGroupAction\0changeGroupTitle\0"
    "sendAction\0sendTyping\0sendFile\0Filename\0"
    "FilePath\0filesize\0sendAvatarFile\0"
    "cancelFileSend\0fileNum\0cancelFileRecv\0"
    "rejectFileRecvRequest\0acceptFileRecvRequest\0"
    "pauseResumeFileSend\0pauseResumeFileRecv\0"
    "answerCall\0callId\0rejectCall\0hangupCall\0"
    "startCall\0cancelCall\0micMuteToggle\0"
    "volMuteToggle\0setNospam\0nospam\0"
    "isGroupAvEnabled\0joinGroupCall\0"
    "leaveGroupCall\0disableGroupCallMic\0"
    "disableGroupCallVol\0enableGroupCallMic\0"
    "enableGroupCallVol\0isGroupCallMicEnabled\0"
    "isGroupCallVolEnabled\0killTimers\0"
    "onlyStop"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Core[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
     114,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      63,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  584,    2, 0x06 /* Public */,
       3,    0,  585,    2, 0x06 /* Public */,
       4,    2,  586,    2, 0x06 /* Public */,
       7,    3,  591,    2, 0x06 /* Public */,
      11,    2,  598,    2, 0x06 /* Public */,
      12,    1,  603,    2, 0x06 /* Public */,
      13,    2,  606,    2, 0x06 /* Public */,
      16,    2,  611,    2, 0x06 /* Public */,
      17,    2,  616,    2, 0x06 /* Public */,
      19,    2,  621,    2, 0x06 /* Public */,
      21,    2,  626,    2, 0x06 /* Public */,
      23,    1,  631,    2, 0x06 /* Public */,
      24,    1,  634,    2, 0x06 /* Public */,
      25,    2,  637,    2, 0x06 /* Public */,
      27,    1,  642,    2, 0x06 /* Public */,
      29,    3,  645,    2, 0x06 /* Public */,
      33,    4,  652,    2, 0x06 /* Public */,
      35,    3,  661,    2, 0x06 /* Public */,
      37,    3,  668,    2, 0x06 /* Public */,
      40,    2,  675,    2, 0x06 /* Public */,
      41,    1,  680,    2, 0x06 /* Public */,
      42,    1,  683,    2, 0x06 /* Public */,
      43,    1,  686,    2, 0x06 /* Public */,
      44,    1,  689,    2, 0x06 /* Public */,
      46,    1,  692,    2, 0x06 /* Public */,
      47,    3,  695,    2, 0x06 /* Public */,
      49,    3,  702,    2, 0x06 /* Public */,
      52,    3,  709,    2, 0x06 /* Public */,
      55,    2,  716,    2, 0x06 /* Public */,
      58,    2,  721,    2, 0x06 /* Public */,
      58,    1,  726,    2, 0x26 /* Public | MethodCloned */,
      60,    1,  729,    2, 0x06 /* Public */,
      61,    1,  732,    2, 0x06 /* Public */,
      62,    1,  735,    2, 0x06 /* Public */,
      63,    1,  738,    2, 0x06 /* Public */,
      64,    1,  741,    2, 0x06 /* Public */,
      66,    0,  744,    2, 0x06 /* Public */,
      67,    0,  745,    2, 0x06 /* Public */,
      68,    1,  746,    2, 0x06 /* Public */,
      71,    1,  749,    2, 0x06 /* Public */,
      72,    1,  752,    2, 0x06 /* Public */,
      73,    1,  755,    2, 0x06 /* Public */,
      74,    1,  758,    2, 0x06 /* Public */,
      75,    1,  761,    2, 0x06 /* Public */,
      77,    1,  764,    2, 0x06 /* Public */,
      78,    1,  767,    2, 0x06 /* Public */,
      79,    1,  770,    2, 0x06 /* Public */,
      80,    2,  773,    2, 0x06 /* Public */,
      82,    2,  778,    2, 0x06 /* Public */,
      84,    2,  783,    2, 0x06 /* Public */,
      86,    3,  788,    2, 0x06 /* Public */,
      89,    3,  795,    2, 0x06 /* Public */,
      90,    2,  802,    2, 0x06 /* Public */,
      91,    2,  807,    2, 0x06 /* Public */,
      92,    3,  812,    2, 0x06 /* Public */,
      93,    3,  819,    2, 0x06 /* Public */,
      94,    2,  826,    2, 0x06 /* Public */,
      95,    2,  831,    2, 0x06 /* Public */,
      96,    2,  836,    2, 0x06 /* Public */,
      97,    3,  841,    2, 0x06 /* Public */,
      99,    1,  848,    2, 0x06 /* Public */,
     100,    2,  851,    2, 0x06 /* Public */,
     101,    1,  856,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
     104,    0,  859,    2, 0x0a /* Public */,
     105,    0,  860,    2, 0x0a /* Public */,
     106,    0,  861,    2, 0x0a /* Public */,
     107,    0,  862,    2, 0x0a /* Public */,
     108,    0,  863,    2, 0x0a /* Public */,
     109,    1,  864,    2, 0x0a /* Public */,
     110,    2,  867,    2, 0x0a /* Public */,
     112,    2,  872,    2, 0x0a /* Public */,
     113,    1,  877,    2, 0x0a /* Public */,
     113,    0,  880,    2, 0x2a /* Public | MethodCloned */,
     114,    2,  881,    2, 0x0a /* Public */,
     114,    1,  886,    2, 0x2a /* Public | MethodCloned */,
     116,    2,  889,    2, 0x0a /* Public */,
     116,    1,  894,    2, 0x2a /* Public | MethodCloned */,
     117,    1,  897,    2, 0x0a /* Public */,
     118,    1,  900,    2, 0x0a /* Public */,
     119,    1,  903,    2, 0x0a /* Public */,
     120,    1,  906,    2, 0x0a /* Public */,
     122,    2,  909,    2, 0x0a /* Public */,
     123,    2,  914,    2, 0x0a /* Public */,
     124,    2,  919,    2, 0x0a /* Public */,
     125,    2,  924,    2, 0x0a /* Public */,
     126,    2,  929,    2, 0x0a /* Public */,
     127,    2,  934,    2, 0x0a /* Public */,
     128,    4,  939,    2, 0x0a /* Public */,
     132,    2,  948,    2, 0x0a /* Public */,
     133,    2,  953,    2, 0x0a /* Public */,
     135,    2,  958,    2, 0x0a /* Public */,
     136,    2,  963,    2, 0x0a /* Public */,
     137,    3,  968,    2, 0x0a /* Public */,
     138,    2,  975,    2, 0x0a /* Public */,
     139,    2,  980,    2, 0x0a /* Public */,
     140,    1,  985,    2, 0x0a /* Public */,
     142,    1,  988,    2, 0x0a /* Public */,
     143,    1,  991,    2, 0x0a /* Public */,
     144,    2,  994,    2, 0x0a /* Public */,
     144,    1,  999,    2, 0x2a /* Public | MethodCloned */,
     145,    2, 1002,    2, 0x0a /* Public */,
     146,    1, 1007,    2, 0x0a /* Public */,
     147,    1, 1010,    2, 0x0a /* Public */,
     148,    1, 1013,    2, 0x0a /* Public */,
     150,    1, 1016,    2, 0x0a /* Public */,
     151,    1, 1019,    2, 0x0a /* Public */,
     152,    1, 1022,    2, 0x0a /* Public */,
     153,    1, 1025,    2, 0x0a /* Public */,
     154,    1, 1028,    2, 0x0a /* Public */,
     155,    1, 1031,    2, 0x0a /* Public */,
     156,    1, 1034,    2, 0x0a /* Public */,
     157,    1, 1037,    2, 0x0a /* Public */,
     158,    1, 1040,    2, 0x0a /* Public */,
     159,    1, 1043,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    5,    6,
    QMetaType::Void, 0x80000000 | 8, QMetaType::QString, QMetaType::Bool,    9,    6,   10,
    QMetaType::Void, 0x80000000 | 8, QMetaType::QString,    9,    5,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 14,    9,   15,
    QMetaType::Void, 0x80000000 | 8, QMetaType::QString,    9,    6,
    QMetaType::Void, 0x80000000 | 8, QMetaType::QString,    9,   18,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Bool,    9,   20,
    QMetaType::Void, 0x80000000 | 8, QMetaType::QPixmap,    9,   22,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8, QMetaType::QDateTime,    9,   26,
    QMetaType::Void, QMetaType::Int,   28,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 30, QMetaType::QByteArray,    9,   31,   32,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::Bool,   28,   34,    6,   10,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, 0x80000000 | 30,   28,   34,   36,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString,   28,   38,   39,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   28,   34,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, QMetaType::QString,   45,
    QMetaType::Void, QMetaType::QPixmap,   22,
    QMetaType::Void, 0x80000000 | 8, QMetaType::QString, QMetaType::Int,    9,    6,   48,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::Int,   50,    6,   51,
    QMetaType::Void, 0x80000000 | 8, QMetaType::QString, QMetaType::Int,    9,   53,   54,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   56,   57,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    5,   59,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, QMetaType::Bool,   65,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 69,   70,
    QMetaType::Void, 0x80000000 | 69,   70,
    QMetaType::Void, 0x80000000 | 69,   70,
    QMetaType::Void, 0x80000000 | 69,   70,
    QMetaType::Void, 0x80000000 | 69,   70,
    QMetaType::Void, QMetaType::QString,   76,
    QMetaType::Void, QMetaType::QString,   76,
    QMetaType::Void, 0x80000000 | 69,   70,
    QMetaType::Void, 0x80000000 | 69,   70,
    QMetaType::Void, 0x80000000 | 69, QMetaType::Bool,   70,   81,
    QMetaType::Void, 0x80000000 | 69, QMetaType::Bool,   70,   83,
    QMetaType::Void, 0x80000000 | 8, QMetaType::QString,    9,   85,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Int, QMetaType::Bool,    9,   87,   88,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Int, QMetaType::Bool,    9,   87,   88,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Int,    9,   87,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Int,    9,   87,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Int, QMetaType::Bool,    9,   87,   88,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Int, QMetaType::Bool,    9,   87,   88,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Int,    9,   87,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Int,    9,   87,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Int,    9,   87,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Int, QMetaType::Bool,    9,   87,   98,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Int,    9,   87,
    QMetaType::Void, 0x80000000 | 102,  103,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QByteArray,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,  111,    6,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Int,    9,   50,
    QMetaType::Void, 0x80000000 | 30,   31,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Bool,    9,  115,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   50,  115,
    QMetaType::Void, QMetaType::Int,   50,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QByteArray,  121,
    QMetaType::Int, 0x80000000 | 8, QMetaType::QString,    9,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   50,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   50,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   50,   39,
    QMetaType::Int, 0x80000000 | 8, QMetaType::QString,    9,   53,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Bool,    9,   65,
    QMetaType::Void, 0x80000000 | 8, QMetaType::QString, QMetaType::QString, QMetaType::LongLong,    9,  129,  130,  131,
    QMetaType::Void, 0x80000000 | 8, QMetaType::QByteArray,    9,  121,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 8,    9,  134,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 8,    9,  134,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 8,    9,  134,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 8, QMetaType::QString,    9,  134,   76,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 8,    9,  134,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 8,    9,  134,
    QMetaType::Void, QMetaType::Int,  141,
    QMetaType::Void, QMetaType::Int,  141,
    QMetaType::Void, QMetaType::Int,  141,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Bool,    9,   88,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 8,  141,    9,
    QMetaType::Void, QMetaType::Int,  141,
    QMetaType::Void, QMetaType::Int,  141,
    QMetaType::Void, 0x80000000 | 8,  149,
    QMetaType::Bool, QMetaType::Int,   50,
    QMetaType::Void, QMetaType::Int,   50,
    QMetaType::Void, QMetaType::Int,   50,
    QMetaType::Void, QMetaType::Int,   50,
    QMetaType::Void, QMetaType::Int,   50,
    QMetaType::Void, QMetaType::Int,   50,
    QMetaType::Void, QMetaType::Int,   50,
    QMetaType::Bool, QMetaType::Int,   50,
    QMetaType::Bool, QMetaType::Int,   50,
    QMetaType::Void, QMetaType::Bool,  160,

       0        // eod
};

void Core::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Core *_t = static_cast<Core *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->connected(); break;
        case 1: _t->disconnected(); break;
        case 2: _t->friendRequestReceived((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->friendMessageReceived((*reinterpret_cast< uint32_t(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 4: _t->friendAdded((*reinterpret_cast< uint32_t(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 5: _t->friendshipChanged((*reinterpret_cast< uint32_t(*)>(_a[1]))); break;
        case 6: _t->friendStatusChanged((*reinterpret_cast< uint32_t(*)>(_a[1])),(*reinterpret_cast< Status(*)>(_a[2]))); break;
        case 7: _t->friendStatusMessageChanged((*reinterpret_cast< uint32_t(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 8: _t->friendUsernameChanged((*reinterpret_cast< uint32_t(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 9: _t->friendTypingChanged((*reinterpret_cast< uint32_t(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 10: _t->friendAvatarChanged((*reinterpret_cast< uint32_t(*)>(_a[1])),(*reinterpret_cast< const QPixmap(*)>(_a[2]))); break;
        case 11: _t->friendAvatarRemoved((*reinterpret_cast< uint32_t(*)>(_a[1]))); break;
        case 12: _t->friendRemoved((*reinterpret_cast< uint32_t(*)>(_a[1]))); break;
        case 13: _t->friendLastSeenChanged((*reinterpret_cast< uint32_t(*)>(_a[1])),(*reinterpret_cast< const QDateTime(*)>(_a[2]))); break;
        case 14: _t->emptyGroupCreated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->groupInviteReceived((*reinterpret_cast< uint32_t(*)>(_a[1])),(*reinterpret_cast< uint8_t(*)>(_a[2])),(*reinterpret_cast< QByteArray(*)>(_a[3]))); break;
        case 16: _t->groupMessageReceived((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 17: _t->groupNamelistChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< uint8_t(*)>(_a[3]))); break;
        case 18: _t->groupTitleChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 19: _t->groupPeerAudioPlaying((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 20: _t->usernameSet((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 21: _t->statusMessageSet((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 22: _t->statusSet((*reinterpret_cast< Status(*)>(_a[1]))); break;
        case 23: _t->idSet((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 24: _t->selfAvatarChanged((*reinterpret_cast< const QPixmap(*)>(_a[1]))); break;
        case 25: _t->messageSentResult((*reinterpret_cast< uint32_t(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 26: _t->groupSentResult((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 27: _t->actionSentResult((*reinterpret_cast< uint32_t(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 28: _t->receiptRecieved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 29: _t->failedToAddFriend((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 30: _t->failedToAddFriend((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 31: _t->failedToRemoveFriend((*reinterpret_cast< uint32_t(*)>(_a[1]))); break;
        case 32: _t->failedToSetUsername((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 33: _t->failedToSetStatusMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 34: _t->failedToSetStatus((*reinterpret_cast< Status(*)>(_a[1]))); break;
        case 35: _t->failedToSetTyping((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 36: _t->failedToStart(); break;
        case 37: _t->badProxy(); break;
        case 38: _t->fileSendStarted((*reinterpret_cast< ToxFile(*)>(_a[1]))); break;
        case 39: _t->fileReceiveRequested((*reinterpret_cast< ToxFile(*)>(_a[1]))); break;
        case 40: _t->fileTransferAccepted((*reinterpret_cast< ToxFile(*)>(_a[1]))); break;
        case 41: _t->fileTransferCancelled((*reinterpret_cast< ToxFile(*)>(_a[1]))); break;
        case 42: _t->fileTransferFinished((*reinterpret_cast< ToxFile(*)>(_a[1]))); break;
        case 43: _t->fileUploadFinished((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 44: _t->fileDownloadFinished((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 45: _t->fileTransferPaused((*reinterpret_cast< ToxFile(*)>(_a[1]))); break;
        case 46: _t->fileTransferInfo((*reinterpret_cast< ToxFile(*)>(_a[1]))); break;
        case 47: _t->fileTransferRemotePausedUnpaused((*reinterpret_cast< ToxFile(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 48: _t->fileTransferBrokenUnbroken((*reinterpret_cast< ToxFile(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 49: _t->fileSendFailed((*reinterpret_cast< uint32_t(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 50: _t->avInvite((*reinterpret_cast< uint32_t(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 51: _t->avStart((*reinterpret_cast< uint32_t(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 52: _t->avCancel((*reinterpret_cast< uint32_t(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 53: _t->avEnd((*reinterpret_cast< uint32_t(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 54: _t->avRinging((*reinterpret_cast< uint32_t(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 55: _t->avStarting((*reinterpret_cast< uint32_t(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 56: _t->avEnding((*reinterpret_cast< uint32_t(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 57: _t->avRequestTimeout((*reinterpret_cast< uint32_t(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 58: _t->avPeerTimeout((*reinterpret_cast< uint32_t(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 59: _t->avMediaChange((*reinterpret_cast< uint32_t(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 60: _t->avCallFailed((*reinterpret_cast< uint32_t(*)>(_a[1]))); break;
        case 61: _t->avRejected((*reinterpret_cast< uint32_t(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 62: _t->videoFrameReceived((*reinterpret_cast< vpx_image*(*)>(_a[1]))); break;
        case 63: _t->start(); break;
        case 64: _t->reset(); break;
        case 65: _t->process(); break;
        case 66: _t->bootstrapDht(); break;
        case 67: { QByteArray _r = _t->getToxSaveData();
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 68: _t->acceptFriendRequest((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 69: _t->requestFriendship((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 70: _t->groupInviteFriend((*reinterpret_cast< uint32_t(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 71: _t->createGroup((*reinterpret_cast< uint8_t(*)>(_a[1]))); break;
        case 72: _t->createGroup(); break;
        case 73: _t->removeFriend((*reinterpret_cast< uint32_t(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 74: _t->removeFriend((*reinterpret_cast< uint32_t(*)>(_a[1]))); break;
        case 75: _t->removeGroup((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 76: _t->removeGroup((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 77: _t->setStatus((*reinterpret_cast< Status(*)>(_a[1]))); break;
        case 78: _t->setUsername((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 79: _t->setStatusMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 80: _t->setAvatar((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 81: { int _r = _t->sendMessage((*reinterpret_cast< uint32_t(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 82: _t->sendGroupMessage((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 83: _t->sendGroupAction((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 84: _t->changeGroupTitle((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 85: { int _r = _t->sendAction((*reinterpret_cast< uint32_t(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 86: _t->sendTyping((*reinterpret_cast< uint32_t(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 87: _t->sendFile((*reinterpret_cast< uint32_t(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< long long(*)>(_a[4]))); break;
        case 88: _t->sendAvatarFile((*reinterpret_cast< uint32_t(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 89: _t->cancelFileSend((*reinterpret_cast< uint32_t(*)>(_a[1])),(*reinterpret_cast< uint32_t(*)>(_a[2]))); break;
        case 90: _t->cancelFileRecv((*reinterpret_cast< uint32_t(*)>(_a[1])),(*reinterpret_cast< uint32_t(*)>(_a[2]))); break;
        case 91: _t->rejectFileRecvRequest((*reinterpret_cast< uint32_t(*)>(_a[1])),(*reinterpret_cast< uint32_t(*)>(_a[2]))); break;
        case 92: _t->acceptFileRecvRequest((*reinterpret_cast< uint32_t(*)>(_a[1])),(*reinterpret_cast< uint32_t(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 93: _t->pauseResumeFileSend((*reinterpret_cast< uint32_t(*)>(_a[1])),(*reinterpret_cast< uint32_t(*)>(_a[2]))); break;
        case 94: _t->pauseResumeFileRecv((*reinterpret_cast< uint32_t(*)>(_a[1])),(*reinterpret_cast< uint32_t(*)>(_a[2]))); break;
        case 95: _t->answerCall((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 96: _t->rejectCall((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 97: _t->hangupCall((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 98: _t->startCall((*reinterpret_cast< uint32_t(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 99: _t->startCall((*reinterpret_cast< uint32_t(*)>(_a[1]))); break;
        case 100: _t->cancelCall((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< uint32_t(*)>(_a[2]))); break;
        case 101: _t->micMuteToggle((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 102: _t->volMuteToggle((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 103: _t->setNospam((*reinterpret_cast< uint32_t(*)>(_a[1]))); break;
        case 104: { bool _r = _t->isGroupAvEnabled((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 105: _t->joinGroupCall((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 106: _t->leaveGroupCall((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 107: _t->disableGroupCallMic((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 108: _t->disableGroupCallVol((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 109: _t->enableGroupCallMic((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 110: _t->enableGroupCallVol((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 111: { bool _r = _t->isGroupCallMicEnabled((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 112: { bool _r = _t->isGroupCallVolEnabled((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 113: _t->killTimers((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Core::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Core::connected)) {
                *result = 0;
            }
        }
        {
            typedef void (Core::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Core::disconnected)) {
                *result = 1;
            }
        }
        {
            typedef void (Core::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Core::friendRequestReceived)) {
                *result = 2;
            }
        }
        {
            typedef void (Core::*_t)(uint32_t , const QString & , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Core::friendMessageReceived)) {
                *result = 3;
            }
        }
        {
            typedef void (Core::*_t)(uint32_t , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Core::friendAdded)) {
                *result = 4;
            }
        }
        {
            typedef void (Core::*_t)(uint32_t );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Core::friendshipChanged)) {
                *result = 5;
            }
        }
        {
            typedef void (Core::*_t)(uint32_t , Status );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Core::friendStatusChanged)) {
                *result = 6;
            }
        }
        {
            typedef void (Core::*_t)(uint32_t , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Core::friendStatusMessageChanged)) {
                *result = 7;
            }
        }
        {
            typedef void (Core::*_t)(uint32_t , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Core::friendUsernameChanged)) {
                *result = 8;
            }
        }
        {
            typedef void (Core::*_t)(uint32_t , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Core::friendTypingChanged)) {
                *result = 9;
            }
        }
        {
            typedef void (Core::*_t)(uint32_t , const QPixmap & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Core::friendAvatarChanged)) {
                *result = 10;
            }
        }
        {
            typedef void (Core::*_t)(uint32_t );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Core::friendAvatarRemoved)) {
                *result = 11;
            }
        }
        {
            typedef void (Core::*_t)(uint32_t );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Core::friendRemoved)) {
                *result = 12;
            }
        }
        {
            typedef void (Core::*_t)(uint32_t , const QDateTime & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Core::friendLastSeenChanged)) {
                *result = 13;
            }
        }
        {
            typedef void (Core::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Core::emptyGroupCreated)) {
                *result = 14;
            }
        }
        {
            typedef void (Core::*_t)(uint32_t , uint8_t , QByteArray );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Core::groupInviteReceived)) {
                *result = 15;
            }
        }
        {
            typedef void (Core::*_t)(int , int , const QString & , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Core::groupMessageReceived)) {
                *result = 16;
            }
        }
        {
            typedef void (Core::*_t)(int , int , uint8_t );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Core::groupNamelistChanged)) {
                *result = 17;
            }
        }
        {
            typedef void (Core::*_t)(int , const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Core::groupTitleChanged)) {
                *result = 18;
            }
        }
        {
            typedef void (Core::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Core::groupPeerAudioPlaying)) {
                *result = 19;
            }
        }
        {
            typedef void (Core::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Core::usernameSet)) {
                *result = 20;
            }
        }
        {
            typedef void (Core::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Core::statusMessageSet)) {
                *result = 21;
            }
        }
        {
            typedef void (Core::*_t)(Status );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Core::statusSet)) {
                *result = 22;
            }
        }
        {
            typedef void (Core::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Core::idSet)) {
                *result = 23;
            }
        }
        {
            typedef void (Core::*_t)(const QPixmap & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Core::selfAvatarChanged)) {
                *result = 24;
            }
        }
        {
            typedef void (Core::*_t)(uint32_t , const QString & , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Core::messageSentResult)) {
                *result = 25;
            }
        }
        {
            typedef void (Core::*_t)(int , const QString & , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Core::groupSentResult)) {
                *result = 26;
            }
        }
        {
            typedef void (Core::*_t)(uint32_t , const QString & , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Core::actionSentResult)) {
                *result = 27;
            }
        }
        {
            typedef void (Core::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Core::receiptRecieved)) {
                *result = 28;
            }
        }
        {
            typedef void (Core::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Core::failedToAddFriend)) {
                *result = 29;
            }
        }
        {
            typedef void (Core::*_t)(uint32_t );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Core::failedToRemoveFriend)) {
                *result = 31;
            }
        }
        {
            typedef void (Core::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Core::failedToSetUsername)) {
                *result = 32;
            }
        }
        {
            typedef void (Core::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Core::failedToSetStatusMessage)) {
                *result = 33;
            }
        }
        {
            typedef void (Core::*_t)(Status );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Core::failedToSetStatus)) {
                *result = 34;
            }
        }
        {
            typedef void (Core::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Core::failedToSetTyping)) {
                *result = 35;
            }
        }
        {
            typedef void (Core::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Core::failedToStart)) {
                *result = 36;
            }
        }
        {
            typedef void (Core::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Core::badProxy)) {
                *result = 37;
            }
        }
        {
            typedef void (Core::*_t)(ToxFile );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Core::fileSendStarted)) {
                *result = 38;
            }
        }
        {
            typedef void (Core::*_t)(ToxFile );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Core::fileReceiveRequested)) {
                *result = 39;
            }
        }
        {
            typedef void (Core::*_t)(ToxFile );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Core::fileTransferAccepted)) {
                *result = 40;
            }
        }
        {
            typedef void (Core::*_t)(ToxFile );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Core::fileTransferCancelled)) {
                *result = 41;
            }
        }
        {
            typedef void (Core::*_t)(ToxFile );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Core::fileTransferFinished)) {
                *result = 42;
            }
        }
        {
            typedef void (Core::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Core::fileUploadFinished)) {
                *result = 43;
            }
        }
        {
            typedef void (Core::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Core::fileDownloadFinished)) {
                *result = 44;
            }
        }
        {
            typedef void (Core::*_t)(ToxFile );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Core::fileTransferPaused)) {
                *result = 45;
            }
        }
        {
            typedef void (Core::*_t)(ToxFile );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Core::fileTransferInfo)) {
                *result = 46;
            }
        }
        {
            typedef void (Core::*_t)(ToxFile , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Core::fileTransferRemotePausedUnpaused)) {
                *result = 47;
            }
        }
        {
            typedef void (Core::*_t)(ToxFile , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Core::fileTransferBrokenUnbroken)) {
                *result = 48;
            }
        }
        {
            typedef void (Core::*_t)(uint32_t , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Core::fileSendFailed)) {
                *result = 49;
            }
        }
        {
            typedef void (Core::*_t)(uint32_t , int , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Core::avInvite)) {
                *result = 50;
            }
        }
        {
            typedef void (Core::*_t)(uint32_t , int , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Core::avStart)) {
                *result = 51;
            }
        }
        {
            typedef void (Core::*_t)(uint32_t , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Core::avCancel)) {
                *result = 52;
            }
        }
        {
            typedef void (Core::*_t)(uint32_t , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Core::avEnd)) {
                *result = 53;
            }
        }
        {
            typedef void (Core::*_t)(uint32_t , int , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Core::avRinging)) {
                *result = 54;
            }
        }
        {
            typedef void (Core::*_t)(uint32_t , int , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Core::avStarting)) {
                *result = 55;
            }
        }
        {
            typedef void (Core::*_t)(uint32_t , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Core::avEnding)) {
                *result = 56;
            }
        }
        {
            typedef void (Core::*_t)(uint32_t , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Core::avRequestTimeout)) {
                *result = 57;
            }
        }
        {
            typedef void (Core::*_t)(uint32_t , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Core::avPeerTimeout)) {
                *result = 58;
            }
        }
        {
            typedef void (Core::*_t)(uint32_t , int , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Core::avMediaChange)) {
                *result = 59;
            }
        }
        {
            typedef void (Core::*_t)(uint32_t );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Core::avCallFailed)) {
                *result = 60;
            }
        }
        {
            typedef void (Core::*_t)(uint32_t , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Core::avRejected)) {
                *result = 61;
            }
        }
        {
            typedef void (Core::*_t)(vpx_image * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Core::videoFrameReceived)) {
                *result = 62;
            }
        }
    }
}

const QMetaObject Core::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Core.data,
      qt_meta_data_Core,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Core::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Core::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Core.stringdata0))
        return static_cast<void*>(const_cast< Core*>(this));
    return QObject::qt_metacast(_clname);
}

int Core::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 114)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 114;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 114)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 114;
    }
    return _id;
}

// SIGNAL 0
void Core::connected()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void Core::disconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void Core::friendRequestReceived(const QString & _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Core::friendMessageReceived(uint32_t _t1, const QString & _t2, bool _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Core::friendAdded(uint32_t _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Core::friendshipChanged(uint32_t _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Core::friendStatusChanged(uint32_t _t1, Status _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Core::friendStatusMessageChanged(uint32_t _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Core::friendUsernameChanged(uint32_t _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void Core::friendTypingChanged(uint32_t _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void Core::friendAvatarChanged(uint32_t _t1, const QPixmap & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void Core::friendAvatarRemoved(uint32_t _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void Core::friendRemoved(uint32_t _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void Core::friendLastSeenChanged(uint32_t _t1, const QDateTime & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void Core::emptyGroupCreated(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void Core::groupInviteReceived(uint32_t _t1, uint8_t _t2, QByteArray _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void Core::groupMessageReceived(int _t1, int _t2, const QString & _t3, bool _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void Core::groupNamelistChanged(int _t1, int _t2, uint8_t _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void Core::groupTitleChanged(int _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void Core::groupPeerAudioPlaying(int _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void Core::usernameSet(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void Core::statusMessageSet(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void Core::statusSet(Status _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void Core::idSet(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void Core::selfAvatarChanged(const QPixmap & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void Core::messageSentResult(uint32_t _t1, const QString & _t2, int _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void Core::groupSentResult(int _t1, const QString & _t2, int _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void Core::actionSentResult(uint32_t _t1, const QString & _t2, int _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void Core::receiptRecieved(int _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void Core::failedToAddFriend(const QString & _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 31
void Core::failedToRemoveFriend(uint32_t _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
}

// SIGNAL 32
void Core::failedToSetUsername(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 32, _a);
}

// SIGNAL 33
void Core::failedToSetStatusMessage(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 33, _a);
}

// SIGNAL 34
void Core::failedToSetStatus(Status _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 34, _a);
}

// SIGNAL 35
void Core::failedToSetTyping(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 35, _a);
}

// SIGNAL 36
void Core::failedToStart()
{
    QMetaObject::activate(this, &staticMetaObject, 36, Q_NULLPTR);
}

// SIGNAL 37
void Core::badProxy()
{
    QMetaObject::activate(this, &staticMetaObject, 37, Q_NULLPTR);
}

// SIGNAL 38
void Core::fileSendStarted(ToxFile _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 38, _a);
}

// SIGNAL 39
void Core::fileReceiveRequested(ToxFile _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 39, _a);
}

// SIGNAL 40
void Core::fileTransferAccepted(ToxFile _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 40, _a);
}

// SIGNAL 41
void Core::fileTransferCancelled(ToxFile _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 41, _a);
}

// SIGNAL 42
void Core::fileTransferFinished(ToxFile _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 42, _a);
}

// SIGNAL 43
void Core::fileUploadFinished(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 43, _a);
}

// SIGNAL 44
void Core::fileDownloadFinished(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 44, _a);
}

// SIGNAL 45
void Core::fileTransferPaused(ToxFile _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 45, _a);
}

// SIGNAL 46
void Core::fileTransferInfo(ToxFile _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 46, _a);
}

// SIGNAL 47
void Core::fileTransferRemotePausedUnpaused(ToxFile _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 47, _a);
}

// SIGNAL 48
void Core::fileTransferBrokenUnbroken(ToxFile _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 48, _a);
}

// SIGNAL 49
void Core::fileSendFailed(uint32_t _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 49, _a);
}

// SIGNAL 50
void Core::avInvite(uint32_t _t1, int _t2, bool _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 50, _a);
}

// SIGNAL 51
void Core::avStart(uint32_t _t1, int _t2, bool _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 51, _a);
}

// SIGNAL 52
void Core::avCancel(uint32_t _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 52, _a);
}

// SIGNAL 53
void Core::avEnd(uint32_t _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 53, _a);
}

// SIGNAL 54
void Core::avRinging(uint32_t _t1, int _t2, bool _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 54, _a);
}

// SIGNAL 55
void Core::avStarting(uint32_t _t1, int _t2, bool _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 55, _a);
}

// SIGNAL 56
void Core::avEnding(uint32_t _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 56, _a);
}

// SIGNAL 57
void Core::avRequestTimeout(uint32_t _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 57, _a);
}

// SIGNAL 58
void Core::avPeerTimeout(uint32_t _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 58, _a);
}

// SIGNAL 59
void Core::avMediaChange(uint32_t _t1, int _t2, bool _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 59, _a);
}

// SIGNAL 60
void Core::avCallFailed(uint32_t _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 60, _a);
}

// SIGNAL 61
void Core::avRejected(uint32_t _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 61, _a);
}

// SIGNAL 62
void Core::videoFrameReceived(vpx_image * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 62, _a);
}
QT_END_MOC_NAMESPACE
