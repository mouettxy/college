#include <cmath>
#include <iostream>

using namespace std;

double get_largest_index(double arr[], int size) {
  double result = INT_MIN;
  int result_index = 0;

  for (int i = 0; i < size; i++) {
    if (arr[i] > result) {
      result = arr[i];
      result_index = i;
    }
  }

  return result_index;
}

double get_last_but_one(double arr[], int size) {
  int lastPositive, lastButOnePositive;
  lastPositive = 0;
  lastButOnePositive = 0;

  for (int i = size - 1; i >= 0; i--) {
    if (arr[i] > 0) {
      if (!lastPositive) {
        lastPositive = i;
        continue;
      }

      if (!lastButOnePositive) {
        lastButOnePositive = i;
        break;
      }
    }
  }

  return lastButOnePositive;
}

void swap(double *xp, double *yp) {
  int temp = *xp;
  *xp = *yp;
  *yp = temp;
}

void bubble_sort(double arr[], double largest, double lastButOne) {
  int i, j;
  int size = lastButOne - largest;
  for (i = 0; i < size - 1; i++) {
    for (j = 0; j < lastButOne - i; j++) {
      if (fabs(arr[j]) > fabs(arr[j + 1])) {
        swap(&arr[j], &arr[j + 1]);
      }
    }
  }
}

void print_array(double arr[], int size) {
  cout << "[ ";
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << "] \n\n";
}

int main() {
  double arr[10] = {1, 2, 12, 4, -5, -6, -7, 8, 9, 10};
  int size = sizeof(arr) / sizeof(double);

  cout << "Sample array \n";
  print_array(arr, size);

  bubble_sort(arr, get_largest_index(arr, size), get_last_but_one(arr, size));

  cout << "Sample array \n";
  print_array(arr, size);

  return 0;
}
