/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <src/widget/notificationscrollarea.h>
#include <src/widget/tool/croppinglabel.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionClose;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_4;
    QSplitter *mainSplitter;
    QFrame *statusPanel;
    QVBoxLayout *verticalLayout_6;
    QWidget *statusHead;
    QGridLayout *gridLayout_2;
    QHBoxLayout *myProfile;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout;
    CroppingLabel *nameLabel;
    CroppingLabel *statusLabel;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *statusButton;
    QWidget *searchContactsContainer;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLineEdit *searchContactText;
    QToolButton *searchContactFilterBox;
    NotificationScrollArea *friendList;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_5;
    QWidget *tooliconsZone;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *addButton;
    QPushButton *groupButton;
    QPushButton *transferButton;
    QPushButton *settingsButton;
    QWidget *mainPanel;
    QVBoxLayout *verticalLayout_2;
    QWidget *mainHead;
    QFrame *mainHLine;
    QWidget *mainContent;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(775, 537);
        MainWindow->setMinimumSize(QSize(775, 420));
        MainWindow->setWindowTitle(QStringLiteral("qTox"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/img/icons/qtox.svg"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionClose = new QAction(MainWindow);
        actionClose->setObjectName(QStringLiteral("actionClose"));
        actionClose->setShortcut(QStringLiteral("Ctrl+Q"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout_4 = new QVBoxLayout(centralwidget);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        mainSplitter = new QSplitter(centralwidget);
        mainSplitter->setObjectName(QStringLiteral("mainSplitter"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mainSplitter->sizePolicy().hasHeightForWidth());
        mainSplitter->setSizePolicy(sizePolicy);
        mainSplitter->setMaximumSize(QSize(16777215, 16777215));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Active, QPalette::Highlight, brush);
        palette.setBrush(QPalette::Active, QPalette::HighlightedText, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush);
        palette.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Highlight, brush);
        palette.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        mainSplitter->setPalette(palette);
        mainSplitter->setMouseTracking(true);
        mainSplitter->setAutoFillBackground(false);
        mainSplitter->setStyleSheet(QLatin1String("QSplitter{\n"
"	color: rgb(255, 255, 255);\n"
"	background-color: rgb(255, 255, 255);\n"
"	alternate-background-color: rgb(255, 255, 255);\n"
"	border-color: rgb(255, 255, 255);\n"
"	gridline-color: rgb(255, 255, 255);\n"
"	selection-color: rgb(255, 255, 255);\n"
"	selection-background-color: rgb(255, 255, 255);\n"
"}\n"
"QSplitter:handle{\n"
"	color: rgb(255, 255, 255);\n"
"	background-color: rgb(255, 255, 255);\n"
"}"));
        mainSplitter->setOrientation(Qt::Horizontal);
        mainSplitter->setHandleWidth(6);
        mainSplitter->setChildrenCollapsible(false);
        statusPanel = new QFrame(mainSplitter);
        statusPanel->setObjectName(QStringLiteral("statusPanel"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(statusPanel->sizePolicy().hasHeightForWidth());
        statusPanel->setSizePolicy(sizePolicy1);
        verticalLayout_6 = new QVBoxLayout(statusPanel);
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        statusHead = new QWidget(statusPanel);
        statusHead->setObjectName(QStringLiteral("statusHead"));
        statusHead->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(statusHead->sizePolicy().hasHeightForWidth());
        statusHead->setSizePolicy(sizePolicy2);
        gridLayout_2 = new QGridLayout(statusHead);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        myProfile = new QHBoxLayout();
        myProfile->setSpacing(0);
        myProfile->setObjectName(QStringLiteral("myProfile"));
        horizontalSpacer_4 = new QSpacerItem(5, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        myProfile->addItem(horizontalSpacer_4);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        nameLabel = new CroppingLabel(statusHead);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));
        nameLabel->setEnabled(true);
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(1);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(nameLabel->sizePolicy().hasHeightForWidth());
        nameLabel->setSizePolicy(sizePolicy3);
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Active, QPalette::Highlight, brush);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette1.setBrush(QPalette::Active, QPalette::NoRole, brush);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Highlight, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::NoRole, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        QBrush brush1(QColor(240, 240, 240, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::Highlight, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::NoRole, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        nameLabel->setPalette(palette1);
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        nameLabel->setFont(font);
        nameLabel->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout->addWidget(nameLabel);

        statusLabel = new CroppingLabel(statusHead);
        statusLabel->setObjectName(QStringLiteral("statusLabel"));
        sizePolicy3.setHeightForWidth(statusLabel->sizePolicy().hasHeightForWidth());
        statusLabel->setSizePolicy(sizePolicy3);
        QPalette palette2;
        QBrush brush2(QColor(193, 193, 193, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        QBrush brush3(QColor(14, 14, 14, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        statusLabel->setPalette(palette2);
        QFont font1;
        font1.setPointSize(8);
        statusLabel->setFont(font1);

        verticalLayout->addWidget(statusLabel);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 1);

        myProfile->addLayout(verticalLayout);

        horizontalSpacer_3 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        myProfile->addItem(horizontalSpacer_3);

        statusButton = new QPushButton(statusHead);
        statusButton->setObjectName(QStringLiteral("statusButton"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(statusButton->sizePolicy().hasHeightForWidth());
        statusButton->setSizePolicy(sizePolicy4);
        statusButton->setMinimumSize(QSize(20, 40));
        statusButton->setFocusPolicy(Qt::NoFocus);
        statusButton->setIconSize(QSize(10, 10));
        statusButton->setAutoExclusive(false);
        statusButton->setAutoDefault(false);
        statusButton->setFlat(true);

        myProfile->addWidget(statusButton);


        gridLayout_2->addLayout(myProfile, 0, 0, 1, 1);


        verticalLayout_6->addWidget(statusHead);

        searchContactsContainer = new QWidget(statusPanel);
        searchContactsContainer->setObjectName(QStringLiteral("searchContactsContainer"));
        sizePolicy2.setHeightForWidth(searchContactsContainer->sizePolicy().hasHeightForWidth());
        searchContactsContainer->setSizePolicy(sizePolicy2);
        verticalLayout_3 = new QVBoxLayout(searchContactsContainer);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        searchContactText = new QLineEdit(searchContactsContainer);
        searchContactText->setObjectName(QStringLiteral("searchContactText"));
        QSizePolicy sizePolicy5(QSizePolicy::Ignored, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(searchContactText->sizePolicy().hasHeightForWidth());
        searchContactText->setSizePolicy(sizePolicy5);

        horizontalLayout->addWidget(searchContactText);

        searchContactFilterBox = new QToolButton(searchContactsContainer);
        searchContactFilterBox->setObjectName(QStringLiteral("searchContactFilterBox"));
        QSizePolicy sizePolicy6(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(searchContactFilterBox->sizePolicy().hasHeightForWidth());
        searchContactFilterBox->setSizePolicy(sizePolicy6);
        searchContactFilterBox->setPopupMode(QToolButton::InstantPopup);
        searchContactFilterBox->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        searchContactFilterBox->setArrowType(Qt::NoArrow);

        horizontalLayout->addWidget(searchContactFilterBox);


        verticalLayout_3->addLayout(horizontalLayout);


        verticalLayout_6->addWidget(searchContactsContainer);

        friendList = new NotificationScrollArea(statusPanel);
        friendList->setObjectName(QStringLiteral("friendList"));
        sizePolicy1.setHeightForWidth(friendList->sizePolicy().hasHeightForWidth());
        friendList->setSizePolicy(sizePolicy1);
        friendList->setLayoutDirection(Qt::LeftToRight);
        friendList->setAutoFillBackground(true);
        friendList->setFrameShape(QFrame::NoFrame);
        friendList->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        friendList->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 284, 398));
        verticalLayout_5 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        friendList->setWidget(scrollAreaWidgetContents);

        verticalLayout_6->addWidget(friendList);

        tooliconsZone = new QWidget(statusPanel);
        tooliconsZone->setObjectName(QStringLiteral("tooliconsZone"));
        tooliconsZone->setEnabled(true);
        sizePolicy2.setHeightForWidth(tooliconsZone->sizePolicy().hasHeightForWidth());
        tooliconsZone->setSizePolicy(sizePolicy2);
        tooliconsZone->setStyleSheet(QStringLiteral(""));
        horizontalLayout_2 = new QHBoxLayout(tooliconsZone);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        addButton = new QPushButton(tooliconsZone);
        addButton->setObjectName(QStringLiteral("addButton"));
        addButton->setMinimumSize(QSize(55, 35));
        addButton->setMaximumSize(QSize(55, 35));
        addButton->setFocusPolicy(Qt::NoFocus);
        addButton->setAutoFillBackground(false);
        addButton->setStyleSheet(QStringLiteral(""));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/img/add.svg"), QSize(), QIcon::Normal, QIcon::Off);
        addButton->setIcon(icon1);
        addButton->setIconSize(QSize(15, 15));
        addButton->setCheckable(false);
        addButton->setAutoDefault(false);
        addButton->setFlat(false);

        horizontalLayout_2->addWidget(addButton);

        groupButton = new QPushButton(tooliconsZone);
        groupButton->setObjectName(QStringLiteral("groupButton"));
        groupButton->setMinimumSize(QSize(55, 35));
        groupButton->setFocusPolicy(Qt::NoFocus);
        groupButton->setAutoFillBackground(false);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/img/group.svg"), QSize(), QIcon::Normal, QIcon::Off);
        groupButton->setIcon(icon2);
        groupButton->setIconSize(QSize(15, 15));
        groupButton->setFlat(true);

        horizontalLayout_2->addWidget(groupButton);

        transferButton = new QPushButton(tooliconsZone);
        transferButton->setObjectName(QStringLiteral("transferButton"));
        transferButton->setMinimumSize(QSize(55, 35));
        transferButton->setMaximumSize(QSize(55, 35));
        transferButton->setFocusPolicy(Qt::NoFocus);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/img/transfer.svg"), QSize(), QIcon::Normal, QIcon::Off);
        transferButton->setIcon(icon3);
        transferButton->setIconSize(QSize(15, 15));
        transferButton->setFlat(true);

        horizontalLayout_2->addWidget(transferButton);

        settingsButton = new QPushButton(tooliconsZone);
        settingsButton->setObjectName(QStringLiteral("settingsButton"));
        settingsButton->setMinimumSize(QSize(55, 35));
        settingsButton->setMaximumSize(QSize(55, 35));
        settingsButton->setFocusPolicy(Qt::NoFocus);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/img/settings.svg"), QSize(), QIcon::Normal, QIcon::Off);
        settingsButton->setIcon(icon4);
        settingsButton->setIconSize(QSize(15, 15));
        settingsButton->setFlat(true);

        horizontalLayout_2->addWidget(settingsButton);


        verticalLayout_6->addWidget(tooliconsZone, 0, Qt::AlignHCenter);

        mainSplitter->addWidget(statusPanel);
        mainPanel = new QWidget(mainSplitter);
        mainPanel->setObjectName(QStringLiteral("mainPanel"));
        QSizePolicy sizePolicy7(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(mainPanel->sizePolicy().hasHeightForWidth());
        mainPanel->setSizePolicy(sizePolicy7);
        QPalette palette3;
        QBrush brush4(QColor(0, 0, 0, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush);
        palette3.setBrush(QPalette::Active, QPalette::Light, brush);
        palette3.setBrush(QPalette::Active, QPalette::Midlight, brush);
        QBrush brush5(QColor(127, 127, 127, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Dark, brush5);
        QBrush brush6(QColor(170, 170, 170, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Mid, brush6);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush4);
        palette3.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush4);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush);
        palette3.setBrush(QPalette::Active, QPalette::Shadow, brush4);
        palette3.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        QBrush brush7(QColor(255, 255, 220, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipText, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Dark, brush5);
        palette3.setBrush(QPalette::Inactive, QPalette::Mid, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Shadow, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Dark, brush5);
        palette3.setBrush(QPalette::Disabled, QPalette::Mid, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush5);
        palette3.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush5);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Shadow, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush4);
        mainPanel->setPalette(palette3);
        mainPanel->setAutoFillBackground(true);
        verticalLayout_2 = new QVBoxLayout(mainPanel);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        mainHead = new QWidget(mainPanel);
        mainHead->setObjectName(QStringLiteral("mainHead"));
        sizePolicy2.setHeightForWidth(mainHead->sizePolicy().hasHeightForWidth());
        mainHead->setSizePolicy(sizePolicy2);
        mainHead->setMinimumSize(QSize(0, 0));
        mainHead->setMaximumSize(QSize(16777215, 16777215));
        mainHead->setBaseSize(QSize(0, 57));
        mainHead->setMouseTracking(true);

        verticalLayout_2->addWidget(mainHead);

        mainHLine = new QFrame(mainPanel);
        mainHLine->setObjectName(QStringLiteral("mainHLine"));
        mainHLine->setMinimumSize(QSize(0, 1));
        mainHLine->setMaximumSize(QSize(16777215, 1));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        mainHLine->setPalette(palette4);
        mainHLine->setFrameShape(QFrame::HLine);
        mainHLine->setFrameShadow(QFrame::Plain);

        verticalLayout_2->addWidget(mainHLine);

        mainContent = new QWidget(mainPanel);
        mainContent->setObjectName(QStringLiteral("mainContent"));
        QSizePolicy sizePolicy8(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(mainContent->sizePolicy().hasHeightForWidth());
        mainContent->setSizePolicy(sizePolicy8);
        mainContent->setMinimumSize(QSize(375, 0));

        verticalLayout_2->addWidget(mainContent);

        mainSplitter->addWidget(mainPanel);

        verticalLayout_4->addWidget(mainSplitter);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        statusButton->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        actionClose->setText(QApplication::translate("MainWindow", "Close", 0));
        nameLabel->setText(QApplication::translate("MainWindow", "Your name", 0));
        statusLabel->setText(QApplication::translate("MainWindow", "Your status", 0));
        statusButton->setText(QString());
        searchContactFilterBox->setText(QApplication::translate("MainWindow", "...", 0));
#ifndef QT_NO_TOOLTIP
        addButton->setToolTip(QApplication::translate("MainWindow", "Add friends", 0));
#endif // QT_NO_TOOLTIP
        addButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        groupButton->setToolTip(QApplication::translate("MainWindow", "Create a group chat", 0));
#endif // QT_NO_TOOLTIP
        groupButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        transferButton->setToolTip(QApplication::translate("MainWindow", "View completed file transfers", 0));
#endif // QT_NO_TOOLTIP
        transferButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        settingsButton->setToolTip(QApplication::translate("MainWindow", "Change your settings", 0));
#endif // QT_NO_TOOLTIP
        settingsButton->setText(QString());
        Q_UNUSED(MainWindow);
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
