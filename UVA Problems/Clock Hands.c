#include<stdio.h>
int main()
{
    int h,m,i,j;
    double s;
    char c;
    while(scanf("%d%c%d",&h,&c,&m)==3)
    {
        if(h==0 && m==0)
        {
            break;
        }
        s=(30*h)-(5.5*m);
        if(s<0)
            s=-s;
        if(s>180)
        s=360-s;
        printf("%.3lf\n",s);
    }
    return 0;
}
