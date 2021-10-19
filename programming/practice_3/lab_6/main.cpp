#include <math.h>

#include <iostream>
using namespace std;
bool prostoe(int N) {
  int i;
  bool pr;
  if (N < 2)
    pr = false;
  else
    for (pr = true, i = 2; i <= N / 2; i++)
      if (N % i == 0) {
        pr = false;
        break;
      }
  return pr;
}

int main() {
  int i, k, n, nmax, nmin, p, *x;
  cout << " n = ";
  cin >> n;
  x = new int[n];
  cout << "Введите элементы массива X";
  for (i = 0; i < n; i++) cin >> x[i];
  for (nmax = nmin = i = 0; i < n; i++) {
    if (x[i] < x[nmin]) nmin = i;
    if (x[i] > x[nmax]) nmax = i;
  }
  if (nmin < nmax)
    for (p = 1, k = 0, i = nmin + 1; i < nmax; i++) {
      if (prostoe(x[i])) {
        k++;
        p *= x[i];
      }
    }
  else
    for (p = 1, k = 0, i = nmax + 1; i < nmin; i++)
      if (prostoe(x[i])) {
        k++;
        p *= x[i];
      }
  if (k > 0)
    cout << " SG " << pow(p, 1. / k) << endl;
  else
    cout << "Нет простых чисел в массиве" << endl;
  return 0;
}
