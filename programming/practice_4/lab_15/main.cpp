#include <math.h>
#include <stdlib.h>

#include <iostream>
using namespace std;
int kvo_razryad(int M) {
  long int k;
  for (k = 1; M > 9; M /= 10, k++)
    ;
  return k;
}
bool palindrom(int n) {
  int k = kvo_razryad(n), s, p = n;
  for (s = 0; p != 0; p /= 10, k--) s += (p % 10) * pow(10, k - 1);
  if (s == n)
    return true;
  else
    return false;
}
int form(int *a, int n, int *b) {
  int i, k;
  for (i = k = 0; i < n; i++)
    if (a[i] > 0) b[k++] = a[i];
  return k;
}
void sort(int *x, int n, int k, int p) {
  int i, nom, j;
  int b;
  for (i = k + 1; i < p;) {
    nom = i;
    for (j = i + 1; j < p; j++)
      if (x[j] < x[nom]) nom = j;
    b = x[p - 1];
    x[p - 1] = x[nom];
    x[nom] = b;
    p--;
  }
}
int main(int argc, char **argv) {
  int *G, *W;
  int nmax, nmin, kp, i, N, k;
  cout << " N = ";
  cin >> N;
  G = (int *)calloc(N, sizeof(int));
  W = (int *)calloc(N, sizeof(int));
  cout << "Ввод массива G \n ";
  for (i = 0; i < N; i++) cin >> G[i];
  k = form(G, N, W);
  cout << "Вывод массива W \n ";
  for (i = 0; i < k; i++) cout << W[i] << " ";
  cout << endl;
  for (kp = i = 0; i < k; i++)
    if (palindrom(W[i])) {
      kp++;
      if (kp == 1) {
        nmax = i;
        nmin = i;
      } else {
        if (W[i] < W[nmin]) nmin = i;
        if (W[i] > W[nmax]) nmax = i;
      }
    }
  if (nmax < nmin)
    sort(W, k, nmax, nmin);
  else
    sort(W, k, nmin, nmax);
  cout << "Вывод преобразованного массива W \n ";
  for (i = 0; i < k; i++) cout << W[i] << " ";
  cout << endl;
  return 0;
}
