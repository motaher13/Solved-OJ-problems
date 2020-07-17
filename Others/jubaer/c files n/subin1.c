#include <stdio.h>
int main()
{
    int t,i,g,k=0,j=0;
    while(scanf("%d",&t)!=EOF){

    for(i=0;i<t;i++){
    scanf("%d",&g);
    if(g>0){
    k++;
    }
    else j++;
    }
    printf("%d %d",k,j);
    printf("\n");
    }

    return 0;
}
