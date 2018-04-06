#include<stdio.h>


int Fibonacci(int);

main()
{
   int n, i = 1, c;

   scanf("%d",&n);

   printf("Fibonacci series\n");

   for ( c = 1 ; c <= n ; c++ )
   {
      printf("%d\n", Fibonacci(i));
      i++;
   }

   return 0;
}

int Fibonacci(int n)
{
   if ( n == 1 )
      return 1;
      if(n==0)return 0;

   else
      return ( Fibonacci(n-1) + Fibonacci(n-2) );
}
