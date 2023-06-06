#include <stdio.h>
#include <string.h>

#define N 20

int main()
{
	int i, j, k, t, r, l;
	char s[N];
	
	scanf("%d", &t);
	for(i=0; i<t; i++ )
	{
		scanf("%d %s", &r, s);
		l=strlen(s);

		for(j=0; j<l; j++)
				for(k=0; k<r; k++)
						printf("%c", s[j]);

		printf("\n");
	}

	return 0;
}
