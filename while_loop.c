#include <stdio.h>
int main()
{
    int i = 0;
    printf("Numbers from 0 to 10:\n");
    while (i <= 10)
    {
        printf("%d ", i);
        i++;
    }
    printf("\n");
    printf("Numbers from 10 to 0:\n");
    i = 10;
    while (i >= 0)
    {
        printf("%d ", i);
        i--;
    }
    printf("\n");
    return 0;
}

