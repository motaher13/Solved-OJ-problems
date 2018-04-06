#include <stdio.h>
#include <string.h>
int main()
{
    char str[500],str2[500],str3[500];
    int i,j,k,l,r,t,n,m,p,q,s,x,y,z,ck,a,b,fo,ko,du;
    int ara[500][500],ara2[500];
    scanf("%d",&du);
    ko=0;
    n=du;
    while(1){
    if(ko==0){
    a=du;
    b=du-1;
   itoa(a,str,10);
   itoa(b,str2,10);
    }
    n=n-1;
    b=n;
    if(n==1)break;
    else if(ko>1){
            //strcpy(str,str3);
       // b=n;
         itoa(b,str2,10);
    }
    printf("%d %d %d %s %s   %d\n",n,a,b,str,str2,ko);
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
   if(x>0)//printf("%d",x);
 ck=0;
 fo=1;
  for(j=n+s-1;j>=0;j--){
   str3[fo]=(char)ara2[j]+'0';
   fo++;
        if(ara2[j]!=0||x!=0)ck=2;
   // if(ck==2)
        //printf("%d",ara2[j]);
  }
  str[fo++]='\0';
 // if(ck!=2)//printf("0");

//if(ko==0)n=n-2;
 // else n=n-1;
  //if(n==1)break;
  ko++;
  printf("%s\n",str3);
  strcpy(str,str3);
  continue;
}
printf("%s",str);

    return 0;
}
