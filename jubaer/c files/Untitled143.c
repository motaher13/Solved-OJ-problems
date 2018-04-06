#include <stdio.h>
float main()
{
      float num1,num2;
      printf("enter first number:");
      scanf("%f",&num1);
      printf("enter second number:");
      scanf("%f",&num2);
      if(num2==0)printf("number is unidentified");
      else printf("%f",num1/num2);
      if(num1==0)printf("number is so magicuda je it is zero ");
      return 0;
}
