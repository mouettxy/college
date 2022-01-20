#include <iostream>

using namespace std;

bool isDeficientNumber(int num) {
  int sum = 0;

  for (int i = 1; i <= num / 2; i++) {
    if (num % i == 0) {
      sum += i;
    }
  }

  if (num > sum) {
    return true;
  }

  return false;
}

int main() {
  int N;
  int sum = 0;

  cout << "Enter number of items in sequence = ", cin >> N;

  for (int i = 0; i < N; i++) {
    int k;
    cout << "Enter number " << i + 1 << " = ", cin >> k;

    if (isDeficientNumber(k)) {
      sum += k;
    }
  }

  cout << "Sum of deficient numbers = " << sum << endl;

  return 0;
}
