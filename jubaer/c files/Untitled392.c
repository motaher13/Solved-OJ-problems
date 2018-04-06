#include <stdio.h>
float getnum()
{
      float x;
      printf("enter a num");
      scanf("%f",&x);


return x;
}
int main()
{
    float x;
    x=getnum();
    printf("%f",x);


return 0;
}
