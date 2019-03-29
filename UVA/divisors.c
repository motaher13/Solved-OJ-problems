#include<stdio.h>
#include<math.h>
int main()
{
    long long i,j,k,l,m,n,p,q,t,max,nm,c,a,b;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld",&a,&b);
        max=0;
        nm=0;
        for(j=a;j<=b;j++)
        {
            n=j;
            m=sqrt(n);
            c=1;
            for(i=2;i<=m;i=(i==2? 3:i+2))
            {
                p=0;
                while(n%i==0)
                {
                    p++;
                    n=n/i;
                }
                if(p!=0)
                    c=c*(p+1);
            }
            if(c>max){
                max=c;
                nm=j;}
        }
        if(b!=1 && a!=1 && max==1)
            max=2;
        printf("Between %lld and %lld, %lld has a maximum of %lld divisors.\n",a,b,nm,max);
    }
    return 0;
}
