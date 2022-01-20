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
  int *X, i, N, S, P;

  cout << "Введите размер массива ";
  cin >> N;

  X = new int[N];
  cout << "Ведите массив X \n ";

  for (i = 0; i < N; i++) {
    cout << " X ( " << i << " ) = ";
    cin >> X[i];
  }

  for (P = 1, S = i = 0; i < N; i++) {
    if (prostoe(X[i])) S += X[i];
    if (X[i] < 0) P *= X[i];
  }

  cout << " S = " << S << " \t P = " << P << endl;
  delete[] X;
  return 0;
}
