#include <stdio.h>

int main()
{
	char s[100], swap;
	int alphabet[26]={97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122};
	int i, j, count;

	scanf("%s", s);
	
	for(i=0; i<26; i++)
	{
		swap = 'N';
		count = 0;
		
		//evaluation
		while(s[count] != '\0')
		{	

			if((int)s[count]==alphabet[i])
			{	
				swap = 'Y';
				break;
			}

			count++;	//alphabet 배열의 0번지부터 비교해야 하므로!
		}
		
		//print out
		if(swap == 'Y')
			printf("%d ", count);
		else if(swap == 'N')
			printf("%d ", -1);
	}
	

}
