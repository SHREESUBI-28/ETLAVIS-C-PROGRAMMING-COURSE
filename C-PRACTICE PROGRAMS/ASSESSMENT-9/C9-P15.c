#include <stdio.h>
int main()
{
    int a[20], b[20];
    int i = 0, j, num, temp;
    int sum, k, n;
    while (1)
    {
        scanf("%d", &num);

        if (num == 0)
            break;

        a[i] = num;
        i++;
    }
    n = i;   
    for (i = 0; i < n; i++)
    {
        num = a[i];
        sum = 0;

        while (num > 0)
        {
            sum = sum + (num % 10);
            num = num / 10;
        }

        b[i] = sum;
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (b[i] > b[j])
            {
                temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", b[i]);
    }
}
