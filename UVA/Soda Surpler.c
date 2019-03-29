#include<stdio.h>
int main()
{
    long long i,j,k,l,n,m=0,p,o,q;
    scanf("%lld",&o);
    while(o>0)
    {
        o--;
        scanf("%lld %lld %lld",&i,&j,&k);
        n=i+j;
    while(1){
        p=n/k;
        if(p==0)
            break;
        m=p+m;
        q=n%k;
        n=p+q;
    }
    printf("%lld\n",m);
    m=0;
    }
    return 0;

}
