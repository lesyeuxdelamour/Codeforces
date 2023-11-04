#include<stdio.h>
#include<string.h>

char str[101];

int HQ9plus(char c)
{
	return c == 'H' || c == 'Q' || c == '9' ; 
}

int main()
{
	scanf("%s", str);
	for(int i = 0; i < strlen(str); ++i)
		if(HQ9plus(str[i]))
		{
			printf("YES");
			return 0;
		}
	printf("NO");
	return 0;
}


