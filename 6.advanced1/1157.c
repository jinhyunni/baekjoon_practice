#include <stdio.h>

int main()
{
	char input[1000001];  //공백문자까지 고려
	int alphabet[26]={65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90};
	int res[26] = {0};
	int i=0, j=0, max, count=0;
	char *p = input;



	scanf("%s", input);

	while(*p != '\0')
	{
		if((int)*p > 96)
				*p = (char)((int)*p - 32);
		p++;
	}
	
	//포인터를 다시 문자열의 첫 주소로 돌려준다!
	p = input;
	
	while(*p != '\0')
	{
		for(i=0; i<26; i++)
		{
			if(alphabet[i] == *p)
			{
				res[i] += 1;
				break;
			}
		}
	
		p++;	
	}
	
	
	//find the largest number of alphabet
	max = res[0];

	for(i=0; i<26; i++)
	{
		if(max < res[i])
				max = res[i];
	}

	//find how many max
	for(i=0; i<26; i++)
	{
		if(res[i]==max)
				count++;
	}
	

	//print out result
	if(count > 1)
			printf("?");
	else
	{
		for(i=0; i<26; i++)
		{
			if(max == res[i])
					printf("%c", i+65);
		}
	}


}
