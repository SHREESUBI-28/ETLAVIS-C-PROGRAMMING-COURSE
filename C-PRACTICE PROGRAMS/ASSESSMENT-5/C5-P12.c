#include <stdio.h>

int main()
{
    int num, sum = 0, i;

    scanf("%d", &num);

    for(i = num; i > 0; i = i / 10)
    {
        sum = sum + (i % 10);
    }

    printf("%d", sum);
    return 0;
}
