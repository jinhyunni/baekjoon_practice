#include <stdio.h>

typedef struct infomation{
	
		int price;
		int saleNum;
		int profit;
} info;

int main()
{
	int totalPriceInput;
	int totalPriceCal=0;
	int productN;
	int i;

	info list[100];

	info *p = list;

	scanf("%d", &totalPriceInput);
	scanf("%d", &productN);

	for(i=0; i<productN; i++)
	{
		scanf("%d", &p->price);		//포인터가 바라봤을때는 변수! 따라서 주소연산자 달아주어야!
		scanf("%d", &p->saleNum);
		
		p -> profit = p->price * p->saleNum;

		p++;
	}

	p = list;

 //	//for checking
 //	for(i=0; i<productN; i++)
 //	{
 //		printf("%d: price: %d, saleNum: %d, profit: %d\n", i+1, (p+i)->price, (p+i)->saleNum, (p+i)->profit);
 //	}
	
	for(i=0; i<productN; i++)
	{
		totalPriceCal += p -> profit;
		p++;
	}

	if(totalPriceInput == totalPriceCal)
			printf("Yes");
	else
			printf("No");
}
