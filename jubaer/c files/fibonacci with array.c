#include <stdio.h>
int main()
{
    int ara[20000],i,j,k,n;
    ara[0]=0;
    ara[1]=1;
    for(i=2;i<=13;i++){
    ara[i]=ara[i-1]+ara[i-2];
    }
    scanf("%d",&n);
    printf("%d",ara[n]);

}
