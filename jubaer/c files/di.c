#include <stdio.h>
#include <string.h>
int main()
{
    char str[150],rev[150];
    int i,j,l;
    gets(str);
    l=1;
    for(i=strlen(str)-l,j=strlen(str)-l;i>=0;i--,l--){
        rev[j]=str[i];
            //printf("%c",rev[j]);
        l++;
        if((int)str[i]==32){
            continue;
        }


    }
    printf("%s",rev);


    //rev[strlen]
   // puts(rev);

}
