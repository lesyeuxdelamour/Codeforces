#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char num1[101], num2[101], res[101];

int main()
{
	scanf("%s%s", num1, num2);
	for(int i = 0; i < strlen(num1); ++i)
		if(num1[i] == num2[i])
			res[i] = '0';
		else
			res[i] = '1';
	puts(res);
}
