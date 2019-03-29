#include <stdio.h>
int main()
{
    char str[90],rev[90];
    int i,j,k,l,p;
   while(gets(str)){
   l=0;
    while(1){
            p=0;
    for(i=0+l,j=0;i<strlen(str);i++,j++){
      if(str[i]!='.'){
    rev[j]=str[i];
      }
    l++;

    if((int)str[i]==32){
    break;
    }
     p++;
    }
    for(j=p-1;j>=0;j--)printf("%c",rev[j]);

    if(str[i]=='\0'){
        break;
    }
    printf(" ");
    }
    printf("\n");
   }
}
