#include<stdio.h>
int main()
{
    int i,j,k,l,m,n,a,b;
    int ara[101];

    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        for(i=1;i<=100;i++)
            ara[i]=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a);
            ara[a]++;
        }
        b=0;
        for(i=1;i<=100;i++)
        {
            if(ara[i]>0)
                for(j=1;j<=ara[i];j++){
                    if(b==1)
                        printf(" ");
                    printf("%d",i);
                        b=1;}
        }
        printf("\n");

    }
    return 0;
}
