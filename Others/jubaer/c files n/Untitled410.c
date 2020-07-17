#include <stdio.h>
void rcopy(char *s1,char *s2);

int main()
{
    char str[89];
    rcopy(str,"you are a good boy");
    printf(str);


return 0;
}
void rcopy(char *s1,char *s2)
{
    if(*s2){
    *s1++=*s2++;
    rcopy(s1,s2);


    }



}
