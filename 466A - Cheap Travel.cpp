#include<stdio.h>

int m, n, a, b;

int main()
{
	scanf("%d%d%d%d", &n, &m, &a, &b);
	printf("%d", m*a < b ? n*a : (n/m*b + (n%m*a < b ? n%m*a : b)));
	return 0;
}
