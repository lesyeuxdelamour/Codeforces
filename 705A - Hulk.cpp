#include<stdio.h>

int n;

int main()
{
	scanf("%d", &n);
	for(int i = 0; i < n; ++i)
	{
		if(i%2)
			printf("I love ");
		else
			printf("I hate ");
		if(i != n-1)
			printf("that ");
	}
	printf("it");
	return 0;
}
