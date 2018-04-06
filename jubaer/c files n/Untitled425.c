#include <stdio.h>
#include <conio.h>
void prompt(char *msg,char *num);
int main()
{
    char ch;
    ch=getche();
    prompt("enter num:",&i);
    printf("%c",i);


    return 0;
}
void prompt(char *msg,char *num)
{
     printf(msg);
     getche(num);



}
