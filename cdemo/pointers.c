#include <stdio.h>

int main()
{
 int a;
 int* ptrtoa;
 float* ptrtod;
 float* ptrtoe;
 float d;
 float f;
 d = 1.76;
 float e;
 e = 3.14;
 ptrtoa = &a;
 ptrtod = &d;
 ptrtoe = &e;

 a = 5;

 printf("The value of a is %d\n", a);

 *ptrtoa = 6;

 printf("The value of a is %d\n", a);
 printf("The value of ptrtoa is %p\n", ptrtoa);
 printf("It stores the value %d\n", *ptrtoa);
 printf("The address of a is %p\n", ptrtoa);
 printf("the value of d is %f\n", d);
 printf("the address of d is %p\n", ptrtod);
}
