#include <stdio.h>
int main()
{
    int i,j,k,n,ara[50][50],p[20],l=0,sum;
    scanf("%d",&n);
    for(i=0;i<n;i++){
            l=0;
    sum=0;
    for(j=0;j<10;j++){
    scanf("%d",&ara[i][j]);

    for(k=2;k<=ara[i][j];k++){

    if(k==ara[i][j]){
      l++;
      break;
    }
    if(ara[i][j]%k==0){
  break;
    }
    }

    }
    p[i]=l;
    }
    for(i=0;i<n;i++){
    printf("%d\n",p[i]);


    }



}
