#include<stdio.h>
int main()
{
    long long i,j,k=0,l,m,n=0,o,p=1;
    while(1)
    {
    scanf("%lld",&i);
    if(i==0)
        break;
    long long ara[i];

    for(j=0;j<i;j++)
    {
        scanf("%lld",&ara[j]);
        k=k+ara[j];
    }
    l=k/i;
    for(j=0;j<i;j++)
    {
        m=ara[j]-l;
        if(m<0)
            m=-m;
        n=n+m;
    }
    o=n/2;
    printf("Set #%lld\n",p);
    printf("The minimum number of moves is %lld.\n\n",o);
    k=0,n=0,o=0;
    p++;
    }
    return 0;
}
