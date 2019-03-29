#include <stdio.h>
#include <stdlib.h>
int main()
{
   int *fp,ara[200],n,k=10;
   fp=fopen("old.txt","w");
   //for(k=1;k<=100;k++){
   scanf("%d",&k);

   fpritf(fp,"%d",k);

   fclose(fp);
   //fp=fopen("old","r");

}
