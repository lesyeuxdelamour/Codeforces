#include<stdio.h>
#include<stdlib.h>

int fr[3];

int cmp(const void *x, const void *y)
{
	int u = *(int*)x;
	int v = *(int*)y;
	return u - v;
}

int main()
{
	scanf("%d%d%d", &fr[0], &fr[1], &fr[2]);
	qsort(fr, 3, sizeof(int), cmp);
	printf("%d", fr[2] - fr[0]);
	return 0;
}
