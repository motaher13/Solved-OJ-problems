#include<stdio.h>
int main()
{
    long long i,k,l,m,n,t=0;
    scanf("%lld",&l);
    while(l--)
    {
        scanf("%lld %lld %lld",&n,&k,&m);
        i=0;
        double j=n;
        while(j<=m)
        {
            j=j*k;
            i++;
            //printf("%lld %lld\n",j,i);
        }
        if(i>0)
        printf("%lld\n",i-1);
        else
            printf("0\n");

    }
return 0;
}
