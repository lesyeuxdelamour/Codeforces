#include<stdio.h>
#include<math.h>

int t;
int a, b;

int main()
{
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d%d", &a, &b);
		int diff = abs(a-b) + 9;
		printf("%d\n", diff/10);
	}
	return 0;
}
