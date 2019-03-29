#include <iostream>
using namespace std;
int main()
{
    int a,b,c,d,e,f,i,j,k=0,h,cou,r;
    cin>>h;
    while(h--){
    cou=0;
    cin>>a>>b>>c>>d>>e>>f;
    for(i=e;i<=f;i++){
    if(i%2==0){
    for(j=c;j<=d;j++){
    if(j%(i/2)==0){
            cou++;
    }
    }
    }
    else {
     for(j=c;j<=d;j++){
    if(j%i==0){
            cou++;
    }
    }
    }
    }
    r=(b-a+1)*cou;
    cout<<"Case "<<k+1<<": ";
    cout<<r<<endl;
    k++;
    }
    return 0;
}
