#include<stdio.h>
#include<math.h>
int main()
{
    int i=0,j,k,l;
    double  n,a,b,c,d,e,f;
    while(scanf("%lf",&n)==1)
    {
       if(n==0)
            break;
        else
        scanf("%lf %lf %lf",&a,&b,&c);
        i++;

        if(n==1)
        {
            d=(a+b)*c/2;
            e=(b-a)/c;
        }
        else if(n==2)
        {
            d=(b*b-a*a)/(2*c);
            e=(b-a)/c;
        }
        else if(n==3)
        {
            d=sqrt(a*a+2*b*c);
            e=(d-a)/b;
        }
        else if(n==4)
        {
            d=sqrt(a*a-2*b*c);
            e=(a-d)/b;
        }

        printf("Case %d: %.3lf %.3lf\n",i,d,e);
    }
    return 0;
}


