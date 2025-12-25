#include <stdio.h>

int main()
{
    int num = 11, d1, d2;

loop:
    d1 = num / 10;   
    d2 = num % 10;  

    if ((num % 2 != 0) && (d1 + d2 == 7))
        printf("%d\n", num);

    num++;

    if (num < 100)
        goto loop;

    return 0;
}
