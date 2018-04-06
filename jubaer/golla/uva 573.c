#include <stdio.h>
int main()
{
    double x,y,z,a,d,sum,i;
   while (scanf("%lf",&x)){
   scanf("%lf%lf%lf",&y,&z,&a);
   if(x==0)break;
    d=(y*a)/100;
    sum=0;
    for(i=0;;i++){
    if(i>0)y=y-d;
    if(y<0)y=0;
    sum=sum+y;
      if(sum>x){
    printf("success on day %.lf\n",i+1);
    break;
    }
     sum=sum-z;
     if(sum<0){
    printf("failure on day %.lf\n",i+1);
    break;
    }

    }
   }
   return 0;
}
