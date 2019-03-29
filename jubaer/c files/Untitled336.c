#include <stdio.h>
#include <string.h>
int main()
{
    char words[][2][40]={
    "dog","hund",
    "no","nein",
    "year","jahr",
    "child","kind",
    "i","ich",
    "drive","fahren",
    "house","hause",
    "to","zu",
    "",""
    };
    int main()
    {
        char english[80];
        int i;
        printf("enter english word");

        gets(english);
        i=0;
        while(strcmp(words[i][0],")){
        if(!strcmp(english,words[i][0])){
        printf("german translation:%s",words[i][1]);
        break;
        }
        i++;
        }
        if(!strcmp(words[i][0],""))
        printf("not in dictionary\n");
        return 0;
   }

