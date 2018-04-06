#include <stdio.h>
#include <string.h>
int main()
{
    char str[10000],rev[100000],ch;
    int i,j,k,l,p,t;
   while(1){
        gets(str);
   t=strlen(str);
   l=0;
    while(1){
            p=0;
    for(i=0+l;i<t;i++){


    l++;

    if((int)str[i]==32){

    break;
    }

     p++;
    }

    for(i=p-1;i>=0;i--){
            printf("%c",str[i]);
    }
    if(str[i]=='\0'){
        break;
    }
    printf(" ");
    }
    printf("\n");
   }
   return 0;
}
