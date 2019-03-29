#include <stdio.h>
int main()
{
    int i,j,k,l,c,b,a,d,t,ck,sum,sum1,q,r,s,g,h;
   r=0;
   while(scanf("%d",&l)){
        if(l==0)break;
        r++;
    sum=0;
    ck=1;
    for(i=0;i<l;i++){
    scanf("%d",&k);
    sum+=k;
    }
   printf("Case %d:\n",r);
   if(sum<0){
    ck=0;
    sum1=-sum;
   }
  // if(ck==0)printf("-");
   else sum1=sum;
   if(sum1%l==0){
        if(ck==0)printf("- ");
        printf("%d",sum1/l);
   }
   else if(sum1<l){
    b=l;
    c=sum1;
    while(c!=0){
        t=c;
        c=b%c;
        b=t;
    }
    l=l/b;
    sum1=sum1/b;
    if(ck==0)printf("  ");
    b=l;
    for(i=0;b!=0;i++){
        b=b/10;
    }
    if(i==1)
    printf("%1d\n",sum1);
    if(i==2)printf("%2d\n",sum1);
    if(i==3)printf("%3d\n",sum1);
    if(ck==0)printf("- ");
    for(j=0;j<i;j++)printf("-");
    printf("\n");
    if(ck==0)printf("  ");
    printf("%d",l);
   }
   else if(sum1>l){
    b=sum1%l;
    c=sum1/l;
    a=b;
    k=l;
    while(a!=0){
        t=a;
        a=k%a;
        k=t;
    }
    b=b/k;
    l=l/k;
    g=l;
    s=c;
    if(ck==0)printf("  ");
    for(i=0;s!=0;i++){
        printf(" ");
        s=s/10;
    }
    for(j=0;g!=0;j++){
        g=g/10;
    }
    if(j==1)
    printf("%1d\n",b);
    if(j==2) printf("%2d\n",b);
     if(j==3) printf("%3d\n",b);
    if(ck==0)printf("- ");
    printf("%d",c);
    for(h=0;h<j;h++)printf("-");
    printf("\n");
    if(ck==0)printf("  ");
    for(h=0;h<i;h++)printf(" ");
    printf("%d",l);
   }
   printf("\n");
   }
   return 0;
}
