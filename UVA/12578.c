#include<stdio.h>
#include<math.h>
int main()
{
    double pi,a,c,r,x,y,g;
    int i,j,k,l,n;
    pi=2*acos(0.0);
    scanf("%d",&n);
    while(n--)
    {
        scanf("%lf",&x);
        y=(6*x)/10;
        a=x*y;
        r=(2*x)/10;
        c=pi*r*r;
        g=a-c;
        printf("%.2lf %.2lf\n",c,g);

    }
    return 0;
}
