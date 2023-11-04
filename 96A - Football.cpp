#include<stdio.h>
#include<string.h>

int danger(char *binary)
{
    int count = 1;
    for(int i = 0; i < strlen(binary)-1; ++i)
    {
        if(binary[i] == binary[i+1])
        {
            count++;
            if(count >= 7)
                return 1;
        }
        else
            count = 1;
    }
    return 0;
}

int main()
{
    char binary[101];
    scanf("%s", binary);
    if(danger(binary))
        printf("YES");
    else
        printf("NO");
    return 0;
}