#include <iostream>

using namespace std;

int main() {
  unsigned long long int factorial = 1;
  unsigned int N, i;
  cout << "N = ";
  cin >> N;

  for (i = 2; i <= N; i++) {
    factorial *= i;

    cout << "factorial = " << factorial << endl;
  }

  return 0;
}
