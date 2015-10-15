/********************************************************************************
** Form generated from reading UI file 'aboutsettings.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTSETTINGS_H
#define UI_ABOUTSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "src/widget/form/settings/verticalonlyscroller.h"

QT_BEGIN_NAMESPACE

class Ui_AboutSettings
{
public:
    QVBoxLayout *verticalLayout;
    VerticalOnlyScroller *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QGroupBox *licenseGroup;
    QVBoxLayout *verticalLayout_4;
    QTextBrowser *license;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;

    void setupUi(QWidget *AboutSettings)
    {
        if (AboutSettings->objectName().isEmpty())
            AboutSettings->setObjectName(QStringLiteral("AboutSettings"));
        AboutSettings->resize(530, 476);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AboutSettings->sizePolicy().hasHeightForWidth());
        AboutSettings->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(AboutSettings);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        scrollArea = new VerticalOnlyScroller(AboutSettings);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, -54, 492, 508));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        groupBox_3 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy1);
        groupBox_3->setMinimumSize(QSize(0, 0));
        horizontalLayout_3 = new QHBoxLayout(groupBox_3);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QStringLiteral("label_4"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy2);
        QFont font;
        font.setFamily(QStringLiteral("Sans Serif"));
        label_4->setFont(font);
        label_4->setFrameShape(QFrame::NoFrame);
        label_4->setIndent(-1);
        label_4->setOpenExternalLinks(true);
        label_4->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout_3->addWidget(label_4);


        verticalLayout_2->addWidget(groupBox_3);

        licenseGroup = new QGroupBox(scrollAreaWidgetContents);
        licenseGroup->setObjectName(QStringLiteral("licenseGroup"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(1);
        sizePolicy3.setHeightForWidth(licenseGroup->sizePolicy().hasHeightForWidth());
        licenseGroup->setSizePolicy(sizePolicy3);
        verticalLayout_4 = new QVBoxLayout(licenseGroup);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        license = new QTextBrowser(licenseGroup);
        license->setObjectName(QStringLiteral("license"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(license->sizePolicy().hasHeightForWidth());
        license->setSizePolicy(sizePolicy4);
        license->setMinimumSize(QSize(0, 0));
        license->setFocusPolicy(Qt::NoFocus);
        license->setContextMenuPolicy(Qt::NoContextMenu);
        license->setLayoutDirection(Qt::LeftToRight);
        license->setOpenExternalLinks(true);
        license->setOpenLinks(true);

        verticalLayout_4->addWidget(license);


        verticalLayout_2->addWidget(licenseGroup);

        groupBox = new QGroupBox(scrollAreaWidgetContents);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        groupBox->setMinimumSize(QSize(0, 0));
        horizontalLayout_2 = new QHBoxLayout(groupBox);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);
        label_2->setFont(font);
        label_2->setOpenExternalLinks(true);
        label_2->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout_2->addWidget(label_2);


        verticalLayout_2->addWidget(groupBox);

        groupBox_2 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        sizePolicy1.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy1);
        groupBox_2->setMinimumSize(QSize(0, 0));
        horizontalLayout = new QHBoxLayout(groupBox_2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setFont(font);
        label_3->setWordWrap(true);
        label_3->setOpenExternalLinks(true);
        label_3->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout->addWidget(label_3);


        verticalLayout_2->addWidget(groupBox_2);

        verticalLayout_2->setStretch(1, 1);
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);


        retranslateUi(AboutSettings);

        QMetaObject::connectSlotsByName(AboutSettings);
    } // setupUi

    void retranslateUi(QWidget *AboutSettings)
    {
        AboutSettings->setWindowTitle(QApplication::translate("AboutSettings", "Form", 0));
        groupBox_3->setTitle(QApplication::translate("AboutSettings", "Version", 0));
        label_4->setText(QApplication::translate("AboutSettings", "<html><head/><body><p>You are using a qTox nightly build.</p><p>Commit hash: <a href=\"https://github.com/tux3/qTox/commit/GIT_VERSION\"><span style=\" text-decoration: underline; color:#0000ff;\">GIT_VERSION</span></a></p></body></html>", 0));
        licenseGroup->setTitle(QApplication::translate("AboutSettings", "License", 0));
        license->setHtml(QApplication::translate("AboutSettings", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; color:#000000;\">Copyright \302\251 2014-2015 by The qTox Project</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; font-size:10pt;\">qTox is a Qt-based graphical interface for Tox.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">qTox is libre software: you can redistribute it and/or m"
                        "odify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">qTox is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. </span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; font-size:10pt;\">You should have received a copy of the GNU General Public License along with this program. If not, see </span><a href=\"https://www.gnu.org/copyleft/gpl.html\"><span style=\" font-family:'Ubuntu'; font-size:10pt; text-decoration: underline; color:#007af4;\">"
                        "https://www.gnu.org/copyleft/gpl.html</span></a><span style=\" font-family:'Ubuntu'; font-size:10pt;\">.</span></p></body></html>", 0));
        license->setSearchPaths(QStringList());
        groupBox->setTitle(QApplication::translate("AboutSettings", "Authors", 0));
        label_2->setText(QApplication::translate("AboutSettings", "<html><head/><body><p>Original author: <a href=\"https://github.com/tux3\"><span style=\" text-decoration: underline; color:#0000ff;\">tux3</span></a></p><p>See a full list of <a href=\"https://github.com/tux3/qTox/graphs/contributors\"><span style=\" text-decoration: underline; color:#0000ff;\">contributors</span></a> at Github</p></body></html>", 0));
        groupBox_2->setTitle(QApplication::translate("AboutSettings", "Known Issues", 0));
        label_3->setText(QApplication::translate("AboutSettings", "<html><head/><body><p>A list of all known issues may be found at our <a href=\"https://github.com/tux3/qTox/issues\"><span style=\" text-decoration: underline; color:#0000ff;\">bug-tracker</span></a> at Github. If you discover a bug or security vulnerability within qTox, please report it according to the guidelines in our <a href=\"https://github.com/tux3/qTox/wiki/Writing-Useful-Bug-Reports\"><span style=\" text-decoration: underline; color:#0000ff;\">Writing Useful Bug Reports</span></a> wiki article.</p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class AboutSettings: public Ui_AboutSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTSETTINGS_H
