#include <stdio.h>
int inc(int *a){
   *a=*a+1;
   //return *a;

}
int main()
{
int p;
scanf("%d",&p);
inc(&p);
printf("%d",p);
}
