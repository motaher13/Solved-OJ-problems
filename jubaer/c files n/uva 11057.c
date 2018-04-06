#include <stdio.h>
int main()
{
    long long i,j,k,n,g,t,min,d,r,ara[1000000];
   while(scanf("%lld",&k)==1){
    for(i=0;i<k;i++){

    scanf("%lld",&ara[i]);
    }
    scanf("%lld",&n);
    min=1000001;
    for(i=0;i<k-1;i++){
    for(j=i+1;j<k;j++){
    if((ara[i]+ara[j])==n){
            d=ara[i]-ara[j];
    if(d<0)d=-d;
    if(d<min){
    min=d;
    g=ara[i],t=ara[j];
    }
    }
    }
    }
    if(g<t){
        r=g;
        g=t;
        t=r;
    }
    printf("Peter should buy books whose prices are %lld and %lld.\n\n",t,g);
   }
   return 0;
}
