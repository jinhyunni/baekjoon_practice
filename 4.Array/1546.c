#include <stdio.h>

#define N 1000

int main()
{
	int i, n, M;	//i: iteration, n: number of subjects, M; max value
	int score[N];
	double fixed[N], sum=0.;

	scanf("%d", &n);

	for(i=0; i<n; i++)
	{
		scanf("%d", score+i);
	}

	//finding max value M

	M = score[0];

	for(i=0; i<n; i++)
	{
		if(score[i]>M)
				M=score[i];
	}

	//redefinde
	for(i=0; i<n; i++)
	{
		fixed[i] = (double)score[i]/M*100;
		sum += fixed[i];
	}

	printf("%.2lf",(double)sum/n );
	

	return 0;
}
