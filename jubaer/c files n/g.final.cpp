#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <iostream>
int main()
{
    long long ara[10000],ara2[10000],i,j,k,l,m=1,n,t,max,sum,y;
    scanf("%lld",&y);
    while(y--){
    scanf("%lld",&n);
    for(i=0;i<n;i++){
        scanf("%lld%lld",&ara[i],&ara2[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(ara2[i]<ara2[j]){
                t=ara2[i];
                ara2[i]=ara2[j];
                ara2[j]=t;

                t=ara[i];
                ara[i]=ara[j];
                ara[j]=t;
            }
        }
    }
    max=0;
    for(i=0;i<n;i++){
        k=ara2[i];
        sum=0;
        for(j=i;j<n;j++){
            sum=sum+ara[j];
        }
        sum=sum*k;
        if(max<sum)max=sum;
    }
    printf("Case %lld: %lld",m++,max);
    printf("\n");
    }
    return 0;
}
