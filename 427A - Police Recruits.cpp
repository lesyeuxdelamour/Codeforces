#include<stdio.h>

int n, police = 0, crime = 0;
int city[100001];

int main()
{
	scanf("%d", &n);
	for(int i = 0; i < n; ++i)
	{
		scanf("%d", &city[i]);
		if(city[i] > 0)
			if(city[i] > 10)
				police+=10;
			else
				police+=city[i];
		else
			if(police)
				police--;
			else
				crime++;
	}
	printf("%d", crime);
	return 0;
}
