#include <stdio.h>

void solve(int n)
{
    if (n % 4 != 0)
    {
        printf("NO\n");
        return;
    }
    else
        printf("YES\n");
    for (int i = 2; i < n + 2; i += 2)
        printf("%d ", i);
    for (int i = 1; i < n - 2; i += 2)
        printf("%d ", i);
    printf("%d", n / 2 * 3 - 1);
    printf("\n");
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        solve(n);
    }
    return 0;
}
