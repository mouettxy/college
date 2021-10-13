#include <iostream>

using namespace std;

int main() {
  float A, B;
  int i, K, N;

  cout << "N = ";
  cin >> N;

  for (K = 0, cout << "A = ", cin >> A, i = 2; i <= N; i++) {
    cout << "B = ";
    cin >> B;

    if (A - B < 0) {
      K++;
    }

    A = B;
  }

  cout << "K = " << K << endl;

  return 0;
}
