#include <stdio.h>

int main()
{
  
  int a;
  int* ptrtoa;
  float d = 1;
  float e = 2;
  float* ptrtod = &d;
  float* ptrtoe = &e;
  float temp = 0;

  ptrtoa = &a;

  a = 5;
  printf("The value of a is %d\n", a);

  *ptrtoa = 6;
  printf("The value of a is %d\n", a);

  printf("The value of ptrtoa is %d\n", ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of a is %d\n", &a);

  temp = ptrtod;
  ptrtod = d;
  d = temp;

  printf("The value of ptrtod is %f\n", ptrtod);
  printf("Value of d is: %f\n", d);

  temp = ptrtoe;
  ptrtoe = e;
  e = temp;

  printf("The value of ptrtod is %f\n", ptrtoe);
  printf("Value of e is: %f\n", e);
}
}
