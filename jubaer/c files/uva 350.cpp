#include <stdio.h>
int main()
{
    long long a,b,c,d,e,k;
    int count,u=1;
    while(scanf("%lld%lld%lld%lld",&a,&b,&c,&d)){
            if(a==0&&b==0&&c==0&&d==0)break;
            d=((a*d)+b)%c;
    e=d;
    count=1;
    while(1)
    {
        d=((d*a)+b)%c;
        if(d==e)break;
    count++;
    }
   printf("Case %d: %d\n",u,count);
   u++;
    }
    return 0;
}
