#include <stdio.h>
int f1();
int main()
{
    f1();
    f1();
    f1();
    return 0;
}
int f1()
{
     int i=3;
     while(i<14){
     printf("%d\n",i*i);
     i++;
     }
     return i;
}

