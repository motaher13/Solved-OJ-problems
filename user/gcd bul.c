#include<stdio.h>
#include<string.h>
int gcd(int a,int b){
int t,z;
if(a<b){
t=a;
a=b;
b=t;
}
while(z!=0){
z=a%b;
a=b;
b=z;

}
return a;
}
int main(){
int i,j,k=0,l,z=0,m=0,max=0,n;
int ara[50];
char ara2[100];
gets(ara2);
l=strlen(ara2);
for(i=0;i<=l;i++){
if(ara2[i]==' '|| ara2[i]=='\0')
{ara[k]=m;
k++;
z=0;

}
else if(z!=0){
m=m*10+ara2[i]-48;
z++;
}
else {m=ara2[i]-48;
z++;
}
}
for(i=0;i<k;i++){
printf("%d ",ara[i]);
}
printf("\n");
for(i=0;i<k;i++){
for(j=0;j<k;j++){
if(ara[i]==ara[j])
continue;
n=gcd(ara[i],ara[j]);
// printf("%d %d %d\n",ara[i],ara[j],n);
if(n>=max){
max=n;
printf("%d %d %d max=%d\n",ara[i],ara[j],n,max);

}

}
}
printf("max:%d",max);
return 0;
}
