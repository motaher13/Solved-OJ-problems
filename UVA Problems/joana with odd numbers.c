#include<stdio.h>
int main()
{
    long long i,j,k=0,l=1,m=1,n=0;
    while(scanf("%lld",&i)!=EOF){
    for(j=0; ;j++)
    {
        k=k+l;
        l=l+2;
        if(l>i)
            break;
    }
    for(j=0;j<k;j++)
    {

        if(j>=(k-3))
            n=n+m;
             m=m+2;
    }
    printf("%llu\n",n);
    k=0,l=1,m=1,n=0;
    }

}
