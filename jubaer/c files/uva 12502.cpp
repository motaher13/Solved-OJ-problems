#include <stdio.h>
int main()
{
    int i,j,k,l,t;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d%d",&i,&j,&k);
        l=(k*(i+(i-j)));
        l=l/(i+j);
        if(l<0)printf("0");
        else printf("%d",l);
        printf("\n");
    }
    return 0;
}
