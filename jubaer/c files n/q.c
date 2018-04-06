#include <stdio.h>
int fact(int n){
     if(n==0)return 1;
    else return n*fact(n-1);


}
int main()
{
    int i;
    scanf("%d",&i);
    printf("%d",fact(i));


}
