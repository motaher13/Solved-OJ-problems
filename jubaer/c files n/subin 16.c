#include <stdio.h>
int main()
{
   int n1[10],n2[10],i,j,t,ck[10];
   scanf("%d",&t);
   for(i=0;i<t;i++){
   scanf("%d%d",&n1[i],&n2[i]);
   if(n1[i]==n2[i]){
   ck[i]=1;
   }
   else{
   ck[i]=0;
   }

}
   for(i=0;i<t;i++){
   if(ck[i]==1&&ck[i+1]==1&&n1[i]>n1[i+1]){
   n1[i]=j;
   n1[i]=n1[i+1];
   j=n1[i+1];
   printf("%d\n",n1[i]);
   }

   else if(ck[i]==1){
   printf("%d\n",n1[i]);
   }
   else{
   printf("N\n");
   }

   }
   return 0;
   }
