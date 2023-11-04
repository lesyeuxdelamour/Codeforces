#include<stdio.h>
#include<stdlib.h>

int n;
double l, gap;
double lantern[1001];

int cmp(const void *a, const void *b)
{
	double u = *(double*)a;
	double v = *(double*)b;
	return u-v;
}

double max(double a, double b)
{
	if(a > b)
		return a;
	return b;
}

int main()
{
	scanf("%d%lf", &n, &l);
	for(int i = 0; i < n; ++i)
		scanf("%lf", &lantern[i]);
	qsort(lantern, n, sizeof(double), cmp);
	gap = max(lantern[0], l - lantern[n-1])*2;
	for(int i = 1; i < n; ++i)
		gap = max(gap, lantern[i] - lantern[i-1]);
	printf("%.10lf", gap/2);
	return 0;
}
