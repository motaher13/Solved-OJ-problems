#include <stdio.h>
myputs(char *p);
int main()
{
    myputs("you are a fucker");

return 0;
}
myputs(char *p)
{
    while(*p){

    printf("%c",*p);
    p++;

    }
    printf("\n");

}
