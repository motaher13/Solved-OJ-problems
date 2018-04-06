#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char command[80],temp[80];
    int i,j;
    for(;;){
    printf("operations");
    gets(command);
    if(!strcmp(command,"quit"))break;
    printf("enter the first number:");
    gets(temp);
    i=atoi(temp);
    printf("enter the second number");
    j=atoi(temp);
    if(!strcmp(command,"add")){
    printf("%d\n",i+j);
    }
    else if(!strcmp(command,"devide")){
    if(j)printf("%d\n",i/j);
    }
    else if(!strcmp(command,"multiply")){
    printf("%d\n",i*j);
    }
    else printf("unknown command\n");
    }
    return 0;
}
