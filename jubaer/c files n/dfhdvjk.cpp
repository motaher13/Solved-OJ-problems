#include <stdio.h>
#include<iostream>
using namespace std;
int main()
{
    long long a,b,c,d,t,s,p;
    while(cin>>a>>b>>c>>d){
            if(a==0&&b==0&&c==0&&d==0)break;
    t=b-a;
    if(t!=0){
    if(t<0){
    t=40+t;
    }
    t=t*9;
    t=(360-t);
    }
    s=c-b;
    if(s!=0){
    if(s>0){
    s=40-s;
    }
    else s=-s;
    s=s*9;
    s=360-s;
    }
   p=d-c;
   if(p!=0){
   if(p<0){
   p=p+40;
   }
   p=p*9;
   p=360-p;
   }
   printf("%lld\n",(1080+t+s+p));
    }
    return 0;
}
