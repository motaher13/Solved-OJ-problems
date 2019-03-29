#include <stdio.h>
int main()
{
   int  i,j,k,n,l,r,p,d;
   int ara[90];
  while(scanf("%d%d",&k,&j)==2){
        ara[0]=1;
   l=1;
   r=0;
   for(n=j;n<=k;n++){
   for(i=2;i<=n;i++){

   if(i==n){
  printf("%d\n",n);
  break;
   }
   else if(n%i==0){
   break;
   }
   }



/*printf("%d\n",l);
   if(l%2==0){
    l=l+1;
    d=j*2;
    r=l-j;
    p=r/2;


    for(i=p;i<=d+p;i++){
        printf("%d\n",ara[i]);

    }
   }
   else if(l%2!=0){

    d=(j*2)-1;
    r=l-j;
    p=(r/2);


    for(i=p;i<=d+p-1;i++){
        printf("%d\n",ara[i]);

    }


   }
   printf("%d",d);
  }
}
}
