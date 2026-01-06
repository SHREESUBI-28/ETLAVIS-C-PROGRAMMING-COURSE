#include <stdio.h>
int strcmp(char *src, char *dst)
{
    while (*src != '\0' && *dst != '\0')
    {
        if (*src != *dst)
            return 0;   

        src++;
        dst++;
    }
    if (*src == '\0' && *dst == '\0')
        return 1;       
    else
        return 0;    
}
int main()
{
    char s1[] = "hello";
    char s2[] = "hello";

    if (strcmp(s1, s2))
        printf("Success");
    else
        printf("Failure");
}
