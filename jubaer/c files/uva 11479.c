#include<stdio.h>
int main()
{
    long int a,b,c,i,t;
    scanf("%ld",&t);
    i=1;
    while(t--){
    scanf("%ld%ld%ld",&a,&b,&c);
    if(a<=0||b<=0||c<=0)printf("Case %ld: Invalid",i);
   else if((a+b)<=c||(c+b)<=a||(a+c)<=b)printf("Case %ld: Invalid",i);
    else if(a==b&&b==c)printf("Case %ld: Equilateral",i);
    else if((a==b&&b!=c)||(a==c&&b!=c)||(b==c&&b!=a))printf("Case %ld: Isosceles",i);
    else if(a!=b&&b!=c&&c!=a)printf("Case %ld: Scalene",i);
  printf("\n");
    i++;

}
 return 0;

}
