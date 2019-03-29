#include <stdio.h>
#include <string.h>
int main()
{
    char str[80],str2[80];
    int i,j,k;
  gets(str);
   k=strlen(str);
   j=0;
    for(i=0,j=strlen(str)-1;str[i]!='\0';i++,j--){

       str2[j]=str[i];

    }
    str2[strlen(str)]='\0';
    printf("%s",str2);




}
