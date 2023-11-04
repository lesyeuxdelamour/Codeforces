#include<stdio.h>
#include<math.h>

typedef long long ll;

int n;
ll arr[100001];

int prime(ll n)
{
	for(ll i = 2; i*i <= n; ++i)
		if(n%i == 0)
			return 0;
	return n > 1;
}

int tprime(ll n)
{
	if(n%2 == 0 && n > 4 || n < 4)
		return 0;
    ll sqrt_n = (ll)sqrt(n);
    if(sqrt_n*sqrt_n == n && prime(sqrt_n))
        return 1;
    return 0;
}

int main()
{
	scanf("%d", &n);
	for(int i = 0; i < n; ++i)
	{
		scanf("%lld", &arr[i]);
		if(tprime(arr[i]))
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}

