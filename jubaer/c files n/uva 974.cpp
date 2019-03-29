#include <stdio.h>
#include <math.h>
#include <cmath>
#include <iostream>
using namespace std;
int ara[10000];
int main()
{
    long long i,j=0,k,l,m,n,p,u;
  for(i=2;i<=40000;i++){
  p=(i*i);
  l=1;
  k=0;
  m=0;
  while(p!=0){
   k=k+(p%10*l);
   l=l*10;
  p=p/10;
  if(k!=0&&p!=0){
  if((k+p)==i){
  ara[j]=i;
  j++;
  break;
  }
  }
  }
  }
  scanf("%lld",&p);
  u=1;
  while(p--){
  scanf("%lld%lld",&n,&m);
  printf("case #%lld\n",u);
  u++;
  k=1;
   for(i=0;i<j;i++){
        if(ara[i]>m)break;
    if(ara[i]>=n&&ara[i]<=m){
        printf("%d\n",ara[i]);
        k=0;
    }

   }
   if(k==1)printf("no kaprekar numbers\n");
  if(p>0)printf("\n");
  }
  return 0;
}
