#include <iostream>

using namespace std;

unsigned long long int DecNC(unsigned long long int N, unsigned int b) {
  unsigned long long int S, P;
  for (S = 0, P = 1; N != 0; S += N % 10 * P, P *= b, N /= 10)
    ;
  return S;
}

int main() {
  unsigned long long int X, Y;
  unsigned int bX, bY;
  cout << "X=";
  cin >> X;
  cout << "b=";
  cin >> bX;
  cout << "Y=";
  cin >> Y;
  cout << "b=";
  cin >> bY;
  cout << X << "(" << bX << ")=" << DecNC(X, bX) << " (10) " << endl;
  cout << Y << "(" << bY << ")=" << DecNC(Y, bY) << " (10) " << endl;
  cout << X << "(" << bX << ")+" << Y << "(" << bY << ")=";
  cout << DecNC(X, bX) + DecNC(Y, bY) << " (10) " << endl;
  return 0;
}
