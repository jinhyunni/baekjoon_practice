#include <stdio.h>
#include <string.h>

#define N 10000

int main()
{
	char n1[N], n2[N], res[N+1];

	int base = (int)'0', i;
	int sum, overten, underten, overtenFromPast;
	
	scanf("%s %s", n1, n2);

	printf("%ld %ld\n", strlen(n1), strlen(n2));

	for(i=strlen(n1)-1; i>=0; i--)
	{	
		//이전의 자릿수로부터 넘어오는 인자
		if(n1[i+1] == '\0' || n2[i+1] == '\0')
				overtenFromPast = 0;
		else
			overtenFromPast = ((int)((n1[i+1]-'0')+(int)(n2[i+1]-'0'))/10);

		printf("%d	", overtenFromPast);
		
		//현 인자의 계산
		sum = (int)(n1[i]-'0') + (int)(n2[i]-'0');
		overten = sum/10;
		underten = sum%10;
		
 // 		res[i+1] = (char)(underten+base);
		
		//결과 저장
		res[i+1] = (char)(sum + overtenFromPast+base);
		res[i]=(char)((int)(n1[i-1]-'0')+overten+base);
	}

	printf("%s", res);	
}
