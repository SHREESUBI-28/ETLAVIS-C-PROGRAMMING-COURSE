#include <stdio.h>
int disp_total_2digit_odd(int num)
{
    int twoDigit, count = 0;

    while (num >= 10)
    {
        twoDigit = num % 100;  

        if (twoDigit >= 10 && twoDigit % 2 != 0)
            count++;

        num = num / 10;        
    }
    return count;
}
int main()
{
    int num, result;
    scanf("%d", &num);
    result = disp_total_2digit_odd(num);
    printf("%d", result);
    return 0;
}
