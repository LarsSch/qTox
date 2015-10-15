/********************************************************************************
** Form generated from reading UI file 'generalsettings.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GENERALSETTINGS_H
#define UI_GENERALSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "src/widget/form/settings/verticalonlyscroller.h"

QT_BEGIN_NAMESPACE

class Ui_GeneralSettings
{
public:
    QVBoxLayout *verticalLayout_2;
    VerticalOnlyScroller *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *generalGroup;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *generalLayout;
    QLabel *transLabel;
    QComboBox *transComboBox;
    QSpacerItem *generalSpacer;
    QGroupBox *trayGroup;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *trayOptionsLayout;
    QCheckBox *startInTray;
    QCheckBox *showSystemTray;
    QCheckBox *closeToTray;
    QCheckBox *lightTrayIcon;
    QCheckBox *minimizeToTray;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *autoAwayLayout;
    QLabel *autoAwayLabel;
    QSpinBox *autoAwaySpinBox;
    QVBoxLayout *startupLayout;
    QLabel *label_2;
    QCheckBox *cbAutorun;
    QCheckBox *checkUpdates;
    QFormLayout *formLayout_2;
    QPushButton *autoSaveFilesDir;
    QLabel *label;
    QCheckBox *autoacceptFiles;
    QGroupBox *chatGroupBox;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *newMessagesLayout;
    QGroupBox *newMessages;
    QVBoxLayout *verticalLayout_10;
    QCheckBox *notifySound;
    QCheckBox *showInFront;
    QCheckBox *showWindow;
    QCheckBox *statusChanges;
    QCheckBox *groupAlwaysNotify;
    QCheckBox *cbGroupchatPosition;
    QCheckBox *cbFauxOfflineMessaging;
    QCheckBox *cbCompactLayout;
    QGroupBox *themeGroup;
    QVBoxLayout *verticalLayout;
    QCheckBox *useEmoticons;
    QFormLayout *formLayout;
    QLabel *smileyPackLabel;
    QComboBox *smileyPackBrowser;
    QLabel *emoticonSizeLabel;
    QSpinBox *emoticonSize;
    QLabel *styleLabel;
    QComboBox *styleBrowser;
    QLabel *themeColorLabel;
    QComboBox *themeColorCBox;
    QLabel *timestampLabel;
    QComboBox *timestamp;
    QLabel *dateformatLabel;
    QComboBox *dateFormats;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QLabel *smile1;
    QLabel *smile2;
    QLabel *smile3;
    QLabel *smile4;
    QLabel *smile5;
    QGroupBox *connectionGroup;
    QVBoxLayout *verticalLayoutProxy;
    QHBoxLayout *coreProtocolLayout;
    QCheckBox *cbEnableUDP;
    QCheckBox *cbEnableIPv6;
    QSpacerItem *protocolSpacer;
    QGridLayout *proxyLayout;
    QSpinBox *proxyPort;
    QLabel *proxyTypeLabel;
    QLabel *proxyAddrLabel;
    QLineEdit *proxyAddr;
    QLabel *proxyPortLabel;
    QComboBox *proxyType;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *reconnectButton;

    void setupUi(QWidget *GeneralSettings)
    {
        if (GeneralSettings->objectName().isEmpty())
            GeneralSettings->setObjectName(QStringLiteral("GeneralSettings"));
        GeneralSettings->resize(673, 1100);
        GeneralSettings->setWindowTitle(QStringLiteral("Form"));
        verticalLayout_2 = new QVBoxLayout(GeneralSettings);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(9, 9, 9, 9);
        scrollArea = new VerticalOnlyScroller(GeneralSettings);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollArea->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 639, 1221));
        verticalLayout_4 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_4->setSpacing(32);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(-1, 9, -1, -1);
        generalGroup = new QGroupBox(scrollAreaWidgetContents);
        generalGroup->setObjectName(QStringLiteral("generalGroup"));
        verticalLayout_3 = new QVBoxLayout(generalGroup);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        generalLayout = new QHBoxLayout();
        generalLayout->setObjectName(QStringLiteral("generalLayout"));
        transLabel = new QLabel(generalGroup);
        transLabel->setObjectName(QStringLiteral("transLabel"));

        generalLayout->addWidget(transLabel);

        transComboBox = new QComboBox(generalGroup);
        transComboBox->setObjectName(QStringLiteral("transComboBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(transComboBox->sizePolicy().hasHeightForWidth());
        transComboBox->setSizePolicy(sizePolicy);

        generalLayout->addWidget(transComboBox);

        generalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        generalLayout->addItem(generalSpacer);


        verticalLayout_3->addLayout(generalLayout);

        trayGroup = new QGroupBox(generalGroup);
        trayGroup->setObjectName(QStringLiteral("trayGroup"));
        trayGroup->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        horizontalLayout_2 = new QHBoxLayout(trayGroup);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        trayOptionsLayout = new QVBoxLayout();
        trayOptionsLayout->setObjectName(QStringLiteral("trayOptionsLayout"));
        startInTray = new QCheckBox(trayGroup);
        startInTray->setObjectName(QStringLiteral("startInTray"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(startInTray->sizePolicy().hasHeightForWidth());
        startInTray->setSizePolicy(sizePolicy1);

        trayOptionsLayout->addWidget(startInTray);

        showSystemTray = new QCheckBox(trayGroup);
        showSystemTray->setObjectName(QStringLiteral("showSystemTray"));

        trayOptionsLayout->addWidget(showSystemTray);

        closeToTray = new QCheckBox(trayGroup);
        closeToTray->setObjectName(QStringLiteral("closeToTray"));
        sizePolicy1.setHeightForWidth(closeToTray->sizePolicy().hasHeightForWidth());
        closeToTray->setSizePolicy(sizePolicy1);

        trayOptionsLayout->addWidget(closeToTray);

        lightTrayIcon = new QCheckBox(trayGroup);
        lightTrayIcon->setObjectName(QStringLiteral("lightTrayIcon"));

        trayOptionsLayout->addWidget(lightTrayIcon);

        minimizeToTray = new QCheckBox(trayGroup);
        minimizeToTray->setObjectName(QStringLiteral("minimizeToTray"));
        sizePolicy1.setHeightForWidth(minimizeToTray->sizePolicy().hasHeightForWidth());
        minimizeToTray->setSizePolicy(sizePolicy1);

        trayOptionsLayout->addWidget(minimizeToTray);


        horizontalLayout_2->addLayout(trayOptionsLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout_3->addWidget(trayGroup);

        autoAwayLayout = new QHBoxLayout();
        autoAwayLayout->setObjectName(QStringLiteral("autoAwayLayout"));
        autoAwayLabel = new QLabel(generalGroup);
        autoAwayLabel->setObjectName(QStringLiteral("autoAwayLabel"));
        autoAwayLabel->setLayoutDirection(Qt::LeftToRight);

        autoAwayLayout->addWidget(autoAwayLabel);

        autoAwaySpinBox = new QSpinBox(generalGroup);
        autoAwaySpinBox->setObjectName(QStringLiteral("autoAwaySpinBox"));
        sizePolicy.setHeightForWidth(autoAwaySpinBox->sizePolicy().hasHeightForWidth());
        autoAwaySpinBox->setSizePolicy(sizePolicy);
        autoAwaySpinBox->setProperty("showGroupSeparator", QVariant(true));
        autoAwaySpinBox->setMinimum(0);
        autoAwaySpinBox->setMaximum(2147483647);

        autoAwayLayout->addWidget(autoAwaySpinBox);


        verticalLayout_3->addLayout(autoAwayLayout);

        startupLayout = new QVBoxLayout();
        startupLayout->setObjectName(QStringLiteral("startupLayout"));
        label_2 = new QLabel(generalGroup);
        label_2->setObjectName(QStringLiteral("label_2"));

        startupLayout->addWidget(label_2);

        cbAutorun = new QCheckBox(generalGroup);
        cbAutorun->setObjectName(QStringLiteral("cbAutorun"));

        startupLayout->addWidget(cbAutorun);

        checkUpdates = new QCheckBox(generalGroup);
        checkUpdates->setObjectName(QStringLiteral("checkUpdates"));

        startupLayout->addWidget(checkUpdates);


        verticalLayout_3->addLayout(startupLayout);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setContentsMargins(0, -1, -1, -1);
        autoSaveFilesDir = new QPushButton(generalGroup);
        autoSaveFilesDir->setObjectName(QStringLiteral("autoSaveFilesDir"));
        sizePolicy.setHeightForWidth(autoSaveFilesDir->sizePolicy().hasHeightForWidth());
        autoSaveFilesDir->setSizePolicy(sizePolicy);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, autoSaveFilesDir);

        label = new QLabel(generalGroup);
        label->setObjectName(QStringLiteral("label"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label);

        autoacceptFiles = new QCheckBox(generalGroup);
        autoacceptFiles->setObjectName(QStringLiteral("autoacceptFiles"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, autoacceptFiles);


        verticalLayout_3->addLayout(formLayout_2);


        verticalLayout_4->addWidget(generalGroup, 0, Qt::AlignTop);

        chatGroupBox = new QGroupBox(scrollAreaWidgetContents);
        chatGroupBox->setObjectName(QStringLiteral("chatGroupBox"));
        verticalLayout_7 = new QVBoxLayout(chatGroupBox);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        newMessagesLayout = new QVBoxLayout();
        newMessagesLayout->setObjectName(QStringLiteral("newMessagesLayout"));
        newMessagesLayout->setContentsMargins(-1, 0, -1, -1);
        newMessages = new QGroupBox(chatGroupBox);
        newMessages->setObjectName(QStringLiteral("newMessages"));
        verticalLayout_10 = new QVBoxLayout(newMessages);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        notifySound = new QCheckBox(newMessages);
        notifySound->setObjectName(QStringLiteral("notifySound"));

        verticalLayout_10->addWidget(notifySound);

        showInFront = new QCheckBox(newMessages);
        showInFront->setObjectName(QStringLiteral("showInFront"));

        verticalLayout_10->addWidget(showInFront);

        showWindow = new QCheckBox(newMessages);
        showWindow->setObjectName(QStringLiteral("showWindow"));

        verticalLayout_10->addWidget(showWindow);

        showWindow->raise();
        showInFront->raise();
        notifySound->raise();

        newMessagesLayout->addWidget(newMessages);


        verticalLayout_7->addLayout(newMessagesLayout);

        statusChanges = new QCheckBox(chatGroupBox);
        statusChanges->setObjectName(QStringLiteral("statusChanges"));

        verticalLayout_7->addWidget(statusChanges);

        groupAlwaysNotify = new QCheckBox(chatGroupBox);
        groupAlwaysNotify->setObjectName(QStringLiteral("groupAlwaysNotify"));

        verticalLayout_7->addWidget(groupAlwaysNotify);

        cbGroupchatPosition = new QCheckBox(chatGroupBox);
        cbGroupchatPosition->setObjectName(QStringLiteral("cbGroupchatPosition"));

        verticalLayout_7->addWidget(cbGroupchatPosition);

        cbFauxOfflineMessaging = new QCheckBox(chatGroupBox);
        cbFauxOfflineMessaging->setObjectName(QStringLiteral("cbFauxOfflineMessaging"));

        verticalLayout_7->addWidget(cbFauxOfflineMessaging);

        cbCompactLayout = new QCheckBox(chatGroupBox);
        cbCompactLayout->setObjectName(QStringLiteral("cbCompactLayout"));

        verticalLayout_7->addWidget(cbCompactLayout);


        verticalLayout_4->addWidget(chatGroupBox);

        themeGroup = new QGroupBox(scrollAreaWidgetContents);
        themeGroup->setObjectName(QStringLiteral("themeGroup"));
        verticalLayout = new QVBoxLayout(themeGroup);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        useEmoticons = new QCheckBox(themeGroup);
        useEmoticons->setObjectName(QStringLiteral("useEmoticons"));

        verticalLayout->addWidget(useEmoticons);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setContentsMargins(-1, 0, -1, 0);
        smileyPackLabel = new QLabel(themeGroup);
        smileyPackLabel->setObjectName(QStringLiteral("smileyPackLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, smileyPackLabel);

        smileyPackBrowser = new QComboBox(themeGroup);
        smileyPackBrowser->setObjectName(QStringLiteral("smileyPackBrowser"));
        sizePolicy.setHeightForWidth(smileyPackBrowser->sizePolicy().hasHeightForWidth());
        smileyPackBrowser->setSizePolicy(sizePolicy);

        formLayout->setWidget(0, QFormLayout::FieldRole, smileyPackBrowser);

        emoticonSizeLabel = new QLabel(themeGroup);
        emoticonSizeLabel->setObjectName(QStringLiteral("emoticonSizeLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, emoticonSizeLabel);

        emoticonSize = new QSpinBox(themeGroup);
        emoticonSize->setObjectName(QStringLiteral("emoticonSize"));
        sizePolicy.setHeightForWidth(emoticonSize->sizePolicy().hasHeightForWidth());
        emoticonSize->setSizePolicy(sizePolicy);
        emoticonSize->setMinimum(1);
        emoticonSize->setMaximum(2147483647);
        emoticonSize->setValue(25);

        formLayout->setWidget(2, QFormLayout::FieldRole, emoticonSize);

        styleLabel = new QLabel(themeGroup);
        styleLabel->setObjectName(QStringLiteral("styleLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, styleLabel);

        styleBrowser = new QComboBox(themeGroup);
        styleBrowser->setObjectName(QStringLiteral("styleBrowser"));
        sizePolicy.setHeightForWidth(styleBrowser->sizePolicy().hasHeightForWidth());
        styleBrowser->setSizePolicy(sizePolicy);

        formLayout->setWidget(3, QFormLayout::FieldRole, styleBrowser);

        themeColorLabel = new QLabel(themeGroup);
        themeColorLabel->setObjectName(QStringLiteral("themeColorLabel"));

        formLayout->setWidget(4, QFormLayout::LabelRole, themeColorLabel);

        themeColorCBox = new QComboBox(themeGroup);
        themeColorCBox->setObjectName(QStringLiteral("themeColorCBox"));
        sizePolicy.setHeightForWidth(themeColorCBox->sizePolicy().hasHeightForWidth());
        themeColorCBox->setSizePolicy(sizePolicy);

        formLayout->setWidget(4, QFormLayout::FieldRole, themeColorCBox);

        timestampLabel = new QLabel(themeGroup);
        timestampLabel->setObjectName(QStringLiteral("timestampLabel"));

        formLayout->setWidget(5, QFormLayout::LabelRole, timestampLabel);

        timestamp = new QComboBox(themeGroup);
        timestamp->setObjectName(QStringLiteral("timestamp"));
        sizePolicy.setHeightForWidth(timestamp->sizePolicy().hasHeightForWidth());
        timestamp->setSizePolicy(sizePolicy);

        formLayout->setWidget(5, QFormLayout::FieldRole, timestamp);

        dateformatLabel = new QLabel(themeGroup);
        dateformatLabel->setObjectName(QStringLiteral("dateformatLabel"));

        formLayout->setWidget(6, QFormLayout::LabelRole, dateformatLabel);

        dateFormats = new QComboBox(themeGroup);
        dateFormats->setObjectName(QStringLiteral("dateFormats"));

        formLayout->setWidget(6, QFormLayout::FieldRole, dateFormats);

        horizontalSpacer_2 = new QSpacerItem(80, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        formLayout->setItem(1, QFormLayout::LabelRole, horizontalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        smile1 = new QLabel(themeGroup);
        smile1->setObjectName(QStringLiteral("smile1"));
#ifndef QT_NO_TOOLTIP
        smile1->setToolTip(QStringLiteral(":)"));
#endif // QT_NO_TOOLTIP
        smile1->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(smile1, 0, Qt::AlignTop);

        smile2 = new QLabel(themeGroup);
        smile2->setObjectName(QStringLiteral("smile2"));
#ifndef QT_NO_TOOLTIP
        smile2->setToolTip(QStringLiteral(";)"));
#endif // QT_NO_TOOLTIP
        smile2->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(smile2, 0, Qt::AlignTop);

        smile3 = new QLabel(themeGroup);
        smile3->setObjectName(QStringLiteral("smile3"));
#ifndef QT_NO_TOOLTIP
        smile3->setToolTip(QStringLiteral(":p"));
#endif // QT_NO_TOOLTIP
        smile3->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(smile3, 0, Qt::AlignTop);

        smile4 = new QLabel(themeGroup);
        smile4->setObjectName(QStringLiteral("smile4"));
#ifndef QT_NO_TOOLTIP
        smile4->setToolTip(QStringLiteral(":O"));
#endif // QT_NO_TOOLTIP
        smile4->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(smile4, 0, Qt::AlignTop);

        smile5 = new QLabel(themeGroup);
        smile5->setObjectName(QStringLiteral("smile5"));
#ifndef QT_NO_TOOLTIP
        smile5->setToolTip(QStringLiteral(":'("));
#endif // QT_NO_TOOLTIP
        smile5->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(smile5, 0, Qt::AlignTop);


        formLayout->setLayout(1, QFormLayout::FieldRole, horizontalLayout);


        verticalLayout->addLayout(formLayout);


        verticalLayout_4->addWidget(themeGroup);

        connectionGroup = new QGroupBox(scrollAreaWidgetContents);
        connectionGroup->setObjectName(QStringLiteral("connectionGroup"));
        connectionGroup->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        verticalLayoutProxy = new QVBoxLayout(connectionGroup);
        verticalLayoutProxy->setObjectName(QStringLiteral("verticalLayoutProxy"));
        verticalLayoutProxy->setContentsMargins(-1, 9, -1, -1);
        coreProtocolLayout = new QHBoxLayout();
        coreProtocolLayout->setObjectName(QStringLiteral("coreProtocolLayout"));
        cbEnableUDP = new QCheckBox(connectionGroup);
        cbEnableUDP->setObjectName(QStringLiteral("cbEnableUDP"));

        coreProtocolLayout->addWidget(cbEnableUDP);

        cbEnableIPv6 = new QCheckBox(connectionGroup);
        cbEnableIPv6->setObjectName(QStringLiteral("cbEnableIPv6"));

        coreProtocolLayout->addWidget(cbEnableIPv6);

        protocolSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        coreProtocolLayout->addItem(protocolSpacer);


        verticalLayoutProxy->addLayout(coreProtocolLayout);

        proxyLayout = new QGridLayout();
        proxyLayout->setObjectName(QStringLiteral("proxyLayout"));
        proxyPort = new QSpinBox(connectionGroup);
        proxyPort->setObjectName(QStringLiteral("proxyPort"));
        proxyPort->setMinimum(0);
        proxyPort->setMaximum(65535);

        proxyLayout->addWidget(proxyPort, 2, 3, 1, 1);

        proxyTypeLabel = new QLabel(connectionGroup);
        proxyTypeLabel->setObjectName(QStringLiteral("proxyTypeLabel"));

        proxyLayout->addWidget(proxyTypeLabel, 1, 0, 1, 1);

        proxyAddrLabel = new QLabel(connectionGroup);
        proxyAddrLabel->setObjectName(QStringLiteral("proxyAddrLabel"));

        proxyLayout->addWidget(proxyAddrLabel, 2, 0, 1, 1);

        proxyAddr = new QLineEdit(connectionGroup);
        proxyAddr->setObjectName(QStringLiteral("proxyAddr"));

        proxyLayout->addWidget(proxyAddr, 2, 1, 1, 1);

        proxyPortLabel = new QLabel(connectionGroup);
        proxyPortLabel->setObjectName(QStringLiteral("proxyPortLabel"));

        proxyLayout->addWidget(proxyPortLabel, 2, 2, 1, 1);

        proxyType = new QComboBox(connectionGroup);
        proxyType->setObjectName(QStringLiteral("proxyType"));
        sizePolicy.setHeightForWidth(proxyType->sizePolicy().hasHeightForWidth());
        proxyType->setSizePolicy(sizePolicy);

        proxyLayout->addWidget(proxyType, 1, 1, 1, 3);


        verticalLayoutProxy->addLayout(proxyLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        reconnectButton = new QPushButton(connectionGroup);
        reconnectButton->setObjectName(QStringLiteral("reconnectButton"));

        horizontalLayout_4->addWidget(reconnectButton);


        verticalLayoutProxy->addLayout(horizontalLayout_4);


        verticalLayout_4->addWidget(connectionGroup);

        verticalLayout_4->setStretch(3, 1);
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_2->addWidget(scrollArea);

        QWidget::setTabOrder(scrollArea, transComboBox);
        QWidget::setTabOrder(transComboBox, groupAlwaysNotify);
        QWidget::setTabOrder(groupAlwaysNotify, statusChanges);
        QWidget::setTabOrder(statusChanges, useEmoticons);
        QWidget::setTabOrder(useEmoticons, smileyPackBrowser);
        QWidget::setTabOrder(smileyPackBrowser, emoticonSize);
        QWidget::setTabOrder(emoticonSize, styleBrowser);
        QWidget::setTabOrder(styleBrowser, themeColorCBox);
        QWidget::setTabOrder(themeColorCBox, timestamp);
        QWidget::setTabOrder(timestamp, cbEnableUDP);
        QWidget::setTabOrder(cbEnableUDP, cbEnableIPv6);
        QWidget::setTabOrder(cbEnableIPv6, proxyType);
        QWidget::setTabOrder(proxyType, proxyAddr);
        QWidget::setTabOrder(proxyAddr, proxyPort);

        retranslateUi(GeneralSettings);
        QObject::connect(showWindow, SIGNAL(toggled(bool)), showInFront, SLOT(setEnabled(bool)));
        QObject::connect(showSystemTray, SIGNAL(toggled(bool)), closeToTray, SLOT(setEnabled(bool)));
        QObject::connect(showSystemTray, SIGNAL(toggled(bool)), minimizeToTray, SLOT(setEnabled(bool)));
        QObject::connect(showSystemTray, SIGNAL(toggled(bool)), startInTray, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(GeneralSettings);
    } // setupUi

    void retranslateUi(QWidget *GeneralSettings)
    {
        generalGroup->setTitle(QApplication::translate("GeneralSettings", "General Settings", 0));
#ifndef QT_NO_TOOLTIP
        transLabel->setToolTip(QApplication::translate("GeneralSettings", "The translation may not load until qTox restarts.", 0));
#endif // QT_NO_TOOLTIP
        transLabel->setText(QApplication::translate("GeneralSettings", "Language:", 0));
#ifndef QT_NO_TOOLTIP
        transComboBox->setToolTip(QApplication::translate("GeneralSettings", "The translation may not load until qTox restarts.", 0));
#endif // QT_NO_TOOLTIP
        trayGroup->setTitle(QApplication::translate("GeneralSettings", "System tray", 0));
#ifndef QT_NO_TOOLTIP
        startInTray->setToolTip(QApplication::translate("GeneralSettings", "qTox will start minimized in tray.", "toolTip for Start in tray setting"));
#endif // QT_NO_TOOLTIP
        startInTray->setText(QApplication::translate("GeneralSettings", "Start in tray", 0));
        showSystemTray->setText(QApplication::translate("GeneralSettings", "Show system tray icon", 0));
#ifndef QT_NO_TOOLTIP
        closeToTray->setToolTip(QApplication::translate("GeneralSettings", "After pressing close (X) qTox will minimize to tray,\n"
"instead of closing itself.", "toolTip for close to tray setting"));
#endif // QT_NO_TOOLTIP
        closeToTray->setText(QApplication::translate("GeneralSettings", "Close to tray", 0));
#ifndef QT_NO_TOOLTIP
        lightTrayIcon->setToolTip(QApplication::translate("GeneralSettings", "Enable light tray icon.", "toolTip for light icon setting"));
#endif // QT_NO_TOOLTIP
        lightTrayIcon->setText(QApplication::translate("GeneralSettings", "Light icon", 0));
#ifndef QT_NO_TOOLTIP
        minimizeToTray->setToolTip(QApplication::translate("GeneralSettings", "After pressing minimize (_) qTox will minimize itself to tray,\n"
"instead of system taskbar.", "toolTip for minimize to tray setting"));
#endif // QT_NO_TOOLTIP
        minimizeToTray->setText(QApplication::translate("GeneralSettings", "Minimize to tray", 0));
#ifndef QT_NO_TOOLTIP
        autoAwayLabel->setToolTip(QApplication::translate("GeneralSettings", "Your status is changed to Away after set period of inactivity.", 0));
#endif // QT_NO_TOOLTIP
        autoAwayLabel->setText(QApplication::translate("GeneralSettings", "Auto away after (0 to disable):", 0));
#ifndef QT_NO_TOOLTIP
        autoAwaySpinBox->setToolTip(QApplication::translate("GeneralSettings", "Set to 0 to disable", 0));
#endif // QT_NO_TOOLTIP
        autoAwaySpinBox->setSuffix(QApplication::translate("GeneralSettings", " minutes", 0));
        label_2->setText(QString());
#ifndef QT_NO_TOOLTIP
        cbAutorun->setToolTip(QApplication::translate("GeneralSettings", "<html><head/><body><p>Start qTox on operating system startup (current profile).</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        cbAutorun->setText(QApplication::translate("GeneralSettings", "Autostart", 0));
        checkUpdates->setText(QApplication::translate("GeneralSettings", "Check for updates on startup", 0));
#ifndef QT_NO_TOOLTIP
        autoSaveFilesDir->setToolTip(QApplication::translate("GeneralSettings", "Set where files will be saved.", 0));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("GeneralSettings", "Default directory to save files", 0));
#ifndef QT_NO_TOOLTIP
        autoacceptFiles->setToolTip(QApplication::translate("GeneralSettings", "You can set this on a per-friend basis by right clicking them.", "autoaccept cb tooltip"));
#endif // QT_NO_TOOLTIP
        autoacceptFiles->setText(QApplication::translate("GeneralSettings", "Autoaccept files", 0));
        chatGroupBox->setTitle(QApplication::translate("GeneralSettings", "Chat", 0));
        newMessages->setTitle(QApplication::translate("GeneralSettings", "On new message:", 0));
#ifndef QT_NO_TOOLTIP
        notifySound->setToolTip(QApplication::translate("GeneralSettings", "Play a sound when you recieve message.", "toolTip for Notify sound setting"));
#endif // QT_NO_TOOLTIP
        notifySound->setText(QApplication::translate("GeneralSettings", "Play sound", 0));
#ifndef QT_NO_TOOLTIP
        showInFront->setToolTip(QApplication::translate("GeneralSettings", "Focus qTox when you receive message.", "toolTip for Focus window setting"));
#endif // QT_NO_TOOLTIP
        showInFront->setText(QApplication::translate("GeneralSettings", "Focus window", 0));
#ifndef QT_NO_TOOLTIP
        showWindow->setToolTip(QApplication::translate("GeneralSettings", "Show qTox's window when you receive new message.", "tooltip for Show window setting"));
#endif // QT_NO_TOOLTIP
        showWindow->setText(QApplication::translate("GeneralSettings", "Show window", 0));
        statusChanges->setText(QApplication::translate("GeneralSettings", "Show contacts' status changes", 0));
#ifndef QT_NO_TOOLTIP
        groupAlwaysNotify->setToolTip(QApplication::translate("GeneralSettings", "Always notify about new messages in groupchats.", "toolTip for Group chat always notify"));
#endif // QT_NO_TOOLTIP
        groupAlwaysNotify->setText(QApplication::translate("GeneralSettings", "Group chats always notify", 0));
#ifndef QT_NO_TOOLTIP
        cbGroupchatPosition->setToolTip(QApplication::translate("GeneralSettings", "If checked, groupchats will be placed at the top of the friends list, otherwise, they'll be placed below online friends.", "toolTip for groupchat positioning"));
#endif // QT_NO_TOOLTIP
        cbGroupchatPosition->setText(QApplication::translate("GeneralSettings", "Place groupchats at top of friend list", 0));
#ifndef QT_NO_TOOLTIP
        cbFauxOfflineMessaging->setToolTip(QApplication::translate("GeneralSettings", "Messages you are trying to send to your friends when they are not online\n"
"will be sent to them when they appear online to you.", "toolTip for Faux offline messaging setting"));
#endif // QT_NO_TOOLTIP
        cbFauxOfflineMessaging->setText(QApplication::translate("GeneralSettings", "Faux offline messaging", 0));
#ifndef QT_NO_TOOLTIP
        cbCompactLayout->setToolTip(QApplication::translate("GeneralSettings", "Your contact list will be shown in compact mode.", "toolTip for compact layout setting"));
#endif // QT_NO_TOOLTIP
        cbCompactLayout->setText(QApplication::translate("GeneralSettings", "Compact contact list", 0));
        themeGroup->setTitle(QApplication::translate("GeneralSettings", "Theme", 0));
        useEmoticons->setText(QApplication::translate("GeneralSettings", "Use emoticons", 0));
        smileyPackLabel->setText(QApplication::translate("GeneralSettings", "Smiley Pack:", 0));
        emoticonSizeLabel->setText(QApplication::translate("GeneralSettings", "Emoticon size:", 0));
        emoticonSize->setSpecialValueText(QString());
        emoticonSize->setSuffix(QApplication::translate("GeneralSettings", " px", 0));
        styleLabel->setText(QApplication::translate("GeneralSettings", "Style:", 0));
        themeColorLabel->setText(QApplication::translate("GeneralSettings", "Theme color:", 0));
        timestampLabel->setText(QApplication::translate("GeneralSettings", "Timestamp format:", 0));
        dateformatLabel->setText(QApplication::translate("GeneralSettings", "Date format:", 0));
        smile1->setText(QString());
        smile2->setText(QString());
        smile3->setText(QString());
        smile4->setText(QString());
        smile5->setText(QString());
        connectionGroup->setTitle(QApplication::translate("GeneralSettings", "Connection Settings", 0));
#ifndef QT_NO_TOOLTIP
        cbEnableUDP->setToolTip(QApplication::translate("GeneralSettings", "Disabling this allows, e.g., toxing over Tor. It adds load to the Tox network however, so uncheck only when necessary.", 0));
#endif // QT_NO_TOOLTIP
        cbEnableUDP->setText(QApplication::translate("GeneralSettings", "Enable UDP (recommended)", 0));
        cbEnableIPv6->setText(QApplication::translate("GeneralSettings", "Enable IPv6 (recommended)", 0));
        proxyTypeLabel->setText(QApplication::translate("GeneralSettings", "Proxy type:", 0));
        proxyAddrLabel->setText(QApplication::translate("GeneralSettings", "Address:", 0));
        proxyPortLabel->setText(QApplication::translate("GeneralSettings", "Port", 0));
        proxyType->clear();
        proxyType->insertItems(0, QStringList()
         << QApplication::translate("GeneralSettings", "None", 0)
         << QApplication::translate("GeneralSettings", "SOCKS5", 0)
         << QApplication::translate("GeneralSettings", "HTTP", 0)
        );
        reconnectButton->setText(QApplication::translate("GeneralSettings", "Reconnect", "reconnect button"));
        Q_UNUSED(GeneralSettings);
    } // retranslateUi

};

namespace Ui {
    class GeneralSettings: public Ui_GeneralSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GENERALSETTINGS_H
