#include <stdio.h>
#include <string.h>
char *p[][2]={
"red delicious","red",
"golden delicious","yellow",
"winesap","red",
"gala","reddish orange",
"",""
};
int main()
{
    int i;
    char apple[90];
    printf("enter the name of apple");
    gets(apple);
    for(i=0;*p[i][0];i++){
    if(!strcmp(apple,p[i][0]))
    printf("%s %s %s\n",apple,p[i][1]);
    }
    return 0;
}
