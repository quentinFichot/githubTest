/*
 * File:   mainwindow.cpp
 * Author: quentin
 *
 * Created on June 20, 2015, 8:44 PM
 */

#include <iostream>
#include <QMessageBox>
#include <QFileDialog>

#include "mainwindow.h"

mainwindow::mainwindow() {
    widget.setupUi(this);
    setupActions();
    
    mStatLabel = new QLabel;
    widget.statusbar->addPermanentWidget(mStatLabel);
    connect(widget.textEdit, SIGNAL(textChanged()), this, SLOT(updateStats()));
    updateStats();
}

void mainwindow::setupActions()
{
    connect(widget.action_Quit, SIGNAL(triggered(bool)),
            qApp, SLOT(quit()));
    connect(widget.action_New, SIGNAL(triggered(bool)),
            this, SLOT(newFile()));
    connect(widget.action_Open, SIGNAL(triggered(bool)),
            this, SLOT(loadFile()));
    connect(widget.action_Save, SIGNAL(triggered(bool)),
            this, SLOT(saveFile()));
    connect(widget.action_Save_as, SIGNAL(triggered(bool)),
            this, SLOT(saveFileAs()));
    
    connect(widget.textEdit, SIGNAL(copyAvailable(bool)),
            widget.action_Copy, SLOT(setEnabled(bool)));
    connect(widget.textEdit, SIGNAL(undoAvailable(bool)),
            widget.action_Undo, SLOT(setEnabled(bool)));
    connect(widget.textEdit, SIGNAL(redoAvailable(bool)),
            widget.action_Redo, SLOT(setEnabled(bool)));
    
    connect(widget.action_Copy, SIGNAL(triggered(bool)),
            this, SLOT(copy()));
    connect(widget.action_Undo, SIGNAL(triggered(bool)),
            this, SLOT(undo()));
    connect(widget.action_Redo, SIGNAL(triggered(bool)),
            this, SLOT(redo()));
    
    connect(widget.action_Info, SIGNAL(triggered(bool)),
            this, SLOT(about()));
}
    
void mainwindow::loadFile()
{
    QString file_name = QFileDialog::getOpenFileName(this);
    QFile file(file_name);
    if (file.open(QIODevice::ReadOnly|QIODevice::Text))
    {
        widget.textEdit->setPlainText(QString::fromUtf8(file.readAll()));
        mFilePath = file_name;
        widget.statusbar->showMessage(tr("File successfully loaded."), 3000);
    }    
}

void mainwindow::saveFile()
{
    if (mFilePath.isEmpty())
        saveFileAs();
    else
        saveFile(mFilePath);   
}

void mainwindow::saveFileAs()
{
    mFilePath = QFileDialog::getOpenFileName(this);
    if (mFilePath.isEmpty())
        return;
    saveFile(mFilePath);
}

void mainwindow::saveFile(const QString& name)
{
    QFile file(name);
    if (file.open(QIODevice::WriteOnly|QIODevice::Text)) 
    {
        file.write(widget.textEdit->toPlainText().toUtf8());
        statusBar()->showMessage(tr("File saved successfully."), 3000);
    }
}

bool mainwindow::mayDiscardDocument()
{
    if (widget.textEdit->document()->isModified()) 
    {
        QString filename = mFilePath;
        if (filename.isEmpty()) filename = tr("Unnamed");
        if (QMessageBox::question(this, tr("Save Document?"),
            tr("You want to create a new document, but the "
            "changes in the current document ’%1’ have not "
            "been saved. How do you want to proceed?"),
            tr("Discard Changes"), tr("Save Document") ))
            saveFile();

        return true;
    }
    return false;
}

void mainwindow::newFile()
{
    if (!mayDiscardDocument()) return;
    widget.textEdit->setPlainText("");
    mFilePath = "";
}

void mainwindow::undo()
{
    widget.textEdit->document()->undo();
}

void mainwindow::redo()
{
    widget.textEdit->document()->redo();
}

void mainwindow::copy()
{
    widget.textEdit->copy();
}

void mainwindow::about()
{
    QMessageBox::about(this, tr("About CuteEdit"),
                       tr("CuteEdit 1.0 \nA Qt application example. \n"));
}

void mainwindow::updateStats()
{
    QString text = widget.textEdit->document()->toPlainText();
    int chars = text.length();
    text = text.simplified();
    int words = 0;
    words = text.count(" ");
    if (!text.isEmpty()) words++;
    QString output = tr("Characters: %1, Words: %2").arg(chars).arg(words);
    mStatLabel->setText(output);
}

mainwindow::~mainwindow() {
}
