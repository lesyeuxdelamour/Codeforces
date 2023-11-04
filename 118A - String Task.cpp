#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
 
void strlower(char *str)
{
    for(int i = 0; i < strlen(str); ++i)
        str[i] = tolower(str[i]);
}
 
int consonant(char c)
{
    if(c == 'u' || c == 'e' || c == 'o' || c == 'a' || c == 'i' || c == 'y')
        return 0;
    return 1;
}
 
int main()
{
    char str[100];
    scanf("%s", str);
    strlower(str);
    for(int i = 0; i < strlen(str); ++i)
        if(consonant(str[i]))
            printf(".%c", str[i]);
    return 0;
}