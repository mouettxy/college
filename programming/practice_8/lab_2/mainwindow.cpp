#include "mainwindow.h"

#include <QRegularExpression>
#include <algorithm>

#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
  ui->setupUi(this);

  connect(ui->caluclate, SIGNAL(clicked()), this, SLOT(processArray()));
}

MainWindow::~MainWindow() { delete ui; }

void MainWindow::processArray() {
  QRegularExpression regexp("(\\;)");
  QStringList array = ui->array_edit->text().split(regexp);
  QList<int> result;

  foreach (QString str, array) {
    int num = str.toInt();

    if (num) {
      result << num;
    }
  }

  std::sort(result.begin(), result.end());
  ui->result_edit->append(ui->array_edit->text());

  QString sumString = "SUM = ";
  int sumInt = 0;
  foreach (int i, result) { sumInt += i; }
  sumString.append(QString::number(sumInt));

  ui->result_edit->append(sumString);

  QString deltaString = "DELTA = ";
  int deltaInt = sumInt / result.length();
  deltaString.append(QString::number(deltaInt));

  ui->result_edit->append(deltaString);
}
