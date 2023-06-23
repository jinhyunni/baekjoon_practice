#include <stdio.h>

void reverse(int *);
void compare(int, int);

int main()
{
    int n1, n2;
    
    scanf("%d%d", &n1, &n2);
    reverse(&n1);
    reverse(&n2);
    
    compare(n1, n2);
    
    return 0;
}

void reverse(int *p)
{
    
     int n1, n2, n3;
    
    n1 = *p/100;
    n2 = (*p-n1*100)/10;
    n3 =(*p-n1*100)%10;
     
    *p = n3*100 + n2*10 + n1;   
}

void compare(int n1, int n2)
{
    if(n1 > n2)
        printf("%d", n1);
    else
        printf("%d", n2);
    
}
