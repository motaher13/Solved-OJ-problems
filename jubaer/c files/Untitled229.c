#include <stdio.h>
int main()
{
    int i;
    printf("enter a value 1-4");
    scanf("%d",&i);
    switch(i){
      case 1:
      printf("one");
      break;
      case 2:
      printf("two");
      break;
      case 3:
      printf("three");
      break;
      default:
      printf("unrecognized number");
      }
      return 0;
}
