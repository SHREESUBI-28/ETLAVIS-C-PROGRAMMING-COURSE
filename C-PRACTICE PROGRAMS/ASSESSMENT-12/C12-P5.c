#include <stdio.h>

void getnumbers(char *a, char *b)
{
    fgets(a, 51, stdin);
    fgets(b, 51, stdin);
    while (*a && *a != '\n') a++;
    *a = '\0';

    while (*b && *b != '\n') b++;
    *b = '\0';
}

void multiplynumbers(char *a, char *b, int *res, int *size)
{
    int i, j;
    int len1 = 0, len2 = 0;

    while (*(a + len1)) len1++;
    while (*(b + len2)) len2++;

    *size = len1 + len2;

    for (i = 0; i < *size; i++)
        *(res + i) = 0;

    for (i = len1 - 1; i >= 0; i--)
    {
        for (j = len2 - 1; j >= 0; j--)
        {
            int mul = (a[i] - '0') * (b[j] - '0');
            int sum = mul + *(res + i + j + 1);

            *(res + i + j + 1) = sum % 10;
            *(res + i + j) += sum / 10;
        }
    }
}

void print(int *res, int size)
{
    int i = 0;

    while (i < size && *(res + i) == 0)
        i++;

    if (i == size)
        printf("0");
    else
        for (; i < size; i++)
            printf("%d", *(res + i));
}

int main()
{
    char num1[51], num2[51];
    int result[102];
    int size;

    getnumbers(num1, num2);
    multiplynumbers(num1, num2, result, &size);
    print(result, size);

    return 0;
}
