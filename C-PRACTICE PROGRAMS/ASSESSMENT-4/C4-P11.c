#include <stdio.h>

int main()
{
    int num, sum = 0;
    scanf("%d", &num);

loop:
    if (num > 0)
    {
        sum = sum + (num % 10);  
        num = num / 10;          
        goto loop;
    }

    printf("%d", sum);
    return 0;
}

