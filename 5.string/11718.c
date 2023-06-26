#include <stdio.h>
#include <string.h>

/*
	
   %[]s : []안의 형식에 맞추어서 입력을 받는다!
   EOF? -> 알아보기

   */



int main()
{
	char input[101];
	
	scanf("%[\n]s", input);

	while(scanf("%[\n]s", input != EOF))
	{
		printf("%s\n", input);
		getchar();
	}
	

	return 0;
}

