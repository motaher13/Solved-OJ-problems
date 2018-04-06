#include <stdio.h>
#include <string.h>
int main()
{
    char str[1500],str2[1001];
    int i,j,k,l,r,t,n,m,p,q,s,x,y,z,ck,fact,du,a,b,u,w,d,kk;
    //int ara[510][1025],ara2[1200];
     while(scanf("%d",&du)==1){
            printf("%d!\n",du);
     fact=du-1;
     a=du;
     b=du-1;
     w=1;
     for(u=fact;u>1;u--){
            int ara[][w*5],ara2[w*5]
            printf("%d %d\n",u,w);
     if(w==1){
        sprintf(str,"%d",a);
        sprintf(str2,"%d",b);
     }
     else if(w>1){
        sprintf(str2,"%d",u);
     }
     printf("str=%s \nstr2=%s\n",str,str2);
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
  // str[0]=(char)x+'0';
 d=0;
  ck=0;
  for(j=n+s;j>=0;j--){
        if(ara2[j]!=0)ck=1;
   if(ck==1)  {
        str[d]=(char)ara2[j]+'0';
     d++;
   }
  }
    str[d++]='\0';

    w++;
}
kk=0;
if(du==0||du==1)printf("1");
else{
for(k=0;k<strlen(str);k++){
       // if(str[k]!='0')//kk=1;
printf("%c",str[k]);
}
}
printf("\n\n%d",k);
printf("\n");
     }
    return 0;
}

