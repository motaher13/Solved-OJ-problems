#include<stdio.h>
#include<string.h>
int main(){
int i,j,k,l=0,m,x,z,ara[1000],res[100];
scanf("%s",ara);
for(i=0;ara[i]!='\0';i++){
    l++;

}
x=ara[0]*10+ara[1];
j=2;
if(x<11){

x=x*10+ara[2];
j=3;
}
m=x%11;

z=1;

for(i=j;i<l;i++){
x=ara[i]+m*10;
if(x<11){
i++;
x=x*10+ara[i];

}
if(x<11){
i++;
x=x*10+ara[i];

}

m=x%11;

}
if(m==0)
printf("yes");
else printf("no");
return 0;
}
