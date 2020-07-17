#include<stdio.h>
int fact(n)
{
    if(n%2==0){
    return n;
    n=fact(n/2);
    }
    else {
        return n;
        n=fact(3*n+1);
    }

}
int main()
{
   int n;
   scanf("%d",&n);
   printf("%d",fact(n));



    return 0;
}
