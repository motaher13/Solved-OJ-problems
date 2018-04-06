#include<stdio.h>
int main()
{
    long long j,n;
    double s,d,a,b;
    scanf("%lld",&n);
    while(n>0)
    {
        n--;
        scanf("%lf %lf",&s,&d);

        if(d>s)
        {
            printf("impossible\n");
            continue;
        }

        a=(s+d)/2;
        b=s-a;

        if(a-(int)a>0.000001 || b-(int)b>0.000001)
            printf("impossible\n");
        else
            printf("%d %d\n",(int)a,(int)b);
    }
    return 0;
}
