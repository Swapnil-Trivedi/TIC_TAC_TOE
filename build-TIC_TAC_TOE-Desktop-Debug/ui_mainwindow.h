/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *pushButton_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *play;
    QPushButton *exit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(662, 491);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(662, 491));
        MainWindow->setMaximumSize(QSize(662, 491));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icon_pack/icon/tic-tac-toe-game-svgrepo-com.svg"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QLatin1String("background-color:rgb(113, 194, 247);\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 30, 581, 201));
        label->setStyleSheet(QStringLiteral("border: 5px dashed #ff6550;"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/icon_pack/icon/kisspng-logo-tic-tac-ultimate-tic-tac-toe-font-game-logo-5ac438cc956539.2794858415228090366119.png")));
        label->setScaledContents(true);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(280, 360, 101, 51));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy1);
        pushButton_2->setStyleSheet(QLatin1String("QPushButton {\n"
"    background-color:#44c767;\n"
"	border-radius : 25px;\n"
"	border:3px solid #18ab29;\n"
"}\n"
"QPushButton:hover{\n"
"background:linear-gradient(to bottom, #5cb811 5%, #77d42a 100%);\n"
"	background-color:#5cb811;\n"
"}\n"
"\n"
"\n"
""));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(121, 291, 421, 61));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(5, 5, 5, 5);
        play = new QPushButton(widget);
        play->setObjectName(QStringLiteral("play"));
        sizePolicy1.setHeightForWidth(play->sizePolicy().hasHeightForWidth());
        play->setSizePolicy(sizePolicy1);
        play->setStyleSheet(QLatin1String("QPushButton {\n"
"    \n"
"	background-color:#5cb811;\n"
"    border-radius : 25px;\n"
"	border:3px solid #18ab29;\n"
"}\n"
"QPushButton:hover{\n"
"background:linear-gradient(to bottom, #5cb811 5%, #77d42a 100%);\n"
"background-color:#44c767;\n"
"}\n"
"\n"
""));

        horizontalLayout->addWidget(play);

        exit = new QPushButton(widget);
        exit->setObjectName(QStringLiteral("exit"));
        sizePolicy1.setHeightForWidth(exit->sizePolicy().hasHeightForWidth());
        exit->setSizePolicy(sizePolicy1);
        exit->setStyleSheet(QLatin1String("QPushButton {\n"
"    background-color:#fe1a00;\n"
"	border-radius : 25px;\n"
"	border:3px solid #d02718;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"\n"
"background:linear-gradient(to bottom, #c62d1f 5%, #f24537 100%);\n"
"	background-color:#c62d1f;\n"
"}\n"
""));

        horizontalLayout->addWidget(exit);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 662, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label->setText(QString());
        pushButton_2->setText(QApplication::translate("MainWindow", "ABOUT", Q_NULLPTR));
        play->setText(QApplication::translate("MainWindow", "PLAY", Q_NULLPTR));
        exit->setText(QApplication::translate("MainWindow", "EXIT", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
