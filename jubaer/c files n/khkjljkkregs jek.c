#include <stdio.h>
#include <string.h>
int main()
{
    char str[10000],str2[10000];
    int i,ck,j,b1,b2,c1,c2,l,p,n,q,d,kk;
    scanf("%d",&n);
    n=n+1;
    q=0;
    while(n--){
   gets(str);
   d=strlen(str);
   strcpy(str2,str);
   l=0;
   p=0;
   for(i=d-1;i>0;i--){
    for(j=i-1;j>=0;j--){
        if(str[i]==')'&&str[j]=='('){
                l=l+2;
        str[j]=' ';
        break;
    }
    else  if(str[i]==']'&&str[j]=='['){

                p=p+2;
        str[j]=' ';
        break;
    }
   }
   }
   ck=1;
   b1=b2=c1=c2=0;
   for(i=0;i<d;i++){
    if(str2[i]=='(')b1++;
    else if(str2[i]==')')b2++;
     else if(str2[i]=='[')c1++;
      else if(str2[i]==']')c2++;
      if(str2[i]=='['&&str2[i+1]==')')ck=0;
       if(str2[i]=='('&&str2[i+1]==']')ck=0;
   }

int    x=0,s=0,t=0,k1=0,k2=0,s1=0,t1=0,y=0,kk=1;
   for(i=0;i<d;i++){
        if(k1==1&&(str[i]=='('))s++;
           if(k1==1&&str[i]==')')t++;
    if(str[i]=='['||str[i]==']'){
        x++;
    }
    if(str[i]=='[')k1=1;
   if(x==2){
    if(t!=s)kk=0;
    x=0;
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
    if(t1!=s1)kk=0;
    s1=0;
    t1=0;
    k2=0;
   y=0;
   }
   }
   if(b1!=0&&l==0)ck=0;
   if(c1!=0&&p==0)ck=0;
   if(q>0){
   if(d==0)printf("Yes\n");
   else if(d==1)printf("N0\n");

  else if((b1==b2)&&(c1==c2)&&(l%2==0)&&(p%2==0)&&ck==1&&kk==1){
    printf("Yes\n");
   }
   else printf("N0\n");
    }
    q++;
    }
    return 0;

}
