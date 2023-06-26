#include <stdio.h>
#include <string.h>		//strlen 함수의 사용
//대문자 A의 아스키코드: 65

//ABC/DEF...3개씩 잘 묶이다가 나중가면 4개씩 묶인다...주의!


void time_cal(char *, char *);


int main()
{

	char num[15];

	scanf("%s", num);
	time_cal(num, num+strlen(num));

	printf("\n\n*num=%c\n", *num);
	printf("*(num+strlen(num)-1)=%c\n", *(num+strlen(num)-1));
	printf("*(num+strlen(num))=%c\n", *(num+strlen(num)));

	return 0;
}

void time_cal(char *p1, char *p2)
{
	int time=0;
		
	while(p1 < p2)
	{

		if((int)(*p1-'A')/3 < 5)
				time += (int)(*p1-'A')/3+3;

		else if((int)(*p1-'A')>= 15 && (int)(*p1-'A')<19)
				time += 8;

		else if((int)(*p1-'A')>= 19 && (int)(*p1-'A')<22)
				time += 9;

		else if((int)(*p1-'A')>= 22 && (int)(*p1-'A')<26)
				time+=10;
	
		p1++;
	}
	
	printf("\n\n%d", time);
}
