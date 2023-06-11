#include <stdio.h>

int main()
{
    int basket[100]; 
    int N, M;   //N: 바구니의 개수, M: 역순으로 바꾸는 것을 반복하는 횟수
    int i, j;    //i번째 바구니부터 j번째 바구니에 든 공을 역순으로 바꾼다
    int temp, count=0;
    int it, fr ,repeat; 

    scanf("%d%d", &N, &M);

    //preparing basket
    for(it=0; it<N; it++)
    {
        basket[it]=it+1;
    }

    //swaping
    for(it=0; it<M; it++)
    {

        scanf("%d%d", &i, &j);
        for(fr=i-1; fr<j-1; fr++)
        {
            for(repeat=0; repeat<j-i-count; repeat++)
            {
                temp = basket[i-1+repeat];
				basket[i-1+repeat]=basket[i+repeat];
                basket[i+repeat] = temp;

            }
			count++;
        }
		count=0;
	
    }
    
    //print out res
    for(it=0; it<N; it++)
    {
        printf("%d ", basket[it]);
    }

    return 0;
}
