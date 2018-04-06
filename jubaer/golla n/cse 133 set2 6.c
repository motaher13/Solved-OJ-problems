#include <stdio.h>
int main()
{
   int x,y,z,q=1,n;
   scanf("%d",&n);
   while(n--){
   scanf("%d %d %d",&x,&y,&z);
   printf("Case %d %d\n",q,((x*y)+(y*z)+(z*x)));
   q++;
   }
   return 0;
}
