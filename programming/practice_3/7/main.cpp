#include <iostream>

using namespace std;

int main() {
  unsigned long int N, M;
  unsigned int kol;

  cout << " N = ";
  cin >> N;

  M = N;

  for (kol = 1; M / 10 > 0; kol++) {
    M /= 10;
  }

  cout << "kol = " << kol << endl;

  return 0;
}
