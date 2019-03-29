#include<stdio.h>
int main()
{
    long long i,j;
    int k;
    scanf("%d",&k);
    while(k>0)
  {
    scanf("%lld %lld",&i,&j);
    if(i>j)
    printf(">\n");

    else if(i<j)
    printf("<\n");

    else
    printf("=\n");
    k--;
  }
    return 0;
}
