#include <stdio.h>

int arrayAdd(int* arr, int s, int n) {
  int sizenuminc;
  sizenuminc = s * n;
  for (int i = 0; i < s; i++)
  {
    arr[i] = sizenuminc;
    sizenuminc = n + sizenuminc;
  }

}

int main(void) {
  int arr[100];
  arrayAdd(arr, 100, 3);
}
