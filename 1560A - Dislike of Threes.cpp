#include <stdio.h>

int poly[1001];

void sieve(int *poly)
{
    int count = 1;
    for (int i = 1; i < 1667; ++i)
        if (i % 3 && i % 10 != 3)
            poly[count++] = i;
}

int main()
{
    int t, k;
    scanf("%d", &t);
    sieve(poly);
    while (t--)
    {
        scanf("%d", &k);
        printf("%d\n", poly[k]);
    }
    return 0;
}