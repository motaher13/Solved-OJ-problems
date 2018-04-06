#include<stdio.h>
int main()
{
    long long i,j,k,g,l,a,b,t;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld",&g,&l);
        j=l/g;
        if(j*g==l)
            printf("%lld %lld\n",g,l);
        else
            printf("-1\n");
    }
    return 0;
}
