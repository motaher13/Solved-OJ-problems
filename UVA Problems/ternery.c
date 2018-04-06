#include<stdio.h>
int main()
{
    long long i,j,k,n;
    long long ara[10000];
    while(scanf("%lld",&n))
    {
        if(n<0)
            break;

        for(j=0; ;j++)
        {
            ara[j]=n%3;
            n=n/3;
            if(n==0)
                break;

        }
        while(j>=0)
        {
            printf("%lld",ara[j]);
            j--;
        }
        printf("\n");

    }
    return 0;
}
