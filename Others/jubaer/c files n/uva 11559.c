#include <stdio.h>
int main()
{
    int i,j,k,l,m,n,r,ara[100][2000],p,b,h,w,ck,kk;
    long long max,cost;
   while(scanf("%d%d%d%d",&p,&b,&h,&w)==4){
    k=1+w;
    max=100000000;
    for(i=0;i<h;i++){
    for(j=0;j<k;j++){
    scanf("%d",&ara[i][j]);
    }
    }
    kk=0;
    for(i=0;i<h;i++){
            ck=0;
    for(j=1;j<k;j++){
    if(ara[i][j]<p){
    break;
    }
    else if(j==k-1)ck=1;
    }
    if(ck==1){
    cost=(p*ara[i][0]);
    if(cost<=b&&cost<max){
     max=cost;
     kk=1;
    }
    }
    }
    if(kk==1){
    printf("%lld\n",max);
    }
  else if(kk==0)printf("stay home\n");
   }
   return 0;
}
