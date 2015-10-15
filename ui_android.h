/********************************************************************************
** Form generated from reading UI file 'android.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANDROID_H
#define UI_ANDROID_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Android
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QWidget *head;
    QHBoxLayout *horizontalLayout;
    QLabel *headMenuIcon;
    QLabel *headTitle;
    QSpacerItem *horizontalSpacer;
    QLabel *headRightIcon;
    QListWidget *listWidget;

    void setupUi(QWidget *Android)
    {
        if (Android->objectName().isEmpty())
            Android->setObjectName(QStringLiteral("Android"));
        Android->resize(320, 480);
        verticalLayout_2 = new QVBoxLayout(Android);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        head = new QWidget(Android);
        head->setObjectName(QStringLiteral("head"));
        head->setMinimumSize(QSize(56, 56));
        QPalette palette;
        QBrush brush(QColor(103, 58, 183, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        head->setPalette(palette);
        head->setAutoFillBackground(true);
        horizontalLayout = new QHBoxLayout(head);
        horizontalLayout->setSpacing(24);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(12, -1, 12, -1);
        headMenuIcon = new QLabel(head);
        headMenuIcon->setObjectName(QStringLiteral("headMenuIcon"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(headMenuIcon->sizePolicy().hasHeightForWidth());
        headMenuIcon->setSizePolicy(sizePolicy);
        headMenuIcon->setBaseSize(QSize(24, 24));
        headMenuIcon->setPixmap(QPixmap(QString::fromUtf8(":/img/android/menu.png")));
        headMenuIcon->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout->addWidget(headMenuIcon);

        headTitle = new QLabel(head);
        headTitle->setObjectName(QStringLiteral("headTitle"));
        sizePolicy.setHeightForWidth(headTitle->sizePolicy().hasHeightForWidth());
        headTitle->setSizePolicy(sizePolicy);
        QPalette palette1;
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        QBrush brush2(QColor(128, 128, 128, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        headTitle->setPalette(palette1);
        QFont font;
        font.setPointSize(24);
        headTitle->setFont(font);
        headTitle->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout->addWidget(headTitle);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        headRightIcon = new QLabel(head);
        headRightIcon->setObjectName(QStringLiteral("headRightIcon"));
        sizePolicy.setHeightForWidth(headRightIcon->sizePolicy().hasHeightForWidth());
        headRightIcon->setSizePolicy(sizePolicy);
        headRightIcon->setMinimumSize(QSize(24, 24));
        headRightIcon->setMaximumSize(QSize(24, 24));
        headRightIcon->setBaseSize(QSize(24, 24));
        headRightIcon->setPixmap(QPixmap(QString::fromUtf8(":/img/android/search.png")));
        headRightIcon->setScaledContents(true);

        horizontalLayout->addWidget(headRightIcon);


        verticalLayout->addWidget(head);

        listWidget = new QListWidget(Android);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        listWidget->setProperty("showDropIndicator", QVariant(false));
        listWidget->setSelectionMode(QAbstractItemView::NoSelection);
        listWidget->setGridSize(QSize(0, 36));
        listWidget->setViewMode(QListView::ListMode);
        listWidget->setUniformItemSizes(false);

        verticalLayout->addWidget(listWidget);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(Android);

        QMetaObject::connectSlotsByName(Android);
    } // setupUi

    void retranslateUi(QWidget *Android)
    {
        Android->setWindowTitle(QApplication::translate("Android", "Form", 0));
        headMenuIcon->setText(QString());
        headTitle->setText(QApplication::translate("Android", "qTox", 0));
        headRightIcon->setText(QString());

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("Android", "Someone", 0));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("Android", "Someone else", 0));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("Android", "Groupbot", 0));
        QListWidgetItem *___qlistwidgetitem3 = listWidget->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("Android", "That guy who I don't remember adding", 0));
        QListWidgetItem *___qlistwidgetitem4 = listWidget->item(4);
        ___qlistwidgetitem4->setText(QApplication::translate("Android", "NASA manager", 0));
        QListWidgetItem *___qlistwidgetitem5 = listWidget->item(5);
        ___qlistwidgetitem5->setText(QApplication::translate("Android", "Lorem", 0));
        QListWidgetItem *___qlistwidgetitem6 = listWidget->item(6);
        ___qlistwidgetitem6->setText(QApplication::translate("Android", "Ipsum", 0));
        QListWidgetItem *___qlistwidgetitem7 = listWidget->item(7);
        ___qlistwidgetitem7->setText(QApplication::translate("Android", "Dolor", 0));
        listWidget->setSortingEnabled(__sortingEnabled);

    } // retranslateUi

};

namespace Ui {
    class Android: public Ui_Android {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANDROID_H
