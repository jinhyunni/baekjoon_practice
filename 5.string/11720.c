#include <stdio.h>

int main()
{
	int i, n, sum=0;
	char num[100];
	char *p=num;
	
	scanf("%d", &n);
	scanf("%s", num);

	for(i=0; i<n; i++)
	{
		sum += (int)(*p++ - '0');	//ASCII Code에서 숫자는 0부터 9까지 차례대로 정의됨
	}

	printf("%d", sum);

	return 0;
}	
