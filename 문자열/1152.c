#include <stdio.h>
#include <string.h>		//strlen()

#define N 1000000

int main()
{
	char sent[N];
	int count=0, i, n;
	char *p=sent;
	
	fflush(stdin);
	fgets(sent, N, stdin);	//fgets -> 개행문자까지 복사한다! "\n"까지 복사됨
 //	scanf("%s", sent);


	n=strlen(sent)-1;	// \n을 삭제

	//printf("%s\n", sent);
	
    //모든 공백문자의 수를 확인
	
	
	printf("\n===Inspection===\n");

	while(*p != '\0')
	{	
		printf("%c", *p);

		if(*p == ' ')
			count++;
		p++;
	}
	
	printf("\n===finished===\n\n");
	p = sent;

	/*
		null문자와 공백은 다르다!

		null = '\0';
		공백 = ' ' ;

	   */

	printf("count: %d\n", count);
	printf("n: %d\n", n);

	printf("============\n");

	if(*(p+n)=='\0')
			printf("*(p+n)= null \n\n");

	for(i=0; i<n; i++)
	{
		printf("sent[%d]=%c\n", i, sent[i]);
	}
		
	
 //	printf("============\n");
	
    if(*p==' ' && *(p+n-1)!=' ')		//시작: 공백, 끝: 공백 아님
        printf("case1: %d", count);

    else if(*p!=' ' && *(p+n-1)==' ')	//시작: 공백 아님, 끝: 공백
        printf("case2: %d", count);

	else if(*p!=' ' && *(p+n-1) !=' ')	//시작: 공백아님, 끝: 공백아님 ok
		printf("case3: %d", count+1);

	else if(*p==' ' && *(p+n-1)==' ')	//시작: 공백, 끝: 공백
		printf("case4: %d", count-1);

     return 0;
}
