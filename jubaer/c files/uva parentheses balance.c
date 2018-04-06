#include <stdio.h>
#include <string.h>
int main()
{
    char str[10000],str2[10000];
    int i,ck,j,b1,b2,c1,c2,l,p,n,q,d;
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
   if(b1!=0&&l==0)ck=0;
   if(c1!=0&&p==0)ck=0;
   if(q>0){
   if(d==0)printf("Yes\n");
   else if(d==1)printf("N0\n");
  else if((b1==b2)&&(c1==c2)&&(l%2==0)&&(p%2==0)&&ck==1){
    printf("Yes\n");
   }
   else printf("N0\n");
    }
    q++;
    }
    return 0;

}
