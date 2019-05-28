#include <stdio.h>

int areaOfcircle(float radius)
{
  float area;
  float pi = 3.14;
  area = radius * radius * pi;
}

int main(void) {
  for (float i = 3.5; i < 12.5; i++) {
    area = areaOfcircle(i);
    printf("%f/n", area);
  }
  return 0;
}
