#include <iostream>

using namespace std;

int main() {
  unsigned int input;
  cout << "Enter desired number" << endl;
  cin >> input;

  unsigned int sum = 0;

  while (input >= 10) {
    sum += (input % 10) * 2;

    input /= 10;
  }

  sum += input * 2;

  cout << "Sum of numbers is " << sum << endl;

  return 0;
}
