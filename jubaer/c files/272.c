#include <stdio.h>
#include <string.h>
int main()
{
    char str[500],rev[500];
    int i,j,l,kk,n=0;
    while(gets(str)){
    l=0;

    while(1){
            if(strlen(str)==0)break;
    for(i=l,j=0;i<strlen(str);i++,j++){
  l++;
    if(str[i]=='"'){
            n=n+1;
            kk=1;
        break;
    }
    else if (str[i+1]=='\0'){
        kk=0;

    }
rev[j]=str[i];
    }
    rev[j++]='\0';

if(kk==0)printf("%s",rev);
 if(kk==1){
        if(n%2==0){
   strcat(rev,"''");
   printf("%s",rev);
        }
        else{
            strcat(rev,"``");
            printf("%s",rev);
        }
    }

    if(str[l]=='\0')break;
    else {

            continue;
    }

    }
printf("\n");
    }
    return 0;
}
