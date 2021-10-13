#include <iostream>

using namespace std;

int main() {
  unsigned int i, N;
  float X, Max;

  cout << "N = ";
  cin >> N;
  cout << "X = ";
  cin >> X;

  for (i = 2, Max = X; i <= N; i++) {
    cout << "X = ";
    cin >> X;

    if (X > Max) {
      Max = X;
    }
  }

  cout << "Max = " << Max << endl;

  return 0;
}
