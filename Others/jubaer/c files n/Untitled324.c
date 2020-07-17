#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char command[80],temp[78];
    int i,j,t;
    for(t=1;t<5;t++){
    printf("enter command");
    gets(command);
    if(!strcmp(command,"quit"))break;
    printf("enter the first number");
    gets(temp);
    i=atoi(temp);
    printf("enter second number");
    gets(temp);
    j=atoi(temp);
    if(!strcmp(command,"add")){
    printf("%d\n",i+j);
    }
    if(!strcmp(command,"devide")){
    if(j)printf("%d\n",i/j);
    }
    }
    return 0;
}
