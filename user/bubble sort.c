#include<stdio.h>
int main()
{
    int i,j,k,l=0,n;
    scanf("%d",&n);
    int ara[n];
    for(i=0;i<n;i++)
        scanf("%d",&ara[i]);
    for(i=0;i<n;i++)
        for(j=0;j<n-i-1;j++)
            if(ara[j]>ara[j+1])
            {
                k=ara[j];
                ara[j]=ara[j+1];
                ara[j+1]=k;
            }
    for(i=0;i<n;i++)
        printf("%d ",ara[i]);
}
