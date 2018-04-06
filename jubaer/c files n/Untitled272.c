#include <stdio.h>
#include <conio.h>
int main()
{
    int i;
    char mess[5];
    printf("enter the message within 80 characters");
    for(i=0;i<80;i++){
    mess[i]=getche();
    if(mess[i]=='\r')break;
    }
    printf("\n");
    for(i=0;i!='r';i++)printf("%c",mess[i]+1);
    return 0;
}
