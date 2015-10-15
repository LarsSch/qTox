/********************************************************************************
** Form generated from reading UI file 'avsettings.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AVSETTINGS_H
#define UI_AVSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "src/widget/form/settings/verticalonlyscroller.h"

QT_BEGIN_NAMESPACE

class Ui_AVSettings
{
public:
    QVBoxLayout *verticalLayout_2;
    VerticalOnlyScroller *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *audioGroup;
    QGridLayout *gridLayout_3;
    QLabel *playbackMin;
    QCheckBox *filterAudio;
    QComboBox *outDevCombobox;
    QSlider *playbackSlider;
    QLabel *microphoneLabel;
    QLabel *playbackMax;
    QPushButton *rescanButton;
    QLabel *microphoneMax;
    QSlider *microphoneSlider;
    QLabel *inDevLabel;
    QLabel *microphoneMin;
    QLabel *playbackLabel;
    QComboBox *inDevCombobox;
    QLabel *outDevLabel;
    QGroupBox *videoGroup;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_2;
    QLabel *videoDevLabel;
    QLabel *resolutionLabel;
    QComboBox *videoModescomboBox;
    QComboBox *videoDevCombobox;
    QFrame *CamFrame;
    QGridLayout *gridLayout;

    void setupUi(QWidget *AVSettings)
    {
        if (AVSettings->objectName().isEmpty())
            AVSettings->setObjectName(QStringLiteral("AVSettings"));
        AVSettings->resize(842, 507);
        AVSettings->setWindowTitle(QStringLiteral("Form"));
        verticalLayout_2 = new QVBoxLayout(AVSettings);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        scrollArea = new VerticalOnlyScroller(AVSettings);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setAutoFillBackground(true);
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 824, 489));
        verticalLayout_5 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        audioGroup = new QGroupBox(scrollAreaWidgetContents);
        audioGroup->setObjectName(QStringLiteral("audioGroup"));
        gridLayout_3 = new QGridLayout(audioGroup);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        playbackMin = new QLabel(audioGroup);
        playbackMin->setObjectName(QStringLiteral("playbackMin"));

        gridLayout_3->addWidget(playbackMin, 2, 1, 1, 1);

        filterAudio = new QCheckBox(audioGroup);
        filterAudio->setObjectName(QStringLiteral("filterAudio"));

        gridLayout_3->addWidget(filterAudio, 5, 0, 1, 1);

        outDevCombobox = new QComboBox(audioGroup);
        outDevCombobox->setObjectName(QStringLiteral("outDevCombobox"));

        gridLayout_3->addWidget(outDevCombobox, 1, 2, 1, 1);

        playbackSlider = new QSlider(audioGroup);
        playbackSlider->setObjectName(QStringLiteral("playbackSlider"));
        playbackSlider->setMaximum(100);
        playbackSlider->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(playbackSlider, 2, 2, 1, 1);

        microphoneLabel = new QLabel(audioGroup);
        microphoneLabel->setObjectName(QStringLiteral("microphoneLabel"));

        gridLayout_3->addWidget(microphoneLabel, 4, 0, 1, 1);

        playbackMax = new QLabel(audioGroup);
        playbackMax->setObjectName(QStringLiteral("playbackMax"));

        gridLayout_3->addWidget(playbackMax, 2, 3, 1, 1);

        rescanButton = new QPushButton(audioGroup);
        rescanButton->setObjectName(QStringLiteral("rescanButton"));

        gridLayout_3->addWidget(rescanButton, 0, 2, 1, 1);

        microphoneMax = new QLabel(audioGroup);
        microphoneMax->setObjectName(QStringLiteral("microphoneMax"));

        gridLayout_3->addWidget(microphoneMax, 4, 3, 1, 1);

        microphoneSlider = new QSlider(audioGroup);
        microphoneSlider->setObjectName(QStringLiteral("microphoneSlider"));
        microphoneSlider->setMaximum(100);
        microphoneSlider->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(microphoneSlider, 4, 2, 1, 1);

        inDevLabel = new QLabel(audioGroup);
        inDevLabel->setObjectName(QStringLiteral("inDevLabel"));

        gridLayout_3->addWidget(inDevLabel, 3, 0, 1, 1);

        microphoneMin = new QLabel(audioGroup);
        microphoneMin->setObjectName(QStringLiteral("microphoneMin"));

        gridLayout_3->addWidget(microphoneMin, 4, 1, 1, 1);

        playbackLabel = new QLabel(audioGroup);
        playbackLabel->setObjectName(QStringLiteral("playbackLabel"));

        gridLayout_3->addWidget(playbackLabel, 2, 0, 1, 1);

        inDevCombobox = new QComboBox(audioGroup);
        inDevCombobox->setObjectName(QStringLiteral("inDevCombobox"));

        gridLayout_3->addWidget(inDevCombobox, 3, 2, 1, 1);

        outDevLabel = new QLabel(audioGroup);
        outDevLabel->setObjectName(QStringLiteral("outDevLabel"));

        gridLayout_3->addWidget(outDevLabel, 1, 0, 1, 1);


        verticalLayout_5->addWidget(audioGroup);

        videoGroup = new QGroupBox(scrollAreaWidgetContents);
        videoGroup->setObjectName(QStringLiteral("videoGroup"));
        verticalLayout = new QVBoxLayout(videoGroup);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        videoDevLabel = new QLabel(videoGroup);
        videoDevLabel->setObjectName(QStringLiteral("videoDevLabel"));

        gridLayout_2->addWidget(videoDevLabel, 0, 0, 1, 1);

        resolutionLabel = new QLabel(videoGroup);
        resolutionLabel->setObjectName(QStringLiteral("resolutionLabel"));

        gridLayout_2->addWidget(resolutionLabel, 1, 0, 1, 1);

        videoModescomboBox = new QComboBox(videoGroup);
        videoModescomboBox->setObjectName(QStringLiteral("videoModescomboBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(videoModescomboBox->sizePolicy().hasHeightForWidth());
        videoModescomboBox->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(videoModescomboBox, 1, 1, 1, 1);

        videoDevCombobox = new QComboBox(videoGroup);
        videoDevCombobox->setObjectName(QStringLiteral("videoDevCombobox"));

        gridLayout_2->addWidget(videoDevCombobox, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        CamFrame = new QFrame(videoGroup);
        CamFrame->setObjectName(QStringLiteral("CamFrame"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(150);
        sizePolicy1.setHeightForWidth(CamFrame->sizePolicy().hasHeightForWidth());
        CamFrame->setSizePolicy(sizePolicy1);
        CamFrame->setFrameShape(QFrame::NoFrame);
        CamFrame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(CamFrame);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));

        verticalLayout->addWidget(CamFrame);


        verticalLayout_5->addWidget(videoGroup);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_2->addWidget(scrollArea);


        retranslateUi(AVSettings);

        QMetaObject::connectSlotsByName(AVSettings);
    } // setupUi

    void retranslateUi(QWidget *AVSettings)
    {
        audioGroup->setTitle(QApplication::translate("AVSettings", "Audio Settings", 0));
        playbackMin->setText(QApplication::translate("AVSettings", "0", 0));
#ifndef QT_NO_TOOLTIP
        filterAudio->setToolTip(QApplication::translate("AVSettings", "Filter sound from your microphone, so that people hearing you would get better sound.", 0));
#endif // QT_NO_TOOLTIP
        filterAudio->setText(QApplication::translate("AVSettings", "Filter audio", 0));
#ifndef QT_NO_TOOLTIP
        playbackSlider->setToolTip(QApplication::translate("AVSettings", "Use slider to set volume of your speakers.", 0));
#endif // QT_NO_TOOLTIP
        microphoneLabel->setText(QApplication::translate("AVSettings", "Microphone", 0));
        playbackMax->setText(QApplication::translate("AVSettings", "100", 0));
        rescanButton->setText(QApplication::translate("AVSettings", "Rescan audio devices", 0));
        microphoneMax->setText(QApplication::translate("AVSettings", "100", 0));
#ifndef QT_NO_TOOLTIP
        microphoneSlider->setToolTip(QApplication::translate("AVSettings", "Use slider to set volume of your microphone.\n"
"WARNING: slider is not supposed to work yet.", 0));
#endif // QT_NO_TOOLTIP
        inDevLabel->setText(QApplication::translate("AVSettings", "Capture device", 0));
        microphoneMin->setText(QApplication::translate("AVSettings", "0", 0));
        playbackLabel->setText(QApplication::translate("AVSettings", "Playback", 0));
        outDevLabel->setText(QApplication::translate("AVSettings", "Playback device", 0));
        videoGroup->setTitle(QApplication::translate("AVSettings", "Video Settings", 0));
        videoDevLabel->setText(QApplication::translate("AVSettings", "Video device", 0));
#ifndef QT_NO_TOOLTIP
        resolutionLabel->setToolTip(QApplication::translate("AVSettings", "Set resolution of your camera.\n"
"The higher values, the better video quality your friends may get.\n"
"Note though that with better video quality there is needed better internet connection.\n"
"Sometimes your connection may not be good enough to handle higher video quality,\n"
"which may lead to problems with video calls.", 0));
#endif // QT_NO_TOOLTIP
        resolutionLabel->setText(QApplication::translate("AVSettings", "Resolution", 0));
#ifndef QT_NO_TOOLTIP
        videoModescomboBox->setToolTip(QApplication::translate("AVSettings", "Set resolution of your camera.\n"
"The higher values, the better video quality your friends may get.\n"
"Note though that with better video quality there is needed better internet connection.\n"
"Sometimes your connection may not be good enough to handle higher video quality,\n"
"which may lead to problems with video calls.", 0));
#endif // QT_NO_TOOLTIP
        Q_UNUSED(AVSettings);
    } // retranslateUi

};

namespace Ui {
    class AVSettings: public Ui_AVSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AVSETTINGS_H
