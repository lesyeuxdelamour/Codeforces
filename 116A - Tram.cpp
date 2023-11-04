#include<stdio.h>

int max(int x, int y)
{
	if(x > y)
		return x;
	return y;
}

int solve(int *a, int *b, int n)
{
	for(int i = 0; i < n; ++i)
		scanf("%d%d", &a[i], &b[i]);
	int res = 0, remainder = 0;
	for(int i = 0; i < n; ++i)
	{
		remainder = remainder + b[i] - a[i];
		res = max(res, remainder);
	}
	return res;
}

int main()
{
	int n;
	scanf("%d", &n);
	int a[n], b[n];
	printf("%d", solve(a, b, n));
	return 0;
}
