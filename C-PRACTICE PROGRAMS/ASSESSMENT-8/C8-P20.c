#include <stdio.h>
int disp_count_HCF2(int a, int b)
{
    int i, hcf = 1;

    for (i = 1; i <= a && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
            hcf = i;
    }

    return hcf;
}
int main()
{
    int n1, n2, result;
    scanf("%d %d", &n1, &n2);
    result = disp_count_HCF2(n1, n2);
    printf("%d", result);
    return 0;
}
