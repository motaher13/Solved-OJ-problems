#include <iostream>
using namespace std;
int main()
{
    int a,b,c,d,e,f,i,j,k=0,h;
    cin>>h;
    while(h--){
    cou=0;
    cin<<a<<b<<c<<d<<e<<f;
    for(i=e;i<=f;i++){
    if(i%2==0){
    for(j=c;j<=d;j++){
    if(j%(i/2)==0)cou++;
    }
    }
    else {
     for(j=c;j<=d;j++){
    if(j%(i/2)==0)cou++;
    }
    }
    }
    cout<<"Case k+1: ";
    cout<<(a-b+1)*cou<<endl;
    i++;
    }
    return 0;
}
