#include <stdio.h>
void arrange_ascend()
{
    int i = 1;
    int *p = &i;
    while(*p <= 5)
    {
        printf("%d\n", *p);
        (*p)++;
    }
}

int main()
{
    arrange_ascend();
}
