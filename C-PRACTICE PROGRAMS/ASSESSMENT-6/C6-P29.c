#include <stdio.h>
int main()
{
    int a, b, c, max;
    scanf("%d %d %d", &a, &b, &c);
    max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    while (1)
    {
        if (max % a == 0 && max % b == 0 && max % c == 0)
        {
            printf("%d", max);
            break;
        }
        max++;
    }
}
