#include <stdio.h>
int main()
{
    long long i,j,k,l,ara[100000],ara2[100000],sum,n;
    while(scanf("%lld%lld%lld",&n,&j,&k)){
        if(n==0&&j==0&&k==0)break;
            sum=0;
    for(i=0;i<n;i++)scanf("%lld",&ara[i]);
     for(i=0;i<n;i++)scanf("%lld",&ara2[i]);
    sum=0;
    for(i=0;i<n;i++){
    l=((ara[i]+ara2[i])-j)*k;
    sum=sum+l;
    }
    printf("%lld\n",sum);
    }
    return 0;
}
