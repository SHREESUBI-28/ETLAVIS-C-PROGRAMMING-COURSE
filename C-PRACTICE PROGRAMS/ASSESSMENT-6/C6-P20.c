#include <stdio.h>
int main()
{
    int i = 2, count = 0, j, flag;
    while (i <= 9)
    {
        j = 2;
        flag = 0;
        while (j <= i / 2)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
            j++;
        }
        if (flag == 0)
            count++;

        i++;
    }
    printf("%d", count);
    return 0;
}
