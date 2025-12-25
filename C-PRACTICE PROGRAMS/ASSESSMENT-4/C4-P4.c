#include <stdio.h>

int main()
{
    int num = 6, sum = 0;

loop:
    sum = sum + num;
    num--;

    if (num >= 1)
        goto loop;

    printf("%d", sum);

    return 0;
}
