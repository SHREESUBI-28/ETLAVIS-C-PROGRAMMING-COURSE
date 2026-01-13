#include <stdio.h>

int main()
{
    char str[100], sub[50];
    char *p, *q, *r;
    int pos = 1, found = 0;
    scanf("%s", str);
    scanf("%s", sub);
    p = str;
    while (*p != '\0')
    {
        q = p;
        r = sub;
        while (*q == *r && *r != '\0')
        {
            q++;
            r++;
        }

        if (*r == '\0')   
        {
            printf("%d", pos);
            found = 1;
            break;
        }

        p++;
        pos++;
    }
    if (!found)
        printf("Not Found");
}
