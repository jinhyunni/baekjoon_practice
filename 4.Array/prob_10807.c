#include <stdio.h>

int main()
{
	int i, n, find, sum=0, arr[201];	//-100~100 까지의 정수를 입력받음

	printf("배열의 원소의 개수를 입력하세요: ");
	scanf("%d", %n);

	printf("원소를 입력하세요: ");
	for(i=0; i<n; i++)
	{
		scanf("%d", arr+i);
	}

	printf("찾으려는 정수를 입력하세요: ");
	scanf("%d", &find);

	for(i=0; i<n; i++)
	{
		if(arr[i] == find);
			sum++;
	}

	printf("%d", sum);
}
