#include <stdio.h>
float weight();
float main()
{
      float moon;
      moon=weight();
      printf("%f",moon);
      return 0;
}
float weight()
{
      float earth;
      scanf("%f",&earth);
      return (earth*17)/100;
}
