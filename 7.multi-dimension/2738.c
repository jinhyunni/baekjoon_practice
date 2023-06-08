#include <stdio.h>

int main()
{
	int i, j;	//for iteration
	int N, M;	//for row and collum
	int A[100][100], B[100][100];
	int res[100][100];
	

	//input row(N) and collum(M)
	scanf("%d %d", &N, &M);
	

	//A
	for(i=0; i<N; i++)
	{
		for(j=0; j<M; j++)
				scanf("%d", &A[i][j]);
	}
	
	//A
	for(i=0; i<N; i++)
	{
		for(j=0; j<M; j++)
				scanf("%d", &B[i][j]);
	}

	//res
	for(i=0; i<N; i++)
	{
		for(j=0; j<M; j++)
				printf("%d ", A[i][j]+B[i][j]);
		printf("\n");
	}



	return 0;
}
