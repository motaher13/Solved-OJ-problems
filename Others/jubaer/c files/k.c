#include <stdio.h>
int main()
{
    int t=10239,q,n=32,i;
    if(t<n){
    q=n;
    n=t;
    t=q;
    }
    int s=0;
    for(i=2;i<=sqrt(n);i++){
    if(n%i==0&&t%i==0){
    s++;
    }
    }
    printf("%d",s);
}
