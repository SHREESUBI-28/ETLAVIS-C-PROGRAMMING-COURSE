#include <stdio.h>

int main()
{
    int num, twoDigit, count = 0;

    scanf("%d", &num);

    while(num >= 10)
    {
        twoDigit = num % 100;

        if(twoDigit >= 10 && twoDigit % 2 != 0)
            count++;

        num = num / 10;
    }

    printf("%d", count);
    return 0;
}
