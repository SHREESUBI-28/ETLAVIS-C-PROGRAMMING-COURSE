#include <stdio.h>
int main()
{
    int num, middle, i = 2, flag = 0;
    scanf("%d", &num);
    middle = (num / 10) % 100;

    if (middle <= 1)
    {
        flag = 1;
    }
    else
    {
        while (i <= middle / 2)
        {
            if (middle % i == 0)
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
