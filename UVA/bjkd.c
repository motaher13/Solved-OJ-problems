#include<stdio.h>
int ara[1000];
int main(){
int i=0,j,k,l,n,m;

while(scanf("%d %d",&n,&m)==2){
        i=0;
while(n>1)
{
ara[i]=n;
if(n%m!=0){
printf("boring\n");
k=0;
break;
}
else{
n=n/m;
k=1;
i++;
}
}
ara[i]=1;
if(k==1)
for(j=0;j<=i;j++){
printf("%d\n",ara[j]);
}
}
return 0;
}
