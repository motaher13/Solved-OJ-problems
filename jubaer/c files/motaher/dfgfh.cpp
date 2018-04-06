#include <iostream>
#include <ctype.h>

#include <math.h>
using namespace std;
int main()
{
    int i,j,k,p,q,m,n,a,b,c,d,r,t,y;
 double x,z;
cin>>j>>x;
    i=0;
     z=x;
    while(1){
    y=x*10;
    x=x*10;
    cout<<y<<" "<<x<<" ";
    i++;
    if( fabs(x-(double)y) < 0.01 )break;
    x=x-y;
    cout<<x<<endl;

    //if(x==0)break;
     //cout<<y<<endl;
    }
    //cout<<i;
    k=i-j;
  //  cout<<i<<" "<<j<<" "<<k<<endl;

    p=pow(10,i)*z;
  //cout<<p<<endl;
    q=pow(10,k)*z;
//  cout<<q<<endl;

 m=pow(10,i);
 n=pow(10,k);
  a=p-q;
  b=m-n;
 //  cout<<a<<endl<<b;
c=a;
d=b;

  while (b != 0) {
    t = b;
    b = a % b;
    a = t;
  }

c=c/a;
d=d/a;
cout<<c<<"/"<<d<<endl;


}
