#include <stdio.h>
int main()
{
    double a,b,c,d,e,i;
    double k;
    while(scanf("%lf%lf",&a,&b)){
     if(b>=a-b){
            k=1;
        for(i=a;i>b;i--){
            k=k*i;
        }
        d=1;
        for(i=1;i<=a-b;i++){
            d=d*i;
        }
        printf("%.lf %lf %lf",k/d,k,d);
     }
     else if(b<a-b){
        d=1;
        for(i=1;i<=b;i++){
            d=d*i;
        }
        k=1;
        for(i=a;i>a-b;i--){
            k=k*i;
        }

        printf("%.0lf gj%lf %lf",k/d,k,d);
     }
    printf("\n");
    }
    return 0;
}
