#include <iostream>

using namespace std;

int main() {
  float *x;
  int i, k, n, max, kgr, kon_max;
  cout << " n = ";
  cin >> n;
  x = new float[n];
  cout << "Введите массив x\n ";
  for (i = 0; i < n; i++) cin >> x[i];
  for (kgr = i = 0, k = 1; i < n - 1; i++)
    if (x[i] * x[i + 1] < 0)
      k++;
    else if (k > 1) {
      kgr++;
      if (kgr == 1) {
        max = k;
        kon_max = i;
      } else if (k > max) {
        max = k;
        kon_max = i;
      }
      k = 1;
    }
  if (k > 1) {
    kgr++;
    if (kgr == 1) {
      max = k;
      kon_max = n - 1;
    } else if (k > max) {
      max = k;
      kon_max = n - 1;
    }
  }
  if (kgr > 0) {
    cout << "В массиве " << kgr << " групп знакочередующихся элементов\n ";
    cout << "Группа максимальной длины начинается с элемента "
         << kon_max - max + 1 << ", её длина " << max
         << ",номер последнего элемента группы" << kon_max << endl;
    for (i = kon_max - max + 1; i <= kon_max; i++) cout << x[i] << " ";
    cout << endl;
  } else
    cout << "В массиве нет групп знакочередующихся элементов\n";
  return 0;
}
