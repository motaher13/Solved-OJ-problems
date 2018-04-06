#include<stdio.h>
int main()
{
    int i,j,k,l,m,n;
    int ara[60];
    ara[1]=1;
    ara[2]=2;
    for(i=3;i<55;i++)
        ara[i]=ara[i-1]+ara[i-2];
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        printf("%d\n",ara[n]);
    }
    return 0;
}
