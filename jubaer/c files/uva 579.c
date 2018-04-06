#include <stdio.h>
int main()
{
    int h,m;
    double s;
    while(scanf("%d%d",&h,&m)==2){
            if(m==0&&h==0){
                break;
            }
    s=(30*h)-(5.5*m);
    if(s<0){
        s=-s;
    }
    if(s>180){
    s=360-s;
    }
    printf("%0.3lf\n",s);
    }
    return 0;
}
