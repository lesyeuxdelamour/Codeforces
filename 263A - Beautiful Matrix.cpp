#include<stdio.h>
#include<math.h>

int main()
{
	int arr[5][5], step;
	for(int i = 0; i < 5; ++i)
		for(int j = 0; j < 5; ++j)
		{
			scanf("%d", &arr[i][j]);
			if(arr[i][j] == 1)
				step = abs(i-2)+abs(j-2);
		}
	printf("%d", step);
	return 0;
}


