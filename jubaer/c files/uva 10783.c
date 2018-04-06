#include <stdio.h>
int main()
{
   int t,k=0,a,b,i,sum,j;
   while(scanf("%d",&t)==1){
       for(j=1;j<=t;j++){
        scanf("%d%d",&a,&b);

   sum=0;
   for(i=a;i<=b;i++){
   if(i%2!=0){
   sum=sum+i;
   }
   }
   printf("case %d: %d\n",j,sum);
   }
   j++;
   }


    return 0;
}
