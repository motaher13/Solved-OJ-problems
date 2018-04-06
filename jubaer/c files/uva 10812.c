#include <stdio.h>
int main()
{
    int n,i;
    int p,q,a,b;
    scanf("%d",&n);
    for(i=0;i<n;i++){
    scanf("%lf%lf",&a,&b);
    (double)p=((a+b)/2);
    q=((a-b)/2);
    if(((int)p!=p)||((int)q!=q)){
     printf("impossible\n");
    }
    else if(p<0||q<0||a<=0||b<=0){
    printf("impossible\n");
    }
    else printf("%d %d\n",p,q);
   }
   return 0;

}
