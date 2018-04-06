#include <stdio.h>
int main()
{
    int i,j,n,a,ara[1000],t,p;
    scanf("%d",&n);
    p=1;
    while(n--){
    scanf("%d",&a);
   for(i=0;i<a;i++){
   scanf("%d",&ara[i]);
   }
     for(i=0;i<a-1;i++){
     for(j=i+1;j<a;j++){
     if(ara[i]>ara[j]){
     t=ara[i];
     ara[i]=ara[j];
     ara[j]=t;
     }
}
     }
printf("Case %d: %d\n",p,ara[a-1]);
p++;
}
return 0;
}
