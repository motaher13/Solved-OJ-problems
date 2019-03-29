#include<stdio.h>
int main()
{
    long long i,j,k,l=1;
    while(scanf("%lld",&j))
    {
        if(j==0)
        printf("%lld\n",l);
        else if(j>0)
        {
        if(j<0)
            break;
        k=j*2;
        if(j>2)
        {
            for(i=1;i<=j-2;i++)
            {
                k=k+i;
            }
        }
        printf("%lld\n",k);
        }
    }
    return 0;
}
