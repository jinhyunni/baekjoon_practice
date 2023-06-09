#include <stdio.h>
#define N 1000

int main()
{
	int score[N];
	int c, n; 
	int i, j;	//iteration
	int sum=0, count=0;
	double avg;

	scanf("%d", &c);

	for(i=0; i<c; i++)	//testing
	{
		scanf("%d", &n);	//n: 학생 수

		for(j=0; j<n; j++)
		{
			scanf("%d", score+j);	//점수 입력
			sum+=score[j];
		}

 //		printf("Total score: %d\n", sum);
		
		avg = (double)sum/n;

 //		printf("Average score: %lf\n", avg);

		for(j=0; j<n; j++)
		{	
			if(score[j]>avg)
			count+=1;
		}

 //		printf("Student number: %d\n", count);
 //		
		printf("%6.3lf%%\n", ((double)count/n)*100);
		
		sum=0;
		count=0;
	}


	return 0;
}
