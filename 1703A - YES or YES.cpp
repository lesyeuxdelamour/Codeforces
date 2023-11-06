#include<stdio.h>
#include<string.h>
#include<ctype.h>

void strlower(char *str)
{
    for(int i = 0; i < strlen(str); ++i)
        str[i] = tolower(str[i]);
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {   
        char yes[4];
        scanf("%s", yes);
        strlower(yes);
        if(strcmp("yes", yes) == 0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
