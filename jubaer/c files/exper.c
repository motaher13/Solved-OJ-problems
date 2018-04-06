#include <stdio.h>
#include <string.h>
int main()
{
    char str[10000],str2[10000];
    int i,ck,j,b1,b2,c1,c2,l,p,n,q,d,x,y,z,r,s,t,k1,k2,s1,t1;

  gets(str);
   d=strlen(str);
    q=0;
    y=0,x=0,s=0,t=0,k1=0,k2=0,s1=0,t1=0;

   for(i=0;i<d;i++){
        if(k1==1&&(str[i]=='('))s++;
           if(k1==1&&str[i]==')')t++;
    if(str[i]=='['||str[i]==']'){
        x++;
    }
    if(str[i]=='[')k1=1;
   if(x==2){
    if(t!=s)ck=0;

    s=0;
    t=0;
    k1=0;
   }
     if(k2==1&&(str[i]=='['))s1++;
           if(k2==1&&str[i]==']')t1++;
    if(str[i]=='('||str[i]==')'){
        y++;
    }
    if(str[i]=='(')k2=1;
   if(y==2){
    if(t1!=s1)ck=0;
    s1=0;
    t1=0;
    k2=0;

   }
   }
   printf("    %d",ck);
   if(ck==1)printf("yes");
        else printf("no");


return 0;
   }

