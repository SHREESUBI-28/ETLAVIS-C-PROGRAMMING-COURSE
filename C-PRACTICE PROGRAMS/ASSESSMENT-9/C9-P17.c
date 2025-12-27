#include <stdio.h>
int main()
{
    int a[50], b[50], sum[51];
    int n1, n2, i, carry = 0, s;
    scanf("%d", &n1);
    for (i = 0; i < n1; i++)
        scanf("%d", &a[i]);
    scanf("%d", &n2);
    for (i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    i = 0;
    while (i < n1 || i < n2)
    {
        s = carry;

        if (i < n1)
            s = s + a[n1 - 1 - i];

        if (i < n2)
            s = s + b[n2 - 1 - i];

        sum[i] = s % 10;
        carry = s / 10;
        i++;
    }
    if (carry > 0)
    {
        sum[i] = carry;
        i++;
    }
    while (i > 0)
    {
        printf("%d", sum[i - 1]);
        i--;
    }
}
