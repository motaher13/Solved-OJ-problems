#include<stdio.h>
int main()
{
    int i,j,m,n,k,p,a,b,c;
    scanf("%d",&m);
    for(i=1;i<=m;i++)
    {
        scanf("%d %d %d",&n,&k,&p);
        a=p%n;
        b=k+a;
        if(b<=n)
            printf("Case %d: %d\n",i,b);
        else if(b>n)
            printf("Case %d: %d\n",i,b-n);
    }
    return 0;
}
