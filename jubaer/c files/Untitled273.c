#include <stdio.h>
#include <conio.h>
int main()
{
    char mess[45];
    int i;
    printf("enter a love message  ");
    for(i=0;i<45;i++){
    mess[i]=getche();
    if(mess[i]=='\r')break;
    }
    printf("\n");
    for(i=0;mess[i]!='\r';i++)printf("%c",mess[i]+1);
    return 0;
}

