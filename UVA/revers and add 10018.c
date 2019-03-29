#include <stdio.h>
int main()
{
    long long n,r=0,i,m=0,k;
    scanf("%lld",&k);
    while(k>0)
{
    scanf("%lld",&n);
    while(1)
   {
    i=n;
    r=0;
    while(i!=0)
    {
        r=r*10;
        r=r+i%10;
        i=i/10;
    }
    if(r==n)
    {
        printf("%lld %lld\n",m,n);
        break;
    }
    else
    {
        n=r+n;
        m++;
    }

   }
   m=0;
   k--;
}
   return 0;
}
