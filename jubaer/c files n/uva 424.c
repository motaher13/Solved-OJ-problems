#include <stdio.h>
int main()
{
    char str[1000][1000];
    int sum[1000];
    int i,j,k,l,r,max=0;
    for(i=0;;i++){
    scanf("%s",str[i]);

    if(strcmp(str[i],"0")==0)break;
      if(max<strlen(str[i]))
     max=strlen(str[i]);
    }
    k=0;
    for(j=max-1;j>=0;j--){
   for(l=0;l<i;l++){
   k=k+(int)str[l][j]-48;
   }
   r=k%10;
   sum[j]=k%10;
   k=k/10;
   }
   for(j=0;j<=max-1;j++)printf("%d",sum[j]);

}
