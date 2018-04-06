#include <stdio.h>
int main()
{
    int i,j,k,n,ck,ara[10],sum;
    scanf("%d",&n);
    for(i=0;i<n;i++){
    sum=0;
    scanf("%d",&ck);
    for(j=0;j<ck;j++){
    scanf("%d",&k);
    sum=sum+k;
    }

    ara[i]=sum/j;
    }
    for(i=0;i<n;i++){
    printf("case %d:\t%d\n",i+1,ara[i]);

    }



}
