#include <stdio.h>

int main()
{
  int a;
  int b = 3;
  int c;

  a = 2;
  c = a + b;
  printf("Sum of %d and %d is %d\n", a, b, c);
  b = a;
  a = c;
  c = b;
  printf("a is equal to %d and c is equal to %d\n", a, c);
}
