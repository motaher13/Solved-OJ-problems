#include <stdio.h>
#include <conio.h>
int main()
{
    char mess[45];
    int i;
    printf("enter the message");
    for(i=0;i<80;i++){
    mess[i]=getche();
    if(mess[i]=='\r')break;
    }
    for(i=0;mess[i]!='\r';i++)printf("%c",mess[i]=1);
    return 0;
}
