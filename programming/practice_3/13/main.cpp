#include <iostream>

using namespace std;

int main() {
  unsigned long int X;
  unsigned int N;
  int i, k, j;
  bool Pr;

  for (k = 0, cout << " N = ", cin >> N, i = 1; i <= N; i++) {
    for (cout << " X = ", cin >> X, Pr = true, j = 2; j <= X / 2; j++) {
      if (X % j == 0) {
        Pr = false;
        break;
      }

      if (Pr) {
        k++;
      }
    }
  }

  if (k == 0) {
    cout << "No simple numbers" << endl;
  } else {
    cout << "k = " << k << endl;
  }

  return 0;
}
