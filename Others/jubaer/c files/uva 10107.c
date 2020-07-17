#include <stdio.h>
int main()
{
    long long i,j,k,l,ara[10000],max=0,n,a,t,m,d;
    l=1;
    i=1;
    while(scanf("%lld",&a)!=EOF){

    if(i==0)ara[i]=a;
    else {
    if(a>=max)ara[i]=a;
    if(a<max){
    ara[i]=a;
    for(j=0;j<i;j++){
    if(ara[i]<ara[j]){
    t=ara[j];
    ara[j]=ara[i];
    ara[i]=t;
    }
    }
    }
    }
    max=ara[i];
   if(l%2==0){m=l/2;
   d=ara[m]+ara[m+1];
   printf("%lld\n",d/2);
   }
   else {
    m=(l/2)+1;
    printf("%lld\n",ara[m]);
   }
   i++;
   l++;
    }
   return 0;
}
