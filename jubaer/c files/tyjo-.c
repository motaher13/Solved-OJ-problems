#include <stdio.h>
int fact(int n){


  if(n==0)return 1;
  else return n*fact(n-1);
printf("%d\n",n);
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("sdhg%d",fact(n));
}
