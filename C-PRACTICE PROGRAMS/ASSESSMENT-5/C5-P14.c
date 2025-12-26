#include <stdio.h>

int main()
{
    int num, temp, first, last, middle, result, power = 1;

    scanf("%d", &num);

    last = num % 10;
    temp = num;

    while(temp >= 10)
    {
        temp = temp / 10;
        power = power * 10;
    }

    first = temp;
    middle = (num % power) / 10;

    result = last * power + middle * 10 + first;

    printf("%d", result);
    return 0;
}
