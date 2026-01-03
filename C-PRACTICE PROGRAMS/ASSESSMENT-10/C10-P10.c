#include <stdio.h>
int main()
{
    char num[51];
    int i = 0;
    scanf("%s", num);
    while (num[i] != '\0')
    {
        i++;
    }
    for (i = i - 1; i >= 0; i--)
    {
        printf("%c", num[i]);
    }
}
