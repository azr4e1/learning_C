#include <stdio.h>

void shellsort(int v[], int n);

int main() {
  int prova[8] = {5, 4, 3, 1, 2, 5, 3, 2};
  for (int i = 0; i < 8; i++) {
    printf("%d\n", prova[i]);
  }
  printf("\n\n");
  shellsort(prova, 8);
  for (int i = 0; i < 8; i++) {
    printf("%d\n", prova[i]);
  }
  return 0;
}

void shellsort(int v[], int n) {
  int gap, i, j, temp;

  for (gap = n/2; gap > 0; gap /= 2) {
    for (i = gap; i < n; i++) {
      for (j = i - gap; j >= 0 && v[j] > v[j+gap]; j -= gap) {
        temp = v[j];
        v[j] = v[j+gap];
        v[j+gap] = temp;
      }
    }
  }
}
