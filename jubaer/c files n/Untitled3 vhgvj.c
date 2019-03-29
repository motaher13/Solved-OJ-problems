#include <stdio.h>
#include <string.h>
int main()
{
    char str1[]="madam";
    char str2[100];
    int ln=strlen(str1);
    int i,j=0,temp;
    for(i=0,j=ln-1;str1[i]!='\0';i++,j--){

        str1[i]=str2[j];


    }

  if(strcmp(str1,str2)==0) printf("not");
  else printf("yes");


    return 0;
}
