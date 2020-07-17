#include <stdio.h>
int main()
{
    int i,j,n,temp,k;
    int ar[5]={5,7,2,93,0};
    n=5;
    for(i=0;i<n-1;i++){
    for(j=i+1;j<n;j++){
            if(ar[i]>ar[j]){
        temp=ar[i];
        ar[i]=ar[j];

        ar[j]=temp;
            }


}
for(k=0;k<n;k++){
        printf("%d",ar[k]);



    }

    printf("\n");

    }




}
