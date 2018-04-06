#include <stdio.h>
#include <string.h>
int main()
{
    int i,j,k,n=0;
    char str[1000];
    while(gets(str)){

    for(i=0;i<strlen(str);i++){
    if(str[i]=='"'){
            n++;

    if(n%2==0)printf("''");
    else if(n%2!=0)printf("``");
    }
    else printf("%c",str[i]);
    }
    printf("\n");
    }

return 0;


}
