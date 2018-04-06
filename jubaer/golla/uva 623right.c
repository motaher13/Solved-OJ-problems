#include <stdio.h>
#include <string.h>
int main()
{
    char str[4000],str2[2000],str3[500][4000];
    long long i,j,k,l,r,t,n,m,p,q,s,x,y,z,ck,fact,du,a,b,u,w,d,kk,we,t1,t2,t3,t4,t5,uy,ro;
     while(scanf("%lld",&du)==1){

            printf("%lld!\n",du);

     a=du;
     w=1;
     for(u=du-1;u>=0;u=u-6){
           b=1;
           ro=0;
           for(uy=u;;uy--){
                if(uy<=0)uy=1;
            b=b*uy;
            ro++;
            if(ro==6)break;
           }
     if(w==1){
        sprintf(str,"%lld",a);
        sprintf(str2,"%lld",b);
     }
     else if(w>1){
        sprintf(str2,"%lld",b);
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
if(du==0||du==1)printf("1\n");
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

