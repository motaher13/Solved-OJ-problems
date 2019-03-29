#include <stdio.h>
int main()
{
    long long a,b,c,d=0,i,k,j,t=0,n,max=0,ck;
    scanf("%lld%lld",&a,&b);
    for(k=a;k<=b;k++){
            n=k;
    d=0;
    t=0;
    for(i=1;i<=sqrt(n);i++){
    if(t==i)break;
    if(n%i==0){
         //   printf("%d ",i);
    t=n/i;
    d++;
    if(n/i==i){

    }
    else d++;
    }
    }
   if(max<d){
    max=d;
    c=k;
   }
    }
    printf("\n%lld\n%lld",max,c);









}
