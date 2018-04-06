#include <stdio.h>
int main()
{
    int ara[10][7],num[10],i,j,k,t,ck[10];
    printf("t=");
    scanf("%d",&t);
    for(i=0;i<t;i++){
    scanf("%d",&ck[i]);
    scanf("%d",&num[i]);
    for(j=0;j<num[i];j++){
    scanf("%d",&ara[i][j]);
    }
    }
    for(i=0;i<t;i++){
    for(j=0;j<num[i];j++){
    if(ara[i][j]==ck[i]){
    printf("yes and position:%d ",j+1);
    break;
    }
    else if(j==(num[i]-1)){
    printf("no");
    }
    }
    printf("\n\n");
    }



}
