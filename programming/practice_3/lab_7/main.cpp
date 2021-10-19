#include <math.h>

#include <iostream>
using namespace std;

int main() {
  int i, j, n = 20;
  float x[n];
  cout << "Введите элементы массива X \n ";
  for (i = 0; i < n; i++) cin >> x[i];
  for (j = 1; j <= 6; j++)
    for (i = 5; i < n - j; i++) x[i] = x[i + 1];
  cout << "Преобразованный массив X \n ";
  for (i = 0; i < n - 6; i++) cout << x[i] << " \t ";
  cout << endl;
  return 0;
}
