#include <stdio.h>
int main()
{
   int ara[100];
   long long n,i,j,l,t,k;
  scanf("%lld",&n);
   for(i=0;i<n;i++){
   scanf("%d",&ara[i]);
   }
   l=0;
  for(i=0;i<n-1;i++){
     for(j=i+1;j<n;j++){
     if(ara[i]>ara[j]){
     t=ara[i];
     ara[i]=ara[j];
     ara[j]=t;
     l++;
     }
}
  }
  printf("Minimum exchange operations : %lld",l);

printf("\n");

   return 0;

}
