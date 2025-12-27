#include <stdio.h>
int main()
{
    int a[5], i, sum = 0;
    float avg;
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }
    avg = sum / 5.0;
    printf("%.2f", avg);
}
