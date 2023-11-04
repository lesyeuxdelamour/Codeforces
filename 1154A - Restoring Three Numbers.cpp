#include<stdio.h>
#include<stdlib.h>

int sum[4];

int cmp(const void *x, const void *y)
{
	int u = *(int*)x;
	int v = *(int*)y;
	return u - v;
}

int main()
{
	for(int i = 0; i < 4; ++i)
		scanf("%d", &sum[i]);
	qsort(sum, 4, sizeof(int), cmp);
	for(int i = 0; i < 3; ++i)
		printf("%d ", sum[3] - sum[i]);
	return 0;
}	
