#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int i,j,k,n,l,t,d,r;
    cin>>t;
    d=1;
    for(r=0;r<t;r++){
    cin>>n;
     k=0,j=0;
    for(i=0;i<n;i++){
    cin>>l;
    k=k+(((l/30)+1)*10);
    j=j+(((l/60)+1)*15);
    }
    if(k<j)
            cout<<"Case "<<d<<": Mile "<<k;
   if(j<k) cout<<"Case "<<d<<": Juice "<<j;
   if(k==j) cout<<"Case "<<d<<": Mile Juice "<<j;
  cout<<endl;
  d++;
    }
    return 0;
}
