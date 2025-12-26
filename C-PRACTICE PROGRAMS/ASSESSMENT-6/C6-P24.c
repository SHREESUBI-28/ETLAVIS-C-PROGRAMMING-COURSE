#include <stdio.h>
int main()
{
    int num;
    int d1, d2, count = 0;
    scanf("%d", &num);
    while (num >= 10)
    {
        d1 = num % 10;
        d2 = (num / 10) % 10;
        int twoDigit = d2 * 10 + d1;
        if (twoDigit == 16 || twoDigit == 25 || twoDigit == 36 ||
            twoDigit == 49 || twoDigit == 64 || twoDigit == 81)
        {
            count++;
        }
        num = num / 10;
    }
    printf("%d", count);
    return 0;
}
