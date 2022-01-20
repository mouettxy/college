#include <iostream>

using namespace std;

float stepen(float a, int n) {
  if (n == 0)
    return 1;
  else if (n < 0)
    return 1 / stepen(a, -n);
  else
    return a * stepen(a, n - 1);
}

int main() {
  int i;
  float s, b;
  cout << "b=";
  cin >> b;
  cout << "i=";
  cin >> i;
  s = stepen(b, i);
  cout << "s=" << s << "\n";
  return 0;
}
