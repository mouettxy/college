#include <iostream>
using namespace std;
int main() {
  float *X;
  int i, N, nom;

  cout << "Введите размер массива ";
  cin >> N;

  X = new float[N];

  cout << "Введите элементы массива X \n ";

  for (i = 0; i < N; i++) cin >> X[i];

  nom = 0;

  for (i = 1; i < N; i++)
    if (X[i] > X[nom]) nom = i;

  cout << "Максимальный элемент= " << X[nom] << ", его номер= " << nom << endl;

  return 0;
}
