#include <stdio.h>

int main()
{
    int i, j, count = 0, flag;

    for(i = 2; i <= 9; i++)
    {
        flag = 0;
        for(j = 2; j <= i / 2; j++)
        {
            if(i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
            count++;
    }

    printf("%d", count);
    return 0;
}
