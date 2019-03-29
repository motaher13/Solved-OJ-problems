#include<stdio.h>
int main()
{
    int i,j,k,l,n;
    char ara[200];
    ara[0]=0;
    ara[1]=1;
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        ara[i]=ara[i-1]+ara[i-2];
    }
    printf("%d",ara[i-1]);
}
