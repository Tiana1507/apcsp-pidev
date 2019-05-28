#include <stdio.h>

int main()
{
        int j;
        int div = 13;
        for (int i = 0; i < 100; i++)
        {
                float j = i % div;
                if (j == 0)
                {
                        printf("%d is divisible by %d \n", i, div);
                }
                else
                {
                        printf("%d is not divisible by %d \n", i, div);
                }
        }
}
