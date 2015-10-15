/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *label;
    QProgressBar *progress;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(401, 224);
        QIcon icon;
        icon.addFile(QStringLiteral(":/res/qtox-256x256.png"), QSize(), QIcon::Normal, QIcon::Off);
        Widget->setWindowIcon(icon);
        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 13, 191, 191));
        label->setPixmap(QPixmap(QString::fromUtf8(":/res/qtox-256x256.png")));
        label->setScaledContents(true);
        progress = new QProgressBar(Widget);
        progress->setObjectName(QStringLiteral("progress"));
        progress->setGeometry(QRect(206, 95, 171, 20));
        progress->setMinimum(0);
        progress->setValue(0);
        progress->setAlignment(Qt::AlignCenter);
        progress->setInvertedAppearance(false);
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(205, 115, 171, 20));
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(Widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(201, 170, 181, 20));
        label_3->setAlignment(Qt::AlignCenter);
        label_3->setOpenExternalLinks(true);
        label_4 = new QLabel(Widget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(200, 183, 181, 20));
        label_4->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(Widget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(195, 32, 191, 31));
        QFont font;
        font.setPointSize(14);
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignCenter);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "qTox Updater", 0));
        label->setText(QString());
        label_2->setText(QApplication::translate("Widget", "Updating qTox ...", 0));
        label_3->setText(QApplication::translate("Widget", "<a href=\"https://tox.im\">https://tox.im</a>", 0));
        label_4->setText(QApplication::translate("Widget", "<a href=\"https://github.com/tux3/qtox\">https://github.com/tux3/qtox</a>", 0));
        label_5->setText(QApplication::translate("Widget", "qTox Update", 0));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
