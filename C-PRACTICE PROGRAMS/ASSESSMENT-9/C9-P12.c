#include <stdio.h>
int main()
{
    int a[100];
    int i = 0, num, sum = 0;
    while (1)
    {
        scanf("%d", &num);

        if (num == 0)
            break;

        a[i] = num;
        sum = sum + num;
        i++;
    }
    printf("%d\n", i);
    printf("%d\n", sum);
}
