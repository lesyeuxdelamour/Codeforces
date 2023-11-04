#include<stdio.h>
 
int main()
{
    int n;
    scanf("%d", &n);
    char str[n];
    scanf("%s", str);
    int count = 0, i = 0;
    while(str[i] != '\0')
    {
        if(str[i] == str[i+1])
            count++;
        i++;
    }
    printf("%d", count);
    return 0;
}