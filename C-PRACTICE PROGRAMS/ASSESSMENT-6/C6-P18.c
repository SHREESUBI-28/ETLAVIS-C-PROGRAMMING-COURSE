#include <stdio.h>
int main()
{
    int num, twoDigit, i = 2, flag = 0;
    scanf("%d", &num);
    twoDigit = num % 100;

    if (twoDigit <= 1)
    {
        flag = 1;
    }
    else
    {
        while (i <= twoDigit / 2)
        {
            if (twoDigit % i == 0)
            {
                flag = 1;
                break;
            }
            i++;
        }
    }

    if (flag == 0)
        printf("Prime");
    else
        printf("Not Prime");

    return 0;
}
