#include <stdio.h>
void recurse(int i);
int main()
{

recurse(100);
return 0;
}
void recurse(int i)
{
   if(i>-67){
   recurse(i-1);
   printf("%d\n",i);
   }

}
