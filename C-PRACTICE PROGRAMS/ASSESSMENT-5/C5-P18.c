#include <stdio.h>

int main()
{
    int num, firstTwo, i, flag = 0;

    scanf("%d", &num);

    firstTwo = num % 100; 

    if(firstTwo <= 1)
        flag = 1;
    else
    {
        for(i = 2; i <= firstTwo / 2; i++)
        {
            if(firstTwo % i == 0)
            {
                flag = 1;
                break;
            }
        }
    }

    if(flag == 0)
        printf("Prime");
    else
        printf("Not Prime");

    return 0;
}
