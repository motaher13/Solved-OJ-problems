#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define li 60000
#define p 70000
int ara[p];
int ara2[li];
int ara3[10000000];
int prime(int n){
int ck=1,i;
for(i=3;i<=sqrt(n);i=i+2)
if(n%i==0){
ck=0;
break;
}
return ck;
}
int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}



int main()
{
   long long i,j,k,l,n,m,q,ck,u,w,x,r;
   for(i=0;i<li;i++){
   ara2[i]=i+2;
   }
   k=0;
   for(i=0;i<li;i++){
   if(ara2[i]!=-1){
   ara[k]=ara2[i];
   k++;
   for(j=(2*ara2[i]-2);j<li;j=j+ara2[i]){
   ara2[j]=-1;
   }
   }
   }
   while(scanf("%lld",&r)){
        if(r==0)break;
   m=r;
   if(m<0)m=-m;
   w=0;
   ck=1;
   for(i=0;m!=1;i++){
   while(m%ara[i]==0){
        ck=0;
   ara3[w]=ara[i];
   w++;
   if((m/ara[i])%2!=0&&(m/ara[i])!=1){
   q=m/ara[i];
   x=prime(q);
   if(x==1){
   ara3[w]=q;
   m=m/q;
   w++;
   }
   }
   m=m/ara[i];
   }
   if(ara[i]>=sqrt(m)&&ck==1)break;
   }
   printf("%lld =",r);
   if(r<0)printf(" -1 *");
   if(ck==1)printf(" ");
   if(r<0)r=-r;
   if(ck==1&&r!=1)printf("%lld",r);
   if(ck==0){
        qsort(ara3,w,sizeof(int),cmpfunc);
   for(u=0;u<w;u++){
   printf(" %d",ara3[u]);
   if(u!=w-1)printf(" *");

   }
   }
   printf("\n");
   }
   return 0;

}
