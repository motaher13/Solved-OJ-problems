#include <stdio.h>
int main()
{
int i,j,k,n,ara[1000],d;
  while(scanf("%d",&n)){
  for(i=1;i<=n;i++){
  scanf("%d",&ara[i]);
  }
  if(n==1)printf("Jolly\n");
   if(n==2&&(ara[1]-ara[2]==1||ara[1]-ara[2]==-1))printf("Jolly\n");
   else if(n==2&&(ara[1]-ara[2]!=1&&ara[1]-ara[2]!=-1))printf("Not jolly\n");
   else if(n>2){
        k=ara[1]-ara[2];
   if(k<0)k=-k;
    d=ara[2]-ara[3];
    if(d<0)d=-d;
        if(k>d){
  for(i=1;i<=n;i++){
        k=ara[i]-ara[i+1];
 if(k<0)k=-k;
      d=ara[i+1]-ara[i+2];
  if(d<0)d=-d;
  if(k-1!=d){
  printf("Not jolly\n");
  break;
  }
  else if(i+2==n){
          printf("Jolly\n");
          break;
  }
  }
        }
        else if(k<d){
             for(i=1;i<=n;i++){
        k=ara[i]-ara[i+1];
 if(k<0)k=-k;
      d=ara[i+1]-ara[i+2];
  if(d<0)d=-d;
  if(k+1!=d){
  printf("Not jolly\n");
  break;
  }
  else if(i+2==n){
          printf("Jolly\n");
          break;
  }
  }
        }
  }
  }
  return 0;

}
