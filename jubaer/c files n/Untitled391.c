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
    float i;
    i=getnum();
    printf("%f",i);
    return 0;

}
