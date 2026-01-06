#include <stdio.h>
void strcopy(char *src, char *dst)
{
    while (*src != '\0')
    {
        *dst = *src;
        src++;
        dst++;
    }
    *dst = '\0';  
}
int main()
{
    char src[50] = "ETALVIS";
    char dst[50];
    strcopy(src, dst);
    printf("Copied string: %s", dst);
}
