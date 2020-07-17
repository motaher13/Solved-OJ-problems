#include<stdio.h>
int main()
{
    long long i=0,j=1,k,l,n;
    while(scanf("%lld",&n)!=EOF)
        if(n==0)
        printf("The Fibonacci number for %lld is %lld\n",n,i);
    else
    {
        for(l=0;l<n-1;l++)
        {
            k=j;
            j=j+i;
            i=k;
        }
        printf("The Fibonacci number for %lld is %lld\n",n,j);
        l=0,k=0,i=0,j=1;
    }
    return 0;
}
