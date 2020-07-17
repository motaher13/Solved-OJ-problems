#include <stdio.h>
#include <string.h>
char *p[][2]={
     "mother","chod",
     "mother","fucker",
     "kuttar","bacha",
     "ass","hole",
     "",""
};
int main()
{
    int i;
    char gali[80];
    printf("enter your chiceable gali to your wife the cock sucker");
    gets(gali);
    for(i=0;*p[i][0];i++){
    if(!strcmp(gali,p[i][0]))
    printf("%s %s %s\n",gali,p[i][1]);
    }
    return 0;
}
