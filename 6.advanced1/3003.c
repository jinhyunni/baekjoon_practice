#include <stdio.h>

int main()
{
	int i;	//iteration
	int wholeSet[6]={1, 1, 2, 2, 2, 8}, givenSet[6];
	
	//input
	for(i=0; i<6; i++)
			scanf("%d", givenSet+i);

	//output
	for(i=0; i<6; i++)
			printf("%d ", wholeSet[i]-givenSet[i]);
	
	return 0;
}
