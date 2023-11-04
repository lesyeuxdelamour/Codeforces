#include<stdio.h>

int n, t;

int year(int t)
{
	int a = t%10, b = (t/10)%10, c = (t/100)%10, d = t/1000;
	if(a == b || a == c || a == d || b == c || b == d || c == d)
		return 0;
	return 11;
}

int main()
{
	scanf("%d", &n);
	t = n + 1;
	while(t > 999 && t < 9000)
	{
		if(year(t) == 1)
		{
			printf("%d", t);
			break;
		}
		else
			t++;
	}
	return 0;
}
