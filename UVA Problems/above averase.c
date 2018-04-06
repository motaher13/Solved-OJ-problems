#include<stdio.h>
int main()
{
    int n,i,j=0,k=0,l,o;
    double m;
    scanf("%d",&o);
    while(o>=1)
    {
    scanf("%d",&n);
    int ara[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
        j=j+ara[i];
    }
    l=j/n;
    for(i=0;i<n;i++)
    {
        if(ara[i]>l)
            k++;
    }
    m=(double)(k*100)/n;
    printf("%0.3lf%%\n",m);
    j=0;
    l=0;
    k=0;
    o--;
    }
    return 0;

}
