#include <stdio.h>
void swap(char *x,char *y){
char *t;
t=x;
x=y;
y=t;
}
int main()
{
   char *x="new";
   char *y="delhi";
   printf("%s",*x);
   char *t;
   swap(x,y);
   //printf("%s %s",*x,*y);
}
