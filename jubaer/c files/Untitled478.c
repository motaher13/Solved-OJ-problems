#include <stdio.h>
int main()
{
    int i,m,k,l;
    scanf("%d %d %d %d",&i,&m,&k,&l);
    printf("%d\n%d\n%d\n%d",(i*m*k*l),(i+k+l+m),i-(m+l+k),(i+m)/(k+l));
    return 0;
}




