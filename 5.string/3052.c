#include <stdio.h>

#define N 10

int main()
{
	int input[N], div=42, res[N];
	int i, j, temp, count=0;
	
	for(i=0; i<N; i++)
	{
		scanf("%d", input+i);
	}

	for(i=0; i<N; i++)
	{
		res[i]=input[i]%42;	//나머지 저장
	}

	//서로 다른 나머지의 개수를 어떻게 구할까...?
	//bubble sort
	for(i=1; i<N-1; i++)
	{
		for(j=0; j<N-i; j++)
		{
			if(res[j] > res[j+1])
			{
				temp = *(res+j);
				*(res+j) = *(res+j+1);
				*(res+j+1) = temp;
			}

		}
			
	}

 //	for(i=0; i<N; i++)
 //	{
 //		printf("%d ", res[i]);
 //	}

	for(i=0; i<N; i++)
	{
		if(res[i] != res[i+1])
				count++;
	}

	printf("%d", count);



	return 0;
}
