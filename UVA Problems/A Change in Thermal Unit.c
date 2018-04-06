#include<stdio.h>
int main()
{
    double j,k,c,f,d;
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lf %lf",&c,&f);
        d=5*f/9;
        c=c+d;
        printf("Case %d: %.2lf\n",i,c);

    }
    return 0;
}
