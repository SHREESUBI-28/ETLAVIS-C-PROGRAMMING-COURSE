#include <stdio.h>
#include<math.h>
int disp_interchange_first_last_digit(int num)
{
    int first, last, middle, temp = num, digits = 0;
    last = num % 10;
    while (temp >= 10)
    {
        temp = temp / 10;
        digits++;
    }
    first = temp;
    middle = (num % (int)pow(10, digits)) / 10;
    return last * (int)pow(10, digits) + middle * 10 + first;
}
int main()
{
    int num, result;
    scanf("%d", &num);
    result = disp_interchange_first_last_digit(num);
    printf("%d", result);
    return 0;
}
