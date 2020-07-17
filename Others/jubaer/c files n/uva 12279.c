#include <stdio.h>
int main()
{
   int a,b,n,c,d,j,i;
   j=1;
  while(scanf("%d",&n)){
  if(n==0)break;
   b=0;
   c=0;
   for(i=1;i<=n;i++){
   scanf("%d",&a);
   if(a==0)b++;
   else c++;
   }
   printf("Case %d: %d",j,c-b);
   j++;
   printf("\n");
   }
  return 0;
}
