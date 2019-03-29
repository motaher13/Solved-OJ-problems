#include<stdio.h>
long long ara[1000000];
int main()
{
    long long i,j,k,l,m,n;
    while(scanf("%lld %lld",&n,&m)==2)
    {
        ara[0]=n;
        for(i=0; ;i++)
        {
            if((ara[i]%m)>0){
                printf("Boring!\n");
                break;}
            else
                ara[i+1]=ara[i]/m;
            if(ara[i+1]==1)
            {
                for(j=0;j<=i+1;j++)
                    printf("%lld ",ara[j]);
                    printf("\n");
                break;
            }
        }
    }
    return 0;
}
