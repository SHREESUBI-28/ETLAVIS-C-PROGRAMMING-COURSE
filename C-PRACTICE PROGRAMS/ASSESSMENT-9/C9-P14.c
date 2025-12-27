#include <stdio.h>
int main()
{
    int a[20];
    int i = 0, num;
    float avg;
    while (1)
    {
        scanf("%d", &num);

        if (num == 0)
            break;

        a[i] = num;
        i++;
    }
    if (i % 2 != 0)
    {
        printf("%d", a[i / 2]);
    }
    else
    {
        avg = (a[(i / 2) - 1] + a[i / 2]) / 2.0;
        printf("%.2f", avg);
    }
}
