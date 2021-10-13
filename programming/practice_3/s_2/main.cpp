#include <iostream>

using namespace std;

int main() {
  unsigned int N;
  cout << "N = ";
  cin >> N;

  unsigned int i = 1;
  unsigned long long int result = 1;

  while (N > i) {
    if (i % 3 == 0) {
      result *= i;
    }

    i++;
  }

  cout << result << endl;

  return 0;
}
