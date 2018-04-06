#include <stdio.h>
int main()
{
    long long a,i,b,max,n,t, c, j, r;
    while(scanf("%lld %lld",&a,&b))
    {
      if(a==0&&b==0)break;

        if(a>b)
        {
            t=a;
            a=b;
            b=t;
        }
         // printf("Between %lld and %lld,",a,b);
        max=0;

        for(j=a; j<=b; j++)
        {
            c=0;
            n=j;
            while(n>=1)
            {
                if(n%2==0)
                {
                    n=n/2;
                }
                else
                {
                    n=(3*n)+1;
                }
                c++;
                if(n==1)break;
            }
            printf("%lld\n",c);
            if(max<c)
            {
                max=c;
                r=j;
            }
        }

        printf(" %lld generates the longest sequence of %lld values.",r,max);
        printf("\n");
    }
    return 0;
}
