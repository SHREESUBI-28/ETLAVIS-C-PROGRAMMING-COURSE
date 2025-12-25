#include <stdio.h>

int main()
{
    int i = 1;

start:
    printf("%d\n", i);
    i = i + 2;

    if (i <= 9)
        goto start;

    return 0;
}
