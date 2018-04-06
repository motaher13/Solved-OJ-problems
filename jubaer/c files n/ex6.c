#include <stdio.h>
int main()
{
    int i,j,n,k,t,l=0;
    scanf("%d%d",&k,&n);
    if(k>n){
      t=k;
      k=n;
      n=t;
    }
    for(i=k;i<n;i++){
    for(j=2;j<=i;j++){
    if(j==i){
    printf("prime %d\n",i);
    l++;
    continue;
    }
   if(i%j==0){
    // printf("not prime");
   break;

   }
   //printf("\n\n");

    }

}

   printf("%d",l);


}
