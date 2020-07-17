#include <stdio.h>
int main()
{
    int i,j,k,ara[100000],n,g,p,q,r,t,ck;
    while(scanf("%d",&n)){
            if(n==0)break;
    for(i=0;i<n;i++){
    scanf("%d",&ara[i]);
    }
    int max=0;
  for(j=0;j<n-1;j++){
     g=ara[j];
     r=0;
     t=0;
     ck=0;
    for(i=0;i<n;i++){
    if(ara[i]<=t){
    t=ara[i];
    r++;
    }
   if(ara[i]<g&&ck==0){
   t=ara[i];
   r++;
   ck=1;
   }
    if(ara[i]>=g){
    g=ara[i];
    r++;
    }
    }
    if(max<r)max=r;
    printf("%d\n",max);
    }
   // printf("%d\n",r);
    }
    return 0;
}
