#include <stdio.h>
int main()
{
    int a,b,c,d,t;
    scanf("%d",&t);
    while(t--){
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a==b&&b==c&&c==d)printf("square\n");
    else if((a==b&&c==d)||(a==c&&b==d)||(a==d&&b==c))printf("rectangle\n");
    else if((a+b+c)>d&&(b+c+d)>a&&(b+a+d)>c&&(a+c+d)>b)printf("quadrangle\n");
    else printf("banana\n");
    }
    return 0;
}
