#include <stdio.h>
#include <string.h>
int main()
{
int ara[10000];
char str[10000];
    int i,j,k,l,kk,a=0,b=0,c=0,s,t,u,ck;
    double x,y,z,sum=0,q=0;
    l=1;
    while(gets(str)){
            j=0;
            ck=0;
    kk=1;
    k=0;
    for(i=0;i<=strlen(str);i++){
        if(str[i]!=':'||str[i]!='\0'||str[i]!=' ')ck=1;
        if(str[i]==':'||str[i]=='\0'||str[i]==' '){
            ara[j]=k;
            ck=0;
            k=0;
            j++;
        }
        if(ck==1){
            k=k*10+(int)str[i]-48;;
        }
    }
   for(u=0;u<j;u++){
   }
   s=ara[0];
   t=ara[1];
   u=ara[2];
   if(u<c){
        u=u+60;
        t=t-1;
   }
   x=(u-c)*.00027777777777;
   if(t<b){
    t=t+60;
    s=s-1;
   }
   y=(t-b)*0.01666666666666;
   z=s-a;
   sum=sum+((x+y+z)*q);
    if(j==4){
    q=ara[3];
   }
   a=ara[0];
   b=ara[1];
   c=ara[2];
   if(j==3)printf("%s %.2lf km\n",str,sum);
}
return 0;
}
