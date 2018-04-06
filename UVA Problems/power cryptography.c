#include<stdio.h>
#include<math.h>
int main()
{
    double i,j,k,l;
    while(scanf("%lf %lf",&i,&j)==2)
    {
        k=1/i;
        l=pow(j,k);
        printf("%.0lf\n",l);
    }
    return 0;
}
