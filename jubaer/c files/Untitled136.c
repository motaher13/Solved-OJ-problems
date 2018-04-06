#include <stdio.h>
double o_to_c();
double main()
{
      double cup;
      cup=o_to_c();
      printf("%d",cup);
      return 0;
}
double o_to_c()
{
      double ounce;
      scanf("%d",&ounce);
       return ounce/8;
}
