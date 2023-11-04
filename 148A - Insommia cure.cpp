#include<stdio.h>

int k, l, m, n, d;

int escape(int i, int k, int l, int m, int n)
{
	return i%k && i%l && i%m && i%n;
}

int main()
{
	scanf("%d%d%d%d%d", &k, &l, &m, &n, &d);
	int temp = d;
	while(temp)
	{
		if(escape(temp, k, l, m, n))
			d--;
		temp--;
	}
	printf("%d", d);
	return 0;
}
