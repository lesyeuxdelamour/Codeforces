#include<stdio.h>

char wub[201];
int i = 0, space = 0;

int main()
{
	scanf("%s", wub);
	while(wub[i] != NULL)
	{
		if(wub[i] == 'W' && wub[i+1] == 'U' && wub[i+2] == 'B')
		{
			i+=2;
			if(space)
			{
				printf(" ");
				space = 0;
			}
		}
		else
		{
			printf("%c", wub[i]);
			space = 1;
		}
		i++;
	}
}
	
