#include <stdio.h>
long long li=1000010;
char str[1000010];
int ara[1000010],t,l,k,i,j,n,m,r,u,d;
int ara2[1000010],posi[1000010];
int main()
{
ara[1]=2;
k=2;
str[2]='1';
   for(i=3;i<=li;i=i+2){
   str[i]='1';
   }
   for(i=3;i<=li;i=i+2){
   if(str[i]=='1'){
   ara[k]=i;
   k++;
   for(j=2;j*i<=li;j++)str[j*i]='0';
   }
   }
   l=1;
  for(i=1;i<k;i++){
    t=ara[i];
    r=0;
    while(t!=0){
        r=r+t%10;
        t=t/10;
    }
    if(str[r]=='1'){
      ara2[l]=ara[i];
      l++;
    }
  }
  scanf("%d",&r);
  while(r--){
        u=0;
  scanf("%d%d",&n,&m);
  for(j=1,d=l-1;j<d;j++,d--){
        if(ara2[j]>m)break;
        if(ara2[d]<=m)u++;
    if(ara2[j]>=n){
      u++;
    }
  }
printf("%d\n",u);
  }
  return 0;
}
