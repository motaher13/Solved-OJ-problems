#include <stdio.h>
#include <iostream>
#include <algorithm>
int main()
{
int i,j,k,l,ara[100000],ara2[100000],sum,n,p;
    while(scanf("%d%d%d",&n,&j,&k)){
        if(n==0&&j==0&&k==0)break;
            sum=0;
    for(i=0;i<n;i++)scanf("%d",&ara[i]);
     for(i=0;i<n;i++)scanf("%d",&ara2[i]);
     std::sort(ara,ara+n);
     std::sort(ara2,ara2+n);
    sum=0;
    for(i=0,p=n-1;i<n;i++,p--){
    l=((ara[i]+ara2[p])-j)*k;
    if(l>=0)
    sum=sum+l;
    }
    printf("%d\n",sum);
    }
    return 0;
}
