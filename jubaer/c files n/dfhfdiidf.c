#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;
long long h,w,g,f,s,o;
int main()
{
    char str[10000],str2[10000],cat[1000],fat[1000],rev[1000],t,sto[1000];
    int i,j,k,l,m,n,r,p,q,d,x,y,z,du,u;
    cin>>n>>str;
    strcpy(str2,str);
    p=(strlen(str))-(n+2);
    k=p+n;
    printf("%d %d %d\n",k,p,n);
    l=0;
    for(i=2;str[i];i++){
    t=str[i];
    str[i]=str[i-1];
    str[i-1]=t;
    l++;
    if(l==k)break;
    }
  //  str[i]='\0';
    printf("%s\n%s\n",str,str2);
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
    h=h*10+(int)str[i]+48
    }
    g=0;
    for(i=0;str2[i];i++){
    g=g*10+(int)str2[i]-48;
    }
    printf("%lld %lld",h,g);

}
