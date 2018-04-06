#include <stdio.h>
int main()
{
    int a,b,c,t,n,r;
   while(scanf("%d%d",&a,&b)==2){
    c=a;
    t=0;
    while(c>=b){
    n=c/b;
    r=c%b;
    c=n+r;
    t=t+n;
    }
    printf("%d\n",a+t);
    }
    return 0;
}
