#include <stdio.h>
int main()
{

   int i,j,k,t,n;
   int ara[100];
   scanf("%d",&t);
   for(j=1;j<=t;j++){
        scanf("%d",&n);
   for(i=0;i<n;i++){
   scanf("%d",&ara[i]);
   }
   k=(n/2);
   printf("Case %d: %d\n",j,ara[k]);
   }
   return 0;
}
