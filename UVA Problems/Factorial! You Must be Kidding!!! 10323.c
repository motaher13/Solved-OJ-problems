#include<stdio.h>
int main()
{
    long long i,j,k,l,m,n,t,c;
    while(1)
    {
        scanf("%lld",&n);
        m=1,c=0;
        for(i=1;i<=n;i++)
        {
            m=m*i;
            if(m>6227020800){
                c=1;
                break;}
        }
        if(c==1)
            printf("Overflow!\n");
        else if(m<10000)
            printf("Underflow!\n");
        else
            printf("%lld\n",m);

    }
    return 0;
}
