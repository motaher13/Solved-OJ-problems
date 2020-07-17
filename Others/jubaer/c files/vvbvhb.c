#include <stdio.h>
int main()
{
    char str[100]="my name is sarif";
    int address,base;
    base=(int)str;
   if(!(int)strstr(str,"sud"))printf("not found");
   else printf("%d",(int)strstr(str,"sud")-base);
   // printf("%d\t",address-base,base);


    return 0;

}
