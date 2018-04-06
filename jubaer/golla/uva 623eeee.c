#include <stdio.h>
#include <string.h>
int main()
{
    char str[4000],str2[2000],str3[500][4000];
    int i,j,k,l,r,t,n,m,p,q,s,x,y,z,ck,fact,du,a,b,u,w,d,kk,we;
     while(scanf("%d",&du)==1){
            printf("%d",du%100);

            printf("%d!\n",du);
     fact=du-1;
     a=du;
     b=du-1;
     w=1;
     for(u=fact;u>1;u--){
     if(w==1){
        sprintf(str,"%d",a);
        sprintf(str2,"%d",b);
     }
     else if(w>1){
        sprintf(str2,"%d",u);
     }
    l=strlen(str2);
    n=strlen(str);
    for(i=0,k=l;i<l;i++,k--){
    m=(int)str2[i]-48;
    t=0;
    for(j=0;j<k-1;j++){
    str3[i][j]='0';
    t++;
    }
    if(i==0)s=t;
    q=0;
    for(r=n-1,j=k-1;j<=n+s;j++,r--){
            if(j==n+t)p=q;
            else if(j>n+t)p=0;
    else
    p=m*((int)str[r]-48)+q;
    str3[i][j]=(char)(p%10)+'0';
    q=p/10;
    }
    }
    x=0;
    d=n+s;
   for(j=0;j<=n+s;j++){
    for(i=0;i<l;i++){
        x=x+((int)str3[i][j]-48);
    }
    str[d]=(char)x%10+'0';
    d--;
    if(j<n+s)
    x=x/10;
   }
    str[n+s+1]='\0';
    w++;
}
kk=0;
if(du==0||du==1)printf("1");
else{
        we=0;
for(k=0;k<strlen(str);k++){
        if(str[k]!='0')kk=1;
if(kk==1){
printf("%c",str[k]);
we++;
}
}
}
printf("\n");
}
    return 0;
}

