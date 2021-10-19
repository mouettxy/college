#include <iostream>

using namespace std;

void print_array(double arr[], int size) {
  cout << "[ ";
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << "] \n\n";
}

int main() {
  double arr[10] = {1, 2, 3, 4, 4, 4, 5, 6, 3, 2};
  int size = sizeof(arr) / sizeof(double);

  cout << "Sample array \n";
  print_array(arr, size);

  for (int i = 0; i < size; i++) {
    if (arr[i + 1] == arr[i] + 1) {
      arr[i] = 0;
    }
  }

  cout << "Result \n";
  print_array(arr, size);

  return 0;
}
