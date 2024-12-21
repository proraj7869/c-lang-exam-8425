#include<stdio.h>
int main()
{
    int i=100,n=9;
    do
    {
        printf("%d %d ",i,n);
        i=i-10;
        n=n-1;
    }
    while(i>=20 && n>=1);
    return 0;
   
}