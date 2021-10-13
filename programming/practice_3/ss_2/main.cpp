#include <cmath>
#include <iostream>

using namespace std;

unsigned long long int convertToDecimal(unsigned long long int n,
                                        unsigned int b) {
  unsigned long long int S, P;
  S = 0;
  P = 1;

  while (n != 0) {
    S += n % 10 * P;
    P *= b;
    n /= 10;
  }

  return S;
}

unsigned long long int decimalToOctal(unsigned long long int n) {
  int remainder;
  long octal = 0, i = 1;

  while (n != 0) {
    remainder = n % 8;
    n = n / 8;
    octal = octal + (remainder * i);
    i = i * 10;
  }

  return octal;
}

int main() {
  unsigned long long int A, B;
  cout << "A = ", cin >> A;
  cout << "B = ", cin >> B;

  unsigned long long int decimalA = convertToDecimal(A, 6);
  unsigned long long int decimalB = convertToDecimal(A, 7);

  unsigned long long int result =
      pow(decimalA, 2) + pow((decimalB - decimalA), 2);

  unsigned long long int resultInOctal = decimalToOctal(result);

  cout << "Result = " << resultInOctal << endl;

  return 0;
}
