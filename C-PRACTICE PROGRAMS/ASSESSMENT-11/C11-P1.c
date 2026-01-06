#include <stdio.h>
int main()
{
    int num;
    int *p;
    scanf("%d", &num);
    p = &num;
    printf("%d\n", num);
    *p = *p + 10;
    printf("%d\n", num);
}
