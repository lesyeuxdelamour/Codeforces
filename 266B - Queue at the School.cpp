#include<stdio.h>
#define size 50

int n, t;
char queue[size];

void swap(char *a, char *b)
{
	char temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	scanf("%d%d\n%s", &n, &t, queue);
	for(int i = 0; i < t; ++i)
		for(int j = 0; queue[j] != '\0'; ++j)
			if(queue[j] == 'B' && queue[j+1] == 'G')
			{
				swap(&queue[j], &queue[j+1]);
				++j;
			}
	printf("%s", queue);
	return 0;
}
