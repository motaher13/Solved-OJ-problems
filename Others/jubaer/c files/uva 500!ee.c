#include <stdio.h>
#include <string.h>
int main()
{
    char str[500],str2[500],str3[500];
    int i,j,k,l,r,t,n,m,p,q,s,x,y,z,ck,fact,du,a,b,u,w,d;
    int ara[500][500],ara2[500];
     while(scanf("%d",&du)==1){
            printf("%d!\n",du);
     fact=du-1;
     a=du;
     b=du-1;
     w=0;
     for(u=fact;u>0;u--){
     if(w==0){
        itoa(a,str,10);
        itoa(b,str2,10);
     }
     else if(w>0){
        strcpy(str,str3);
        itoa(u,str2,10);
     }
    l=strlen(str2);
    n=strlen(str);
    for(i=0,k=l;i<l;i++,k--){
    m=(int)str2[i]-48;
    t=0;
    for(j=0;j<k-1;j++){
    ara[i][j]=0;
    t++;
    }
    if(i==0)s=t;
    q=0;
    for(r=n-1,j=k-1;j<=n+s;j++,r--){
            if(j==n+t)p=q;
            else if(j>n+t)p=0;
    else
    p=m*((int)str[r]-48)+q;
    ara[i][j]=p%10;
    q=p/10;
    }
    }
    x=0;
   for(j=0;j<=n+s;j++){
    for(i=0;i<l;i++){
        x=x+ara[i][j];
    }
    ara2[j]=x%10;
    if(j<n+s)
    x=x/10;
   }
   str3[0]=(char)x+'0';
 d=1;
  for(j=n+s-1;j>=0;j--){
     str3[d]=(char)ara2[j]+'0';
     d++;
  }
    str3[d++]='\0';
    w++;
}
ck=0;
for(k=0;k<strlen(str);k++){
        if(str[k]!='0')ck=1;
    if(ck==1)printf("%c",str[k]);
}
printf("\n");
     }
    return 0;
}

