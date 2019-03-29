#include<stdio.h>
#include<math.h>
int main()
{
    long long i,j,k,l,m,n,s,t,p,r,ara[100];

    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        s=0;
        p=n;
        i=1;
        while(1)
        {
            ara[i]=n%10;
            i++;
            n=n/10;
            if(n==0)
                break;
        }
        i--;
        for(j=1;j<=i;j++)
        {
            r=1;
            for(l=1;l<=i;l++)
                r=r*ara[j];
            s=s+r;
        }
        if(s==p)
            printf("Armstrong\n");
        else
            printf("Not Armstrong\n");
    }
    return 0;
}
