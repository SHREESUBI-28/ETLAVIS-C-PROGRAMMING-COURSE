#include <stdio.h>
int main()
{
    char str[100], ch;
    char *p = str;
    int pos = 1;
    scanf("%s", str);
    scanf(" %c", &ch);
    while (*p != '\0')
    {
        if (*p == ch)
        {
            printf("%d ", pos);
        }
        p++;
        pos++;
    }
}
