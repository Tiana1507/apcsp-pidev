#include <stdio.h>
int areaOfcircle(float radius, float area);

int main(void) {
  float area;
  for (float i = 3.5; i < 12.5; i++) 
  {
    area = areaOfcircle(i, area);
    printf("%f\n", area);
  }
  return 0;
}

int areaOfcircle(float radius, float area) {
  area = radius * radius * 3.14;
  return area;
}
