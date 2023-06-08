#include <stdio.h>

#define N 9

int main()
{
	int arr[N][N];
	int i, j;
	int mi, mj, max;

	//input 9X9 int array
	for(i=0; i<N; i++)
	{
		for(j=0; j<N; j++)
				scanf("%d", arr[i]+j);	//
	}

	//finding max value

	mi=0;
	mj=0;
	max=arr[0][0];

	for(i=0; i<N; i++)
	{	
		for(j=0; j<N; j++)
		{
			if(max <= arr[i][j])
			{
					mi=i;
					mj=j;
					max=arr[i][j];
			}
		}
	}
		
	printf("%d\n", max);
	printf("%d %d", mi+1, mj+1);
	

	return 0;
}
