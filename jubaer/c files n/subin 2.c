#include <stdio.h>
int main()
{
   int t,i,j=0,ara[100],k;
   char ch;
   while(scanf("%d",&t)!=EOF){
   for(k=0;k<t;k++){
       k=0;
   while(1){
    if(scanf("%d",&i))k++;

    else if(scanf("%c",&ch))
    break;
   }
  ara[k]=k;

   }
    for(k=0;k<t;k++)printf("%d\n",ara[k]);
  printf("\n\n");
   }
   return 0;
}
