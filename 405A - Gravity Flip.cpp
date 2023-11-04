#include<stdio.h>
#include<stdlib.h>

int n;
int box[101];

int cmp(const void *a, const void *b)
{
	int u = *(int*)a;
	int v = *(int*)b;
	return u-v;
}

int main()
{
	scanf("%d", &n);
	for(int i = 0; i < n; ++i)
		scanf("%d", &box[i]);
	qsort(box, n, sizeof(int), cmp);
	for(int i = 0; i < n; ++i)
		printf("%d ", box[i]);
}
