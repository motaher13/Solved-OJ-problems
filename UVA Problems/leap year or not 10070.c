#include<stdio.h>
int main()
{
    long long i=0,j,k,y;
    while(scanf("%lld",&y)!=EOF)
    {
        if(y%400==0){
            printf("This is leap year.\n");
            i=1;}
        else if(y%4==0 && y%100!=0){
            printf("This is leap year.\n");
            i=1;}
        if(y%15==0){
            printf("This is huluculu festival year.\n");
            i=1;}
        if(y%55==0){
            printf("This is buluculu festival year.\n");
            i=1;}
        if(i==0)
            printf("This is an ordinary year.\n");
        printf("\n");

    }
    return 0;
}
