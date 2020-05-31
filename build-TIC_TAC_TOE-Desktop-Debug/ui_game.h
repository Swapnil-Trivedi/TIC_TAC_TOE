/********************************************************************************
** Form generated from reading UI file 'game.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAME_H
#define UI_GAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Game
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_22;
    QPushButton *pushButton_02;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton00;
    QPushButton *pushButton_12;
    QPushButton *pushButton_20;
    QPushButton *pushButton_21;
    QPushButton *pushButton_01;
    QPushButton *Back;
    QPushButton *pushButton_2;
    QPushButton *restart;

    void setupUi(QMainWindow *Game)
    {
        if (Game->objectName().isEmpty())
            Game->setObjectName(QStringLiteral("Game"));
        Game->resize(662, 550);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Game->sizePolicy().hasHeightForWidth());
        Game->setSizePolicy(sizePolicy);
        Game->setMinimumSize(QSize(662, 550));
        Game->setMaximumSize(QSize(662, 550));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icon_pack/icon/title.png"), QSize(), QIcon::Normal, QIcon::Off);
        Game->setWindowIcon(icon);
        centralwidget = new QWidget(Game);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 50, 641, 491));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 30, 644, 451));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(1);
        gridLayout->setVerticalSpacing(6);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_22 = new QPushButton(layoutWidget);
        pushButton_22->setObjectName(QStringLiteral("pushButton_22"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_22->sizePolicy().hasHeightForWidth());
        pushButton_22->setSizePolicy(sizePolicy1);
        pushButton_22->setMaximumSize(QSize(201, 139));
        pushButton_22->setStyleSheet(QLatin1String("QPushButton{\n"
"box-shadow:inset 0px 1px 0px 0px #dcecfb;\n"
"	background:linear-gradient(to bottom, #bddbfa 5%, #80b5ea 100%);\n"
"	background-color:#bddbfa;\n"
"	border-radius:23px;\n"
"}\n"
"QPushButton:hover {\n"
"	background:linear-gradient(to bottom, #80b5ea 5%, #bddbfa 100%);\n"
"	background-color:#80b5ea;\n"
"}"));

        gridLayout->addWidget(pushButton_22, 2, 2, 1, 1);

        pushButton_02 = new QPushButton(layoutWidget);
        pushButton_02->setObjectName(QStringLiteral("pushButton_02"));
        sizePolicy1.setHeightForWidth(pushButton_02->sizePolicy().hasHeightForWidth());
        pushButton_02->setSizePolicy(sizePolicy1);
        pushButton_02->setMinimumSize(QSize(195, 135));
        pushButton_02->setMaximumSize(QSize(201, 139));
        pushButton_02->setStyleSheet(QLatin1String("QPushButton{\n"
"box-shadow:inset 0px 1px 0px 0px #dcecfb;\n"
"	background:linear-gradient(to bottom, #bddbfa 5%, #80b5ea 100%);\n"
"	background-color:#bddbfa;\n"
"	border-radius:23px;\n"
"}\n"
"QPushButton:hover {\n"
"	background:linear-gradient(to bottom, #80b5ea 5%, #bddbfa 100%);\n"
"	background-color:#80b5ea;\n"
"}"));

        gridLayout->addWidget(pushButton_02, 0, 2, 1, 1);

        pushButton_10 = new QPushButton(layoutWidget);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        sizePolicy1.setHeightForWidth(pushButton_10->sizePolicy().hasHeightForWidth());
        pushButton_10->setSizePolicy(sizePolicy1);
        pushButton_10->setMaximumSize(QSize(201, 139));
        pushButton_10->setStyleSheet(QLatin1String("QPushButton{\n"
"box-shadow:inset 0px 1px 0px 0px #dcecfb;\n"
"	background:linear-gradient(to bottom, #bddbfa 5%, #80b5ea 100%);\n"
"	background-color:#bddbfa;\n"
"	border-radius:23px;\n"
"}\n"
"QPushButton:hover {\n"
"	background:linear-gradient(to bottom, #80b5ea 5%, #bddbfa 100%);\n"
"	background-color:#80b5ea;\n"
"}"));

        gridLayout->addWidget(pushButton_10, 1, 0, 1, 1);

        pushButton_11 = new QPushButton(layoutWidget);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        sizePolicy1.setHeightForWidth(pushButton_11->sizePolicy().hasHeightForWidth());
        pushButton_11->setSizePolicy(sizePolicy1);
        pushButton_11->setMaximumSize(QSize(201, 139));
        pushButton_11->setStyleSheet(QLatin1String("QPushButton{\n"
"box-shadow:inset 0px 1px 0px 0px #dcecfb;\n"
"	background:linear-gradient(to bottom, #bddbfa 5%, #80b5ea 100%);\n"
"	background-color:#bddbfa;\n"
"	border-radius:23px;\n"
"}\n"
"QPushButton:hover {\n"
"	background:linear-gradient(to bottom, #80b5ea 5%, #bddbfa 100%);\n"
"	background-color:#80b5ea;\n"
"}"));

        gridLayout->addWidget(pushButton_11, 1, 1, 1, 1);

        pushButton00 = new QPushButton(layoutWidget);
        pushButton00->setObjectName(QStringLiteral("pushButton00"));
        sizePolicy1.setHeightForWidth(pushButton00->sizePolicy().hasHeightForWidth());
        pushButton00->setSizePolicy(sizePolicy1);
        pushButton00->setMinimumSize(QSize(195, 135));
        pushButton00->setMaximumSize(QSize(201, 139));
        pushButton00->setStyleSheet(QLatin1String("QPushButton{\n"
"box-shadow:inset 0px 1px 0px 0px #dcecfb;\n"
"	background:linear-gradient(to bottom, #bddbfa 5%, #80b5ea 100%);\n"
"	background-color:#bddbfa;\n"
"	border-radius:23px;\n"
"}\n"
"QPushButton:hover {\n"
"	background:linear-gradient(to bottom, #80b5ea 5%, #bddbfa 100%);\n"
"	background-color:#80b5ea;\n"
"}"));

        gridLayout->addWidget(pushButton00, 0, 0, 1, 1);

        pushButton_12 = new QPushButton(layoutWidget);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        sizePolicy1.setHeightForWidth(pushButton_12->sizePolicy().hasHeightForWidth());
        pushButton_12->setSizePolicy(sizePolicy1);
        pushButton_12->setMaximumSize(QSize(201, 139));
        pushButton_12->setStyleSheet(QLatin1String("QPushButton{\n"
"box-shadow:inset 0px 1px 0px 0px #dcecfb;\n"
"	background:linear-gradient(to bottom, #bddbfa 5%, #80b5ea 100%);\n"
"	background-color:#bddbfa;\n"
"	border-radius:23px;\n"
"}\n"
"QPushButton:hover {\n"
"	background:linear-gradient(to bottom, #80b5ea 5%, #bddbfa 100%);\n"
"	background-color:#80b5ea;\n"
"}"));

        gridLayout->addWidget(pushButton_12, 1, 2, 1, 1);

        pushButton_20 = new QPushButton(layoutWidget);
        pushButton_20->setObjectName(QStringLiteral("pushButton_20"));
        sizePolicy1.setHeightForWidth(pushButton_20->sizePolicy().hasHeightForWidth());
        pushButton_20->setSizePolicy(sizePolicy1);
        pushButton_20->setMaximumSize(QSize(201, 139));
        pushButton_20->setStyleSheet(QLatin1String("QPushButton{\n"
"box-shadow:inset 0px 1px 0px 0px #dcecfb;\n"
"	background:linear-gradient(to bottom, #bddbfa 5%, #80b5ea 100%);\n"
"	background-color:#bddbfa;\n"
"	border-radius:23px;\n"
"}\n"
"QPushButton:hover {\n"
"	background:linear-gradient(to bottom, #80b5ea 5%, #bddbfa 100%);\n"
"	background-color:#80b5ea;\n"
"}"));

        gridLayout->addWidget(pushButton_20, 2, 0, 1, 1);

        pushButton_21 = new QPushButton(layoutWidget);
        pushButton_21->setObjectName(QStringLiteral("pushButton_21"));
        sizePolicy1.setHeightForWidth(pushButton_21->sizePolicy().hasHeightForWidth());
        pushButton_21->setSizePolicy(sizePolicy1);
        pushButton_21->setMaximumSize(QSize(201, 139));
        pushButton_21->setStyleSheet(QLatin1String("QPushButton{\n"
"box-shadow:inset 0px 1px 0px 0px #dcecfb;\n"
"	background:linear-gradient(to bottom, #bddbfa 5%, #80b5ea 100%);\n"
"	background-color:#bddbfa;\n"
"	border-radius:23px;\n"
"}\n"
"QPushButton:hover {\n"
"	background:linear-gradient(to bottom, #80b5ea 5%, #bddbfa 100%);\n"
"	background-color:#80b5ea;\n"
"}"));

        gridLayout->addWidget(pushButton_21, 2, 1, 1, 1);

        pushButton_01 = new QPushButton(layoutWidget);
        pushButton_01->setObjectName(QStringLiteral("pushButton_01"));
        sizePolicy1.setHeightForWidth(pushButton_01->sizePolicy().hasHeightForWidth());
        pushButton_01->setSizePolicy(sizePolicy1);
        pushButton_01->setMinimumSize(QSize(195, 135));
        pushButton_01->setMaximumSize(QSize(201, 139));
        pushButton_01->setStyleSheet(QLatin1String("QPushButton{\n"
"box-shadow:inset 0px 1px 0px 0px #dcecfb;\n"
"	background:linear-gradient(to bottom, #bddbfa 5%, #80b5ea 100%);\n"
"	background-color:#bddbfa;\n"
"	border-radius:23px;\n"
"}\n"
"QPushButton:hover {\n"
"	background:linear-gradient(to bottom, #80b5ea 5%, #bddbfa 100%);\n"
"	background-color:#80b5ea;\n"
"}"));

        gridLayout->addWidget(pushButton_01, 0, 1, 1, 1);

        Back = new QPushButton(centralwidget);
        Back->setObjectName(QStringLiteral("Back"));
        Back->setGeometry(QRect(360, 20, 91, 41));
        Back->setStyleSheet(QLatin1String("QPushButton {\n"
"    \n"
"	background-color:#5cb811;\n"
"    border-radius : 20px;\n"
"	border:3px solid #18ab29;\n"
"}\n"
"QPushButton:hover{\n"
"background:linear-gradient(to bottom, #5cb811 5%, #77d42a 100%);\n"
"background-color:#18ab29;\n"
"}\n"
"\n"
""));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(560, 20, 91, 41));
        pushButton_2->setStyleSheet(QLatin1String("QPushButton {\n"
"    background-color:#fe1a00;\n"
"	border-radius : 20px;\n"
"	border:3px solid #d02718;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"\n"
"background:linear-gradient(to bottom, #c62d1f 5%, #f24537 100%);\n"
"	background-color:#c62d1f;\n"
"}\n"
""));
        restart = new QPushButton(centralwidget);
        restart->setObjectName(QStringLiteral("restart"));
        restart->setGeometry(QRect(460, 20, 91, 41));
        restart->setStyleSheet(QLatin1String("QPushButton {\n"
"    \n"
"	background-color:#3399FF;\n"
"    border-radius : 20px;\n"
"	border:3px solid #0066CC;\n"
"}\n"
"QPushButton:hover{\n"
"background:linear-gradient(to bottom, #5cb811 5%, #77d42a 100%);\n"
"background-color:#0066CC;\n"
"}\n"
"\n"
""));
        Game->setCentralWidget(centralwidget);

        retranslateUi(Game);
        QObject::connect(pushButton_2, SIGNAL(clicked()), Game, SLOT(close()));

        QMetaObject::connectSlotsByName(Game);
    } // setupUi

    void retranslateUi(QMainWindow *Game)
    {
        Game->setWindowTitle(QApplication::translate("Game", "Tic Tac Toe", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("Game", "MAIN GAME", Q_NULLPTR));
        pushButton_22->setText(QString());
        pushButton_02->setText(QString());
        pushButton_10->setText(QString());
        pushButton_11->setText(QString());
        pushButton00->setText(QString());
        pushButton_12->setText(QString());
        pushButton_20->setText(QString());
        pushButton_21->setText(QString());
        pushButton_01->setText(QString());
        Back->setText(QApplication::translate("Game", "MAIN MENU", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Game", "EXIT", Q_NULLPTR));
        restart->setText(QApplication::translate("Game", "RESTART", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Game: public Ui_Game {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAME_H
