/********************************************************************************
** Form generated from reading UI file 'privacysettings.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRIVACYSETTINGS_H
#define UI_PRIVACYSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "src/widget/form/settings/verticalonlyscroller.h"

QT_BEGIN_NAMESPACE

class Ui_PrivacySettings
{
public:
    QVBoxLayout *verticalLayout;
    VerticalOnlyScroller *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *cbTypingNotification;
    QCheckBox *cbKeepHistory;
    QGroupBox *nospamGroup;
    QVBoxLayout *verticalLayout_4;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLineEdit *nospamLineEdit;
    QPushButton *randomNosapamButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *PrivacySettings)
    {
        if (PrivacySettings->objectName().isEmpty())
            PrivacySettings->setObjectName(QStringLiteral("PrivacySettings"));
        PrivacySettings->resize(400, 300);
        PrivacySettings->setWindowTitle(QStringLiteral("Form"));
        verticalLayout = new QVBoxLayout(PrivacySettings);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(9, 9, 9, 9);
        scrollArea = new VerticalOnlyScroller(PrivacySettings);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 380, 280));
        verticalLayout_3 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        cbTypingNotification = new QCheckBox(scrollAreaWidgetContents);
        cbTypingNotification->setObjectName(QStringLiteral("cbTypingNotification"));

        verticalLayout_3->addWidget(cbTypingNotification);

        cbKeepHistory = new QCheckBox(scrollAreaWidgetContents);
        cbKeepHistory->setObjectName(QStringLiteral("cbKeepHistory"));

        verticalLayout_3->addWidget(cbKeepHistory);

        nospamGroup = new QGroupBox(scrollAreaWidgetContents);
        nospamGroup->setObjectName(QStringLiteral("nospamGroup"));
        verticalLayout_4 = new QVBoxLayout(nospamGroup);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label = new QLabel(nospamGroup);
        label->setObjectName(QStringLiteral("label"));
        label->setWordWrap(true);

        verticalLayout_4->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        nospamLineEdit = new QLineEdit(nospamGroup);
        nospamLineEdit->setObjectName(QStringLiteral("nospamLineEdit"));
        nospamLineEdit->setInputMask(QStringLiteral("HHHHHHHH"));

        horizontalLayout->addWidget(nospamLineEdit);

        randomNosapamButton = new QPushButton(nospamGroup);
        randomNosapamButton->setObjectName(QStringLiteral("randomNosapamButton"));

        horizontalLayout->addWidget(randomNosapamButton);


        verticalLayout_4->addLayout(horizontalLayout);


        verticalLayout_3->addWidget(nospamGroup, 0, Qt::AlignTop);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);


        retranslateUi(PrivacySettings);

        QMetaObject::connectSlotsByName(PrivacySettings);
    } // setupUi

    void retranslateUi(QWidget *PrivacySettings)
    {
#ifndef QT_NO_TOOLTIP
        cbTypingNotification->setToolTip(QApplication::translate("PrivacySettings", "Your friends will be able to see when you are typing.", "tooltip for typing notifications setting"));
#endif // QT_NO_TOOLTIP
        cbTypingNotification->setText(QApplication::translate("PrivacySettings", "Send typing notifications", 0));
#ifndef QT_NO_TOOLTIP
        cbKeepHistory->setToolTip(QApplication::translate("PrivacySettings", "Chat history keeping is still in development.\n"
"Save format changes are possible, which may result in data loss.", "toolTip for Keep History setting"));
#endif // QT_NO_TOOLTIP
        cbKeepHistory->setText(QApplication::translate("PrivacySettings", "Keep chat history", 0));
#ifndef QT_NO_TOOLTIP
        nospamGroup->setToolTip(QApplication::translate("PrivacySettings", "NoSpam is part of your Tox ID.\n"
"If you are being spammed with friend requests, you should change your NoSpam.\n"
"People will be unable to add you with your old ID, but you will keep your current friends.", "toolTip for nospam"));
#endif // QT_NO_TOOLTIP
        nospamGroup->setTitle(QApplication::translate("PrivacySettings", "NoSpam", 0));
        label->setText(QApplication::translate("PrivacySettings", "NoSpam is a part of your ID that can be changed at will.\n"
"If you are getting spammed with friend requests, change the NoSpam.", 0));
        randomNosapamButton->setText(QApplication::translate("PrivacySettings", "Generate random NoSpam", 0));
        Q_UNUSED(PrivacySettings);
    } // retranslateUi

};

namespace Ui {
    class PrivacySettings: public Ui_PrivacySettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRIVACYSETTINGS_H
