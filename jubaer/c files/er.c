#include <stdio.h>
#include <string.h>
int main()
{
    char str[34],str2[34];
    int i,j;
   while(gets(str)!=EOF){

    for(i=0,j=strlen(str)-1;i<strlen(str);i++,j--){
     str2[j]=str[i];
    }
    str2[j]='\0';
  if(strcmp(str,str2)==0)printf("palindrome");
  else printf("no");
  printf("\n\n");
   }
    return 0;
}
