#include <iostream>

using namespace std;

void dec_to_octal(int n) {
  int octalNum[100];

  int i = 0;
  while (n != 0) {
    octalNum[i] = n % 8;
    n = n / 8;
    i++;
  }

  for (int j = i - 1; j >= 0; j--) {
    cout << octalNum[j];
  };
}

int hasEvenDigits(int num) {
  int temp = num;

  while (temp > 0) {
    int digit = temp % 10;

    if (digit % 2 == 0) {
      return true;
    }

    temp /= 10;
  }

  return false;
}

int *create_array(int size) {
  int *pointer;
  pointer = new int[size];

  for (int i = 0; i < size; i++) {
    cout << "Number " << i + 1 << " = ";
    cin >> pointer[i];
  }

  return pointer;
}

void print_array(int arr[], int size) {
  cout << "[ ";
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << "] \n\n";
}

void print_array_oct(int arr[], int size) {
  cout << "[ ";
  for (int i = 0; i < size; i++) {
    dec_to_octal(arr[i]);
    cout << " ";
  }
  cout << "] \n\n";
}

void fill3largest(int arr[], int size, int result[3]) {
  int first, second, third;

  third = first = second = INT_MIN;
  for (int i = 0; i < size; i++) {
    if (arr[i] > first) {
      third = second;
      second = first;
      first = arr[i];
    } else if (arr[i] > second) {
      third = second;
      second = arr[i];
    } else if (arr[i] > third) {
      third = arr[i];
    }
  }

  result[0] = first;
  result[1] = second;
  result[2] = third;
}

int get_no_even_digits_count(int arr[], int size) {
  int result = 0;
  for (int i = 0; i < size; i++) {
    if (!hasEvenDigits(arr[i])) {
      result += 1;
    }
  }

  return result;
}

int *fill_no_even_digits(int arr[], int size, int total) {
  int *pointer;
  pointer = new int[total];

  int lastIndex = 0;
  for (int i = 0; i < size; i++) {
    if (!hasEvenDigits(arr[i])) {
      pointer[lastIndex++] = arr[i];
    }
  }

  return pointer;
}

int main() {
  int *X, *Y, *Z, n, k, j;

  cout << "Making X(n) array \n";
  cout << "Enter n = ";
  cin >> n;
  X = create_array(n);

  cout << "Making Y(k) array \n";
  cout << "Enter k = ";
  cin >> k;
  Y = create_array(k);

  cout << "X(n) \n\n";
  print_array(X, n);

  cout << "Y(k) \n\n";
  print_array(Y, k);

  int threeLargest[3];
  fill3largest(X, n, threeLargest);

  cout << "Three largest nums \n\n";
  print_array(threeLargest, 3);

  int *noEvenDigitsArr;
  int noEvenDigitsCount = get_no_even_digits_count(Y, k);
  noEvenDigitsArr = fill_no_even_digits(Y, k, noEvenDigitsCount);

  cout << "Hasn't odd digits array \n\n";
  print_array(noEvenDigitsArr, noEvenDigitsCount);

  j = 3 + noEvenDigitsCount;
  Z = new int[j];

  for (int i = 0; i < 3; i++) {
    Z[i] = threeLargest[i];
  }

  for (int i = 0; i < j; i++) {
    int realZIndex = i + 3;
    Z[realZIndex] = noEvenDigitsArr[i];
  }

  cout << "Z(j) in 10 \n\n";
  print_array(Z, j);

  cout << "Z(j) in 8 \n\n";
  print_array_oct(Z, j);

  delete[] X;
  delete[] Y;
  delete[] Z;
  delete[] noEvenDigitsArr;
  return 0;
}
