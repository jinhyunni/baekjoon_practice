#include <stdio.h>

int main()
{
	int student[30], nonfail[28];
	int i, j;
	
	//input studnet
	for(i=0; i<28; i++)
	{
		scanf("%d", nonfail+i);
	}

	for(i=0; i<30; i++)
	{
		student[i]=i+1;
	}

	//compare
	for(i=0; i<30; i++)
	{
		for(j=0; j<28; j++)
		{
			if(student[i]==nonfail[j])
			{
					student[i]+=30;
					break;
			}
		}
	}


	//print failed student
	for(i=0; i<30; i++)
	{
		if(student[i]<31)
				printf("%d\n", student[i]);
	}


	return 0;
}
