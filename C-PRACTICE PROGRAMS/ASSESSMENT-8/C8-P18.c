#include <stdio.h>
int disp_LCM2(int a, int b)
{
    int i, hcf = 1, lcm;

    for (i = 1; i <= a && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            hcf = i;
        }
    }

    lcm = (a * b) / hcf;
    return lcm;
}
int main()
{
    int num1, num2, result;
    scanf("%d %d", &num1, &num2);
    result = disp_LCM2(num1, num2);
    printf("%d", result);

    return 0;
}
