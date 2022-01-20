#include <iostream>

using namespace std;

float sr_arifm(int *x, int n) {
  int i;
  float s = 0;
  for (i = 0; i < n; s += x[i], i++)
    ;
  if (n > 0)
    return (s / n);
  else
    return 0;
}
bool prostoe(int n) {
  bool pr;
  int i;
  for (pr = true, i = 2; i <= n / 2; i++)
    if (n % i == 0) {
      pr = false;
      break;
    }
  return (pr);
}
void udal(int *x, int m, int *n) {
  int i;
  for (i = m; i < *n - 1; *(x + i) = *(x + i + 1), i++)
    ;
  --*n;
  realloc((int *)x, *n * sizeof(int));
}
void upor(int *x, int n, bool pr = true) {
  int i, j, b;
  if (pr) {
    for (j = 1; j <= n - 1; j++)
      for (i = 0; i <= n - 1 - j; i++)
        if (*(x + i) > *(x + i + 1)) {
          b = *(x + i);
          *(x + i) = *(x + i + 1);
          *(x + i + 1) = b;
        }
  } else
    for (j = 1; j <= n - 1; j++)
      for (i = 0; i <= n - 1 - j; i++)
        if (*(x + i) < *(x + i + 1)) {
          b = *(x + i);
          *(x + i) = *(x + i + 1);
          *(x + i + 1) = b;
        }
}
int main() {
  int *a, n, i;
  float sr;
  cout << " n = ";
  cin >> n;
  a = (int *)calloc(n, sizeof(int));
  cout << "Введите массив A \n ";
  for (i = 0; i < n; i++) cin >> *(a + i);
  sr = sr_arifm(a, n);
  cout << " sr = " << sr << " \n ";
  for (i = 0; i < n;) {
    if (prostoe(*(a + i)) && *(a + i) < sr)
      udal(a, i, &n);
    else
      i++;
  }
  cout << "Массив A \n ";
  for (i = 0; i < n; i++) cout << *(a + i) << " \t ";
  cout << " \n ";
  upor(a, n);
  cout << "Упорядоченный массив A \n ";
  for (i = 0; i < n; i++) cout << *(a + i) << " \t ";
  cout << " \n ";
  free(a);
  return 0;
}
