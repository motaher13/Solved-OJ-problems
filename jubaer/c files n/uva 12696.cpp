#include <stdio.h>
int main()
{
    double a,b,c,d;
    int t,sum=0;
    scanf("%d",&t);
    while(t--){
    scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
    if(d>7)printf("0\n");
   else if(a<=56.00&&b<=45.00&&c<=25&&d<=7.00){
        printf("1\n");
        sum++;
   }
   else if((a+b+c)<=125.00&&d<=7.00){
        printf("1\n");
        sum++;
   }
   else printf("0\n");
}
printf("%d\n",sum);
  return 0;
}
