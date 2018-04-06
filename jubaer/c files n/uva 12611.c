#include <stdio.h>
int main()
{
    int i=1,j,k,r,n;
    scanf("%d",&k);
    while(k--){
    scanf("%d",&r);
    printf("Case %d:\n",i);
    n=(11*r)/4;
    printf("-%d%c%d\n",((5*r)-n),' ',(3*r)/2);
       printf("%d%c%d\n",n,' ',(3*r)/2);
          printf("%d%c-%d\n",n,' ',(3*r)/2);
             printf("-%d%c-%d",((5*r)-n),' ',(3*r)/2);
             printf("\n");
             i++;

}
return 0;
}
