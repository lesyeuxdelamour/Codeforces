#include<stdio.h>

int n, m;

int min(int a, int b)
{
	return a < b ? a : b;
}

int main()
{
	scanf("%d%d", &n, &m);
	if(min(n, m)%2)
		printf("Akshat");
	else
		printf("Malvika");
	return 0;
}
