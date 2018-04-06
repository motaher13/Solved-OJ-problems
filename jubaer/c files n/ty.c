#include <stdio.h>
#include <math.h>
int main()
{
   int a,b,c;
   for(a=1;a<13;a++){
    for(b=1;b<12;b++){
        c=(a*a)+(b*b);
        if((int)sqrt(c)==(double)sqrt(c))printf("%d*%d+%d*%d=%d\n",a,a,b,b,c);


    }

   }
   return 0;
}
