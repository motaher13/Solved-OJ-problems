#include<stdio.h>
int main()
{
    int i,j,t,n,l,r;
    int a[1000];
    scanf("%d",&r);
    while(r--){
   scanf("%d",&n);
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
    l=0;
    for(j=0;j<n-1;j++){
    for(i=0;i<n-1;i++){
    if(a[i]>a[i+1]){
    t=a[i];
    a[i]=a[i+1];
    a[i+1]=t;
    l++;
    }
    }
    }
   printf("Optimal train swapping takes %d swaps.\n",l);
   }
   return 0;
   }
