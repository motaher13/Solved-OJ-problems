#include<stdio.h>
#include<math.h>
long long ara[10][500000];
int main()
{
    long long i,j,k,l,h,r,n,w,w1,p,q;

    while(scanf("%lld %lld %lld %lld",&l,&h,&r,&n)==4)
    {
        w=0,w1=0;
        for(i=0;i<n;i++)
            scanf("%lld %lld",&ara[0][i],&ara[1][i]);

        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                p=ara[0][i]-ara[0][j];
                q=ara[1][i]-ara[1][j];

                p=p*p;
                q=q*q;
                l=p+q;

                l=sqrt(l);
                if(l<r){

                    w1++;}
                if(w1==31){
                    i++,j=i+1;}
            }
            w=w+w1;
            w1=0;
        }

        printf("%lld\n",w);
    }
    return 0;
}
