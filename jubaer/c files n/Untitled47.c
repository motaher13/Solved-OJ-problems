#include <stdio.h>
int main()
{
    int n,s;
    printf("enter value of n:");
    scanf("%d",&n);

    if(n%2!=0){
          s=n*(n+1)/2;

    }
    printf("the s is %d\n",s);
    return 0;
}
