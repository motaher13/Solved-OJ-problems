#include <stdio.h>
int main()
{

    char str[1000];
    int j,k,l,m,g,i,t,r,a,max,q;
    scanf("%d",&q);
    while(q--){
    scanf("%s",str);
    m=a=r=g=i=t=0,max=3242344;
    for(j=0;str[j];j++){
    if(str[j]=='M')m++;
    if(str[j]=='A')a++;
    if(str[j]=='R')r++;
    if(str[j]=='G')g++;
    if(str[j]=='I')i++;
    if(str[j]=='T')t++;
    }
    if(max>m){
    max=m;
    }
    a=a/3;
    if(max>a){
    max=a;
    }
    r=r/2;
    if(max>r)max=r;
    if(max>i)max=i;
    if(max>t)max=t;
    if(max>g)max=g;
  printf("%d\n",max);
    }
   return 0;
}
