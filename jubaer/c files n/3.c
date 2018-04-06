#include <stdio.h>
int main()
{
    char str[100];
    int i=0,j,k,l,m;
    while(1){
        scanf("%c",&str[i]);
            if(str[i]=='\r')break;
        i++;
    }
    printf("%d",i);


}
