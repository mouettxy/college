#include <iostream>

using namespace std;

int main() {
  unsigned int a, b;

  cout << "A = ";
  cin >> a;
  cout << "B = ";
  cin >> b;

  while (a != b) {
    if (a > b) {
      a = a - b;
    } else {
      b = b - a;
    }
  }

  cout << "NOD= " << a << endl;

  return 0;
}
