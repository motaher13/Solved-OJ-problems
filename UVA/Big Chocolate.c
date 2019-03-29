#include<stdio.h>
int main()
{
    long long i,j,k;
    while(scanf("%lld %lld",&i,&j)==2)
    {
        k=i*j-1;
        printf("%lld\n",k);
    }
    return 0;
}
