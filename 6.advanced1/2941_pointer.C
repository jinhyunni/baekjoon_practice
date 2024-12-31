#include <stdio.h>
#include <stdlib.h>

int main()
{
	//const int MaxEnt=100;
	//char input[MaxEnt];
	//char* input = malloc(sizeof(char)*100); // pre-assign char array size
	char* input = 0; // pre-assign char array size

	scanf("%s", input);

	int count=0;

	while( input[count] != 0 )
	{
		count++;
	}

	printf("The total number of character: %d\n", count);

	int idx=0;
	int maxcount = count;
	while( input[idx] != 0 )
	{
		if( input[idx] == 'c' ) {

			if( (input[idx+1] == '=') || (input[idx+1] == '-')) {
				count-=1;
				printf("Special type: c= or c-\n");
				idx++;
			}

		} else if( input[idx] == 'd' ) {

			if(input[idx+1]== '-'){
				count-=1;
				printf("Special type: d-\n");
				idx++;
			} else if( (input[idx+1]=='z') && (input[idx+2]=='=') ) {
				count-=2;
				printf("Special type: dz=\n");
				idx+=2;
			}

		} else if( input[idx] == 'l' ) {

			if(input[idx+1]=='j'){
				count-=1;
				printf("Special type: lj\n");
				idx++;
			}

		} else if( input[idx] == 'n' ) {
			
			if(input[idx+1]=='j'){
				count-=1;
				printf("Special type: nj\n");
				idx++;
			}

		} else if( input[idx] == 's' ) {

			if(input[idx+1] == '=' ){
				count-=1;
				printf("Special type: s=\n");
				idx++;
			}

		} else if( input[idx] == 'z' ) {

			if( input[idx+1] == '=' ) {
				count-=1;
				printf("Special type: z=\n");
				idx++;
			}

		}

		idx++;

		// This might solve the issues with using char*
		if(idx>maxcount)
			break;
	}

	printf("croation words: %d", count);

	free(input);
	
	return 0;
}
