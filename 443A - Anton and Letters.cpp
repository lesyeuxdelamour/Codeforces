#include<stdio.h>
#include<string.h>

char set[1001];
int alphabet[26], count = 0;

int main()
{
	gets(set);
	for(int i = 0; i < strlen(set); ++i)
		if(set[i] >= 'a' && set[i] <= 'z')
			alphabet[set[i]-'a']++;
	for(int i = 0; i < 26; ++i)
		if(alphabet[i])
			count++;
	printf("%d", count);
	return 0;
}
