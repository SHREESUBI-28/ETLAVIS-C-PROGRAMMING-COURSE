#include <stdio.h>

int main()
{
    int num, twoDigit, count = 0;

    scanf("%d", &num);

    while(num >= 10)
    {
        twoDigit = num % 100;

        if(twoDigit == 16 || twoDigit == 25 || twoDigit == 36 ||
           twoDigit == 49 || twoDigit == 64 || twoDigit == 81)
        {
            count++;
        }

        num = num / 10;
    }

    printf("%d", count);
    return 0;
}
