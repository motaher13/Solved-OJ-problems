#include <stdio.h>
#include <string.h>
int main()
{
    char str[100],str2[100],c,s;
    int a,b,i,z=0;
    while(scanf("%d%c%d%c%s",&a,&c,&b,&s,str)==5){
    if(c=='+')i=a+b;
    if(c=='-')i=a-b;
    sprintf(str2,"%d",i);
    if(strcmp(str,str2)==0)z++;
    }
  printf("%d\n",z);
  return 0;

}
