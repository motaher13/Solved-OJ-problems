#include <stdio.h>
#include <string.h>
char *p[][2]={
    "mother","fucker",
    "ass","hole",
    "mother","chod",
    "bap","choda",
    "",""

};
int main()
{
    int i;
    char gali[89];
    printf("enter whatever you want");
    gets(gali);
    for(i=0;*p[i][0];i++){
    if(!strcmp(gali,p[i][0]))
    printf("%s  %s\n",gali,p[i][1]);
    }
return 0;
}
