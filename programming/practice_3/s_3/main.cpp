#include <iostream>

using namespace std;

int main() {
  unsigned int input;
  unsigned int count = 0;
  unsigned int sum = 0;

  cout << "Enter numbers, 0 will count as end of sequence" << endl;

  do {
    cin >> input;

    if (input == 0) {
      cout << endl;
      break;
    }

    if (input % 2 == 0) {
      count++;
      sum += input;
    }
  } while (input != 0);

  if (sum != 0) {
    cout << "Result is: " << sum / count << endl;
  } else {
    cout << "Trying to divide by zero" << endl;
  }

  return 0;
}
