#include <stdio.h>
void myputs(char *p);
int main()
{
    myputs("you are a jocker");
    return 0;

}
void myputs(char *p)
{
     while(*p){
     printf("%c",*p);
     p++;
     }
     printf("\n");
}
