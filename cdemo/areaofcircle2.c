#include <stdio.h>
int areaOfcircle(float radius, float area);

int main(void) {
  float area;
  int userrad1;
  char term;
  for (int j = 1; j < 2;) 
  {
    printf("Enter a positive integer for a radius: ");
    scanf("%d",&userrad1); 
    if(scanf("%d%c", &userrad1, &term) != 2 || term != '\n')
      printf("Must be a positive integer!");
    else
      area = areaOfcircle(userrad1, area);
      printf("Area is %f\n", area);
      j = j+ 1;
    return 0;
  }
}

int areaOfcircle(float radius, float area) {
  area = radius * radius * 3.14;
  return area;
}
