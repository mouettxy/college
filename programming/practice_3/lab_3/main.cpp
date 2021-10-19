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
  int i, k, n, nom, min, *x;
  cout << " n = ";
  cin >> n;
  x = new int[n];
  cout << "Введите элементы массива X ";
  for (i = 0; i < n; i++) cin >> x[i];

  for (i = k = 0; i < n; i++)

    if (prostoe(x[i])) {
      k++;

      if (k == 1) {
        min = x[i];
        nom = i;
      } else

          if (x[i] < min) {
        min = x[i];
        nom = i;
      }
    }

  if (k > 0)
    cout << " min = " << min << " \ tnom = " << nom << endl;
  else
    cout << "Нет простых чисел в массиве" << endl;
  return 0;
}
