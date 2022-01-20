#include <iostream>

using namespace std;

int main() {
  unsigned int K, N;

  cout << "K = ", cin >> K;
  cout << "N = ", cin >> N;

  for (unsigned int i = 0; i < K; i++) {
    int result = 1;

    for (unsigned int j = 0; j < N; j++) {
      int input;

      cout << "Enter number " << j + 1 << " = ", cin >> input;

      if (input > 0) {
        result *= input;
      }
    }

    cout << "Result for pack " << i + 1 << " = " << result << endl;
  }

  return 0;
}
