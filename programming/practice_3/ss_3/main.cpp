#include <cmath>
#include <iostream>

using namespace std;

double f(double x) { return (2 - (x - pow(M_E, x))); }

double fi(double x, double L) { return (x + L + f(x)); }

int Dichotomy(double a, double b, double *c, double eps) {
  int k = 0;
  do {
    *c = (a + b) / 2;

    if (f(*c) * f(a) < 0) {
      b = *c;
    } else {
      a = *c;
    }
    k++;
  } while (fabs(a - b) >= eps);

  return k;
}

int Iteration(double *x, double L, double eps) {
  int k = 0;
  double x0;

  do {
    x0 = *x;
    *x = fi(x0, L);
    k++;
  } while (fabs(x0 - *x) >= eps);

  return k;
}

int main() {
  double A, B, X, P;
  double ep = 0.001;
  int K;

  cout << "a=";
  cin >> A;
  cout << "b=";
  cin >> B;

  cout << "Dihotomy" << endl;

  K = Dichotomy(A, B, &X, ep);
  cout << "x = " << X;
  cout << "iterations = " << K << endl;

  cout << "L=";
  cin >> P;

  K = Iteration(&X, P, ep);
  cout << "x = " << X;
  cout << "iterations = " << K << endl;

  return 0;
}
