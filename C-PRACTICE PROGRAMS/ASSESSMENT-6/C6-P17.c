#include <stdio.h>
int main()
{
    int num, i = 2, flag = 0;
    scanf("%d", &num);

    if (num <= 1)
    {
        flag = 1;
    }
    else
    {
        while (i <= num / 2)
        {
            if (num % i == 0)
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
