#include<stdio.h>
int main()
{
    int i,j,k,l,m,n,h;
    int ara[100];
    scanf("%d",&n);
    for(k=1;k<=n;k++)
    {
        scanf("%d",&m);
        for(i=0;i<m;i++)
            scanf("%d",&ara[i]);
        h=0,l=0;
        for(i=0;i<m-1;i++)
        {
            if(ara[i]>ara[i+1])
                h++;
            else if(ara[i]<ara[i+1])
                l++;
        }
        printf("Case %d: %d %d\n",k,l,h);

    }
    return 0;
}
