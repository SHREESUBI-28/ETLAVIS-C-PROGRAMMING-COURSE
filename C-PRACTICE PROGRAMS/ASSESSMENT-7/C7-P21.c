#include <stdio.h>
void disp_total_odd_digits()
{
    int num, digit, count = 0;
    scanf("%d", &num);
    while (num > 0)
    {
        digit = num % 10;
        if (digit % 2 != 0)
            count++;
        num = num / 10;
    }
    printf("%d", count);
}
int main()
{
    disp_total_odd_digits();
    return 0;
}
