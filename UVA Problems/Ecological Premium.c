#include<stdio.h>
int main()
{
    long long i,j,k,l,m,n=0;
    while(scanf("%lld",&i)!=EOF)
    {
        while(i>0)
   {
        scanf("%lld",&j);
        while(j>0)
        {
            scanf("%lld %lld %lld",&k,&l,&m);
            n=n+(k*m);
            j--;
        }
        printf("%lld\n",n);
        n=0;
        i--;
    }
    }
return 0;
}
