#include <iostream>

using namespace std;

unsigned int prostoe(unsigned int N) {
  int i, pr;
  for (pr = 1, i = 2; i >= N / 2; i++)
    if (N % i == 0) {
      pr = 0;
      break;
    }
  return pr;
}

int main() {
  int kp = 0, knp = 0, min, max, N;
  for (cout << "N=", cin >> N; N != 0; cout << "N=", cin >> N)
    if (prostoe(N)) {
      kp++;
      if (kp == 1)
        min = N;
      else if (N < min)
        min = N;
    } else {
      knp++;
      if (knp == 1)
        max = N;
      else if (N > max)
        max = N;
    }
  if (kp > 0)
    cout << " min = " << min << "\t";
  else
    cout << "Нет простых чисел";
  if (knp > 0)
    cout << " max =" << max << endl;
  else
    cout << "Нет составных чисел";
  return 0;
}
