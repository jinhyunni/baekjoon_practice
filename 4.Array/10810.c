#include <stdio.h>

int main()
{
	int n, m;	//n: 바구니의 개수, m: 반복의 횟수
	int i, j, k;	//입력 조건
	int ii, jj;//iteration

	
	int num[100]={0};

	scanf("%d%d", &n, &m);
	
	//input
	for(jj=0; jj<m; jj++)
	{
		scanf("%d%d%d", &i, &j, &k);

		for(ii=i-1; ii<j; ii++)
		{
			num[ii] = k;
		}
	}
	
	//output
	for(ii=0; ii<n; ii++)
	{
		printf("%d ", num[ii]);		//공백으로 출력
	}

	return 0;
}
