#include <stdio.h>

int main()
{
    int num, temp, msd, pow = 1;
    scanf("%d", &num);

    temp = num;

find_msd:
    if (temp >= 10)
    {
        temp = temp / 10;
        pow = pow * 10;
        goto find_msd;
    }

    msd = temp;

    if (msd % 2 != 0)  
    {
        num = num - pow;   
    }

    printf("%d", num);
    return 0;
}
