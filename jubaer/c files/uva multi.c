#include <stdio.h>
#include <string.h>
int main()
{
    char str[500],str2[500];
    int i,j,k,l,r,t,n,m,p,q,s,x,y,z,ck;
    int ara[500][500],ara2[500];
    while(scanf("%s%s",str,str2)==2){

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

  if(x>0)printf("%d",ara[n+s]);
 ck=0;
  for(j=n+s-1;j>=0;j--){

        if(ara2[j]!=0||x!=0)ck=2;
    if(ck==2)
        printf("%d",ara2[j]);
  }
  if(ck!=2)printf("0");
  printf("\n");
    }
    return 0;
}
