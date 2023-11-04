#include<stdio.h>

int t, n;

int divide(int n)
{
	if(n > 2)
	{
		if(n%2)
			return n/2;
		else
			return n/2-1;
	}
	return 0;
}

int main()
{
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d", &n);
		printf("%d\n", divide(n));
	}
	return 0;
}
