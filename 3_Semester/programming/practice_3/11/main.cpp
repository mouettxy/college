#include <iostream>

using namespace std;

int main() {
  float N, Min;
  int K;

  for (cout << "N = ", cin >> N, K = 0; N != 0; cout << "N = ", cin >> N) {
    if (N > 0) {
      if (K == 0) {
        K = 1;
        Min = N;
      } else if (N < Min) {
        Min = N;
        K = 1;
      } else if (N == Min) {
        K++;
      }
    }
  }

  if (K != 0) {
    cout << "Min = " << Min << endl << "K = " << K << endl;
  } else {
    cout << "No positive elements" << endl;
  }
  return 0;
}
