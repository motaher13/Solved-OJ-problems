#include<stdio.h>
int main()
{
    long long i,j,k,l=0,m;
    while(scanf("%lld",&i)==1)
    {
        if(i==0)
            break;
        k=i/3;
        l=0;
         while(k!=0)
         {
             k=i/3;
             m=i%3;
             l=l+k;
             i=k+m;
         }
        if(i==2)
        l++;

         printf("%lld\n",l);
    }

    return 0;
}

