#include <stdio.h>
int find_hcf(int a, int b)
{
    int i, hcf = 1;
    for (i = 1; i <= a && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
            hcf = i;
    }
    return hcf;
}
int disp_LCM3(int a, int b, int c)
{
    int hcf1, lcm1, hcf2, lcm2;
    hcf1 = find_hcf(a, b);
    lcm1 = (a * b) / hcf1;
    hcf2 = find_hcf(lcm1, c);
    lcm2 = (lcm1 * c) / hcf2;
    return lcm2;
}
int main()
{
    int n1, n2, n3, result;
    scanf("%d %d %d", &n1, &n2, &n3);
    result = disp_LCM3(n1, n2, n3);
    printf("%d", result);

    return 0;
}
