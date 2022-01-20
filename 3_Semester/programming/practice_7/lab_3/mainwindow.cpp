#include "mainwindow.h"

#include <cmath>
#include <string>

#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
  ui->setupUi(this);

  connect(ui->calculate, SIGNAL(clicked()), this, SLOT(calculate()));
}

MainWindow::~MainWindow() { delete ui; }

Equation MainWindow::calculateEquation(double a, double b, double c) {
  Equation result;

  double discriminant = b * b - 4 * a * c;

  if (discriminant > 0) {
    result.x1 = (-b + sqrt(discriminant)) / (2 * a);
    result.x2 = (-b - sqrt(discriminant)) / (2 * a);
    return result;
  }

  else if (discriminant == 0) {
    result.x1 = -b / (2 * a);
    result.x2 = result.x1;
  }

  else {
    double realPart = -b / (2 * a);
    double imaginaryPart = sqrt(-discriminant) / (2 * a);
    QString x1 = "";
    x1.append(QString::number(realPart));
    x1.append(" + ");
    x1.append(QString::number(imaginaryPart));
    x1.append("i");

    QString x2 = "";
    x2.append(QString::number(realPart));
    x2.append(" - ");
    x2.append(QString::number(imaginaryPart));
    x2.append("i");

    result.x1 = x1.toDouble();
    result.x2 = x2.toDouble();
  }
}

void MainWindow::calculate() {
  double a = ui->a_edit->text().toDouble();
  double b = ui->b_edit->text().toDouble();
  double c = ui->c_edit->text().toDouble();

  QString result = "<p>";
  result.append(ui->a_edit->text() + "x" + "<sup>2</sup>");
  result.append(" + ");
  result.append(ui->b_edit->text() + "x");
  result.append(" + ");
  result.append(ui->c_edit->text());
  result.append(" = 0");
  result.append("<br />");

  Equation equation = calculateEquation(a, b, c);

  result.append(">> x1 = ");
  result.append(QString::number(equation.x1));
  result.append("<br />");

  result.append(">> x2 = ");
  result.append(QString::number(equation.x2));
  result.append("<br />");

  ui->x_edit->insertHtml(result);
}
