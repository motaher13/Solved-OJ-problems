#include <stdio.h>
int main()
{
   int i,j,k,m=1,l,w,n,r,loop;
   scanf("%d",&loop);
   for(i=1,r=1;i<=loop;i++,r=r+1){
       for(n=0;n<(loop-r);n++){
            printf(" ");
       }
        w=0;
   for(k=i,j=i-1,l=1;l<=m;l++){
   if(l<=((m/2)+1)){
        if(k>9)k=0;
         printf("%d",k);
        k++;
   }

   else if(l>((m/2)+1)){
 if(w==0)k=k-2;
 else if(k<=0)k=9;
 else k--;
 if(k<0)k=-k;

   printf("%d",k);
w++;
   }
   }
   printf("\n");
   m=m+2;
   }
}
