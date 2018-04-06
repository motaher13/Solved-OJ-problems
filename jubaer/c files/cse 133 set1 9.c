#include <stdio.h>
#include <math.h>
int main()
{
    int i,j,k;
    while(scanf("%d%d%d",&i,&j,&k)==3){
    printf("%lf\n",((-j)-sqrt((j*j)-(4*i*k)))/(2*i));
     printf("%lf\n",((-j)+sqrt((j*j)-(4*i*k)))/(2*i));
    }
    return 0;
}
