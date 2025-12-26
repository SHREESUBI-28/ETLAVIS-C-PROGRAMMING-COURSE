#include <stdio.h>
#include<math.h>
void disp_interchange_first_last_digit()
{
    int num, temp, first, last, digits = 0, mid, result;
    scanf("%d", &num);
    temp = num;
    last = num % 10;
    while (temp >= 10)
    {
        temp = temp / 10;
        digits++;
    }
    first = temp;
    mid = (num % (int)pow(10, digits)) / 10;
    result = last * (int)pow(10, digits) + mid * 10 + first;
    printf("%d", result);
}
int main()
{
    disp_interchange_first_last_digit();
    return 0;
}
