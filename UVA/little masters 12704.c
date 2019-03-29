#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    double x,y,r;
    double h,s,l;
    scanf("%d",&n);
    while(n>0)
    {
        n--;
        scanf("%lf %lf %lf",&x,&y,&r);
        x=pow(x,2);
        y=pow(y,2);
        h=sqrt(x+y);
        s=r-h;
        l=r+h;
        printf("%.2lf %.2lf\n",s,l);
    }
    return 0;
}
