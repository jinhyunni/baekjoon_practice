#include <stdio.h>

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
