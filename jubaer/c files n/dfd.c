#include <stdio.h>
#include <string.h>
int main()
{
    char str[][10][20]={
     "huda","gram",
     "kutta","chagol",
     "girl","pussy",
    };
    int i,j;
    char english[20];
    i=0;
    while(1){
            gets(english);
            j=0;
        while(1){ // scanf("%s",str[i][0]);
        if(strcmp(english,str[j][0])==0){
            printf("%s\n",str[j][1]);
            break;
        }
        else if(j==2){

            printf("fuck it\n");
        }
        j++;
        }
        i++;
    }

}
