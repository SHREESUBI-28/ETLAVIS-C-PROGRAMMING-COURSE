#include <stdio.h>
void getnumbers(char *n1, char *n2);
void addnumbers(char *n1, char *n2, char *res);
void print(char *res);
int main()
{
    char number1[51], number2[51], result[52];

    getnumbers(number1, number2);
    addnumbers(number1, number2, result);
    print(result);

    return 0;
}
void getnumbers(char *n1, char *n2)
{
    scanf("%s", n1);
    scanf("%s", n2);
}
void addnumbers(char *n1, char *n2, char *res)
{
    char *p1 = n1, *p2 = n2;
    int len1 = 0, len2 = 0, carry = 0;
    while (*p1++) len1++;
    while (*p2++) len2++;
    p1 = n1 + len1 - 1;
    p2 = n2 + len2 - 1;
    res = res + (len1 > len2 ? len1 : len2);
    *(res + 1) = '\0';
    while (len1 > 0 || len2 > 0 || carry)
    {
        int d1 = (len1 > 0) ? (*p1-- - '0') : 0;
        int d2 = (len2 > 0) ? (*p2-- - '0') : 0;

        int sum = d1 + d2 + carry;
        carry = sum / 10;

        *res-- = (sum % 10) + '0';

        len1--;
        len2--;
    }
}
void print(char *res)
{
    while (*res == '\0') res++;
    printf("%s", res);
}
