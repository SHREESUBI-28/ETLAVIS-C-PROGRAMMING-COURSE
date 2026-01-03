#include <stdio.h>
int main()
{
    char num[20];
    int i;
    scanf("%s", num);
    for (i = 0; num[i] != '\0'; i++)
    {
        printf("%c\n", num[i]);
    }
}
