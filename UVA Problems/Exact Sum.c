#include<stdio.h>
#include<stdlib.h>
long long b[100000];
int main()
{
    long long i,j,k,l,n,t,p,q;
    while(scanf("%lld",&n)==1)
    {
        for(i=0;i<n;i++)
            scanf("%lld",&b[i]);
        scanf("%lld",&t);

        p=0;q=0;

        for(i=0;i<n-1;i++)
            for(j=i+1;j<n;j++)
                if((b[i]+b[j])==t)
                {
                    if(p==0 && q==0){
                    if(b[i]<=b[j]){
                        p=b[i];
                        q=b[j];}
                    else{
                        q=b[i];
                        p=b[j];}}
                    else if(abs(b[i]-b[j])<=abs(q-p)){
                        if(b[i]<=b[j]){
                        p=b[i];
                        q=b[j];}
                    else{
                        q=b[i];
                        p=b[j];}}
                }
        printf("Peter should buy books whose prices are %lld and %lld.\n\n",p,q);
    }
    return 0;
}
