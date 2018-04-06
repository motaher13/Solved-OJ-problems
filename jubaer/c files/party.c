#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n%4==0&&n%55==0){
    printf("hulkul");
    }
    else if(n%4==0&&n%15==0){
    printf("bulkul");
    else if(n%4==0){
    printf("leap year");
    }
    else {
    printf("prdinary");
    }
    }
   return 0;

}
