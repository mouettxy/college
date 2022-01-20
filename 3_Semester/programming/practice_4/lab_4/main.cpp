#include <iostream>
using namespace std;

int main() {
  int kvo, i, n, nmin1, nmin2;
  double *X;

  cout << " n = ";
  cin >> n;

  X = new double[n];
  cout << "Введите элементы массива X \n ";

  for (i = 0; i < n; i++) cin >> X[i];

  for (nmin1 = 0, i = 1; i < n; i++)
    if (X[i] < X[nmin1]) nmin1 = i;

  for (kvo = i = 0; i < n; i++)
    if (i != nmin1) {
      kvo++;
      if (kvo == 1)
        nmin2 = i;
      else if (X[i] < X[nmin2])
        nmin2 = i;
    }

  cout << " nmin1 = " << nmin1 << " \t tmin1 = " << X[nmin1] << endl;
  cout << " nmin2 = " << nmin2 << " \t tmin2 = " << X[nmin2] << endl;
  return 0;
}
