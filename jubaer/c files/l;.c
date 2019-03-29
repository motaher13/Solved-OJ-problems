#include<stdio.h>
int main()
{
long t,m,n,d,db,hb;
    //freopen("in.txt","r",stdin);
    scanf("%ld",&t);
    while(t--)
    {
        scanf("%ld",&m);
        db=hb=0,n=m;
        while(n)
            db=db+(n&1),n=n>>1;
        while(m)
        {
            d=m%10;
            while(d)
                hb=hb+(d&1),d=d>>1;
            m=m/10;
        }
        printf("%ld %ld\n",db,hb);
    }
    return 0;
}
