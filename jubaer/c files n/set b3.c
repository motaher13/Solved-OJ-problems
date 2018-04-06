#include <stdio.h>
int main()
{
    int i,j,k=0,n;
    scanf("%d",&n);
    for(i=1;;i++){
    for(j=2;j<=i;j++){
    if(j==i){
    k++;
    break;
    }
    else if(i%j==0){
    break;
    }

    }
    if(k==n){
            printf("%d",i);
            break;
    }
    }


}
