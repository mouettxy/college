#include <iostream>

using namespace std;

int main() {
  int i, k, n;
  float b;
  cout << " n = ";
  cin >> n;
  float a[n + 1];
  cout << "Введите массив a \n ";
  for (i = 0; i < n; i++) cin >> a[i];
  cout << "Введите число b = ";
  cin >> b;
  if (a[n - 1] >= b)
    a[n] = b;
  else {
    for (i = 0; i < n; i++)
      if (a[i] <= b) {
        k = i;
        break;
      }
    for (i = n - 1; i >= k; i--) a[i + 1] = a[i];
    a[k] = b;
  }
  cout << "Преобразованный массив a \n ";
  for (i = 0; i <= n; i++) cout << a[i] << " \t ";
  return 0;
}
