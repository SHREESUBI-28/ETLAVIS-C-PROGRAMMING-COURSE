#include <stdio.h>

void intcon(int *src1, int size1, int *src2, int size2, int *dst)
{
    int i;
    for (i = 0; i < size1; i++)
    {
        *dst = *src1;
        dst++;
        src1++;
    }
    for (i = 0; i < size2; i++)
    {
        *dst = *src2;
        dst++;
        src2++;
    }
}

int main()
{
    int a[] = {1, 2, 3};
    int b[] = {4, 5, 6};
    int c[6];
    int i;

    intcon(a, 3, b, 3, c);

    for (i = 0; i < 6; i++)
        printf("%d ", c[i]);

    return 0;
}
