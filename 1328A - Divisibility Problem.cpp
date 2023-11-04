#include<stdio.h>

int t, a, b;

int main()
{
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d%d", &a, &b);
		if(a%b)
			printf("%d\n", b-a%b);
		else
			printf("0\n");
	}
	return 0;
}
