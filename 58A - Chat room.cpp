#include<stdio.h>
#include<string.h>

char hello[6] = "hello", str[101];
int x = 0;

int main()
{
	scanf("%s", str);
	for(int i = 0; i < strlen(str); ++i)
		if(str[i] == hello[x])
			x++;
	if(x == 5)
		printf("YES");
	else
		printf("NO");
	return 0;
}
