#include <stdio.h>
int main()
{
    int i,j,k,n;
    char str[10][40];
    scanf("%d",&n);
    for(j=0;j<n;j++){
    scanf("%s",str[j]);
    for(i=0;i<strlen(str[j]);i++){
    if(str[j][i]=='L'||str[j][i]=='l'){
    str[j][i]=str[j][i-1];
    }
    else if(str[j][i]=='R'||str[j][i]=='r'){
    str[j][i]=str[j][i+1];
    }
    }
    //printf("%s",str[j]);
    }
   for(j=0;j<n;j++){

    printf("%s\n",str[j]);
   }
}
