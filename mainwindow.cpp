#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ctime.h"
#include "subtime.h"
#include <QDebug>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
#pragmas data_seg( "shareddata" )
int var = 10;
char str[ 1024 ] = { 0 };
#pragma data_seg()
#pragma comment(linker,"/SECTION:shareddata,RWS")

void MainWindow::on_pushButton_clicked()
{
//    SUBTIME* time_ref2 = new SUBTIME(3);

//    //time_ref2->public_time;
//    time_ref2->getVirtFunc(1,2);
//    time_ref2->getVirtFunc(1,2,3);

//    delete time_ref2;

}
