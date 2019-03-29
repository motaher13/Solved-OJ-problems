#include <stdio.h>
#define li 1000000
char  str[1000000];
int  ara[li];
int main()
{
    int i,j,k,l;
    for(i=2;i<=li;i++){
    str[i]='1';
    }
    k=1;
    for(i=2;i<=li;i++){
    if(str[i]=='1'){
    ara[k]=i;
    k++;
    }
    for(j=2;j*i<=li;j++){
    str[j*i]='0';
    }
    }
   for(l=1;l<k;l++)printf("%d ",ara[l]);
   printf("%d\n",k);
   //scanf("%d",&j);
  // printf("%d %d",ara[j],ara[j+9]);
}
