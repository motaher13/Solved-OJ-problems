#include<stdio.h>
int main()
{
    int i=5,j,k,n,o,m,l;
    int ara[4354];
    scanf("%d",&i);
     for(l=0;l<i;l++)
    {scanf("%d",&ara[l]);
    }

    for(l=0;l<i;l++)
    {
    k=ara[l];
    for(j=l+1;j<i;j++)
    {
        if(k>ara[j]){
        k=ara[j];
        o=j;}
    }
    m=ara[l];
    ara[l]=ara[o];
    ara[o]=m;

    }
    for(j=0;j<i;j++)
        printf("%d",ara[j]);
}
