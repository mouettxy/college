#include <iostream>

using namespace std;

long int factorial(int n) {
  if (n <= 1)
    return n;
  else
    return n * factorial(n - 1);
}

int main() {
  int i;
  long int f;
  cout << "i=";
  cin >> i;
  f = factorial(i);
  cout << i << " !=" << f << "\n";
  return 0;
}
