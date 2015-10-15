/********************************************************************************
** Form generated from reading UI file 'loadhistorydialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOADHISTORYDIALOG_H
#define UI_LOADHISTORYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LoadHistoryDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QLabel *fromLabel;
    QCalendarWidget *fromDate;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *LoadHistoryDialog)
    {
        if (LoadHistoryDialog->objectName().isEmpty())
            LoadHistoryDialog->setObjectName(QStringLiteral("LoadHistoryDialog"));
        LoadHistoryDialog->resize(347, 264);
        LoadHistoryDialog->setModal(true);
        verticalLayout_3 = new QVBoxLayout(LoadHistoryDialog);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        fromLabel = new QLabel(LoadHistoryDialog);
        fromLabel->setObjectName(QStringLiteral("fromLabel"));

        verticalLayout_3->addWidget(fromLabel);

        fromDate = new QCalendarWidget(LoadHistoryDialog);
        fromDate->setObjectName(QStringLiteral("fromDate"));
        fromDate->setGridVisible(false);

        verticalLayout_3->addWidget(fromDate);

        buttonBox = new QDialogButtonBox(LoadHistoryDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_3->addWidget(buttonBox);


        retranslateUi(LoadHistoryDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), LoadHistoryDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), LoadHistoryDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(LoadHistoryDialog);
    } // setupUi

    void retranslateUi(QDialog *LoadHistoryDialog)
    {
        LoadHistoryDialog->setWindowTitle(QApplication::translate("LoadHistoryDialog", "Load History Dialog", 0));
        fromLabel->setText(QApplication::translate("LoadHistoryDialog", "Load history from:", 0));
    } // retranslateUi

};

namespace Ui {
    class LoadHistoryDialog: public Ui_LoadHistoryDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOADHISTORYDIALOG_H
