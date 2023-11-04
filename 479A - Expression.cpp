#include<stdio.h>

int a, b, c;

int max(int a, int b)
{
	if(a > b)
		return a;
	return b;
}

int main()
{
	scanf("%d%d%d", &a, &b, &c);
	printf("%d", max(a+b+c, max(a*b*c, max(a+b*c, max(a*b+c, max((a+b)*c, a*(b+c)))))));
	return 0;
}
