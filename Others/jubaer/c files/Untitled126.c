#include <stdio.h>
int outchar(char ch);
int main()
{
    outchar('a');
    outchar('b');
    outchar('c');
    return 0;
}
int outchar(char ch)
{
    printf("%c",ch);
}
