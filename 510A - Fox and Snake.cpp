#include<stdio.h>

int n, m;

int main()
{
	scanf("%d%d", &n, &m);
	for(int i = 0, j = 0; i < n; ++i)
	{
		if(i%2)
		{
			if(j%2)
				{
					printf("#");
					for(int k = 0; k < m-1; ++k)
						printf(".");
					++j;
				}
			else
				{
					for(int k = 0; k < m-1; ++k)
						printf(".");
					printf("#");	
					++j;
				}
		}
		else
			for(int l = 0; l < m; ++l)
				printf("#");
		if(i != n-1)
			printf("\n");
	}
	return 0;
}
