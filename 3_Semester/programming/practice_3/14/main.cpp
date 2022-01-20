#include <iostream>

using namespace std;

int main() {
  unsigned int K, i, kol, A, B;
  bool pr;

  for (cout << "k = ", cin >> K, kol = 0, i = 1; i <= K; i++) {
    for (pr = true, cout << " A = ", cin >> A; A != 0; A = B) {
      cout << " B = ";
      cin >> B;

      if (B != 0 && A >= B) {
        pr = false;
      }
    }

    if (pr) {
      kol++;
    }
  }

  cout << " kol = " << kol << endl;

  return 0;
}
