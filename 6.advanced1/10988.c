#include <stdio.h>

int main(void)
{
	
	const int MaxAlpNum = 100;
	char input[MaxAlpNum];
	printf("Type in a word:\n");
	scanf("%s",  input);
	
	int count=0; // count the number of alphabet. Use the fact that the last alphabet should be null0
	while(input[count] != 0){
		count+=1;
	}

	printf("The number of alphabet of given word is %d\n", count);
	
	int ans=1;
	int itN = (int)(count/2);
	
	for(int i=0; i<itN; i++){
		if(input[i] != input[count-i-1]){
			ans=0; 
			break;
		}
	}
	
	printf("%d", ans);

	return 0;
}
