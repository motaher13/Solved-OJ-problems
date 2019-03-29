#include<stdio.h>
int main()
{
    long long i,j,k,l,a,b,c,d,x,m;
    while(scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&l)==5)
    {
        if(a==0 &&b==0 &&c==0 &&d==0 &&l==0)
            break;
        i=0;
        for(x=0;x<=l;x++)
        {
            m=a*x*x+b*x+c;
            if(m%d==0)
                i++;
        }
        printf("%lld\n",i);
    }
    return 0;
}
