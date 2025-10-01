#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

//tri ddax owr dday

int main() {
  int *p;
  int n;
  scanf("%d", &n);
  p = new int[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &p[n - i - 1]);
  }
  for (int i = 0; i < n; i++) {
    printf("%d ", p[i]);
  }
  return 0;
}
