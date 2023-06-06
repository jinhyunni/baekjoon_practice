#include <stdio.h>

//<string.h>의 strlen()함수의 기능을 구현

int main()
{
	char arr[100];
	int i=0, count=0;
	
	scanf("%s", arr);
	
	while(arr[i] != 0)
	{
		count++;
		i++;
	}
	
	printf("%d", count);
	
	return 0;
}
