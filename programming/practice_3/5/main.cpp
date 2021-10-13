#include <iostream>

using namespace std;

int main() {
  unsigned int N, i, K;

  cout << " N = ";
  cin >> N;

  for (K = 0, i = 1; i <= N / 2; i++) {
    if (N % i == 0) {
      K++;
    }
  }

  cout << "K = " << K << endl;

  return 0;
}
