#include "mainwindow.h"

#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
  ui->setupUi(this);

  connect(ui->calculate, SIGNAL(clicked()), this, SLOT(calculate()));
}

MainWindow::~MainWindow() { delete ui; }

void MainWindow::calculate() {
  int x = ui->x_edit->text().toInt();

  if (x) {
    int result = 0;
    if (x < 10) {
      for (int i = 1; i <= 10; i++) {
        result += (15 * i) + (2 * x);
      }
    } else if (x == 10) {
      for (int i = 1; i <= 5; i++) {
        if (result < 0) {
          result = 1;
        }

        result *= (x + 12) / i;
      }
    } else if (x > 10) {
      for (int i = 5; i <= 20; i++) {
        result += (13 * i) + x;
      }
    } else {
      // NOOP
    }

    ui->c_edit->setText(QString::number(result));
  }
}
