#include<stdio.h>
#include<math.h>

int a, b;

int main()
{
	scanf("%d%d", &a, &b);
	if(a > b)
		printf("%d ", b);
	else
		printf("%d ", a);
	printf("%d", abs(a-b)/2);
	return 0;
}
