#include <stdio.h>
int main()
{
    int i,n,m,sum,j;
    scanf("%d %d",&n,&m);
    sum=0;
    for(j=n;j<=m;j++){
    int chack=1;
    if(j==1)chack=0;
    for(i=2;i<j;i++){
    if(j%i==0)chack=0;



    }
    if(chack==1){
    sum=sum+j;


    }
    }
    printf("%d",sum);


}
