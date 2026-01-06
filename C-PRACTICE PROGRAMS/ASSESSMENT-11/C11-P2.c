#include <stdio.h>
void inc(int *p, int n)
{
    int i;
    for(i = 0; i < n; i++)
        (*(p + i))++;
}
int main()
{
    int a[5], i;
    for(i = 0; i < 5; i++)
        scanf("%d", a + i);
    inc(a, 5);
    for(i = 0; i < 5; i++)
        printf("%d ", *(a + i));
}
