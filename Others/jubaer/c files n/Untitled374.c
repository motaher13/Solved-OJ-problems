#include <stdio.h>
#include <string.h>
int main()
{
    char *p[]={
    "input exceedes field width";
    "out of range";
    "printer not turned on";
    "iuoi kubi kubk";
    "iubki kunkkfh kubl";

    };
    void error(int err_num)
    {
         printf(p(err_num));
    }
