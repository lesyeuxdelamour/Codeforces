#include <stdio.h>

int a, b, c, d;

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d%d%d%d", &a, &b, &c, &d);
        printf("%d\n", (b > a) + (c > a) + (d > a));
    }
    return 0;
}