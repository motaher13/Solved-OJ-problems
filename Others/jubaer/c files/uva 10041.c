#include <stdio.h>
int main()
{
    int i,j,k,l,n,ara[1000],t,d,sum,test;
    scanf("%d",&test);
    while(test--){
    scanf("%d",&n);
    for(i=0;i<n;i++){
    scanf("%d",&ara[i]);
    }
    if(n%2==0)l=n/2;
    else l=(n/2);
    for(i=0;i<n-1;i++){
    for(j=i+1;j<n;j++){
    if(ara[i]>ara[j]){
    t=ara[i];
    ara[i]=ara[j];
    ara[j]=t;
    }
    }
    }
    k=ara[l];

     sum=0;
    for(i=0;i<n;i++){
    d=k-ara[i];
    if(d<0)d=-d;
    sum=sum+d;
    }
    printf("%d\n",sum);
    }
    return 0;
}
