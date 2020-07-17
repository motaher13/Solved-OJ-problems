#include <stdio.h>
int main()
{
    char str[56],str1[56];
    int i,j,k=0,l=0,t;

  while(1) {
        scanf("%s",str);
    for(i=0,j=strlen(str)-1;str[i]!='\0';i++,j--){
       str1[j]=str[i];
    }
   // str1[strlen(str]=str[strlen(str)]
    str1[strlen(str)]='\0';
    printf("%s",str1);
    printf("\n");
    if(strcmp(str1,str)==0){

        printf("yeah");
    }
    else {
        printf("n0");
    }
    printf("\n");
  }
}
