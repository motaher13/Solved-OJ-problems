#include <stdio.h>
int main()
{
    int i,n;
    double ara2[100];
    double sum;
   while(scanf("%d",&n)==1){
    sum=0;
    for(i=0;i<n;i++){
  scanf("%lf",&ara2[i]);
    }
    for(i=0;i<n;i++)sum=sum+ara2[i];
    sum=sum/n;
    printf("%.5lf\n",sum);
   }
return 0;
}
