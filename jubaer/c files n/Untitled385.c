#include <stdio.h>
myputs(char *p);
int main()
{
    myputs("i am a good boy");

    return 0;
}
myputs(char *p){
    while(*p){
    printf("%c",*p);
    p++;
    }
    printf("\n");

}
