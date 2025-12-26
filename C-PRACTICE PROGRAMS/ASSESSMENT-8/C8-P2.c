#include <stdio.h>
int disp_rsum()
{
    int i, sum = 0;
    for (i = 6; i >= 1; i--)
    {
        sum = sum + i;
    }
    return sum;
}
int main()
{
    int result;
    result = disp_rsum();
    printf("%d", result);
    return 0;
}
