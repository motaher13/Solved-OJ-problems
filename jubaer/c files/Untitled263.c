#include <stdio.h>
#include <math.h>
int main()
{
    double i;
    for(i=1;i<100;i++){
    printf("%lf\n",sqrt(i));
    printf("%d\n",(int) sqrt(i));
    printf("%lf\n",sqrt(i)-(int) sqrt(i));
    }
    return 0;
}
