#include "mainwindow.h"

#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
  ui->setupUi(this);
  connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(helloWorld()));
}

void MainWindow::helloWorld() { ui->label_2->setText("World Hello"); }

MainWindow::~MainWindow() { delete ui; }
