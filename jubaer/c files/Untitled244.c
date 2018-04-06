#include <stdio.h>
void f1();
int max;
int main()
{
    max=0;
    f1();
}
void f1()
{
     int i;
     i=9;
     while(i>=max){
     printf("%d\n",i);
     i--;
     }
     return 0;
}
