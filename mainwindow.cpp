#include <iostream>
#include "mainwindow.h"
#include "ui_mainwindow.h"

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



void MainWindow::on_pushButton_clicked()
{
    std::cout << "pushbutton " << std::endl;
}

void MainWindow::radioButtonOn(bool clicked)
{
    if(clicked == false){
        std::cout << "radiobutton Off" << std::endl;
    }
    else
        std::cout << "radiobutton On" << std::endl;

}

void MainWindow::checkButton(bool clicked){
    if(clicked == false){
        std::cout << "check box Off" << std::endl;
    }
    else
        std::cout << "check box On" << std::endl;
}

