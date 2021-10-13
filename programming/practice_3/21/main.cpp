#include <iostream>

using namespace std;

unsigned long long int NC(unsigned long long int N, unsigned int b) {
  unsigned long long int S, P;
  for (S = 0, P = 1; N != 0; S += N % b * P, P *= 10, N /= b)
    ;
  return S;
}

int main() {
  unsigned long long int X;
  cout << "X=";
  cin >> X;
  cout << X << " (10) =" << NC(X, 2) << " (2) " << endl;
  cout << X << " (10) =" << NC(X, 5) << " (5) " << endl;
  cout << X << " (10) =" << NC(X, 7) << " (7) " << endl;
  return 0;
}
