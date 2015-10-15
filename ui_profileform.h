/********************************************************************************
** Form generated from reading UI file 'profileform.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFILEFORM_H
#define UI_PROFILEFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <src/widget/tool/croppinglabel.h>

QT_BEGIN_NAMESPACE

class Ui_IdentitySettings
{
public:
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *publicGroup;
    QHBoxLayout *horizontalLayout;
    QFormLayout *publicFieldsLayout;
    QLabel *userNameLabel;
    QLineEdit *userName;
    QLabel *statusMessageLabel;
    QLineEdit *statusMessage;
    QGroupBox *toxGroup;
    QVBoxLayout *verticalLayout_3;
    CroppingLabel *toxIdLabel;
    QLineEdit *toxId;
    QFrame *verticalFrame;
    QHBoxLayout *qrGroup;
    QLabel *qrCode;
    QFrame *horizontalFrame;
    QVBoxLayout *qrButtons;
    QLabel *qrLabel;
    QPushButton *saveQr;
    QPushButton *copyQr;
    QGroupBox *profilesGroup;
    QVBoxLayout *profilesVLayout;
    QHBoxLayout *profilesButtonsLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *renameButton;
    QPushButton *deleteButton;
    QPushButton *exportButton;
    QPushButton *logoutButton;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *deletePassButton;
    QPushButton *changePassButton;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QWidget *IdentitySettings)
    {
        if (IdentitySettings->objectName().isEmpty())
            IdentitySettings->setObjectName(QStringLiteral("IdentitySettings"));
        IdentitySettings->resize(442, 659);
        IdentitySettings->setWindowTitle(QStringLiteral("Form"));
        verticalLayout = new QVBoxLayout(IdentitySettings);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(9, 9, 9, 9);
        scrollArea = new QScrollArea(IdentitySettings);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollArea->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 585, 625));
        verticalLayout_4 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_4->setSpacing(9);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        publicGroup = new QGroupBox(scrollAreaWidgetContents);
        publicGroup->setObjectName(QStringLiteral("publicGroup"));
        horizontalLayout = new QHBoxLayout(publicGroup);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        publicFieldsLayout = new QFormLayout();
        publicFieldsLayout->setObjectName(QStringLiteral("publicFieldsLayout"));
        publicFieldsLayout->setVerticalSpacing(6);
        publicFieldsLayout->setContentsMargins(-1, 4, -1, -1);
        userNameLabel = new QLabel(publicGroup);
        userNameLabel->setObjectName(QStringLiteral("userNameLabel"));

        publicFieldsLayout->setWidget(0, QFormLayout::LabelRole, userNameLabel);

        userName = new QLineEdit(publicGroup);
        userName->setObjectName(QStringLiteral("userName"));

        publicFieldsLayout->setWidget(0, QFormLayout::FieldRole, userName);

        statusMessageLabel = new QLabel(publicGroup);
        statusMessageLabel->setObjectName(QStringLiteral("statusMessageLabel"));

        publicFieldsLayout->setWidget(1, QFormLayout::LabelRole, statusMessageLabel);

        statusMessage = new QLineEdit(publicGroup);
        statusMessage->setObjectName(QStringLiteral("statusMessage"));

        publicFieldsLayout->setWidget(1, QFormLayout::FieldRole, statusMessage);


        horizontalLayout->addLayout(publicFieldsLayout);


        verticalLayout_4->addWidget(publicGroup);

        toxGroup = new QGroupBox(scrollAreaWidgetContents);
        toxGroup->setObjectName(QStringLiteral("toxGroup"));
        verticalLayout_3 = new QVBoxLayout(toxGroup);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        toxIdLabel = new CroppingLabel(toxGroup);
        toxIdLabel->setObjectName(QStringLiteral("toxIdLabel"));

        verticalLayout_3->addWidget(toxIdLabel);

        toxId = new QLineEdit(toxGroup);
        toxId->setObjectName(QStringLiteral("toxId"));

        verticalLayout_3->addWidget(toxId);

        verticalFrame = new QFrame(toxGroup);
        verticalFrame->setObjectName(QStringLiteral("verticalFrame"));
        qrGroup = new QHBoxLayout(verticalFrame);
        qrGroup->setObjectName(QStringLiteral("qrGroup"));
        qrCode = new QLabel(verticalFrame);
        qrCode->setObjectName(QStringLiteral("qrCode"));
        qrCode->setAlignment(Qt::AlignCenter);

        qrGroup->addWidget(qrCode);

        horizontalFrame = new QFrame(verticalFrame);
        horizontalFrame->setObjectName(QStringLiteral("horizontalFrame"));
        qrButtons = new QVBoxLayout(horizontalFrame);
        qrButtons->setObjectName(QStringLiteral("qrButtons"));
        qrLabel = new QLabel(horizontalFrame);
        qrLabel->setObjectName(QStringLiteral("qrLabel"));

        qrButtons->addWidget(qrLabel, 0, Qt::AlignTop);

        saveQr = new QPushButton(horizontalFrame);
        saveQr->setObjectName(QStringLiteral("saveQr"));

        qrButtons->addWidget(saveQr, 0, Qt::AlignVCenter);

        copyQr = new QPushButton(horizontalFrame);
        copyQr->setObjectName(QStringLiteral("copyQr"));

        qrButtons->addWidget(copyQr, 0, Qt::AlignVCenter);


        qrGroup->addWidget(horizontalFrame);


        verticalLayout_3->addWidget(verticalFrame);


        verticalLayout_4->addWidget(toxGroup, 0, Qt::AlignTop);

        profilesGroup = new QGroupBox(scrollAreaWidgetContents);
        profilesGroup->setObjectName(QStringLiteral("profilesGroup"));
        profilesVLayout = new QVBoxLayout(profilesGroup);
        profilesVLayout->setObjectName(QStringLiteral("profilesVLayout"));
        profilesButtonsLayout = new QHBoxLayout();
        profilesButtonsLayout->setObjectName(QStringLiteral("profilesButtonsLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        profilesButtonsLayout->addItem(horizontalSpacer);

        renameButton = new QPushButton(profilesGroup);
        renameButton->setObjectName(QStringLiteral("renameButton"));

        profilesButtonsLayout->addWidget(renameButton);

        deleteButton = new QPushButton(profilesGroup);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));

        profilesButtonsLayout->addWidget(deleteButton);

        exportButton = new QPushButton(profilesGroup);
        exportButton->setObjectName(QStringLiteral("exportButton"));

        profilesButtonsLayout->addWidget(exportButton);

        logoutButton = new QPushButton(profilesGroup);
        logoutButton->setObjectName(QStringLiteral("logoutButton"));

        profilesButtonsLayout->addWidget(logoutButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        profilesButtonsLayout->addItem(horizontalSpacer_2);


        profilesVLayout->addLayout(profilesButtonsLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        deletePassButton = new QPushButton(profilesGroup);
        deletePassButton->setObjectName(QStringLiteral("deletePassButton"));

        horizontalLayout_2->addWidget(deletePassButton);

        changePassButton = new QPushButton(profilesGroup);
        changePassButton->setObjectName(QStringLiteral("changePassButton"));

        horizontalLayout_2->addWidget(changePassButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        profilesVLayout->addLayout(horizontalLayout_2);


        verticalLayout_4->addWidget(profilesGroup, 0, Qt::AlignTop);

        verticalLayout_4->setStretch(2, 1);
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);


        retranslateUi(IdentitySettings);

        QMetaObject::connectSlotsByName(IdentitySettings);
    } // setupUi

    void retranslateUi(QWidget *IdentitySettings)
    {
        publicGroup->setTitle(QApplication::translate("IdentitySettings", "Public Information", 0));
        userNameLabel->setText(QApplication::translate("IdentitySettings", "Name:", 0));
        statusMessageLabel->setText(QApplication::translate("IdentitySettings", "Status:", 0));
        toxGroup->setTitle(QApplication::translate("IdentitySettings", "Tox ID", 0));
#ifndef QT_NO_TOOLTIP
        toxIdLabel->setToolTip(QApplication::translate("IdentitySettings", "This bunch of characters tells other Tox clients how to contact you.\n"
"Share it with your friends to communicate.", "Tox ID tooltip"));
#endif // QT_NO_TOOLTIP
        toxIdLabel->setText(QApplication::translate("IdentitySettings", "Your Tox ID (click to copy)", 0));
        qrLabel->setText(QApplication::translate("IdentitySettings", "This QR code contains your Tox ID. You may share this with your friends as well.", 0));
        saveQr->setText(QApplication::translate("IdentitySettings", "Save image", 0));
        copyQr->setText(QApplication::translate("IdentitySettings", "Copy image", 0));
        profilesGroup->setTitle(QApplication::translate("IdentitySettings", "Profile", 0));
#ifndef QT_NO_TOOLTIP
        renameButton->setToolTip(QApplication::translate("IdentitySettings", "Rename profile.", "tooltip for renaming profile button"));
#endif // QT_NO_TOOLTIP
        renameButton->setText(QApplication::translate("IdentitySettings", "Rename", "rename profile button"));
#ifndef QT_NO_TOOLTIP
        deleteButton->setToolTip(QApplication::translate("IdentitySettings", "Delete profile.", "delete profile button tooltip"));
#endif // QT_NO_TOOLTIP
        deleteButton->setText(QApplication::translate("IdentitySettings", "Delete", "delete profile button"));
#ifndef QT_NO_TOOLTIP
        exportButton->setToolTip(QApplication::translate("IdentitySettings", "Allows you to export your Tox profile to a file.\n"
"Profile does not contain your history.", "tooltip for profile exporting button"));
#endif // QT_NO_TOOLTIP
        exportButton->setText(QApplication::translate("IdentitySettings", "Export", "export profile button"));
#ifndef QT_NO_TOOLTIP
        logoutButton->setToolTip(QApplication::translate("IdentitySettings", "Go back to the login screen", "tooltip for logout button"));
#endif // QT_NO_TOOLTIP
        logoutButton->setText(QApplication::translate("IdentitySettings", "Logout", "import profile button"));
        deletePassButton->setText(QApplication::translate("IdentitySettings", "Remove password", 0));
        changePassButton->setText(QApplication::translate("IdentitySettings", "Change password", 0));
        Q_UNUSED(IdentitySettings);
    } // retranslateUi

};

namespace Ui {
    class IdentitySettings: public Ui_IdentitySettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFILEFORM_H
