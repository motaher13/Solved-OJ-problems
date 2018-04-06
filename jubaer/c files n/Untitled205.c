#include <stdio.h>
#include <conio.h>
int main()
{
    char ch;
    ch=getche();
    while(ch!='\r'){
    printf("%c",ch+1);
    ch=getche();

    ch=getche();
    while(ch!='t')ch=getche();
    printf("found the t");

    }
    return 0;
}
