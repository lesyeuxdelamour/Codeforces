#include <stdio.h>

int max(int a, int b)
{
    return a > b ? a : b;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, y, n;
        scanf("%d%d%d", &x, &y, &n);
        int mod = n % x;
        if (mod < y)
            n -= x;
        n = n - mod + y;
        printf("%d\n", n);
    }
}