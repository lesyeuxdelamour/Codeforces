#include<stdio.h>
#include<string.h>

int letter(char *str)
{
	int n = strlen(str), alphabet[26] = {0}, count = 0;
	for(int i = 0; i < n; ++i)
	{
		alphabet[str[i] - 'a']++;
	}
	for(int i = 0; i < 26; ++i)
	    if(alphabet[i] > 0)
	        count++;
	return count;	
}

int main()
{
	char name[101];
	scanf("%s", name);
	if(letter(name)%2 == 0)
		printf("CHAT WITH HER!");
	else
		printf("IGNORE HIM!");
}
