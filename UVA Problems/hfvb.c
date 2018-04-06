#include<stdio.h>
int main(){
int i,j,a,b,c,k;
scanf("%d %d %d",&a,&b,&c);
for(i=1;i<101;i++){
k=a*i*i+i*b+c;
printf("%d\t",k);
}

return 0;
}
