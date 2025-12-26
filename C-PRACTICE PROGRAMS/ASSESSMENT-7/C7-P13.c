#include <stdio.h>
void disp_reverse_number()
{
    int num, rev = 0;
    scanf("%d", &num);
    while (num > 0)
    {
        rev = rev * 10 + (num % 10);
        num = num / 10;
    }
    printf("%d", rev);
}

int main()
{
    disp_reverse_number();
    return 0;
}
