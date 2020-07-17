#include <stdio.h>
#include <string.h>
int main()
{
    int a[100],b[100],i=0,j;
    char str[100],ch;
    scanf("%c",&ch);
    getchar();
    while(1){
    gets(str);
    //getchar();
    if(strlen(str)==0)break;
   // if(strcmp(str,"\n")==0)break;
    a[i]=(int)str[0]-65;
    b[i]=(int)str[1]-65;
    i++;
    }
    for(j=0;j<i;j++)printf("%d %d\n",a[j],b[j]);




}
