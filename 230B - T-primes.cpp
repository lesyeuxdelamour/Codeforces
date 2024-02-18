#include <stdio.h>
#include <math.h>

typedef long long ll;

int prime(ll n)
{
	for(ll i = 2; i*i <= n; ++i)
		if(n%i == 0)
			return 0;
	return n > 1;
}

int tprime(ll n)
{
    ll sqrt_n = (ll)sqrt(n);
    if(sqrt_n*sqrt_n == n && prime(sqrt_n))
        return 1;
    return 0;
}

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		ll n;
		scanf("%lld", &n);
		if(tprime(n))
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}

