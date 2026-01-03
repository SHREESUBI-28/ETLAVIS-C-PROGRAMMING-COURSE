#include <stdio.h>
int main()
{
    int n, i = 0;
    char s[20];
    scanf("%d", &n);
    if (n == 0)
    {
        s[i++] = '0';
    }
    while (n > 0)
    {
        s[i++] = (n % 10) + '0';
        n = n / 10;
    }
    s[i] = '\0';
    while (i > 0)
    {
        printf("%c", s[--i]);
    }
}
