#include <stdio.h>
int main()
{
     long a,b,d,l,s;
    l=1;
   scanf("%ld%ld",&b,&s);
   // if(s==0&&b==0)break;
    printf("%ld %ld\n",b,s);
    if(b==s)("Case %ld: :-|",l);
    if(b==0||b==1)printf("Case %ld: :-\\",l);
    else if(b>s)printf("Case %ld: :-(",l);
    else if(b<s)("Case %ld: :-|",l);
    l++;
    printf("\n");

    return 0;

}
