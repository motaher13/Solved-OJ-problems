#include <stdio.h>
int main()
{
    int i,ara[100],sum,avg,t,j,l,n;
   float ans;

   scanf("%d",&t);
    for(j=0;j<t;j++){
      sum=0;
    scanf("%f",&n);
    for(i=0;i<n;i++){
    scanf("%d",&ara[i]);
    sum=sum+ara[i];
    }
    avg=sum/n;
    l=0;
    for(i=0;i<n;i++){
    if(avg<ara[i])
    l++;
    }
    ans=(float)l/(float)n;
    printf("%.3f%%\n",ans*100);
    }

    return 0;
}
