#include <stdio.h>
int main()
{
    int ara[100000],i,j,k=1;
    for(i=1;i<=10000;i++){
    k=k*i;
    printf("%d %d",i,k);
    if(k>10000)k=k%1000;


    }

}
