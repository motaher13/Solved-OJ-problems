#include <stdio.h>
#include <math.h>
#define li 40000
#define p 70000

char str[li];
long long ara[li];
int main()
{
    int test;
long long i,j,k,l,n,m,q,ck,u,w,x,r,du,t,mul,max,a,b;
   for(i=2;i<=li;i++){
   str[i]='1';
   }
   k=0;
   for(i=2;i<=li;i++){
   if(str[i]=='1'){
   ara[k]=i;
   k++;
   for(j=2;j*i<=li;j++){
   str[j*i]='0';
   }
   }
   }
   scanf("%d",&test);
   while(test--){
   max=0;

   scanf("%lld%lld",&a,&b);
   for(i=a;i<=b;i++){
    mul=1;
    ck=1;
   n=i;
   t=i;
   for(j=0;t!=1;j++){
   du=0;
   q=0;
   while(t%ara[j]==0){
        ck=0;
   q=t/ara[j];
   t=t/ara[j];
   du++;
   }
   mul=mul*(du+1);
   if(q>sqrt(n)){
   x=1;
   for(m=0;ara[m]<=sqrt(q);m++){
   if(q%ara[m]==0)x=0;
   }
   if(x==1){
   du=0;
   while(t%q==0){
   t=t/q;
    du++;
   }
   mul=mul*(du+1);
   }
   }
   if(ara[j]>sqrt(n)&&ck==1){
       mul=2;
        break;
   }
   }
if(mul>max){
    max=mul,w=n;

}
   }
   printf("Between %lld and %lld, %lld has a maximum of %lld divisors.\n",a,b,w,max);
   }
   return 0;
}
