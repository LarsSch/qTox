/********************************************************************************
** Form generated from reading UI file 'loginscreen.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINSCREEN_H
#define UI_LOGINSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginScreen
{
public:
    QStackedWidget *stackedWidget;
    QWidget *newPage;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_4;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *newUsername;
    QLabel *label_2;
    QLineEdit *newPass;
    QLabel *label_8;
    QLineEdit *newPassConfirm;
    QProgressBar *passStrengthMeter;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *createAccountButton;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QWidget *loginPage;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_6;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_3;
    QComboBox *loginUsernames;
    QLabel *loginPasswordLabel;
    QLineEdit *loginPassword;
    QCheckBox *autoLoginCB;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *loginButton;
    QFrame *line;
    QPushButton *newProfilePgbtn;
    QPushButton *loginPgbtn;
    QLabel *label_7;

    void setupUi(QWidget *LoginScreen)
    {
        if (LoginScreen->objectName().isEmpty())
            LoginScreen->setObjectName(QStringLiteral("LoginScreen"));
        LoginScreen->resize(410, 200);
        LoginScreen->setMinimumSize(QSize(410, 200));
        LoginScreen->setMaximumSize(QSize(415, 200));
        QPalette palette;
        QBrush brush(QColor(28, 28, 28, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        QBrush brush2(QColor(128, 128, 128, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        LoginScreen->setPalette(palette);
        QIcon icon;
        icon.addFile(QStringLiteral(":/img/icons/qtox.svg"), QSize(), QIcon::Normal, QIcon::Off);
        LoginScreen->setWindowIcon(icon);
        LoginScreen->setAutoFillBackground(true);
        stackedWidget = new QStackedWidget(LoginScreen);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(160, 0, 250, 200));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush3(QColor(0, 0, 0, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        QBrush brush4(QColor(214, 210, 207, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush4);
        stackedWidget->setPalette(palette1);
        stackedWidget->setAutoFillBackground(true);
        newPage = new QWidget();
        newPage->setObjectName(QStringLiteral("newPage"));
        horizontalLayout_5 = new QHBoxLayout(newPage);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(newPage);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setStyleSheet(QLatin1String("border-style: solid;\n"
"border-width: 15px 0 15px 15px;\n"
"border-color: #d6d2cf #d6d2cf #d6d2cf #1c1c1c;\n"
"margin-top:125px;\n"
"margin-bottom:45px;"));

        horizontalLayout_5->addWidget(label_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setSizeConstraint(QLayout::SetMaximumSize);
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        formLayout->setFormAlignment(Qt::AlignCenter);
        formLayout->setHorizontalSpacing(9);
        formLayout->setVerticalSpacing(9);
        formLayout->setContentsMargins(9, 9, 9, 9);
        label = new QLabel(newPage);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        newUsername = new QLineEdit(newPage);
        newUsername->setObjectName(QStringLiteral("newUsername"));
        newUsername->setMaxLength(64);

        formLayout->setWidget(1, QFormLayout::FieldRole, newUsername);

        label_2 = new QLabel(newPage);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        newPass = new QLineEdit(newPage);
        newPass->setObjectName(QStringLiteral("newPass"));
        newPass->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(2, QFormLayout::FieldRole, newPass);

        label_8 = new QLabel(newPage);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(3, QFormLayout::LabelRole, label_8);

        newPassConfirm = new QLineEdit(newPage);
        newPassConfirm->setObjectName(QStringLiteral("newPassConfirm"));
        newPassConfirm->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(3, QFormLayout::FieldRole, newPassConfirm);

        passStrengthMeter = new QProgressBar(newPage);
        passStrengthMeter->setObjectName(QStringLiteral("passStrengthMeter"));
        passStrengthMeter->setValue(0);

        formLayout->setWidget(7, QFormLayout::SpanningRole, passStrengthMeter);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        createAccountButton = new QPushButton(newPage);
        createAccountButton->setObjectName(QStringLiteral("createAccountButton"));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        QBrush brush5(QColor(108, 200, 101, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush5);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush5);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush5);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush5);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush5);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush5);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush5);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush5);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush5);
        createAccountButton->setPalette(palette2);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        createAccountButton->setFont(font);
        createAccountButton->setAutoFillBackground(false);
        createAccountButton->setStyleSheet(QLatin1String("border-radius:5px;\n"
"padding:5px;\n"
"color:white;\n"
"background-color:#6cc865;"));
        createAccountButton->setFlat(true);

        horizontalLayout->addWidget(createAccountButton);


        formLayout->setLayout(9, QFormLayout::SpanningRole, horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(8, QFormLayout::SpanningRole, verticalSpacer);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(0, QFormLayout::SpanningRole, verticalSpacer_2);


        horizontalLayout_4->addLayout(formLayout);


        horizontalLayout_5->addLayout(horizontalLayout_4);

        stackedWidget->addWidget(newPage);
        loginPage = new QWidget();
        loginPage->setObjectName(QStringLiteral("loginPage"));
        horizontalLayout_3 = new QHBoxLayout(loginPage);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_6 = new QLabel(loginPage);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setStyleSheet(QLatin1String("border-style: solid;\n"
"border-width: 15px 0 15px 15px;\n"
"border-color: #d6d2cf #d6d2cf #d6d2cf #1c1c1c;\n"
"margin-top:165px;\n"
"margin-bottom:5px;"));

        horizontalLayout_2->addWidget(label_6);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(9, 9, 9, 9);
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        label_3 = new QLabel(loginPage);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_3);

        loginUsernames = new QComboBox(loginPage);
        loginUsernames->setObjectName(QStringLiteral("loginUsernames"));

        verticalLayout_2->addWidget(loginUsernames);

        loginPasswordLabel = new QLabel(loginPage);
        loginPasswordLabel->setObjectName(QStringLiteral("loginPasswordLabel"));
        loginPasswordLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(loginPasswordLabel);

        loginPassword = new QLineEdit(loginPage);
        loginPassword->setObjectName(QStringLiteral("loginPassword"));
        loginPassword->setEchoMode(QLineEdit::Password);

        verticalLayout_2->addWidget(loginPassword);

        autoLoginCB = new QCheckBox(loginPage);
        autoLoginCB->setObjectName(QStringLiteral("autoLoginCB"));

        verticalLayout_2->addWidget(autoLoginCB);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);

        loginButton = new QPushButton(loginPage);
        loginButton->setObjectName(QStringLiteral("loginButton"));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush5);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush5);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush5);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush5);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush5);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush5);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush5);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush5);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush5);
        loginButton->setPalette(palette3);
        loginButton->setFont(font);
        loginButton->setAutoFillBackground(false);
        loginButton->setStyleSheet(QLatin1String("border-radius:5px;\n"
"padding:5px;\n"
"color:white;\n"
"background-color:#6cc865;"));
        loginButton->setFlat(true);

        horizontalLayout_6->addWidget(loginButton);


        verticalLayout_2->addLayout(horizontalLayout_6);


        horizontalLayout_2->addLayout(verticalLayout_2);


        horizontalLayout_3->addLayout(horizontalLayout_2);

        stackedWidget->addWidget(loginPage);
        line = new QFrame(LoginScreen);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(10, 160, 135, 1));
        QPalette palette4;
        QBrush brush6(QColor(117, 117, 117, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        line->setPalette(palette4);
        line->setFrameShadow(QFrame::Plain);
        line->setFrameShape(QFrame::HLine);
        newProfilePgbtn = new QPushButton(LoginScreen);
        newProfilePgbtn->setObjectName(QStringLiteral("newProfilePgbtn"));
        newProfilePgbtn->setGeometry(QRect(0, 130, 160, 22));
        newProfilePgbtn->setFont(font);
        newProfilePgbtn->setStyleSheet(QLatin1String("border:none;\n"
"color:white;"));
        newProfilePgbtn->setFlat(true);
        loginPgbtn = new QPushButton(LoginScreen);
        loginPgbtn->setObjectName(QStringLiteral("loginPgbtn"));
        loginPgbtn->setGeometry(QRect(0, 170, 160, 22));
        loginPgbtn->setFont(font);
        loginPgbtn->setStyleSheet(QLatin1String("border:none;\n"
"color:white;"));
        loginPgbtn->setFlat(true);
        label_7 = new QLabel(LoginScreen);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(30, 15, 100, 100));
        label_7->setPixmap(QPixmap(QString::fromUtf8(":/img/login_logo.svg")));
        label_7->setScaledContents(true);

        retranslateUi(LoginScreen);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(LoginScreen);
    } // setupUi

    void retranslateUi(QWidget *LoginScreen)
    {
        LoginScreen->setWindowTitle(QApplication::translate("LoginScreen", "qTox", 0));
        label_5->setText(QString());
        label->setText(QApplication::translate("LoginScreen", "Username:", 0));
        label_2->setText(QApplication::translate("LoginScreen", "Password:", 0));
        label_8->setText(QApplication::translate("LoginScreen", "Confirm:", 0));
        passStrengthMeter->setFormat(QApplication::translate("LoginScreen", "Password strength: %p%", 0));
        createAccountButton->setText(QApplication::translate("LoginScreen", "Create Account", 0));
        label_6->setText(QString());
        label_3->setText(QApplication::translate("LoginScreen", "Username:", 0));
        loginPasswordLabel->setText(QApplication::translate("LoginScreen", "Password:", 0));
#ifndef QT_NO_TOOLTIP
        autoLoginCB->setToolTip(QApplication::translate("LoginScreen", "If the profile does not have a password, qTox can skip the login screen", 0));
#endif // QT_NO_TOOLTIP
        autoLoginCB->setText(QApplication::translate("LoginScreen", "Login automatically", 0));
        loginButton->setText(QApplication::translate("LoginScreen", "Login", 0));
        newProfilePgbtn->setText(QApplication::translate("LoginScreen", "New Profile", 0));
        loginPgbtn->setText(QApplication::translate("LoginScreen", "Login", 0));
        label_7->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LoginScreen: public Ui_LoginScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINSCREEN_H
