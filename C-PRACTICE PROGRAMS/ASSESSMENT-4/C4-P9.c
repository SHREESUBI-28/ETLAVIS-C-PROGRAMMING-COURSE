#include <stdio.h>

int main()
{
    int num = 71, sum = 0;

loop:
    sum = sum + num;
    num = num + 2;

    if (num <= 79)
        goto loop;

    printf("%d", sum);

    return 0;
}
