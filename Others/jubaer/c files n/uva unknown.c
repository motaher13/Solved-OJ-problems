#include <stdio.h>
int main()
{
    char str[90],rev[90],ch;
    int i,j,k,l,p;
   while(gets(str)){
   l=0;
    while(1){
            p=0;

    for(i=0+l,j=0;i<strlen(str)-1;i++,j++){

    rev[j]=str[i];

    l++;

    if((int)str[i]==32){
    break;
    }

     p++;
    }
    if(str[i]=='.'){
        p=p-1;
        ch=str[i];
    }
    for(j=p-1;j>=0;j--)printf("%c",rev[j],ch);

    if(str[i]=='\0'){
        break;
    }
    printf(" ");
    }
    printf("\n");
   }
}
