#include <stdio.h>
void abc(int a,int b,int *p,int *q,int *r)
{
     *p=a+b;
      *q=a-b;
     *r=a/b;



}
int main()
{
    int a,b,p,q,r;

    scanf("%d %d",&a,%b);
    abc(a,b,&p,&q,&r);
    printf("%d %d %d",p,q,r);




}
