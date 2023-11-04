#include<stdio.h>

typedef long long ll;

int n, m;
ll time = 0;
int house[100001];

int main()
{
	scanf("%d%d", &n, &m);
	for(int i = 0; i < m; ++i)
	{
		scanf("%d", &house[i]);
		if(i)
		{
			if(house[i] >= house[i-1])
				time += house[i] - house[i-1];
			else
				time += n - house[i-1] + house[i];
		}
		else
			time += house[i] - 1;
	}
	printf("%lld", time);
	return 0;
}
