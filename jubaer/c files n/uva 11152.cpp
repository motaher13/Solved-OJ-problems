#include <stdio.h>
#include <math.h>
int main()
{
    double a,b,c,d,k,l,m,n,in,tri,out;
    while(scanf("%lf%lf%lf",&a,&b,&c)==3){
    k=(a+b+c)/2;
    in=(3.14159265358979323846264338327*(k*(k-a)*(k-b)*(k-c)))/(k*k);
   tri=sqrt(k*(k-a)*(k-b)*(k-c))-in;
  out=(a*b*c)*(a*b*c)*3.14159265358979323846264338327/(((a+b+c)*(a+b-c)*(a-b+c)*(b+c-a)));
  out=out-(tri+in);
  printf("%.4lf %.4lf %.4lf\n",out,tri,in);
    }
    return 0;
}
