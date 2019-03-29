#include<stdio.h>
int p[1000000]={0};
int ara[1000000];
int main()
{
    int i,j,k,l,m,n,a,b,c,d;
    p[2]=1;
    ara[0]=2;
    for(i=3;i<1000000;i+=2)
        p[i]=1;
    k=1;
    for(i=3;i<1000000;i+=2)
    {
        if(p[i]==1)
        {
            ara[k]=i;
            k++;
            for(j=2;j*i<1000000;j++)
                p[j*i]=0;
        }
    }

    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        for(i=0;ara[i]<n;i++)
            if(p[n-ara[i]]==1)
            {
                printf("%d = %d + %d\n",n,ara[i],n-ara[i]);
                break;
            }
    }
    return 0;
}



