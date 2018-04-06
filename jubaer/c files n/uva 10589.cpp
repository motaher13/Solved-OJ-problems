#include <stdio.h>
#include <math.h>
int main()
{
    int i,j,k,l,n;
    double a,b,x,y,z,u,v,w;
    while(scanf("%d%d",&n,&j)){
        if(n==0&&j==0)break;
            a=(double)j;
    l=0;
    for(i=0;i<n;i++){
        scanf("%lf%lf",&x,&y);
       u=sqrt(((a-x)*(a-x))+((a-y)*(a-y)));
        v=sqrt(((a-x)*(a-x))+((0-y)*(0-y)));
       w= sqrt(((0-x)*(0-x))+((a-y)*(a-y)));
       z=sqrt(((0-x)*(0-x))+((0-y)*(0-y)));
       if((u<=a)&&(v<=a)&&(w<=a)&&(z<=a)){
        l++;
       }

    }
    printf("%.5lf",(l*a*a)/n);
    printf("\n");
    }
    return 0;

}
