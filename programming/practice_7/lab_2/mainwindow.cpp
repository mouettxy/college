#include "mainwindow.h"

#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
  ui->setupUi(this);

  connect(ui->plus, SIGNAL(clicked()), this, SLOT(plus()));
  connect(ui->minus, SIGNAL(clicked()), this, SLOT(minus()));
  connect(ui->multi, SIGNAL(clicked()), this, SLOT(multi()));
  connect(ui->divide, SIGNAL(clicked()), this, SLOT(divide()));
  connect(ui->divide_reverse, SIGNAL(clicked()), this, SLOT(divide_reverse()));
}

MainWindow::~MainWindow() { delete ui; }

void MainWindow::plus() {
  int a = ui->a_edit->text().toInt();
  int b = ui->b_edit->text().toInt();
  if (a && b) {
    QString result = "A + B = ";
    result.append(QString::number(a + b));
    ui->c_edit->append(result);
  }
}

void MainWindow::minus() {
  int a = ui->a_edit->text().toInt();
  int b = ui->b_edit->text().toInt();
  if (a && b) {
    QString result = "A - B = ";
    result.append(QString::number(a - b));
    ui->c_edit->append(result);
  }
}

void MainWindow::multi() {
  int a = ui->a_edit->text().toInt();
  int b = ui->b_edit->text().toInt();
  if (a && b) {
    QString result = "A * B = ";
    result.append(QString::number(a * b));
    ui->c_edit->append(result);
  }
}

void MainWindow::divide() {
  int a = ui->a_edit->text().toInt();
  int b = ui->b_edit->text().toInt();
  if (a && b) {
    QString result = "A / B = ";
    result.append(QString::number(a / b));
    ui->c_edit->append(result);
  }
}

void MainWindow::divide_reverse() {
  int a = ui->a_edit->text().toInt();
  int b = ui->b_edit->text().toInt();
  if (a && b) {
    QString result = "B / A = ";
    result.append(QString::number(b / a));
    ui->c_edit->append(result);
  }
}
