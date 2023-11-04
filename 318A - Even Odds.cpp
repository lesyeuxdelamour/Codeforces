#include<stdio.h>

long long n, k;

int main()
{
	scanf("%lld%lld", &n, &k);
	if(k > (n+1)/2)
		printf("%lld", (k-(n+1)/2)*2);
	else
		printf("%lld", k*2-1);
	return 0;
}
