#include <stdio.h>
int recur(int n){
    if(n<2)return n;
    else return recur(n-1)+recur(n-2);


}
int main()
{
    int i;
    scanf("%d",&i);

    printf("%d",recur(i));




}
