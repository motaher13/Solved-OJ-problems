#include <stdio.h>
int main()
{
    double tm,mm,ir,la,ny;
    printf("enter la:");
    scanf("%lf",&la);
    printf("enter ir:");
    scanf("%lf",&ir);
    printf("enter ny:");
    scanf("%lf",&ny);
    tm=la+la*ir/100;
    mm=tm/(ny*12);
    printf("tm=%0.2lf,mm=%0.2lf\n",tm,mm);
    return 0;
}
