#include <stdio.h>
int main()
{
    double x;
    char c='%';
    while(scanf("%lf",&x)){
    if(x<0)break;
    if(x==1)printf("0%\n");
    else{
    x=x/4;
    x=x*100;
    printf("%.lf%c\n",x,c);
    }
    }
    return 0;
}
