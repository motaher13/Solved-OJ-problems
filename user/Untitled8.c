#include<stdio.h>
#include<stdio.h>
/*long long prime(long long n)
{
    long long i,j;
    i=sqrt(n);
    for(j=3;j<=i;j=j+2)
    {
        if(n%j==0)
            return 0;
    }
    return 1;
}*/

int main()
{
    long long i,j=1,k,n;
    for(i=3; ;i+=2)
    {
        n=sqrt(i);
        for(j=3;j<=1;j=j+2)
        {
            if(n%j==0)
                continue;
            j++;
        }
        if(j==1500)
            break;
    }

    printf("%lld",i);
    return 0;
}

