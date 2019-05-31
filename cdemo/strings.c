#include <stdio.h>
#include <string.h>

int main() {
  char str1[27];
  char str2[27] = "abcdefghijklmnopqrstuvwxyz";
  int result;
  char str3[53];

  for (int i = 0; i < 26; i++) {
    str1[i] = 0x61 + i;
  }
  result = strcmp(str1, str2);
  printf("First comparison result: %d\n", result);

  for (int i = 0; i < 26; i++) {
    str1[i] -= 0x20;
  }
  result = strcmp(str1, str2);
  printf("Second comparison result: %d\n", result);

  strcat(str3, str1);
  strcat(str3, str2);
  printf("String 1: %s\n", str1);
  printf("String 2: %s\n", str2);
  p
