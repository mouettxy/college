#include <cmath>
#include <iostream>

using namespace std;

int main() {
  float a, b, c, d, x1, x2;

  do {
    cout << " a = ";
    cin >> a;
  } while (a == 0);

  cout << " b = ";
  cin >> b;
  cout << " c = ";
  cin >> c;

  d = pow(b, 2) - (4 * a * c);

  if (d < 0) {
    cout << "No valid roots";
  } else {
    x1 = (-b + sqrt(d)) / 2 / a;
    x2 = (-b - sqrt(d)) / (2 * a);
    cout << " X1 = " << x1 << " \t X2 = " << x2 << " \n ";
  }

  return 0;
}
