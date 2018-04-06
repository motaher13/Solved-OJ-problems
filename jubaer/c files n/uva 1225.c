#include <stdio.h>
int main()
{
    int ara[10]={0,1,2,3,4,5,6,7,8,9};

    int i,j,k,n,q,r,t,p,m;
    scanf("%d",&t);
    while(t--){
              int l[10]={0,0,0,0,0,0,0,0,0,0};
    scanf("%d",&p);

    for(m=p;m>0;m--){
            n=m;
   if(n==0)l[0]++;
   else{
    while(n!=0){
        k=n%10;
        for(j=0;j<10;j++){
            if(k==ara[j])l[j]++;
        }
        n=n/10;
    }
    }
    }
   for(r=0;r<10;r++){
        printf("%d",l[r]);
        if(r!=9)printf(" ");
   }
   printf("\n");
    }
    return 0;
}
