#include <stdio.h>
int main()
{
    int a,b,c=1;
    while(scanf("%d%d",&a,&b)){
    if(a==0&&b==0)break;
    printf("Case %d: ",c++);
    if((a/b)>26)printf("impossible\n");
    else if(a%b==0)printf("%d\n",(a/b)-1);
    else if(a%b!=0)printf("%d\n",a/b);
    }
    return 0;
}
