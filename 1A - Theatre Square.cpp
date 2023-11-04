#include<stdio.h>

long long res(int x, int y)
{
	if(x%y == 0)
		return x/y;
	else
		return x/y+1;
}

int main()
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	printf("%lld", res(a, c)*res(b, c));
}
