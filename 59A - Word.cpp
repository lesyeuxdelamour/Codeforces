#include<stdio.h>
#include<string.h>
#include<ctype.h>

int uporlow(char c)
{
    if(c >= 'a' && c <= 'z')
        return -1;
    if(c >= 'A' && c <= 'Z')
        return 1;
    return 0;
}

void strlower(char *str)
{
    for(int i = 0; i < strlen(str); ++i)
        str[i] = tolower(str[i]);
}

void strupper(char *str)
{
    for(int i = 0; i < strlen(str); ++i)
        str[i] = toupper(str[i]);
}

int main()
{
    char word[101];
    scanf("%s", word);
    int sum = 0;
    for(int i = 0; i < strlen(word); ++i)
        sum+=uporlow(word[i]);
    if(sum > 0)
        strupper(word);
    else
        strlower(word);
    printf("%s", word);
    return 0;
}
