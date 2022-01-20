#include <math.h>

#include <iostream>

using namespace std;

double int_chebishev(double a, double b, double (*fn)(double)) {
  int i, n = 9;
  double s, t[9] = {-0.911589, -0.601019, -0.528762, -0.167906, 0,
                    0.167906,  0.528762,  0.601019,  0.911589};
  for (s = i = 0; i < n; i++) s += fn((b + a) / 2 + (b - a) / 2 * t[i]);
  s *= (b - a) / n;
  return s;
}

double int_gauss(double a, double b, double (*fn)(double)) {
  int i, n = 8;
  double s, t[8] = {-0.96028986, -0.79666648, -0.52553242, -0.18343464,
                    0.18343464,  0.52553242,  0.79666648,  0.96028986},
            A[8] = {0.10122854, 0.22238104, 0.31370664, 0.36268378,
                    0.36268378, 0.31370664, 0.22238104, 0.10122854};
  for (s = i = 0; i < n; i++) s += A[i] * fn((b + a) / 2 + (b - a) / 2 * t[i]);
  s *= (b - a) / 2;
  return s;
}

double f1(double y) { return sin(y) * sin(y) * sin(y) * sin(y); }
double f2(double y) { return pow(2 * y - 1, 0.5); }

int main() {
  double a, b;

  cout << "Интеграл sin(x)^4 = \n ";
  cout << "Введите интервал интегрирования\n ";

  cin >> a >> b;

  cout << "Метод Гаусса:" << int_gauss(a, b, f1) << endl;
  cout << "Метод Чебышёва:" << int_chebishev(a, b, f1) << endl;
  cout << "Интеграл sqrt ( 2*x-1 ) =\n ";
  cout << "Введите интервалы интегрирования\n ";

  cin >> a >> b;

  cout << "Метод Гаусса:" << int_gauss(a, b, f2) << endl;
  cout << "Метод Чебышёва:" << int_chebishev(a, b, f2) << endl;

  return 0;
}
