/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainwindow
{
public:
    QAction *action_New;
    QAction *action_Open;
    QAction *action_Save;
    QAction *action_Save_as;
    QAction *action_Quit;
    QAction *action_Undo;
    QAction *action_Redo;
    QAction *action_Cut;
    QAction *action_Copy;
    QAction *action_Paste;
    QAction *action_Info;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menu_fFile;
    QMenu *menu_Edit;
    QMenu *menu_Help;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *mainwindow)
    {
        if (mainwindow->objectName().isEmpty())
            mainwindow->setObjectName(QStringLiteral("mainwindow"));
        mainwindow->resize(660, 354);
        action_New = new QAction(mainwindow);
        action_New->setObjectName(QStringLiteral("action_New"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QStringLiteral(":/icons/new.png"), QSize(), QIcon::Normal, QIcon::On);
        action_New->setIcon(icon);
        action_Open = new QAction(mainwindow);
        action_Open->setObjectName(QStringLiteral("action_Open"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/open.png"), QSize(), QIcon::Normal, QIcon::On);
        action_Open->setIcon(icon1);
        action_Save = new QAction(mainwindow);
        action_Save->setObjectName(QStringLiteral("action_Save"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icons/document_save.png"), QSize(), QIcon::Normal, QIcon::On);
        action_Save->setIcon(icon2);
        action_Save_as = new QAction(mainwindow);
        action_Save_as->setObjectName(QStringLiteral("action_Save_as"));
        action_Quit = new QAction(mainwindow);
        action_Quit->setObjectName(QStringLiteral("action_Quit"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icons/button_cancel.png"), QSize(), QIcon::Normal, QIcon::On);
        action_Quit->setIcon(icon3);
        action_Undo = new QAction(mainwindow);
        action_Undo->setObjectName(QStringLiteral("action_Undo"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/icons/undo.png"), QSize(), QIcon::Normal, QIcon::On);
        action_Undo->setIcon(icon4);
        action_Redo = new QAction(mainwindow);
        action_Redo->setObjectName(QStringLiteral("action_Redo"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/icons/redo.png"), QSize(), QIcon::Normal, QIcon::On);
        action_Redo->setIcon(icon5);
        action_Cut = new QAction(mainwindow);
        action_Cut->setObjectName(QStringLiteral("action_Cut"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/icons/cut.png"), QSize(), QIcon::Normal, QIcon::On);
        action_Cut->setIcon(icon6);
        action_Copy = new QAction(mainwindow);
        action_Copy->setObjectName(QStringLiteral("action_Copy"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/icons/copy.png"), QSize(), QIcon::Normal, QIcon::On);
        action_Copy->setIcon(icon7);
        action_Paste = new QAction(mainwindow);
        action_Paste->setObjectName(QStringLiteral("action_Paste"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/newPrefix/icons/paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon8.addFile(QStringLiteral(":/icons/paste.png"), QSize(), QIcon::Normal, QIcon::On);
        action_Paste->setIcon(icon8);
        action_Info = new QAction(mainwindow);
        action_Info->setObjectName(QStringLiteral("action_Info"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/newPrefix/icons/help.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon9.addFile(QStringLiteral(":/icons/help.png"), QSize(), QIcon::Normal, QIcon::On);
        action_Info->setIcon(icon9);
        centralwidget = new QWidget(mainwindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        QFont font;
        font.setFamily(QStringLiteral("Monospace"));
        textEdit->setFont(font);

        verticalLayout->addWidget(textEdit);

        mainwindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(mainwindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 660, 27));
        menu_fFile = new QMenu(menubar);
        menu_fFile->setObjectName(QStringLiteral("menu_fFile"));
        menu_Edit = new QMenu(menubar);
        menu_Edit->setObjectName(QStringLiteral("menu_Edit"));
        menu_Help = new QMenu(menubar);
        menu_Help->setObjectName(QStringLiteral("menu_Help"));
        mainwindow->setMenuBar(menubar);
        statusbar = new QStatusBar(mainwindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        mainwindow->setStatusBar(statusbar);
        toolBar = new QToolBar(mainwindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        mainwindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menu_fFile->menuAction());
        menubar->addAction(menu_Edit->menuAction());
        menubar->addAction(menu_Help->menuAction());
        menu_fFile->addAction(action_New);
        menu_fFile->addAction(action_Open);
        menu_fFile->addAction(action_Save);
        menu_fFile->addAction(action_Save_as);
        menu_fFile->addSeparator();
        menu_fFile->addAction(action_Quit);
        menu_Edit->addAction(action_Undo);
        menu_Edit->addAction(action_Redo);
        menu_Edit->addSeparator();
        menu_Edit->addAction(action_Cut);
        menu_Edit->addAction(action_Copy);
        menu_Edit->addAction(action_Paste);
        menu_Help->addAction(action_Info);
        toolBar->addAction(action_New);
        toolBar->addAction(action_Open);
        toolBar->addAction(action_Save);
        toolBar->addSeparator();
        toolBar->addAction(action_Cut);
        toolBar->addAction(action_Copy);
        toolBar->addAction(action_Paste);

        retranslateUi(mainwindow);

        QMetaObject::connectSlotsByName(mainwindow);
    } // setupUi

    void retranslateUi(QMainWindow *mainwindow)
    {
        mainwindow->setWindowTitle(QApplication::translate("mainwindow", "mainwindow", 0));
        action_New->setText(QApplication::translate("mainwindow", "&New", 0));
        action_New->setShortcut(QApplication::translate("mainwindow", "Ctrl+N", 0));
        action_Open->setText(QApplication::translate("mainwindow", "&Open...", 0));
        action_Open->setShortcut(QApplication::translate("mainwindow", "Ctrl+O", 0));
        action_Save->setText(QApplication::translate("mainwindow", "&Save", 0));
        action_Save->setShortcut(QApplication::translate("mainwindow", "Ctrl+S", 0));
        action_Save_as->setText(QApplication::translate("mainwindow", "Save as...", 0));
        action_Quit->setText(QApplication::translate("mainwindow", "&Quit", 0));
        action_Quit->setShortcut(QApplication::translate("mainwindow", "Ctrl+Q", 0));
        action_Undo->setText(QApplication::translate("mainwindow", "&Undo", 0));
        action_Undo->setShortcut(QApplication::translate("mainwindow", "Ctrl+Z", 0));
        action_Redo->setText(QApplication::translate("mainwindow", "&Redo", 0));
#ifndef QT_NO_TOOLTIP
        action_Redo->setToolTip(QApplication::translate("mainwindow", "Redo", 0));
#endif // QT_NO_TOOLTIP
        action_Redo->setShortcut(QApplication::translate("mainwindow", "Ctrl+Y", 0));
        action_Cut->setText(QApplication::translate("mainwindow", "&Cut", 0));
        action_Cut->setShortcut(QApplication::translate("mainwindow", "Ctrl+X", 0));
        action_Copy->setText(QApplication::translate("mainwindow", "C&opy", 0));
        action_Copy->setShortcut(QApplication::translate("mainwindow", "Ctrl+C", 0));
        action_Paste->setText(QApplication::translate("mainwindow", "&Paste", 0));
        action_Paste->setShortcut(QApplication::translate("mainwindow", "Ctrl+V", 0));
        action_Info->setText(QApplication::translate("mainwindow", "&Info...", 0));
        menu_fFile->setTitle(QApplication::translate("mainwindow", "&File", 0));
        menu_Edit->setTitle(QApplication::translate("mainwindow", "&Edit", 0));
        menu_Help->setTitle(QApplication::translate("mainwindow", "&Help", 0));
        toolBar->setWindowTitle(QApplication::translate("mainwindow", "toolBar", 0));
    } // retranslateUi

};

namespace Ui {
    class mainwindow: public Ui_mainwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
