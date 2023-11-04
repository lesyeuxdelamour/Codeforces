#include<stdio.h>
#include<string.h>

char num[100001];
int sum = 0, count = 1;

int sumdigit(int n, int count)
{
	int res = 0;
	if(n > 9)
	{
		count++;	
		while(n)
		{
			res+=n%10;
			n/=10;
		}
		if(res < 10)
			return count;
		return sumdigit(res, count);
	}	
	else
		return count;
}

int main()
{
	scanf("%s", num);
	if(strlen(num) == 1)
		printf("0");
	else
	{
		for(int i = 0; i < strlen(num); ++i)
			sum+=num[i] - '0';
		printf("%d", sumdigit(sum, count));
	}
	return 0;
}
