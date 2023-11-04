#include<stdio.h>

int n;

int nearlucky(int n)
{	
	if(n%4 == 0 || n%7 == 0 || n%44 == 0 || n%47 == 0 || n%74 == 0 || n%77 == 0 || n%444 == 0 || n%447 == 0 || n%474 == 0 || n%477 == 0 || n%744 == 0 || n%747 == 0 || n%774 == 0 || n%777 == 0)
		return 1;
	return 0;
}

int main()
{
	scanf("%d", &n);
	if(nearlucky(n))
		printf("YES");
	else
		printf("NO");
	return 0;
}
