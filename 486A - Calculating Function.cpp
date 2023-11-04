#include<stdio.h>

typedef long long ll;

ll n;

int main()
{
	scanf("%lld", &n);
	if(n%2)
		printf("%lld", n/2-n);
	else
		printf("%lld", n/2);
	return 0;
}
