#include <stdio.h>
#include <conio.h>
int main()
{
    char ch;
    printf("enter the first letter");
    ch=getche();
    switch(ch){
    case 'a':
    case 'b':
    case 'c':
    case 'd':
    case 'e':
    case 'z':
    printf(" is vowel");
    break;
    default:
    printf(" is a constant");
    break;
    }
    return 0;
}
