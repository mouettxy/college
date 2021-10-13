#include <cmath>
#include <iostream>

using namespace std;

unsigned int prostoe(unsigned int N) {
  int i, pr;
  for (pr = 1, i = 2; i <= N / 2; i++)
    if (N % i == 0) {
      pr = 0;
      break;
    }
  return pr;
}

unsigned int soversh(unsigned int N) {
  unsigned int i, S;
  for (S = 0, i = 1; i <= N / 2; i++)
    if (N % i == 0) S += i;
  if (S == N)
    return 1;
  else
    return 0;
}

int main() {
  unsigned int i, N, X, S, kp, ks;
  long int P;

  cout << "N=";
  cin >> N;

  for (kp = ks = S = 0, P = 1, i = 1; i <= N; i++) {
    cout << "X=";
    cin >> X;
    if (prostoe(X)) {
      kp++;
      P *= X;
    }
    if (soversh(X)) {
      ks++;
      S += X;
    }
  }
  if (kp > 0)

    cout << "Среднее геометрическое=" << pow(P, (float)1 / kp) << endl;
  else
    cout << "Нет простых чисел\n";
  if (ks > 0)
    cout << "Среднее арифметическое=" << (float)S / ks << endl;
  else
    cout << "Нет совершённых чисел\n";
  return 0;
}
