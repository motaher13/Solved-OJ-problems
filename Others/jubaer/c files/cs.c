#include<stdio.h>
int main()
{
    int b,s,i=1;
    while(scanf("%d %d",&b,&s)==2)
    {
        if(b==0 && s==0)break;
        else if(b==1||b==0)printf("Case %d: :-\\",i++);
        else if(s>=b)printf("Case %d: :-|",i++);
        else if(b>s)printf("Case %d: :-(",i++);
    }
    return 0;
}
