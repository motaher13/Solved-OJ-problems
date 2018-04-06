#include <stdio.h>
int xor(int i,int j);
int main()
{
    int p,q;
    printf("enter the value of p:");
    scanf("%d",&p);
    printf("enter the value of q:");
    scanf("%d",&q);
    printf("p AND q %d\n",p&&q);
    printf("p OR q %d\n",p||q);
    printf("p XOR q %d\n",xor(p,q));
    return 0;
 }
 int xor(int a,int b)
 {
     return (a&&b)&&(a||b);
 }
