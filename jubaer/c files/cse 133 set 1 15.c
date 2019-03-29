#include <stdio.h>
int main()
{
   int i,j,p,q;
   char str[100][1000];
   scanf("%d%d",&p,&q);
   for(i=0;i<p;i++){
   scanf("%s",&str[i]);

   }
   printf("\n");
   for(j=0;j<q;j++){
   for(i=p-1;i>=0;i--){
   printf("%c",str[i][j]);
   }
   printf("\n");
   }

}
