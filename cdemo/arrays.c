#include <stdio.h>

int arrayAdd(int* arr, int s, int n) {
  int sizenuminc;
  sizenuminc = 0;
  for (int i = 0; i < s; i++)
  {
    arr[i] = sizenuminc;
    sizenuminc = n + sizenuminc;
  }
}

int main(void) {
  int arrone[100];
  int arrsize = sizeof(arrone) / sizeof(arrone[0]);
  arrayAdd(arrone, arrsize, 3);
   for (int j = 0; j < arrsize; j++ ) {
      printf("Element[%d] = %d\n", j, arrone[j] );
   }
}
