#include<stdio.h>
#include<string.h>
#include<ctype.h>

int n, check = 0;
char alphabet[26] = {0}, word[101];

int main()
{
	scanf("%d\n", &n);
	for(int i = 0; i < n; ++i)
	{
		scanf("%c", &word[i]);
		word[i] = tolower(word[i]);
		alphabet[word[i]-'a']++;
	}
	for(int i = 0; i < 26; ++i)
		if(alphabet[i] == 0)
			check = 1;
	if(check)
		printf("NO");
	else
		printf("YES");
	return 0;
}
