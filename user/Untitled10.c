#include<stdio.h>
void reverse(void);
int main()
{
    reverse();
}
void reverse(void)
{
    char c;
    if((c=getchar())!=EOF)
    reverse();
    putchar(c);
    return;
}
