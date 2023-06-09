#include <stdio.h>

int main()
{
	int num[100];
	int n, m;	//n: 바구니의 개수, m: 교환 반복 횟수
	int it1;	//itertion
	
	int temp, i, j;
	
	scanf("%d%d", &n, &m);

	//reset		
	for(it1=0; it1<n; it1++)
	{
		num[it1]=it1+1;
	}
	
	//exchange
	for(it1=0; it1<m; it1++)
	{
		scanf("%d%d", &i, &j);

		//exchange
		temp = *(num+j-1);
		*(num+j-1)=*(num+i-1);
		*(num+i-1)=temp;
	}	
	
	for(it1=0; it1<n; it1++)
			printf("%d ", num[it1]);


	return 0;
}
