#include<stdio.h>
int main()
{
    int i,j,k,l,m=1;
    scanf("%d",&l);
    while(l>0)
    {
    scanf("%d",&j);
    int ara[j];
    for(i=0;i<j;i++)
    {
        scanf("%d",&ara[i]);
    }
    k=(j-1)/2;
    printf("Case %d: %d\n",m,ara[k]);
    l--;
    m++;
    }
return 0;
}
