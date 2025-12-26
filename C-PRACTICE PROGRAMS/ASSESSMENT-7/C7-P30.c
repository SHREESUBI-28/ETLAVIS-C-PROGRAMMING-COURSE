#include <stdio.h>
void disp_count_HCF2()
{
    int a, b, i, hcf = 1;
    scanf("%d %d", &a, &b);
    for (i = 1; i <= a && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            hcf = i;
        }
    }
    printf("%d", hcf);
}
int main()
{
    disp_count_HCF2();
    return 0;
}
