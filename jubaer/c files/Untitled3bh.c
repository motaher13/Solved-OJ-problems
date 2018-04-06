#include <stdio.h>
int m,n;
double o;
void abc(int a,int b){
    m=a*b;
    n=a+b;
    o=a/b;



}
int main()
{
    int sum,mult,a,b;
    double div;
    a=6,b=3;
    abc(a,b);
    mult=m;
    sum=n;
    div=o;
    printf("%d %d %lf",mult,sum,div);
    return 0;



}
