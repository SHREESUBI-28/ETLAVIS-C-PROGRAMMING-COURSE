#include <stdio.h>

int main()
{
    int num, sum = 0;

    for(num = 10; num <= 99; num++)
    {
        if((num/10)%10 == 7)   
        {
            sum = sum + num;
        }
    }

    printf("%d", sum);
    return 0;
}
