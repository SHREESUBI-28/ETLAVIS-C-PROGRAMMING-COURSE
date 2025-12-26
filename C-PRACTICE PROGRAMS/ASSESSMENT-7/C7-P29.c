#include <stdio.h>
void disp_LCM2()
{
    int a, b, lcm, max;
    scanf("%d %d", &a, &b);
    max = (a > b) ? a : b;
    for (lcm = max; ; lcm++)
    {
        if (lcm % a == 0 && lcm % b == 0)
        {
            printf("%d", lcm);
            break;
        }
    }
}
int main()
{
    disp_LCM2();
    return 0;
}
