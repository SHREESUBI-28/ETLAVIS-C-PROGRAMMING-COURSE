#include <stdio.h>
void strcon(char *src1, char *src2, char *dst)
{
    while (*src1 != '\0')
    {
        *dst = *src1;
        dst++;
        src1++;
    }
    while (*src2 != '\0')
    {
        *dst = *src2;
        dst++;
        src2++;
    }
    *dst = '\0';
}
int main()
{
    char s1[20] = "Hello";
    char s2[20] = "World";
    char s3[40];
    strcon(s1, s2, s3);
    printf("%s", s3);
}
