#include <stdio.h>
#include <conio.h>
int main()
{
    int i;
    char mess[80];
    printf("enter message within 80 letters");
    for(i=0;i<80;i++){
    mess[i]=getche();
    if(mess[i]=='\r')break;
    }
    printf("\n");
    for(i=0;mess[i]!='\r';i++)printf("%c",mess[i]);
    return 0;
}
