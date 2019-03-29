#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define li 15000
#define p 70000
char str[li];
int ara[li];
int ara3[p];

int main()
{
     int i,j,k,l,n,m,q,ck,u,w,x,r,du,sum,rt;
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
        rt=0;
   for(i=0;ara[i]<=r;i++){
   if(r==ara[i]){
   rt++;

   }
   sum=ara[i];
   for(j=i+1;ara[j]<=r;j++){
   sum=sum+ara[j];
   if(sum>r)break;
   if(sum==r){
   rt++;
   break;
   }
   }
   }
   printf("%d",rt);
   printf("\n");
   }
   return 0;
}
