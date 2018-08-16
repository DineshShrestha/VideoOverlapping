/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QPushButton *pushButton_4;
    QLabel *label;
    QPushButton *pushButton;
    QLabel *label_4;
    QLabel *label_5;
    QSlider *horizontalSlider;
    QGroupBox *groupBox_2;
    QPushButton *pushButton_5;
    QSlider *horizontalSlider_2;
    QLabel *label_6;
    QLabel *label_2;
    QLabel *label_7;
    QPushButton *pushButton_2;
    QGroupBox *groupBox_3;
    QLabel *label_9;
    QPushButton *pushButton_7;
    QLabel *label_8;
    QSlider *horizontalSlider_3;
    QPushButton *pushButton_3;
    QLabel *label_3;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1320, 558);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 400, 510));
        pushButton_4 = new QPushButton(groupBox);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(200, 470, 150, 28));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 30, 360, 381));
        label->setAutoFillBackground(true);
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(12, 470, 150, 28));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(40, 429, 55, 16));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(260, 429, 55, 16));
        horizontalSlider = new QSlider(groupBox);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(90, 429, 160, 22));
        horizontalSlider->setOrientation(Qt::Horizontal);
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(420, 10, 440, 510));
        pushButton_5 = new QPushButton(groupBox_2);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(239, 470, 150, 28));
        horizontalSlider_2 = new QSlider(groupBox_2);
        horizontalSlider_2->setObjectName(QStringLiteral("horizontalSlider_2"));
        horizontalSlider_2->setGeometry(QRect(130, 430, 160, 22));
        horizontalSlider_2->setOrientation(Qt::Horizontal);
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(300, 430, 55, 16));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 29, 360, 371));
        label_2->setAutoFillBackground(true);
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(80, 430, 55, 16));
        pushButton_2 = new QPushButton(groupBox_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(50, 470, 150, 28));
        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(870, 10, 440, 510));
        label_9 = new QLabel(groupBox_3);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(80, 430, 55, 16));
        pushButton_7 = new QPushButton(groupBox_3);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(240, 470, 150, 28));
        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(300, 430, 55, 16));
        horizontalSlider_3 = new QSlider(groupBox_3);
        horizontalSlider_3->setObjectName(QStringLiteral("horizontalSlider_3"));
        horizontalSlider_3->setGeometry(QRect(130, 430, 160, 22));
        horizontalSlider_3->setOrientation(Qt::Horizontal);
        pushButton_3 = new QPushButton(groupBox_3);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(57, 470, 150, 28));
        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 30, 360, 371));
        label_3->setAutoFillBackground(true);
        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "Eulerain Magnified Video", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainWindow", "Load", Q_NULLPTR));
        label->setText(QString());
        pushButton->setText(QApplication::translate("MainWindow", "Play EVM", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "FLIR Interpolated Video", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("MainWindow", "Load", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label_2->setText(QString());
        label_7->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "Play FLIR", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Overlapped Video", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("MainWindow", "Overlap Videos", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "Play Processed Video", Q_NULLPTR));
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
