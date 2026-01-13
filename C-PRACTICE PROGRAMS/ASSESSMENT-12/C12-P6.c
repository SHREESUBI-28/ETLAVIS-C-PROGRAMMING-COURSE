#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 55

void remove_zero(char *s)
{
    while (*s == '0' && *(s + 1))
        memmove(s, s + 1, strlen(s));
}

int valid(char *s)
{
    if (*s == '\0') return 0;
    while (*s)
    {
        if (!isdigit(*s)) return 0;
        s++;
    }
    return 1;
}

void add(char *a, char *b, char *r)
{
    int i = strlen(a) - 1, j = strlen(b) - 1, c = 0, k = 0;
    char t[2 * MAX];

    while (i >= 0 || j >= 0 || c)
    {
        int s = c;
        if (i >= 0) s += a[i--] - '0';
        if (j >= 0) s += b[j--] - '0';
        t[k++] = (s % 10) + '0';
        c = s / 10;
    }

    for (i = 0; i < k; i++)
        r[i] = t[k - i - 1];
    r[k] = '\0';
}

void sub(char *a, char *b, char *r)
{
    int i = strlen(a) - 1, j = strlen(b) - 1, br = 0, k = 0;
    char t[MAX];

    while (i >= 0)
    {
        int d = (a[i] - '0') - br - (j >= 0 ? b[j] - '0' : 0);
        if (d < 0) { d += 10; br = 1; }
        else br = 0;
        t[k++] = d + '0';
        i--; j--;
    }

    for (i = 0; i < k; i++)
        r[i] = t[k - i - 1];
    r[k] = '\0';
    remove_zero(r);
}

void mul(char *a, char *b, char *r)
{
    int la = strlen(a), lb = strlen(b);
    int arr[2 * MAX] = {0};

    for (int i = la - 1; i >= 0; i--)
        for (int j = lb - 1; j >= 0; j--)
            arr[i + j + 1] += (a[i] - '0') * (b[j] - '0');

    for (int i = la + lb - 1; i > 0; i--)
    {
        arr[i - 1] += arr[i] / 10;
        arr[i] %= 10;
    }

    int i = 0, k = 0;
    while (i < la + lb && arr[i] == 0) i++;
    if (i == la + lb) r[k++] = '0';
    else while (i < la + lb) r[k++] = arr[i++] + '0';
    r[k] = '\0';
}

void divide(char *a, char *b)
{
    char q[MAX] = "", rem[MAX] = "0", t[2] = {0};

    for (int i = 0; a[i]; i++)
    {
        t[0] = a[i];
        add(rem, t, rem);
        remove_zero(rem);

        int c = 0;
        while (strcmp(rem, b) >= 0)
        {
            sub(rem, b, rem);
            c++;
        }
        int l = strlen(q);
        q[l] = c + '0';
        q[l + 1] = '\0';
    }

    remove_zero(q);
    printf("Quotient: %s\nRemainder: %s\n", q, rem);
}

int main()
{
    char line[200], a[MAX], b[MAX], res[2 * MAX], op;

    while (1)
    {
        printf("Calc> ");
        fgets(line, sizeof(line), stdin);
        line[strcspn(line, "\n")] = '\0';

        if (!strcmp(line, "Exit"))
            break;

        if (sscanf(line, "%50[^+-*/]%c%50s", a, &op, b) != 3)
        {
            printf("Invalid input\n");
            continue;
        }

        if (!valid(a) || !valid(b))
        {
            printf("Invalid numbers\n");
            continue;
        }

        remove_zero(a);
        remove_zero(b);

        if (op == '+') add(a, b, res), printf("%s\n", res);
        else if (op == '-')
        {
            if (strcmp(a, b) < 0)
                printf("Negative result not allowed\n");
            else sub(a, b, res), printf("%s\n", res);
        }
        else if (op == '*') mul(a, b, res), printf("%s\n", res);
        else if (op == '/')
        {
            if (!strcmp(b, "0")) printf("Division by zero\n");
            else divide(a, b);
        }
        else printf("Invalid operator\n");
    }

}
