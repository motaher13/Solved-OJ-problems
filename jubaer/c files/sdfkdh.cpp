#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    long long a,b,c,d;
 long double mul;
    long long i;
    scanf("%lld%lld",&a,&b);
    mul=1;
    c=b;
    for(i=1;i<=c;i++){
    mul=mul*(a/b);
    a--;
    b--;
    if(b==0)b=1;
    }
    cout<<mul;


}
