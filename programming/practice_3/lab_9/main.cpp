#include <math.h>

#include <iostream>

using namespace std;

int main() {
  int i, j, k, n, nmax, nmin, *x, a, b;
  cout << " n = ";
  cin >> n;
  x = new int[n];
  cout << "Введите элементы массива X \n ";

  for (i = 0; i < n; i++) cin >> x[i];

  for (nmax = nmin = i = 0; i < n; i++) {
    if (x[i] < x[nmin]) nmin = i;
    if (x[i] > x[nmax]) nmax = i;
  }

  if (nmin < nmax) {
    a = nmin;
    b = nmax;
  } else {
    a = nmax;
    b = nmin;
  }

  for (i = a + 1, k = 1; k <= b - a - 1; k++) {
    if (x[i] < 0)
      for (j = i; j < n - 1; j++) x[j] = x[j + 1];
    n--;
  }

  cout << "Преобразованный массив X\n ";
  for (i = 0; i < n; i++) cout << x[i] << " \t ";
  cout << endl;
  return 0;
}
