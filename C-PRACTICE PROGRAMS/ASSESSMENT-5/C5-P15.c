#include <stdio.h>

int main()
{
    int num, temp, first, power = 1, result;

    scanf("%d", &num);

    temp = num;

    while(temp >= 10)
    {
        temp = temp / 10;
        power = power * 10;
    }

    first = temp;

    if(first % 2 != 0)   
    {
        first = first - 1;
        result = first * power + (num % power);
        printf("%d", result);
    }
    else              
    {
        printf("%d", num);
    }

    return 0;
}
