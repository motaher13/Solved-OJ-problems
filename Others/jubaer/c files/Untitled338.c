#include <stdio.h>
#include <string.h>
char words[][67][40]={
   "dog","hund",
   "no","nein",
   "year","jahr",
   "child","kind",
   "i","ich",
   "drive","fahren",
   "house","haus",
   "to","zu",
   };
   int main()
   {
       char english[80];
       int i;
       printf("emter the fucking word");
       gets(english);
       i=0;
       while(strcmp(words[i][0],"")){
       if(!strcmp(english,words[i][0])){
       printf("german tranlation %s",words[i][1]);
       break;
       }
       i++;
       }
       if(!strcmp(words[i][0],""))
       printf("not in dictionary");
       return 0;
}
