#include <stdio.h>

int max(int a, int b)
{
    return a > b ? a : b;
}

int main()
{
    int n;
    scanf("%d", &n);
    if (n >= 0)
        printf("%d", n);
    else
    {
        int a = n / 10;
        int b = n / 100 * 10 + n % 10;
        printf("%d", max(a, b));
    }
    return 0;
}
