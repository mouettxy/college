#include <iostream>
using namespace std;

int main() {
  int i, N, nmax, nmin;
  float temp;
  cout << " N = ";
  cin >> N;
  float X[N];
  cout << "Введите элементы массива Х\n ";
  for (i = 0; i < N; i++) cin >> X[i];
  for (nmax = nmin = 0, i = 1; i < N; i++) {
    if (X[i] < X[nmin]) nmin = i;
    if (X[i] > X[nmax]) nmax = i;
  }
  temp = X[nmax];
  X[nmax] = X[nmin];
  X[nmin] = temp;
  cout << "Преобразованный массив Х\n ";
  for (i = 0; i < N; i++) cout << X[i] << " ";
  cout << endl;
  return 0;
}
