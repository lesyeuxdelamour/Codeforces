#include <stdio.h>

typedef long long ll;

int odddivisor(ll n)
{
    while (n % 2 == 0)
        n /= 2;
    return n != 1;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        ll n;
        scanf("%lld", &n);
        printf(odddivisor(n) ? "YES\n" : "NO\n");
    }
}
