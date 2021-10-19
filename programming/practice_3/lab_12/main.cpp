#include <iostream>
using namespace std;

int main() {
  int i, n;
  bool pr;
  cout << " n = ";
  cin >> n;
  float *a = new float[n];
  cout << "Введите массив a \n ";
  for (i = 0; i < n; i++) cin >> a[i];
  for (pr = true, i = 0; i < n - 1; i++)
    if (a[i] > a[i + 1]) {
      pr = false;
      break;
    }
  if (pr)
    cout << "Массив упорядочен по возрастанию";
  else
    cout << "Массив не упорядочен по возрастанию";
  return 0;
}
