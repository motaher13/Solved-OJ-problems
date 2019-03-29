#include<stdio.h>
#include<math.h>
int main()
{
    long long i,j,k,l,n,m,c,p;
    while(scanf("%lld",&n)==1)
    {
        if(n==0)
            printf("%lld is not prime.\n",n);
        else{
        m=sqrt(n);
        c=0;
        for(i=2;i<=m;i=(i==2? 3:i+2))
            if(n%i==0){
                c=1;
                break;}
        if(c==1)
            printf("%lld is not prime.\n",n);
        else
        {
            p=n;
            m=0;
            for(i=0; ;i++)
            {
                k=p%10;
                m=m*10+k;
                p=p/10;
                if(p==0)
                    break;
            }
            p=m;
            m=sqrt(p);
            c=0;
            for(i=2;i<=m;i=(i==2?3:i+2))
                if(p%i==0){
                    c=1;
                    break;}
            if(c==1 || n==p)
                printf("%lld is prime.\n",n);
            else
                printf("%lld is emirp\n",n);
        }
        }

    }
    return 0;
}
