#include <stdio.h>
int main()
{
    double x;
    while(scanf("%lf",&x)==1){
    if(x>=((int)x+.5))printf("%d\n",(int)x+1);
    else printf("%d\n",(int)x);
    }
    return 0;
}
