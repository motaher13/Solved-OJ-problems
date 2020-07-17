#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define li 50000
#define p 70000

char str[li];
int ara[li];
int ara3[p];

int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}

int main()
{
   int i,j,k,l,n,m,q,ck,u,w,x,r,du;
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
   while(scanf("%d",&r)){
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
   q=m/ara[i];
   if(q%2!=0&&q!=1){
        x=1;
   for(du=0;ara[du]<=sqrt(q);du++)
if(q%ara[du]==0){
x=0;
break;
}
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
   printf("%d =",r);
   if(r<0)printf(" -1 x");
   if(ck==1)printf(" ");
   if(r<0)r=-r;
   if(ck==1&&r!=1)printf("%d",r);
   if(ck==0){
        qsort(ara3,w,sizeof(int),cmpfunc);
   for(u=0;u<w;u++){
   printf(" %d",ara3[u]);
   if(u!=w-1)printf(" x");
   }
   }
   printf("\n");
   }
   return 0;

}
