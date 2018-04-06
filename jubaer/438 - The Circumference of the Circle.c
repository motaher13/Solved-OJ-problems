#include<stdio.h>
#include<math.h>

int main(){
    double p=3.141592653589793,x1,x2,x3,y1,y2,y3,x,y,z,h,k,d;
   while(scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3)==6){
        x=x1*x1+y1*y1;
        y=x2*x2+y2*y2;
        z=x3*x3+y3*y3;
        d=2*((x1-x2)*(y2-y3)-(x2-x3)*(y1-y2));
        h=(z*(y1-y2)+x*(y2-y3)+y*(y3-y1))/d;
        k=(x1*(y-z)+x2*(z-x)+x3*(x-y))/d;

        printf("%.2lf\n",2*sqrt((x1-h)*(x1-h)+(y1-k)*(y1-k))*p);

   }

    return 0;
}
