
#include<stdio.h>

int main()
{
  int a = 545;
  char b = 'f';
  float c = 5.45;
  double d = 3.1415;
  long int atwo = 545;
  unsigned int athree = 545;
  // print value and size of an int variable
  printf("int a value: %d and size: %d bytes\n", a, sizeof(a));
  printf("char b value: %c and size: %d bytes\n", b, sizeof(b));
  printf("float c value: %f and size: %d bytes\n", c, sizeof(c));
  printf("double d value: %f and size: %d bytes\n", d, sizeof(d));
  printf("long int atwo value: %d and size: %d bytes\n", atwo, sizeof(atwo));
  printf("unsigned int athree value: %d and size: %d bytes\n", athree, sizeof(athree));
}
