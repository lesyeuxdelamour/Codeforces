#include<stdio.h>

int n;
double t, sum = 0, ans = 0;

int main()
{
	scanf("%d", &n);
	for(int i = 0; i < n; ++i)
	{
		scanf("%lf", &t);
		sum+=t;
	}
	ans = sum/n;
	printf("%.12lf", ans);
	return 0;
}
