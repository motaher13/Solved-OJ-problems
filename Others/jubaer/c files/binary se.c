#include <stdio.h>
int main()
{
    char str[1000];
    long long p;
   while(scanf("%lld",&p)==1){
int    i=0;
    while(p!=0){
  if(p%2==0)str[i]='0';
  else str[i]='1';
    p=p/2;
    i++;
    }
    str[i++]='\0';
   for(i=strlen(str)-1;i>=0;i--)printf("%c",str[i]);
   }
}
