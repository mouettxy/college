#include <iostream>

using namespace std;

int main() {
  unsigned int N, i, S;

  cout << "N = ";
  cin >> N;

  S = 0;
  i = 2;

  while (i <= N) {
    S = S + i;
    i = i + 2;
  }

  cout << "S = " << S << endl;

  return 0;
}
