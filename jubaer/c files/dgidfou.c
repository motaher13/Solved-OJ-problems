#include <stdio.h>
#include <math.h>
int main()
{
    double a,b,c,d,e,f,k;
    int n;
    long long m,i,j,l=0;
    while(scanf("%d%lf",&n,&k)){
            if(n==0&&k==0)break;
    l=0;
    f=0;
    for(i=1;i<=n;i++){
        scanf("%lf%lf",&a,&b);
        if((a==b)&&b!=0){
            l++;
        }
    }
    printf("%.5lf",(k*k*l)/n);
  printf("\n");
    }
    return 0;
}
