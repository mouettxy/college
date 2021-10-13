#include <iostream>

using namespace std;

int main() {
  unsigned int N, i;
  bool Pr;

  cout << " N = ";
  cin >> N;

  Pr = true;

  for (i = 2; i <= N / 2; i++) {
    if (N % i == 0) {
      Pr = false;
      break;
    }
  }

  if (Pr) {
    cout << N << " - простое число" << endl;
  } else {
    cout << N << " - не является простым" << endl;
  }

  return 0;
}
