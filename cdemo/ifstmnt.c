#include <stdio.h>

int main()
{
  int a = 0;
  int b = 1;
  printf("a is 0\n");
  printf("b is 1\n");
  // if statement ERROR to test is a is equal to 0
  if (a == 0)
  {
    printf("a is 0\n");
  }
  else
  {
    printf("a is not 0\n");
  }
  if (a != 0)
  {
    printf("a is not 0\n");
  }
  else
  {
    printf("a is 0\n");
  }
  if (a > 0)
  {
    printf("a > 0\n");
  }
  else
  {
    printf("a is not >  0\n");
  }
  if (a >= 0)
  {
    printf("a >= 0\n");
  }
  else
  {
    printf("a is not >= 0\n");
  }
  if (a == 0 && b == 0)
  {
    printf("a AND b = 0\n");
  }
  else
  {
    printf("a AND b /= 0\n");
  }
  if (a == 0 || b==0)
  {
    printf("a OR b = 0\n");
  }
  else
  {
    printf("a OR b /= 0\n");
  }
  if !(a == 0)
  {
    printf("a is NOT 0\n");
  }
  else
  {
    printf("a is 0\n");
  }
}
