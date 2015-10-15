/********************************************************************************
** Form generated from reading UI file 'filetransferwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILETRANSFERWIDGET_H
#define UI_FILETRANSFERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include <src/widget/tool/croppinglabel.h>

QT_BEGIN_NAMESPACE

class Ui_FileTransferWidget
{
public:
    QHBoxLayout *horizontalLayout_2;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout_3;
    QSpacerItem *verticalSpacer_2;
    QGridLayout *gridLayout_2;
    QWidget *statusWidget;
    QHBoxLayout *_2;
    QLabel *fileSizeLabel;
    QLabel *progressLabel;
    QLabel *etaLabel;
    QProgressBar *progressBar;
    CroppingLabel *filenameLabel;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *verticalSpacer_7;
    QLabel *previewLabel;
    QSpacerItem *verticalSpacer;
    QWidget *buttonWidget;
    QGridLayout *gridLayout;
    QPushButton *bottomButton;
    QPushButton *topButton;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QWidget *FileTransferWidget)
    {
        if (FileTransferWidget->objectName().isEmpty())
            FileTransferWidget->setObjectName(QStringLiteral("FileTransferWidget"));
        FileTransferWidget->resize(625, 243);
        horizontalLayout_2 = new QHBoxLayout(FileTransferWidget);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        frame_3 = new QFrame(FileTransferWidget);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame_3->sizePolicy().hasHeightForWidth());
        frame_3->setSizePolicy(sizePolicy);
        frame_3->setStyleSheet(QStringLiteral(""));
        frame_3->setFrameShape(QFrame::NoFrame);
        frame_3->setFrameShadow(QFrame::Plain);
        frame_3->setLineWidth(0);
        horizontalLayout = new QHBoxLayout(frame_3);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setHorizontalSpacing(6);
        gridLayout_3->setVerticalSpacing(0);
        gridLayout_3->setContentsMargins(10, -1, 6, 0);
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_2, 0, 1, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout_2->setHorizontalSpacing(6);
        gridLayout_2->setVerticalSpacing(3);
        gridLayout_2->setContentsMargins(6, 0, 6, 0);
        statusWidget = new QWidget(frame_3);
        statusWidget->setObjectName(QStringLiteral("statusWidget"));
        _2 = new QHBoxLayout(statusWidget);
        _2->setSpacing(0);
        _2->setObjectName(QStringLiteral("_2"));
        _2->setContentsMargins(0, 0, 0, 0);
        fileSizeLabel = new QLabel(statusWidget);
        fileSizeLabel->setObjectName(QStringLiteral("fileSizeLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(fileSizeLabel->sizePolicy().hasHeightForWidth());
        fileSizeLabel->setSizePolicy(sizePolicy1);
        fileSizeLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        _2->addWidget(fileSizeLabel);

        progressLabel = new QLabel(statusWidget);
        progressLabel->setObjectName(QStringLiteral("progressLabel"));
        sizePolicy1.setHeightForWidth(progressLabel->sizePolicy().hasHeightForWidth());
        progressLabel->setSizePolicy(sizePolicy1);
        progressLabel->setAlignment(Qt::AlignCenter);

        _2->addWidget(progressLabel);

        etaLabel = new QLabel(statusWidget);
        etaLabel->setObjectName(QStringLiteral("etaLabel"));
        sizePolicy1.setHeightForWidth(etaLabel->sizePolicy().hasHeightForWidth());
        etaLabel->setSizePolicy(sizePolicy1);
        etaLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        _2->addWidget(etaLabel);


        gridLayout_2->addWidget(statusWidget, 1, 0, 1, 1);

        progressBar = new QProgressBar(frame_3);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setMaximumSize(QSize(16777215, 12));
        progressBar->setStyleSheet(QStringLiteral(""));
        progressBar->setValue(24);
        progressBar->setOrientation(Qt::Horizontal);
        progressBar->setInvertedAppearance(false);

        gridLayout_2->addWidget(progressBar, 2, 0, 1, 1);

        filenameLabel = new CroppingLabel(frame_3);
        filenameLabel->setObjectName(QStringLiteral("filenameLabel"));
        sizePolicy1.setHeightForWidth(filenameLabel->sizePolicy().hasHeightForWidth());
        filenameLabel->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(filenameLabel, 0, 0, 1, 1);

        verticalSpacer_5 = new QSpacerItem(1, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_5, 0, 1, 1, 1);

        verticalSpacer_6 = new QSpacerItem(1, 21, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_6, 1, 1, 1, 1);

        verticalSpacer_7 = new QSpacerItem(1, 20, QSizePolicy::Minimum, QSizePolicy::Preferred);

        gridLayout_2->addItem(verticalSpacer_7, 2, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 1, 1, 1, 1);

        previewLabel = new QLabel(frame_3);
        previewLabel->setObjectName(QStringLiteral("previewLabel"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(previewLabel->sizePolicy().hasHeightForWidth());
        previewLabel->setSizePolicy(sizePolicy2);
        previewLabel->setMinimumSize(QSize(60, 60));
        previewLabel->setMaximumSize(QSize(60, 60));
        previewLabel->setFrameShape(QFrame::Box);
        previewLabel->setLineWidth(2);

        gridLayout_3->addWidget(previewLabel, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 2, 1, 1, 1);

        gridLayout_3->setRowStretch(0, 1);
        gridLayout_3->setRowStretch(2, 1);

        horizontalLayout->addLayout(gridLayout_3);

        buttonWidget = new QWidget(frame_3);
        buttonWidget->setObjectName(QStringLiteral("buttonWidget"));
        gridLayout = new QGridLayout(buttonWidget);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        bottomButton = new QPushButton(buttonWidget);
        bottomButton->setObjectName(QStringLiteral("bottomButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(bottomButton->sizePolicy().hasHeightForWidth());
        bottomButton->setSizePolicy(sizePolicy3);
        bottomButton->setMaximumSize(QSize(32, 16777215));
        bottomButton->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon;
        icon.addFile(QStringLiteral(":/ui/fileTransferInstance/no.svg"), QSize(), QIcon::Normal, QIcon::Off);
        bottomButton->setIcon(icon);
        bottomButton->setIconSize(QSize(32, 18));

        gridLayout->addWidget(bottomButton, 1, 0, 1, 1);

        topButton = new QPushButton(buttonWidget);
        topButton->setObjectName(QStringLiteral("topButton"));
        sizePolicy3.setHeightForWidth(topButton->sizePolicy().hasHeightForWidth());
        topButton->setSizePolicy(sizePolicy3);
        topButton->setMaximumSize(QSize(32, 16777215));
        topButton->setCursor(QCursor(Qt::PointingHandCursor));
        topButton->setIcon(icon);
        topButton->setIconSize(QSize(32, 18));

        gridLayout->addWidget(topButton, 0, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(0, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 0, 1, 1, 1);

        verticalSpacer_4 = new QSpacerItem(0, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 1, 1, 1, 1);


        horizontalLayout->addWidget(buttonWidget);


        horizontalLayout_2->addWidget(frame_3);


        retranslateUi(FileTransferWidget);

        QMetaObject::connectSlotsByName(FileTransferWidget);
    } // setupUi

    void retranslateUi(QWidget *FileTransferWidget)
    {
        FileTransferWidget->setWindowTitle(QApplication::translate("FileTransferWidget", "Form", 0));
        fileSizeLabel->setText(QApplication::translate("FileTransferWidget", "10Mb", 0));
        progressLabel->setText(QApplication::translate("FileTransferWidget", "0kb/s", 0));
        etaLabel->setText(QApplication::translate("FileTransferWidget", "ETA:10:10", 0));
        progressBar->setFormat(QString());
        filenameLabel->setText(QApplication::translate("FileTransferWidget", "Filename", 0));
        previewLabel->setText(QApplication::translate("FileTransferWidget", "[preview]", 0));
        bottomButton->setText(QString());
        topButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FileTransferWidget: public Ui_FileTransferWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILETRANSFERWIDGET_H
