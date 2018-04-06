#include <stdio.h>
#include <math.h>
int main()
{

    double a,b,c,d,e;
    int t,i=1;
    scanf("%d",&t);
    while(t--){
        scanf("%lf%lf%lf%lf",&a,&b,&d,&e);
        c=sqrt(((a*a)+(b*b))/2);
        printf("Land #%d: ",i++);
        printf("%.6lf ",((c-a)/(b-a))*d);
        printf("%.6lf\n",((c-a)/(b-a))*e);
    }
    return 0;
}
