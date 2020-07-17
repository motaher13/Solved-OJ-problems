#include <stdio.h>
int main()
{
    int i,j,total;
    total=0;
    do{
      total<5;
      printf("enter the first number");
      scanf("%d",&i);
      printf("enter the second number");
      scanf("%d",&j);
      if(i!=j){
      printf("mismatch");
      continue;
      }
      total=total+1;
      }while(i);
      printf("%d\n",total);

      return 0;
}


