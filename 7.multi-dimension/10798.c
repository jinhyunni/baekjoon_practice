#include <stdio.h>
#include <string.h>

//한줄: 15개의 문자 -> Null 문자를 염두할것
#define N1 5	//행
#define N2 16	//열 -> 문자열

//차라리 포인터 배열로...? -> 구현이 어렵다...추후에 생각

int main()
{
	int i, j;
	char a[N1][N2];		//문자열 -> \0까지 고려
	char (*p)[N2]=a[0];

	//input array
	for(i=0; i<N1; i++)
	{
			scanf("%s", p);
			p++;
	}
	
	//print out
	for(j=0; j<N2; j++)
	{
		for(i=0; i<N1; i++)
		{
			if(a[i][j]==' ')
					continue;
			else
					printf("%c", a[i][j]);
		}
	}

	return 0;
}
