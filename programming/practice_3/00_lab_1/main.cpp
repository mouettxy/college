#include <iostream>

using namespace std;

int sum_of_even(int numbers[], int size) {
  int result = 0;
  for (int i = size - 1; i > (size / 2) - 1; i--) {
    if (numbers[i] % 2 == 0) {
      result += numbers[i];
    }
  }

  return result;
}

int numbers_between_negatives(int numbers[], int size) {
  bool firstNumberFinded = false;
  bool lastNumberFinded = false;

  int firstNegativeIndex = 0;
  int lastNegativeIndex = 0;

  for (int i = 0; i < size; i++) {
    if (numbers[i] < 0) {
      firstNumberFinded = true;
      firstNegativeIndex = i;
      break;
    }
  }

  if (!firstNumberFinded) {
    return 0;
  }

  for (int i = size - 1; i >= 0; i--) {
    if (numbers[i] < 0) {
      lastNumberFinded = true;
      lastNegativeIndex = i;
      break;
    }
  }

  if (!lastNumberFinded) {
    return 0;
  }

  if (lastNegativeIndex == firstNegativeIndex) {
    return 0;
  }

  return lastNegativeIndex - firstNegativeIndex - 1;
}

int get_total_positives(int numbers[], int size) {
  int total = 0;

  for (int i = 0; i < size; i++) {
    if (numbers[i] > 0) {
      total += 1;
    }
  }

  return total;
}

int get_total_negatives(int numbers[], int size) {
  int total = 0;

  for (int i = 0; i < size; i++) {
    if (numbers[i] < 0) {
      total += 1;
    }
  }

  return total;
}

int *make_positives_array(int numbers[], int size, int total) {
  int *result;

  result = new int[total];

  int lastIndex = 0;
  for (int i = 0; i < size; i++) {
    if (numbers[i] > 0) {
      result[lastIndex++] = numbers[i];
    }
  }

  return result;
}

int *make_negatives_array(int numbers[], int size, int total) {
  int *result;

  result = new int[total];

  int lastIndex = 0;
  for (int i = 0; i < size; i++) {
    if (numbers[i] < 0) {
      result[lastIndex++] = numbers[i];
    }
  }

  return result;
}

void print_array(int array[], int size) {
  cout << "[ ";
  for (int i = 0; i < size; i++) {
    cout << array[i] << " ";
  }
  cout << "] \n";
}

int main() {
  int *X, n;

  cout << "Making X(n) array \n";
  cout << "Enter n = ";
  cin >> n;
  X = new int[n];

  cout << "Enter X(n) numbers \n";
  for (int i = 0; i < n; i++) {
    cout << "Number " << i + 1 << " = ";
    cin >> X[i];
  }

  cout << "Sum of even numbers = " << sum_of_even(X, n) << endl;
  cout << "Numbers between negatives = " << numbers_between_negatives(X, n)
       << endl;

  int *Y, *Z, totalPositives, totalNegatives;
  totalPositives = get_total_positives(X, n);
  totalNegatives = get_total_negatives(X, n);
  Y = make_positives_array(X, n, totalPositives);
  Z = make_negatives_array(X, n, totalNegatives);

  cout << "Array Y of positive numbers \n";
  print_array(Y, totalPositives);

  cout << "Array Z of negative numbers \n";
  print_array(Z, totalNegatives);

  cout << "Array X";
  print_array(X, n);

  cout << "Swapping min and max elements";
  cout << "Array X";
  int maxElement = -99999;
  int minElement = 0;
  int maxElementIndex = 0;
  int minElementIndex = 0;

  for (int i = 0; i < n; i++) {
    if (X[i] > maxElement) {
      maxElement = X[i];
      maxElementIndex = i;
    }

    if (X[i] < minElement) {
      minElement = X[i];
      minElementIndex = i;
    }
  }

  int temp = X[minElementIndex];
  X[minElementIndex] = X[maxElementIndex];
  X[maxElementIndex] = temp;

  print_array(X, n);

  cout << "Deleting third array element";
  X[2] = X[3];
  cout << "Array X";
  print_array(X, n);

  delete[] Y;
  delete[] Z;
  delete[] X;
  return 0;
}
