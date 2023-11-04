#include<stdio.h>
#include<string.h>
#include<ctype.h>

char word[101];
int flag = 1;

int main()
{
	scanf("%s", word);
	for(int i = 1; i < strlen(word); ++i)
        if(islower(word[i]))
            flag = 0;
    if(flag)
        for(int i = 0; i < strlen(word); ++i)
            if(islower(word[i]))
                printf("%c", toupper(word[i]));
            else
                printf("%c", tolower(word[i]));
    else
    	printf("%s", word);
	return 0;
}
