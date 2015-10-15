/********************************************************************************
** Form generated from reading UI file 'advancedsettings.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADVANCEDSETTINGS_H
#define UI_ADVANCEDSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "src/widget/form/settings/verticalonlyscroller.h"

QT_BEGIN_NAMESPACE

class Ui_AdvancedSettings
{
public:
    QVBoxLayout *verticalLayout;
    VerticalOnlyScroller *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *cbMakeToxPortable;
    QLabel *warningLabel;
    QPushButton *resetButton;
    QGroupBox *historyGroup;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *dbLabel;
    QComboBox *syncTypeComboBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *AdvancedSettings)
    {
        if (AdvancedSettings->objectName().isEmpty())
            AdvancedSettings->setObjectName(QStringLiteral("AdvancedSettings"));
        AdvancedSettings->resize(418, 476);
        verticalLayout = new QVBoxLayout(AdvancedSettings);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        scrollArea = new VerticalOnlyScroller(AdvancedSettings);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 396, 454));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        cbMakeToxPortable = new QCheckBox(scrollAreaWidgetContents);
        cbMakeToxPortable->setObjectName(QStringLiteral("cbMakeToxPortable"));

        verticalLayout_2->addWidget(cbMakeToxPortable);

        warningLabel = new QLabel(scrollAreaWidgetContents);
        warningLabel->setObjectName(QStringLiteral("warningLabel"));
        warningLabel->setTextFormat(Qt::RichText);
        warningLabel->setAlignment(Qt::AlignCenter);
        warningLabel->setWordWrap(true);

        verticalLayout_2->addWidget(warningLabel);

        resetButton = new QPushButton(scrollAreaWidgetContents);
        resetButton->setObjectName(QStringLiteral("resetButton"));

        verticalLayout_2->addWidget(resetButton, 0, Qt::AlignTop);

        historyGroup = new QGroupBox(scrollAreaWidgetContents);
        historyGroup->setObjectName(QStringLiteral("historyGroup"));
        verticalLayout_3 = new QVBoxLayout(historyGroup);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        dbLabel = new QLabel(historyGroup);
        dbLabel->setObjectName(QStringLiteral("dbLabel"));
        dbLabel->setTextFormat(Qt::RichText);

        horizontalLayout->addWidget(dbLabel);

        syncTypeComboBox = new QComboBox(historyGroup);
        syncTypeComboBox->setObjectName(QStringLiteral("syncTypeComboBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(syncTypeComboBox->sizePolicy().hasHeightForWidth());
        syncTypeComboBox->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(syncTypeComboBox);


        verticalLayout_3->addLayout(horizontalLayout);


        verticalLayout_2->addWidget(historyGroup, 0, Qt::AlignTop);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);


        retranslateUi(AdvancedSettings);

        QMetaObject::connectSlotsByName(AdvancedSettings);
    } // setupUi

    void retranslateUi(QWidget *AdvancedSettings)
    {
        AdvancedSettings->setWindowTitle(QApplication::translate("AdvancedSettings", "Form", 0));
#ifndef QT_NO_TOOLTIP
        cbMakeToxPortable->setToolTip(QApplication::translate("AdvancedSettings", "Save settings to the working directory instead of the usual conf dir", 0));
#endif // QT_NO_TOOLTIP
        cbMakeToxPortable->setText(QApplication::translate("AdvancedSettings", "Make Tox portable", 0));
        warningLabel->setText(QApplication::translate("AdvancedSettings", "<html><head/><body><p><span style=\" font-weight:600; color:#ff0000;\">IMPORTANT NOTE</span></p><p><span style=\" color:#ff0000;\">Unless you </span><span style=\" font-weight:600; color:#ff0000;\">really</span><span style=\" color:#ff0000;\"> know what you are doing, please do </span><span style=\" font-weight:600; color:#ff0000;\">not</span><span style=\" color:#ff0000;\"> change anything here. Changes made here may lead to problems with qTox, and even to loss of your data, e.g. history.</span></p></body></html>", 0));
        resetButton->setText(QApplication::translate("AdvancedSettings", "Reset to default settings", 0));
        historyGroup->setTitle(QApplication::translate("AdvancedSettings", "Chat history", 0));
        dbLabel->setText(QApplication::translate("AdvancedSettings", "<html><head/><body><p><a href=\"http://www.sqlite.org/pragma.html#pragma_synchronous\"><span style=\" text-decoration: underline; color:#0000ff;\">Synchronous writing to DB</span></a></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class AdvancedSettings: public Ui_AdvancedSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADVANCEDSETTINGS_H
