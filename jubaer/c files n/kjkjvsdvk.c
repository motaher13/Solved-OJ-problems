#include <stdio.h>
int main()
{
    long long i,j,k,l,n,x,t;
    l=1;
    scanf("%d",&t);
    while(t--){
    scanf("%lld%lld%lld",&n,&k,&x);
    n=((n)*(n+1))/2;

    j=x+k-1;

    i=((x+j)*k)/2;

    printf("Case %lld: %lld\n",l,n-i);
    l++;
    }
    return 0;
}
