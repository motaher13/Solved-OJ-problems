#include <stdio.h>
int main()
{
   long long ara[100000];
   long long a,b,c,d,e,f,g,h,i,j,k,l,r;
   l=1;
   a=2;
   ara[l]=a;
   b=2*3;
   ara[l++]=b;
   c=2*5;
   ara[l++]=c;
   d=2*7;
   ara[l++]=d;
   e=2*3*5;
   ara[l++]=e;
   f=2*3*5*7;
   ara[l++]=f;
   g=2*5*7;
   ara[l++]=g;
   h=2*3*7;
   ara[l++]=h;
   k=3*5*7;
   printf("start 2 %lld\n",l);
   for(i=0;a<=2000000000;i++){
    a=a*2;
   ara[l++]=a;
   b=2*b;
   if(b<=2000000000)
   ara[l++]=b;
   c=c*2;
    if(c<=2000000000)
   ara[l++]=c;
   d=2*d;
    if(d<=2000000000)
   ara[l++]=d;
   e=2*e;
    if(e<=2000000000)
   ara[l++]=e;
    if(f<=2000000000)
   f=2*f;
   ara[l++]=f;
   g=g*2;
    if(g<=2000000000)
   ara[l++]=g;
   h=h*2;
    if(h<=2000000000)
   ara[l++]=h;
    k=k*2;
    if(k<=2000000000)
   ara[l++]=k;
   }
   printf("%lld\n",l);
   printf("end2\nsta3\n");
     a=3;
   ara[l++]=a;
   b=6*3;
   ara[l++]=b;
   c=3*5;
   ara[l++]=c;
   d=3*7;
   ara[l++]=d;
   e=2*3*5*3;
   ara[l++]=e;
   f=2*3*5*7*3;
   ara[l++]=f;
   g=2*3*7*3;
   ara[l++]=g;
   h=2*3*5*3;
   ara[l++]=h;
    k=3*5*7*3;
   ara[l++]=k;
    printf("%lld\n",l);
    for(i=0;a<=2000000000;i++){
    a=a*3;
   ara[l++]=a;
   b=3*b;
   if(b<=2000000000)
   ara[l++]=b;
   c=c*3;
    if(c<=2000000000)
   ara[l++]=c;
   d=3*d;
    if(d<=2000000000)
   ara[l++]=d;
   e=3*e;
    if(e<=2000000000)
   ara[l++]=e;
    if(f<=2000000000)
   f=3*f;
   ara[l++]=f;
   g=g*3;
    if(g<=2000000000)
   ara[l++]=g;
   h=h*3;
    if(h<=2000000000)
   ara[l++]=h;
   k=k*3;
    if(k<=2000000000)
   ara[l++]=k;
   }
    printf("%lld\n",l);
   printf("hgjf\n");
    a=5;
   ara[l++]=a;
   b=10*5;
   ara[l++]=b;
   c=15*5;
   ara[l++]=c;
   d=5*7;
   ara[l++]=d;
   e=2*3*5*5;
   ara[l++]=e;
   f=2*3*5*7*5;
   ara[l++]=f;
   g=2*3*7*5;
   ara[l++]=g;
   h=2*3*5*5;
   ara[l++]=h;
   k=3*5*7*5;
   ara[l++]=k;
    for(i=0;a<=2000000000;i++){
    a=a*5;
   ara[l]=a;
   b=5*b;
   if(b<=2000000000)
   ara[l++]=b;
   c=c*5;
    if(c<=2000000000)
   ara[l++]=c;
   d=5*d;
    if(d<=2000000000)
   ara[l++]=d;
   e=5*e;
    if(e<=2000000000)
   ara[l++]=e;
   f=f*5;
    if(f<=2000000000)
   ara[l++]=f;
   g=g*5;
    if(g<=2000000000)
   ara[l++]=g;
   h=h*5;
    if(h<=2000000000)
   ara[l++]=h;
   k=k*5;
    if(k<=2000000000)
   ara[l++]=k;
   }
    a=7;
   ara[l++]=a;
   b=14*7;
   ara[l++]=b;
   c=21*7;
   ara[l++]=c;
   d=35*7;
   ara[l++]=d;
   e=2*3*5*7;
   ara[l++]=e;
   f=2*3*5*7*7;
   ara[l++]=f;
   g=2*3*7*7;
   ara[l++]=g;
   h=2*3*5*7;
   ara[l++]=h;
   k=3*5*7*7;
   ara[l++]=k;
    for(i=0;a<=2000000000;i++){
    a=a*7;
   ara[l]=a;
   b=7*b;
   if(b<=2000000000)
   ara[l++]=b;
   c=c*7;
    if(c<=2000000000)
   ara[l++]=c;
   d=7*d;
    if(d<=2000000000)
   ara[l++]=d;
   e=7*e;
    if(e<=2000000000)
   ara[l++]=e;
   f=f*7;
    if(f<=2000000000)
   ara[l++]=f;
   g=g*7;
    if(g<=2000000000)
   ara[l++]=g;
   h=h*7;
    if(h<=2000000000)
   ara[l++]=h;
   k=k*7;
    if(k<=2000000000)
   ara[l++]=k;
   }


   printf("%d",l);
 //  for(i=1;i<=l;i++)printf("%lld  ",ara[i]);
   //printf("\n%d\n",i);
 //  for(i=1;i<=l;i++)
   printf("\n%d",i);
 //  for(j=1;j<=i;j++)printf("%lld ",ara[j]);

}
