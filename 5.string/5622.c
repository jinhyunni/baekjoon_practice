#include <stdio.h>
#include <string.h>		//strlen 함수의 사용
//대문자 A의 아스키코드: 65

void time_cal(char *, char *);


int main()
{

	char num[15];

	scanf("%s", num);
	time_cal(num, num+strlen(num));

	return 0;
}

void time_cal(char *p1, char *p2)
{
	int time=0;
		
	while(p1 < p2)
	{
		printf("%x\n", p1);
		time += (int)(*p1-'A')/3+3;		//3을 더한 이유: ABC -> 012이므로 3을 나눈 몫이 0으로 나옴, 따라서 1을 더해줌!
		
		p1++;
	}
	
	printf("\n\n%d", time);
}
