#include<stdio.h>
int main()
{
    long long i,j,k,l,m;
    while(scanf("%lld %lld",&i,&j)==2)
    {
        k=i/j;
        l=i;
         while(k!=0)
         {
             k=i/j;
             m=k%j;
             l=l+k;
             i=k+m;

         }
         printf("%lld\n",l);
    }
    return 0;
}
