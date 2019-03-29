#include <stdio.h>

#define li 45000
#define p 10000
int ara[li],ara2[p];
char str[100000];
int main()
{
int i,j,k;
   for(i=2;i<=li;i++){
   str[i]='1';
   }
   k=0;
   for(i=2;i<=li;i++){
   if(str[i]=='1'){
   ara2[k]=i;
   k++;
   for(j=2;j*i<=li;j++){
   str[j*i]='0';
   }
   }
   }
   for(i=0;i<k;i++){
   printf("%d ",ara2[i]);
   }

}
