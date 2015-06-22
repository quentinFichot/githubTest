/* 
 * File:   mainwindow.h
 * Author: quentin
 *
 * Created on June 20, 2015, 8:44 PM
 */

#ifndef _MAINWINDOW_H
#define	_MAINWINDOW_H

#include <QtCore>
#include <QLabel>

#include "ui_mainwindow.h"

using namespace std;

class mainwindow : public QMainWindow {
    Q_OBJECT
public:
    mainwindow();
    virtual ~mainwindow();
protected:
    void setupActions();
    void saveFile(const QString&);
    bool mayDiscardDocument();
private:
    Ui::mainwindow widget;
    QString mFilePath;
    QLabel* mStatLabel;
protected slots:
    void updateStats();
    
    void newFile();
    void loadFile();
    void saveFile();
    void saveFileAs();
    void undo();
    void redo();
    void copy();
    void about();
};

#endif	/* _MAINWINDOW_H */
