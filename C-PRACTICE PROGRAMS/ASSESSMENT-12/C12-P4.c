#include <stdio.h>
int main()
{
    char str[200];
    char *p;
    int count = 0;
    gets(str);
    p = str;
    while (*p != '\0')
    {
        if (*p != ' ' && (p == str || *(p - 1) == ' '))
            count++;

        p++;
    }
    printf("%d", count);
}
