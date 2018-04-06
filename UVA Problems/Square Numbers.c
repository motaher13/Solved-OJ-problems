#include<stdio.h>
#include<math.h>
int main()
{
    long long j=0,k;
    double a,b,s,i;
    while(scanf("%lf %lf",&a,&b))
    {
        if(a==0 && b==0)
            break;

        for(i=a;i<=b;i++)
        {
            s=sqrt(i);
            if(s-(int)s>0.0000001)
                continue;
            else
                j++;
        }

        if(a==0)
            printf("%lld\n",j-1);
        else
            printf("%lld\n",j);
        j=0;
    }
    return 0;
}

