#include <stdio.h>
#include <math.h>
int main()
{
    int i,j,k=1;
    double a;
    while(scanf("%lf",&a)){
            if(a==0)break;
        a=a*8;
        a=a+9;
        a=sqrt(a)+3;
        a=a/2;
        printf("Case %d: %.lf\n",k++,ceil(a));
    }
  return 0;
}
