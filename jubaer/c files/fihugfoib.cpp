#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;
 char str[10000],str2[10000],cat[1000],fat[1000],rev[1000],t,sto[1000];
long long h,w,g,f,s,o,m,a,b;
int main()
{
    int i,j,k,l,m,n,r,p,q,d,x,y,z,du,u,cou=1;
   while(cin>>n){
      if(n==-1)break;
      cin>>str;
        if(n==0){
              a=0;
            for(i=2;str[i];i++){
                a=a*10+(int)str[i]-48;
            }
           l=i-2;
           b=1;
           for(i=0;i<l;i++){
            b=b*10;
           }
           m=a;
           w=b;
            while (b != 0) {
    o = b;
    b = a % b;
    a = o;
  }
  s=m/a;
  o=w/a;
  printf("Case %d: %lld/%lld\n",cou,s,o);
        }

   else{
    strcpy(str2,str);
    p=(strlen(str))-(n+2);
    k=p+n;
    l=0;
    for(i=2;str[i];i++){
    t=str[i];
    str[i]=str[i-1];
    str[i-1]=t;
    l++;
    if(l==k)break;
    }
    l=0;
     for(i=2;str2[i];i++){
  if(p==0)break;
    t=str2[i];
    str2[i]=str2[i-1];
    str2[i-1]=t;
 l++;
    if(l>=p)break;
    }
    h=0;
    for(i=0;str[i];i++){
    if(str[i]=='.')break;
    h=h*10+(int)str[i]-48;
    }
    g=0;
    for(i=0;str2[i];i++){
            if(str2[i]=='.')break;
    g=g*10+(int)str2[i]-48;
    }
  a=h-g;
  m=a;
  f=1;
  for(i=0;i<k;i++){
    f=f*10;
  }
  s=1;
  for(i=0;i<p;i++){
    s=s*10;
  }
  b=f-s;
  w=b;
    while (b != 0) {
    o = b;
    b = a % b;
    a = o;
  }

  s=m/a;
  o=w/a;
  printf("Case %d: %lld/%lld\n",cou,s,o);
   }
   cou++;
   }
   return 0;
}
