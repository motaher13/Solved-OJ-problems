#include <stdio.h>
#include <string.h>
int count(char arr[],char ch){

    int ln,i,cunt=0;
    ln=strlen(arr);
    for(i=0;arr[i]!='\0';i++){
        if(arr[i]==ch)cunt++;

    }
    return cunt;


}
int main()
{
    char str[90],sd;
    while(scanf("%s %c",str,&sd)){
    printf("%d",count(str,sd));
    }
    return 0;
}
