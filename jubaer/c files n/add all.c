#include <stdio.h>
int main()
{
    int ara[10000],a,b,c,i,j,k,n,last,co,sum;
   while(scanf("%d",&n)){
        if(n==0)break;
     for(i=0;i<n;i++){
    scanf("%d",&ara[i]);
    }
    last=n-1;
    co=0;
    while(last!=0){

    for(i=1;i<=last;i++){
    j=i;
    while((ara[j]<ara[j/2])&&j!=0){
    c=ara[j];
    ara[j]=ara[j/2];
    ara[j/2]=c;
    j=j/2;
    }
    }
   sum=ara[0]+ara[1];
   co=co+sum;
   ara[0]=sum;
   ara[1]=ara[last];
   last=last-1;
   }
   printf("%d\n",co);
   }
   return 0;
}
