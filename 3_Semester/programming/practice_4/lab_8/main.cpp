#include <math.h>

#include <iostream>

using namespace std;

int main() {
  int i, j, n;
  cout << " n = ";
  cin >> n;
  float x[n];
  cout << "Введите элементы массива X \n ";
  for (i = 0; i < n; i++) cin >> x[i];
  for (i = 0; i < n;)
    if (x[i] > 0) {
      for (j = i; j < n - 1; j++) x[j] = x[j + 1];
      n--;
    } else
      i++;
  cout << "Преобразованный массив X \n ";
  for (i = 0; i < n; i++) cout << x[i] << " \t ";
  cout << endl;
  return 0;
}
