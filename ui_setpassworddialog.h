/********************************************************************************
** Form generated from reading UI file 'setpassworddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETPASSWORDDIALOG_H
#define UI_SETPASSWORDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SetPasswordDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *body;
    QGridLayout *pswdsLayout;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *repasswordlineEdit;
    QLineEdit *passwordlineEdit;
    QLabel *label_3;
    QProgressBar *strengthBar;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SetPasswordDialog)
    {
        if (SetPasswordDialog->objectName().isEmpty())
            SetPasswordDialog->setObjectName(QStringLiteral("SetPasswordDialog"));
        SetPasswordDialog->resize(325, 160);
        SetPasswordDialog->setModal(true);
        verticalLayout = new QVBoxLayout(SetPasswordDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        body = new QLabel(SetPasswordDialog);
        body->setObjectName(QStringLiteral("body"));

        verticalLayout->addWidget(body);

        pswdsLayout = new QGridLayout();
        pswdsLayout->setObjectName(QStringLiteral("pswdsLayout"));
        label_2 = new QLabel(SetPasswordDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignRight);

        pswdsLayout->addWidget(label_2, 4, 0, 1, 1);

        label = new QLabel(SetPasswordDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignRight);

        pswdsLayout->addWidget(label, 2, 0, 1, 1);

        repasswordlineEdit = new QLineEdit(SetPasswordDialog);
        repasswordlineEdit->setObjectName(QStringLiteral("repasswordlineEdit"));
        repasswordlineEdit->setEchoMode(QLineEdit::Password);

        pswdsLayout->addWidget(repasswordlineEdit, 4, 1, 1, 1);

        passwordlineEdit = new QLineEdit(SetPasswordDialog);
        passwordlineEdit->setObjectName(QStringLiteral("passwordlineEdit"));
        passwordlineEdit->setEchoMode(QLineEdit::Password);

        pswdsLayout->addWidget(passwordlineEdit, 2, 1, 1, 1);

        label_3 = new QLabel(SetPasswordDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignRight);

        pswdsLayout->addWidget(label_3, 6, 0, 1, 1);

        strengthBar = new QProgressBar(SetPasswordDialog);
        strengthBar->setObjectName(QStringLiteral("strengthBar"));
        strengthBar->setValue(0);

        pswdsLayout->addWidget(strengthBar, 6, 1, 1, 1);


        verticalLayout->addLayout(pswdsLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(SetPasswordDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(false);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(passwordlineEdit, repasswordlineEdit);

        retranslateUi(SetPasswordDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), SetPasswordDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SetPasswordDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(SetPasswordDialog);
    } // setupUi

    void retranslateUi(QDialog *SetPasswordDialog)
    {
        SetPasswordDialog->setWindowTitle(QApplication::translate("SetPasswordDialog", "Set your password", 0));
        label_2->setText(QApplication::translate("SetPasswordDialog", "Repeat password", 0));
        label->setText(QApplication::translate("SetPasswordDialog", "Type password", 0));
        label_3->setText(QApplication::translate("SetPasswordDialog", "Password strength", 0));
        strengthBar->setFormat(QString());
    } // retranslateUi

};

namespace Ui {
    class SetPasswordDialog: public Ui_SetPasswordDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETPASSWORDDIALOG_H
