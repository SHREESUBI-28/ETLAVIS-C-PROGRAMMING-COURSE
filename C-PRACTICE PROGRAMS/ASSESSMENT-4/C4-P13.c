#include <stdio.h>

int main()
{
    int num, temp, first, last, digits = 0, pow = 1, result;
    scanf("%d", &num);

    temp = num;
    last = num % 10;

count:
    if (temp > 9)
    {
        temp = temp / 10;
        digits++;
        goto count;
    }

    first = temp;

power:
    if (digits > 0)
    {
        pow = pow * 10;
        digits--;
        goto power;
    }

    result = last * pow + (num % pow) / 10 * 10 + first;
    printf("%d", result);

    return 0;
}
