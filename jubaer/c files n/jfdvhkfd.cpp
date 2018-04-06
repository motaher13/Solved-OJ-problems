#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    double a,b,c,d,e,f,g;
    int i,j,k,n;
    cin>>n;
    for(i=0;i<n;i++){
    cin>>a>>b>>c;
    printf("case %d\n",i+1);
    e=(a*.8)+(c*.2);
    f=(.7*a)+(b*.10)+(c*.2);
    g=(.4*a)+(b*.4)+(c*.2);
    printf("bat: %.3lf bowl: %.3lf field: %.3lf  total : %.3lf\n",e,f,g,(e+f+g));

    }


}
