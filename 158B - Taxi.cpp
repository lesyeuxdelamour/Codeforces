#include<stdio.h>

int t, n, taxi;
int group[5];

int main()
{
	scanf("%d", &t);
	while(t--)
    {
        scanf("%d", &n);
        group[n]++;
    }
    taxi = group[4] + group[3] + group[2]/2;
    group[1]-=group[3];
    if(group[2]%2)
    {
        taxi+=1;
        group[1]-=2;
    }
    if (group[1] > 0)
        taxi+=(group[1] + 3) / 4;
    printf("%d", taxi);
    return 0;
}
