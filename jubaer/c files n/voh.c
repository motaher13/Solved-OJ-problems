#include <stdio.h>
int main()
{
    int ara[100],ara2[100],ara3[1000];
    int n,l,i,r,j;
    scanf("%d%d",&n,&l);
    for(i=0;i<n;i++){
    scanf("%d",&ara[i]);
    }
    for(i=0;i<l;i++){
    scanf("%d",&ara2[i]);
    }
    int k,q=0;
   for(r=n-1,j=l-1;r>=0;r--,j--){
        if(j<0)k=ara[r]+q;
   else{
   k=ara[r]+ara2[j]+q;
   }
   if(r>0)ara3[r]=k%10;
   else ara3[r]=k;
   q=k/10;
   printf("%d\n",ara3[r]);

   }
   printf("\n");
   for(r=n-1;r>=0;r--)printf("%d ",ara3[r]);
}
