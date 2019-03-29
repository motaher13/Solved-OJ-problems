#include<stdio.h>
int main()
{
    long long i,j,k,l=0,m,n,p,b,c,t;
    scanf("%lld",&t);
    for(l=1;l<=t;l++)
    {
        scanf("%lld",&n);
        b=0,c=0;
         p=n;
        while(1)
        {
            m=0;
            while(1)
            {
                k=p%10;
                m=m+k*k;
                p=p/10;
                if(p==0)
                    break;
            }
            if(m==1){
                c=1;
                break;}
            else if(m/10==0){
                b=1;
                break;}
            else
                p=m;
        }
        if(c==1)
            printf("Case #%lld: %lld is a Happy number.\n",l,n);
        else
            printf("Case #%lld: %lld is an Unhappy number.\n",l,n);

    }
    return 0;
}
