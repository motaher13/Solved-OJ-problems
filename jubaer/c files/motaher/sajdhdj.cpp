#include <iostream>
using namespace std;
int main()
{
    int i[100],v[100],x[100],l[100],c[100],p=0,q=0,r=0,s=0,t=0,k,a,b;
    for(a=1;a<=100;a++){
    if(a%10==3||a%10==8)p=p+3;
     if(a%10==1||a%10==6||a%10==9||a%10==4)p=p+1;
     if(a%10==2||a%10==7)p=p+2;
     i[a]=p;
   if(a%10==9)q=q+1;
   if((a>9&&a<20)||(a>59&&a<70)||(a>39&&a<50)||(a>89&&a<100))q=q+1;
    if((a>19&&a<30)||(a>69&&a<80))q=q+2;
       if((a>29&&a<40)||(a>79&&a<90))q=q+3;
     x[a]=q;
     k=a%10;
     if(k>=4&&k<=8)r++;
     v[a]=r;
     if(a>39&&a<90)s++;
     l[a]=s;
     if(a>89&&a<100)t++;
     c[a]=t;
    }
while(cin>>b){
        if(b==0)break;
  cout<<b<<": ";
 cout<<i[b]<<" i, "<<v[b]<<" v, "<<x[b]<<" x, "<<l[b]<<" l, ";
 if(b==100)cout<<"10 c"<<endl;
 else cout<<c[b]<<" c"<<endl;

}
return 0;

}
