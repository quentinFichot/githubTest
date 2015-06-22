/*
 * File:   main.cpp
 * Author: quentin
 *
 * Created on June 20, 2015, 8:43 PM
 */

#include <QApplication>
#include <qt5/QtWidgets/qwidget.h>

#include "mainwindow.h"

int main(int argc, char *argv[]) {
    // initialize resources, if needed
    // Q_INIT_RESOURCE(resfile);

    QApplication app(argc, argv);

    // create and show your widgets here
    
    mainwindow mainwindow;
    mainwindow.show();

    return app.exec();
}
