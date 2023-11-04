#include<stdio.h>
#include<string.h>
#include<math.h>

int t;
char num[5];
int leftmost[5], pos[5];

int main()
{
	scanf("%d", &t);
	while(t--)
	{
		scanf("%s", num);
		int len = strlen(num), count = 0;
		for(int i = 0; i < len; ++i)
		{
			if(num[i] != '0')
			{
				count++;
				leftmost[count] = num[i] - '0';
				pos[count] = len - i - 1;
			}
		}
		printf("%d\n", count);
		int res;
		for(int i = 1; i <= count; ++i)
		{
			res = leftmost[i]*pow(10, pos[i]);
			printf("%d ", res);
		}
		printf("\n");
	}
	return 0;
}
