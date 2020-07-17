#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char str[3000];
    long long i;
    i=1;
    while(scanf("%s",str)){
   if(strcmp(str,"#")==0)break;
   else if(strcmp(str,"HELLO")==0)printf("Case %lld: ENGLISH",i);
    else if(strcmp(str,"HOLA")==0)printf("Case %lld: SPANISH",i);
     else if(strcmp(str,"HALLO")==0)printf("Case %lld: GERMAN",i);
      else if(strcmp(str,"BONJOUR")==0)printf("Case %lld: FRENCH",i);
       else if(strcmp(str,"CIAO")==0)printf("Case %lld: ITALIAN",i);
        else if(strcmp(str,"ZDRAVSTVUJTE")==0)printf("Case %lld: RUSSIAN",i);
         else printf("Case %lld: UNKNOWN",i);
         printf("\n");
        i++;
    }
return 0;

}
