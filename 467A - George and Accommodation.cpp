#include<stdio.h>
#define size 101

int n, a[size], b[size], count = 0;

void input(int *a, int *b, int n)
{
	for(int i = 0; i < n; ++i)
		scanf("%d%d", &a[i], &b[i]);
}

int main()
{
	scanf("%d", &n);
	input(a, b, n);
	for(int i = 0; i < n; ++i)
		if(b[i] - a[i] >= 2)
			count++;
	printf("%d", count);
}
